//==============================================================================
// Tensor Accelerator Top Level
//
// FPGA Proof-of-Concept Configuration:
// - 2x2 TPC grid (4 TPCs total)
// - 16x16 systolic arrays
// - Simplified NoC (direct crossbar for 4 TPCs)
// - AXI-Lite control interface
// - AXI4 memory interface
//==============================================================================

module tensor_accelerator_top #(
    // Grid configuration
    parameter GRID_X       = 2,           // TPCs in X dimension
    parameter GRID_Y       = 2,           // TPCs in Y dimension
    parameter NUM_TPCS     = GRID_X * GRID_Y,
    
    // Array parameters
    parameter ARRAY_SIZE   = 16,          // Systolic array dimension
    parameter DATA_WIDTH   = 8,           // INT8 operands
    parameter ACC_WIDTH    = 32,          // Accumulator width
    
    // Vector unit parameters
    parameter VPU_LANES    = 64,
    parameter VPU_DATA_W   = 16,
    
    // Memory parameters
    parameter SRAM_BANKS   = 16,
    parameter SRAM_DEPTH   = 4096,
    parameter SRAM_WIDTH   = 256,
    parameter SRAM_ADDR_W  = 20,
    
    // External interface
    parameter AXI_ADDR_W   = 40,
    parameter AXI_DATA_W   = 256,
    parameter AXI_ID_W     = 4,
    
    // Control interface
    parameter CTRL_ADDR_W  = 12,
    parameter CTRL_DATA_W  = 32
)(
    input  wire                         clk,
    input  wire                         rst_n,
    
    //--------------------------------------------------------------------------
    // AXI-Lite Control Interface (from Host)
    //--------------------------------------------------------------------------
    input  wire [CTRL_ADDR_W-1:0]       s_axi_ctrl_awaddr,
    input  wire                         s_axi_ctrl_awvalid,
    output wire                         s_axi_ctrl_awready,
    input  wire [CTRL_DATA_W-1:0]       s_axi_ctrl_wdata,
    input  wire [CTRL_DATA_W/8-1:0]     s_axi_ctrl_wstrb,
    input  wire                         s_axi_ctrl_wvalid,
    output wire                         s_axi_ctrl_wready,
    output wire [1:0]                   s_axi_ctrl_bresp,
    output wire                         s_axi_ctrl_bvalid,
    input  wire                         s_axi_ctrl_bready,
    input  wire [CTRL_ADDR_W-1:0]       s_axi_ctrl_araddr,
    input  wire                         s_axi_ctrl_arvalid,
    output wire                         s_axi_ctrl_arready,
    output wire [CTRL_DATA_W-1:0]       s_axi_ctrl_rdata,
    output wire [1:0]                   s_axi_ctrl_rresp,
    output wire                         s_axi_ctrl_rvalid,
    input  wire                         s_axi_ctrl_rready,
    
    //--------------------------------------------------------------------------
    // AXI4 Memory Interface (to DDR/HBM)
    //--------------------------------------------------------------------------
    // Write address
    output wire [AXI_ID_W-1:0]          m_axi_awid,
    output wire [AXI_ADDR_W-1:0]        m_axi_awaddr,
    output wire [7:0]                   m_axi_awlen,
    output wire [2:0]                   m_axi_awsize,
    output wire [1:0]                   m_axi_awburst,
    output wire                         m_axi_awvalid,
    input  wire                         m_axi_awready,
    
    // Write data
    output wire [AXI_DATA_W-1:0]        m_axi_wdata,
    output wire [AXI_DATA_W/8-1:0]      m_axi_wstrb,
    output wire                         m_axi_wlast,
    output wire                         m_axi_wvalid,
    input  wire                         m_axi_wready,
    
    // Write response
    input  wire [AXI_ID_W-1:0]          m_axi_bid,
    input  wire [1:0]                   m_axi_bresp,
    input  wire                         m_axi_bvalid,
    output wire                         m_axi_bready,
    
    // Read address
    output wire [AXI_ID_W-1:0]          m_axi_arid,
    output wire [AXI_ADDR_W-1:0]        m_axi_araddr,
    output wire [7:0]                   m_axi_arlen,
    output wire [2:0]                   m_axi_arsize,
    output wire [1:0]                   m_axi_arburst,
    output wire                         m_axi_arvalid,
    input  wire                         m_axi_arready,
    
    // Read data
    input  wire [AXI_ID_W-1:0]          m_axi_rid,
    input  wire [AXI_DATA_W-1:0]        m_axi_rdata,
    input  wire [1:0]                   m_axi_rresp,
    input  wire                         m_axi_rlast,
    input  wire                         m_axi_rvalid,
    output wire                         m_axi_rready,
    
    //--------------------------------------------------------------------------
    // Interrupt
    //--------------------------------------------------------------------------
    output wire                         irq
);

    //==========================================================================
    // Internal Signals
    //==========================================================================
    
    // GCP <-> TPC control
    wire [NUM_TPCS-1:0]          tpc_start;
    wire [NUM_TPCS*SRAM_ADDR_W-1:0] tpc_start_pc;
    wire [NUM_TPCS-1:0]          tpc_busy;
    wire [NUM_TPCS-1:0]          tpc_done;
    wire [NUM_TPCS-1:0]          tpc_error;
    
    // Synchronization
    wire                         global_sync;
    wire [NUM_TPCS-1:0]          sync_request;
    wire [NUM_TPCS-1:0]          sync_grant;
    
    // TPC AXI interfaces
    wire [AXI_ADDR_W-1:0]        tpc_axi_awaddr  [0:NUM_TPCS-1];
    wire [7:0]                   tpc_axi_awlen   [0:NUM_TPCS-1];
    wire [NUM_TPCS-1:0]          tpc_axi_awvalid;
    wire [NUM_TPCS-1:0]          tpc_axi_awready;
    wire [AXI_DATA_W-1:0]        tpc_axi_wdata   [0:NUM_TPCS-1];
    wire [NUM_TPCS-1:0]          tpc_axi_wlast;
    wire [NUM_TPCS-1:0]          tpc_axi_wvalid;
    wire [NUM_TPCS-1:0]          tpc_axi_wready;
    wire [1:0]                   tpc_axi_bresp   [0:NUM_TPCS-1];
    wire [NUM_TPCS-1:0]          tpc_axi_bvalid;
    wire [NUM_TPCS-1:0]          tpc_axi_bready;
    wire [AXI_ADDR_W-1:0]        tpc_axi_araddr  [0:NUM_TPCS-1];
    wire [7:0]                   tpc_axi_arlen   [0:NUM_TPCS-1];
    wire [NUM_TPCS-1:0]          tpc_axi_arvalid;
    wire [NUM_TPCS-1:0]          tpc_axi_arready;
    wire [AXI_DATA_W-1:0]        tpc_axi_rdata   [0:NUM_TPCS-1];
    wire [NUM_TPCS-1:0]          tpc_axi_rlast;
    wire [NUM_TPCS-1:0]          tpc_axi_rvalid;
    wire [NUM_TPCS-1:0]          tpc_axi_rready;
    
    // NoC flit width: data word + SRAM address packed together
    localparam NOC_DATA_W    = SRAM_WIDTH + SRAM_ADDR_W;  // 276 bits
    localparam NOC_COORD_W   = 4;

    // TPC noc_tx signals
    wire [SRAM_WIDTH-1:0]        tpc_noc_tx_data   [0:NUM_TPCS-1];
    wire [SRAM_ADDR_W-1:0]       tpc_noc_tx_addr   [0:NUM_TPCS-1];
    wire [3:0]                   tpc_noc_tx_dest_x [0:NUM_TPCS-1];
    wire [3:0]                   tpc_noc_tx_dest_y [0:NUM_TPCS-1];
    wire [NUM_TPCS-1:0]          tpc_noc_tx_valid;
    wire [NUM_TPCS-1:0]          tpc_noc_tx_ready;

    // NoC router local port signals (packed flits)
    wire [NOC_DATA_W-1:0]        noc_local_in_data   [0:NUM_TPCS-1];
    wire [NOC_COORD_W-1:0]       noc_local_in_dest_x [0:NUM_TPCS-1];
    wire [NOC_COORD_W-1:0]       noc_local_in_dest_y [0:NUM_TPCS-1];
    wire [NUM_TPCS-1:0]          noc_local_in_valid;
    wire [NUM_TPCS-1:0]          noc_local_in_ready;

    wire [NOC_DATA_W-1:0]        noc_local_out_data  [0:NUM_TPCS-1];
    wire [NUM_TPCS-1:0]          noc_local_out_valid;
    wire [NUM_TPCS-1:0]          noc_local_out_ready;

    // NoC RX signals to TPCs (unpacked from router local_out)
    wire [SRAM_WIDTH-1:0]        noc_rx_data  [0:NUM_TPCS-1];
    wire [SRAM_ADDR_W-1:0]       noc_rx_addr  [0:NUM_TPCS-1];
    wire [NUM_TPCS-1:0]          noc_rx_valid;
    wire [NUM_TPCS-1:0]          noc_rx_ready;
    wire [NUM_TPCS-1:0]          noc_rx_is_instr;

    // Inter-router mesh links (2x2 grid: x=t%2, y=t/2)
    // East-West links at y=0: router[0].east → router[1].west
    wire [NOC_DATA_W-1:0] ew_y0_data;  wire [NOC_COORD_W-1:0] ew_y0_dest_x, ew_y0_dest_y;  wire ew_y0_valid, ew_y0_ready;
    wire [NOC_DATA_W-1:0] we_y0_data;  wire [NOC_COORD_W-1:0] we_y0_dest_x, we_y0_dest_y;  wire we_y0_valid, we_y0_ready;
    // East-West links at y=1: router[2].east → router[3].west
    wire [NOC_DATA_W-1:0] ew_y1_data;  wire [NOC_COORD_W-1:0] ew_y1_dest_x, ew_y1_dest_y;  wire ew_y1_valid, ew_y1_ready;
    wire [NOC_DATA_W-1:0] we_y1_data;  wire [NOC_COORD_W-1:0] we_y1_dest_x, we_y1_dest_y;  wire we_y1_valid, we_y1_ready;
    // North-South links at x=0: router[0].north → router[2].south
    wire [NOC_DATA_W-1:0] ns_x0_data;  wire [NOC_COORD_W-1:0] ns_x0_dest_x, ns_x0_dest_y;  wire ns_x0_valid, ns_x0_ready;
    wire [NOC_DATA_W-1:0] sn_x0_data;  wire [NOC_COORD_W-1:0] sn_x0_dest_x, sn_x0_dest_y;  wire sn_x0_valid, sn_x0_ready;
    // North-South links at x=1: router[1].north → router[3].south
    wire [NOC_DATA_W-1:0] ns_x1_data;  wire [NOC_COORD_W-1:0] ns_x1_dest_x, ns_x1_dest_y;  wire ns_x1_valid, ns_x1_ready;
    wire [NOC_DATA_W-1:0] sn_x1_data;  wire [NOC_COORD_W-1:0] sn_x1_dest_x, sn_x1_dest_y;  wire sn_x1_valid, sn_x1_ready;
    
    //==========================================================================
    // Global Command Processor
    //==========================================================================
    
    global_cmd_processor #(
        .NUM_TPCS    (NUM_TPCS),
        .SRAM_ADDR_W (SRAM_ADDR_W),
        .AXI_ADDR_W  (CTRL_ADDR_W),
        .AXI_DATA_W  (CTRL_DATA_W)
    ) gcp_inst (
        .clk              (clk),
        .rst_n            (rst_n),
        
        // AXI-Lite
        .s_axi_awaddr     (s_axi_ctrl_awaddr),
        .s_axi_awvalid    (s_axi_ctrl_awvalid),
        .s_axi_awready    (s_axi_ctrl_awready),
        .s_axi_wdata      (s_axi_ctrl_wdata),
        .s_axi_wstrb      (s_axi_ctrl_wstrb),
        .s_axi_wvalid     (s_axi_ctrl_wvalid),
        .s_axi_wready     (s_axi_ctrl_wready),
        .s_axi_bresp      (s_axi_ctrl_bresp),
        .s_axi_bvalid     (s_axi_ctrl_bvalid),
        .s_axi_bready     (s_axi_ctrl_bready),
        .s_axi_araddr     (s_axi_ctrl_araddr),
        .s_axi_arvalid    (s_axi_ctrl_arvalid),
        .s_axi_arready    (s_axi_ctrl_arready),
        .s_axi_rdata      (s_axi_ctrl_rdata),
        .s_axi_rresp      (s_axi_ctrl_rresp),
        .s_axi_rvalid     (s_axi_ctrl_rvalid),
        .s_axi_rready     (s_axi_ctrl_rready),
        
        // TPC control
        .tpc_start        (tpc_start),
        .tpc_start_pc     (tpc_start_pc),
        .tpc_busy         (tpc_busy),
        .tpc_done         (tpc_done),
        .tpc_error        (tpc_error),
        
        // Synchronization
        .global_sync_out  (global_sync),
        .sync_request     (sync_request),
        .sync_grant       (sync_grant),
        
        // Interrupt
        .irq              (irq)
    );
    
    //==========================================================================
    // TPC Instances
    //==========================================================================
    
    genvar t;
    generate
        for (t = 0; t < NUM_TPCS; t = t + 1) begin : tpc_gen
            tensor_processing_cluster #(
                .ARRAY_SIZE  (ARRAY_SIZE),
                .DATA_WIDTH  (DATA_WIDTH),
                .ACC_WIDTH   (ACC_WIDTH),
                .VPU_LANES   (VPU_LANES),
                .VPU_DATA_W  (VPU_DATA_W),
                .SRAM_BANKS  (SRAM_BANKS),
                .SRAM_DEPTH  (SRAM_DEPTH),
                .SRAM_WIDTH  (SRAM_WIDTH),
                .SRAM_ADDR_W (SRAM_ADDR_W),
                .EXT_ADDR_W  (AXI_ADDR_W),
                .EXT_DATA_W  (AXI_DATA_W),
                .TPC_ID      (t)
            ) tpc_inst (
                .clk              (clk),
                .rst_n            (rst_n),
                
                // Control
                .tpc_start        (tpc_start[t]),
                .tpc_start_pc     (tpc_start_pc[t*SRAM_ADDR_W +: SRAM_ADDR_W]),
                .tpc_busy         (tpc_busy[t]),
                .tpc_done         (tpc_done[t]),
                .tpc_error        (tpc_error[t]),
                
                // Synchronization
                .global_sync_in   (global_sync),
                .sync_request     (sync_request[t]),
                .sync_grant       (sync_grant[t]),
                
                // NoC (routed through noc_router instances below)
                .noc_rx_data      (noc_rx_data[t]),
                .noc_rx_addr      (noc_rx_addr[t]),
                .noc_rx_valid     (noc_rx_valid[t]),
                .noc_rx_ready     (noc_rx_ready[t]),
                .noc_rx_is_instr  (noc_rx_is_instr[t]),
                .noc_tx_data      (tpc_noc_tx_data[t]),
                .noc_tx_addr      (tpc_noc_tx_addr[t]),
                .noc_tx_dest_x    (tpc_noc_tx_dest_x[t]),
                .noc_tx_dest_y    (tpc_noc_tx_dest_y[t]),
                .noc_tx_valid     (tpc_noc_tx_valid[t]),
                .noc_tx_ready     (tpc_noc_tx_ready[t]),
                
                // AXI Memory Interface
                .axi_awaddr       (tpc_axi_awaddr[t]),
                .axi_awlen        (tpc_axi_awlen[t]),
                .axi_awvalid      (tpc_axi_awvalid[t]),
                .axi_awready      (tpc_axi_awready[t]),
                .axi_wdata        (tpc_axi_wdata[t]),
                .axi_wlast        (tpc_axi_wlast[t]),
                .axi_wvalid       (tpc_axi_wvalid[t]),
                .axi_wready       (tpc_axi_wready[t]),
                .axi_bresp        (tpc_axi_bresp[t]),
                .axi_bvalid       (tpc_axi_bvalid[t]),
                .axi_bready       (tpc_axi_bready[t]),
                .axi_araddr       (tpc_axi_araddr[t]),
                .axi_arlen        (tpc_axi_arlen[t]),
                .axi_arvalid      (tpc_axi_arvalid[t]),
                .axi_arready      (tpc_axi_arready[t]),
                .axi_rdata        (tpc_axi_rdata[t]),
                .axi_rlast        (tpc_axi_rlast[t]),
                .axi_rvalid       (tpc_axi_rvalid[t]),
                .axi_rready       (tpc_axi_rready[t])
            );
            
            // Pack TPC noc_tx into a flit for the router: {addr[19:0], data[255:0]}
            assign noc_local_in_data[t]   = {tpc_noc_tx_addr[t], tpc_noc_tx_data[t]};
            assign noc_local_in_dest_x[t] = tpc_noc_tx_dest_x[t];
            assign noc_local_in_dest_y[t] = tpc_noc_tx_dest_y[t];
            assign noc_local_in_valid[t]  = tpc_noc_tx_valid[t];
            assign tpc_noc_tx_ready[t]    = noc_local_in_ready[t];

            // Unpack router local_out flit → TPC noc_rx
            assign noc_rx_data[t]         = noc_local_out_data[t][SRAM_WIDTH-1:0];
            assign noc_rx_addr[t]         = noc_local_out_data[t][NOC_DATA_W-1:SRAM_WIDTH];
            assign noc_rx_valid[t]        = noc_local_out_valid[t];
            assign noc_rx_is_instr[t]     = 1'b0;  // Router delivers data only
            assign noc_local_out_ready[t] = noc_rx_ready[t];
        end
    endgenerate

    //==========================================================================
    // NoC Router Instances (2x2 mesh, XY routing)
    // TPC grid: t=0→(0,0), t=1→(1,0), t=2→(0,1), t=3→(1,1)
    //==========================================================================

    // Router 0: (x=0, y=0)
    noc_router #(.DATA_WIDTH(NOC_DATA_W), .ADDR_WIDTH(SRAM_ADDR_W),
                 .COORD_BITS(NOC_COORD_W), .FIFO_DEPTH(4),
                 .ROUTER_X(0), .ROUTER_Y(0)) router0 (
        .clk(clk), .rst_n(rst_n),
        .north_in_data(ns_x0_data),   .north_in_dest_x(ns_x0_dest_x), .north_in_dest_y(ns_x0_dest_y), .north_in_valid(ns_x0_valid), .north_in_ready(ns_x0_ready),
        .north_out_data(sn_x0_data),  .north_out_dest_x(sn_x0_dest_x),.north_out_dest_y(sn_x0_dest_y),.north_out_valid(sn_x0_valid), .north_out_ready(sn_x0_ready),
        .south_in_data({NOC_DATA_W{1'b0}}), .south_in_dest_x(4'b0), .south_in_dest_y(4'b0), .south_in_valid(1'b0), .south_in_ready(),
        .south_out_data(), .south_out_dest_x(), .south_out_dest_y(), .south_out_valid(), .south_out_ready(1'b1),
        .east_in_data(we_y0_data),    .east_in_dest_x(we_y0_dest_x),  .east_in_dest_y(we_y0_dest_y),  .east_in_valid(we_y0_valid),  .east_in_ready(we_y0_ready),
        .east_out_data(ew_y0_data),   .east_out_dest_x(ew_y0_dest_x), .east_out_dest_y(ew_y0_dest_y), .east_out_valid(ew_y0_valid), .east_out_ready(ew_y0_ready),
        .west_in_data({NOC_DATA_W{1'b0}}), .west_in_dest_x(4'b0), .west_in_dest_y(4'b0), .west_in_valid(1'b0), .west_in_ready(),
        .west_out_data(), .west_out_dest_x(), .west_out_dest_y(), .west_out_valid(), .west_out_ready(1'b1),
        .local_in_data(noc_local_in_data[0]),   .local_in_dest_x(noc_local_in_dest_x[0]),  .local_in_dest_y(noc_local_in_dest_y[0]),  .local_in_valid(noc_local_in_valid[0]),  .local_in_ready(noc_local_in_ready[0]),
        .local_out_data(noc_local_out_data[0]), .local_out_dest_x(), .local_out_dest_y(), .local_out_valid(noc_local_out_valid[0]), .local_out_ready(noc_local_out_ready[0])
    );

    // Router 1: (x=1, y=0)
    noc_router #(.DATA_WIDTH(NOC_DATA_W), .ADDR_WIDTH(SRAM_ADDR_W),
                 .COORD_BITS(NOC_COORD_W), .FIFO_DEPTH(4),
                 .ROUTER_X(1), .ROUTER_Y(0)) router1 (
        .clk(clk), .rst_n(rst_n),
        .north_in_data(ns_x1_data),   .north_in_dest_x(ns_x1_dest_x), .north_in_dest_y(ns_x1_dest_y), .north_in_valid(ns_x1_valid), .north_in_ready(ns_x1_ready),
        .north_out_data(sn_x1_data),  .north_out_dest_x(sn_x1_dest_x),.north_out_dest_y(sn_x1_dest_y),.north_out_valid(sn_x1_valid), .north_out_ready(sn_x1_ready),
        .south_in_data({NOC_DATA_W{1'b0}}), .south_in_dest_x(4'b0), .south_in_dest_y(4'b0), .south_in_valid(1'b0), .south_in_ready(),
        .south_out_data(), .south_out_dest_x(), .south_out_dest_y(), .south_out_valid(), .south_out_ready(1'b1),
        .east_in_data({NOC_DATA_W{1'b0}}), .east_in_dest_x(4'b0), .east_in_dest_y(4'b0), .east_in_valid(1'b0), .east_in_ready(),
        .east_out_data(), .east_out_dest_x(), .east_out_dest_y(), .east_out_valid(), .east_out_ready(1'b1),
        .west_in_data(ew_y0_data),    .west_in_dest_x(ew_y0_dest_x),  .west_in_dest_y(ew_y0_dest_y),  .west_in_valid(ew_y0_valid),  .west_in_ready(ew_y0_ready),
        .west_out_data(we_y0_data),   .west_out_dest_x(we_y0_dest_x), .west_out_dest_y(we_y0_dest_y), .west_out_valid(we_y0_valid), .west_out_ready(we_y0_ready),
        .local_in_data(noc_local_in_data[1]),   .local_in_dest_x(noc_local_in_dest_x[1]),  .local_in_dest_y(noc_local_in_dest_y[1]),  .local_in_valid(noc_local_in_valid[1]),  .local_in_ready(noc_local_in_ready[1]),
        .local_out_data(noc_local_out_data[1]), .local_out_dest_x(), .local_out_dest_y(), .local_out_valid(noc_local_out_valid[1]), .local_out_ready(noc_local_out_ready[1])
    );

    // Router 2: (x=0, y=1)
    noc_router #(.DATA_WIDTH(NOC_DATA_W), .ADDR_WIDTH(SRAM_ADDR_W),
                 .COORD_BITS(NOC_COORD_W), .FIFO_DEPTH(4),
                 .ROUTER_X(0), .ROUTER_Y(1)) router2 (
        .clk(clk), .rst_n(rst_n),
        .north_in_data({NOC_DATA_W{1'b0}}), .north_in_dest_x(4'b0), .north_in_dest_y(4'b0), .north_in_valid(1'b0), .north_in_ready(),
        .north_out_data(), .north_out_dest_x(), .north_out_dest_y(), .north_out_valid(), .north_out_ready(1'b1),
        .south_in_data(sn_x0_data),   .south_in_dest_x(sn_x0_dest_x), .south_in_dest_y(sn_x0_dest_y), .south_in_valid(sn_x0_valid), .south_in_ready(sn_x0_ready),
        .south_out_data(ns_x0_data),  .south_out_dest_x(ns_x0_dest_x),.south_out_dest_y(ns_x0_dest_y),.south_out_valid(ns_x0_valid), .south_out_ready(ns_x0_ready),
        .east_in_data(we_y1_data),    .east_in_dest_x(we_y1_dest_x),  .east_in_dest_y(we_y1_dest_y),  .east_in_valid(we_y1_valid),  .east_in_ready(we_y1_ready),
        .east_out_data(ew_y1_data),   .east_out_dest_x(ew_y1_dest_x), .east_out_dest_y(ew_y1_dest_y), .east_out_valid(ew_y1_valid), .east_out_ready(ew_y1_ready),
        .west_in_data({NOC_DATA_W{1'b0}}), .west_in_dest_x(4'b0), .west_in_dest_y(4'b0), .west_in_valid(1'b0), .west_in_ready(),
        .west_out_data(), .west_out_dest_x(), .west_out_dest_y(), .west_out_valid(), .west_out_ready(1'b1),
        .local_in_data(noc_local_in_data[2]),   .local_in_dest_x(noc_local_in_dest_x[2]),  .local_in_dest_y(noc_local_in_dest_y[2]),  .local_in_valid(noc_local_in_valid[2]),  .local_in_ready(noc_local_in_ready[2]),
        .local_out_data(noc_local_out_data[2]), .local_out_dest_x(), .local_out_dest_y(), .local_out_valid(noc_local_out_valid[2]), .local_out_ready(noc_local_out_ready[2])
    );

    // Router 3: (x=1, y=1)
    noc_router #(.DATA_WIDTH(NOC_DATA_W), .ADDR_WIDTH(SRAM_ADDR_W),
                 .COORD_BITS(NOC_COORD_W), .FIFO_DEPTH(4),
                 .ROUTER_X(1), .ROUTER_Y(1)) router3 (
        .clk(clk), .rst_n(rst_n),
        .north_in_data({NOC_DATA_W{1'b0}}), .north_in_dest_x(4'b0), .north_in_dest_y(4'b0), .north_in_valid(1'b0), .north_in_ready(),
        .north_out_data(), .north_out_dest_x(), .north_out_dest_y(), .north_out_valid(), .north_out_ready(1'b1),
        .south_in_data(sn_x1_data),   .south_in_dest_x(sn_x1_dest_x), .south_in_dest_y(sn_x1_dest_y), .south_in_valid(sn_x1_valid), .south_in_ready(sn_x1_ready),
        .south_out_data(ns_x1_data),  .south_out_dest_x(ns_x1_dest_x),.south_out_dest_y(ns_x1_dest_y),.south_out_valid(ns_x1_valid), .south_out_ready(ns_x1_ready),
        .east_in_data({NOC_DATA_W{1'b0}}), .east_in_dest_x(4'b0), .east_in_dest_y(4'b0), .east_in_valid(1'b0), .east_in_ready(),
        .east_out_data(), .east_out_dest_x(), .east_out_dest_y(), .east_out_valid(), .east_out_ready(1'b1),
        .west_in_data(ew_y1_data),    .west_in_dest_x(ew_y1_dest_x),  .west_in_dest_y(ew_y1_dest_y),  .west_in_valid(ew_y1_valid),  .west_in_ready(ew_y1_ready),
        .west_out_data(we_y1_data),   .west_out_dest_x(we_y1_dest_x), .west_out_dest_y(we_y1_dest_y), .west_out_valid(we_y1_valid), .west_out_ready(we_y1_ready),
        .local_in_data(noc_local_in_data[3]),   .local_in_dest_x(noc_local_in_dest_x[3]),  .local_in_dest_y(noc_local_in_dest_y[3]),  .local_in_valid(noc_local_in_valid[3]),  .local_in_ready(noc_local_in_ready[3]),
        .local_out_data(noc_local_out_data[3]), .local_out_dest_x(), .local_out_dest_y(), .local_out_valid(noc_local_out_valid[3]), .local_out_ready(noc_local_out_ready[3])
    );
    
    //==========================================================================
    // AXI Interconnect (Simple Round-Robin Arbiter)
    //==========================================================================
    
    // For FPGA POC: Simple round-robin arbiter for TPC AXI access
    // Production: Use proper AXI interconnect IP
    
    reg [$clog2(NUM_TPCS)-1:0] active_tpc;
    reg axi_transaction_active;
    
    // Find next TPC with pending request
    wire [NUM_TPCS-1:0] pending_read  = tpc_axi_arvalid;
    wire [NUM_TPCS-1:0] pending_write = tpc_axi_awvalid;
    wire [NUM_TPCS-1:0] pending = pending_read | pending_write;
    wire any_pending = |pending;
    
    // Priority encoder for next TPC (simple fixed priority for now)
    reg [$clog2(NUM_TPCS)-1:0] next_tpc;
    always @(*) begin
        casez (pending)
            4'b???1: next_tpc = 2'd0;
            4'b??10: next_tpc = 2'd1;
            4'b?100: next_tpc = 2'd2;
            4'b1000: next_tpc = 2'd3;
            default: next_tpc = 2'd0;
        endcase
    end
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            active_tpc <= 0;
            axi_transaction_active <= 1'b0;
        end else begin
            if (!axi_transaction_active && any_pending) begin
                // Start new transaction with first pending TPC
                active_tpc <= next_tpc;
                axi_transaction_active <= 1'b1;
            end else if (axi_transaction_active) begin
                // Check for transaction completion
                if ((m_axi_bvalid && m_axi_bready) || 
                    (m_axi_rvalid && m_axi_rlast && m_axi_rready)) begin
                    axi_transaction_active <= 1'b0;
                end
            end
        end
    end
    
    // Mux AXI signals based on active TPC
    assign m_axi_awid    = active_tpc;
    assign m_axi_awaddr  = tpc_axi_awaddr[active_tpc];
    assign m_axi_awlen   = tpc_axi_awlen[active_tpc];
    assign m_axi_awsize  = 3'b101;  // 32 bytes
    assign m_axi_awburst = 2'b01;   // INCR
    assign m_axi_awvalid = axi_transaction_active && tpc_axi_awvalid[active_tpc];
    
    assign m_axi_wdata   = tpc_axi_wdata[active_tpc];
    assign m_axi_wstrb   = {(AXI_DATA_W/8){1'b1}};
    assign m_axi_wlast   = tpc_axi_wlast[active_tpc];
    assign m_axi_wvalid  = axi_transaction_active && tpc_axi_wvalid[active_tpc];
    
    assign m_axi_bready  = axi_transaction_active && tpc_axi_bready[active_tpc];
    
    assign m_axi_arid    = active_tpc;
    assign m_axi_araddr  = tpc_axi_araddr[active_tpc];
    assign m_axi_arlen   = tpc_axi_arlen[active_tpc];
    assign m_axi_arsize  = 3'b101;  // 32 bytes
    assign m_axi_arburst = 2'b01;   // INCR
    assign m_axi_arvalid = axi_transaction_active && tpc_axi_arvalid[active_tpc];
    
    assign m_axi_rready  = axi_transaction_active && tpc_axi_rready[active_tpc];
    
    // Demux responses to TPCs
    generate
        for (t = 0; t < NUM_TPCS; t = t + 1) begin : axi_demux_gen
            assign tpc_axi_awready[t] = (active_tpc == t) && axi_transaction_active && m_axi_awready;
            assign tpc_axi_wready[t]  = (active_tpc == t) && axi_transaction_active && m_axi_wready;
            assign tpc_axi_bresp[t]   = m_axi_bresp;
            assign tpc_axi_bvalid[t]  = (active_tpc == t) && axi_transaction_active && m_axi_bvalid;
            assign tpc_axi_arready[t] = (active_tpc == t) && axi_transaction_active && m_axi_arready;
            assign tpc_axi_rdata[t]   = m_axi_rdata;
            assign tpc_axi_rlast[t]   = m_axi_rlast;
            assign tpc_axi_rvalid[t]  = (active_tpc == t) && axi_transaction_active && m_axi_rvalid;
        end
    endgenerate

endmodule
