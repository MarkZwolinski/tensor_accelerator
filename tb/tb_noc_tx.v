//==============================================================================
// NoC TX Testbench
//
// Verifies DMA_NOC_SEND end-to-end through the 2×2 NoC router mesh:
//
//   TPC0 (x=0,y=0) ──noc_tx──► router0 ──east──► router1 ──noc_rx──► TPC1 (x=1,y=0)
//
// Tests:
//   1. Single word: TPC0 SRAM[byte_addr=0]  → TPC1 SRAM[byte_addr=0]
//   2. Two words:   TPC0 SRAM[0,32]         → TPC1 SRAM[0,32]   (cols=2)
//   3. Idle verify: TPC1 SRAM is zero before any transfer
//==============================================================================
`timescale 1ns / 1ps

module tb_noc_tx;

    parameter CLK = 10;

    // Small params for simulation speed (matching tb_tpc.v)
    parameter ARRAY_SIZE  = 4;
    parameter SRAM_WIDTH  = 256;
    parameter SRAM_ADDR_W = 20;
    parameter SRAM_BANKS  = 4;
    parameter SRAM_DEPTH  = 256;
    parameter VPU_LANES   = 16;

    // Flit width: SRAM data + destination SRAM address (matches tensor_accelerator_top.v)
    localparam NOC_DATA_W = SRAM_WIDTH + SRAM_ADDR_W;  // 276

    // SRAM bank geometry (must match sram_subsystem.v get_bank/get_word)
    // BANK_BITS = $clog2(SRAM_BANKS) = 2
    // WORD_BITS = $clog2(SRAM_DEPTH) = 8
    localparam BANK_BITS = 2;
    localparam WORD_BITS = 8;

    reg clk = 0;
    reg rst_n = 0;
    always #(CLK/2) clk = ~clk;

    integer errors  = 0;
    integer timeout = 0;

    //==========================================================================
    // TPC0 signals (sender, x=0 y=0)
    //==========================================================================

    reg  tpc0_start = 0;
    reg  [SRAM_ADDR_W-1:0] tpc0_start_pc = 0;
    wire tpc0_busy, tpc0_done, tpc0_error;

    // noc_rx: testbench uses this to pre-load instructions and source data
    reg  [SRAM_WIDTH-1:0]  tpc0_noc_rx_data     = 0;
    reg  [SRAM_ADDR_W-1:0] tpc0_noc_rx_addr     = 0;
    reg                    tpc0_noc_rx_valid     = 0;
    wire                   tpc0_noc_rx_ready;
    reg                    tpc0_noc_rx_is_instr  = 0;

    // noc_tx: DMA drives this; wired to router0 local_in
    wire [SRAM_WIDTH-1:0]  tpc0_noc_tx_data;
    wire [SRAM_ADDR_W-1:0] tpc0_noc_tx_addr;
    wire [3:0]             tpc0_noc_tx_dest_x;
    wire [3:0]             tpc0_noc_tx_dest_y;
    wire                   tpc0_noc_tx_valid;
    wire                   tpc0_noc_tx_ready;     // from router0 local_in_ready

    //==========================================================================
    // TPC1 signals (receiver, x=1 y=0) — never started
    //==========================================================================

    wire tpc1_busy, tpc1_done, tpc1_error;

    // noc_rx: driven by router1 local_out
    wire [SRAM_WIDTH-1:0]  tpc1_noc_rx_data;
    wire [SRAM_ADDR_W-1:0] tpc1_noc_rx_addr;
    wire                   tpc1_noc_rx_valid;
    wire                   tpc1_noc_rx_ready;    // = !tpc1_busy (always 1 here)

    // noc_tx: TPC1 never sends; wired to router1 local_in with valid=0
    wire [SRAM_WIDTH-1:0]  tpc1_noc_tx_data;
    wire [SRAM_ADDR_W-1:0] tpc1_noc_tx_addr;
    wire [3:0]             tpc1_noc_tx_dest_x;
    wire [3:0]             tpc1_noc_tx_dest_y;
    wire                   tpc1_noc_tx_valid;
    wire                   tpc1_noc_tx_ready;    // from router1 local_in_ready

    //==========================================================================
    // Router inter-connect wires
    //==========================================================================

    // router0.east_out → router1.west_in
    wire [NOC_DATA_W-1:0] ew_data;
    wire [3:0]            ew_dest_x, ew_dest_y;
    wire                  ew_valid, ew_ready;

    // router1.west_out → router0.east_in
    wire [NOC_DATA_W-1:0] we_data;
    wire [3:0]            we_dest_x, we_dest_y;
    wire                  we_valid, we_ready;

    // router1.local_out (unpacked to TPC1 noc_rx)
    wire [NOC_DATA_W-1:0] r1_local_out_data;
    wire                  r1_local_out_valid;

    assign tpc1_noc_rx_data  = r1_local_out_data[SRAM_WIDTH-1:0];
    assign tpc1_noc_rx_addr  = r1_local_out_data[NOC_DATA_W-1:SRAM_WIDTH];
    assign tpc1_noc_rx_valid = r1_local_out_valid;

    //==========================================================================
    // TPC0 instance
    //==========================================================================

    tensor_processing_cluster #(
        .ARRAY_SIZE(ARRAY_SIZE), .SRAM_WIDTH(SRAM_WIDTH), .SRAM_ADDR_W(SRAM_ADDR_W),
        .SRAM_BANKS(SRAM_BANKS), .SRAM_DEPTH(SRAM_DEPTH), .VPU_LANES(VPU_LANES),
        .TPC_ID(0)
    ) tpc0_inst (
        .clk(clk), .rst_n(rst_n),
        .tpc_start(tpc0_start), .tpc_start_pc(tpc0_start_pc),
        .tpc_busy(tpc0_busy), .tpc_done(tpc0_done), .tpc_error(tpc0_error),
        .global_sync_in(1'b0), .sync_request(), .sync_grant(1'b0),
        .noc_rx_data(tpc0_noc_rx_data), .noc_rx_addr(tpc0_noc_rx_addr),
        .noc_rx_valid(tpc0_noc_rx_valid), .noc_rx_ready(tpc0_noc_rx_ready),
        .noc_rx_is_instr(tpc0_noc_rx_is_instr),
        .noc_tx_data(tpc0_noc_tx_data), .noc_tx_addr(tpc0_noc_tx_addr),
        .noc_tx_dest_x(tpc0_noc_tx_dest_x), .noc_tx_dest_y(tpc0_noc_tx_dest_y),
        .noc_tx_valid(tpc0_noc_tx_valid), .noc_tx_ready(tpc0_noc_tx_ready),
        .axi_awaddr(), .axi_awlen(), .axi_awvalid(), .axi_awready(1'b1),
        .axi_wdata(), .axi_wlast(), .axi_wvalid(), .axi_wready(1'b1),
        .axi_bresp(2'b0), .axi_bvalid(1'b0), .axi_bready(),
        .axi_araddr(), .axi_arlen(), .axi_arvalid(), .axi_arready(1'b1),
        .axi_rdata({SRAM_WIDTH{1'b0}}), .axi_rlast(1'b0), .axi_rvalid(1'b0), .axi_rready()
    );

    //==========================================================================
    // TPC1 instance
    //==========================================================================

    tensor_processing_cluster #(
        .ARRAY_SIZE(ARRAY_SIZE), .SRAM_WIDTH(SRAM_WIDTH), .SRAM_ADDR_W(SRAM_ADDR_W),
        .SRAM_BANKS(SRAM_BANKS), .SRAM_DEPTH(SRAM_DEPTH), .VPU_LANES(VPU_LANES),
        .TPC_ID(1)
    ) tpc1_inst (
        .clk(clk), .rst_n(rst_n),
        .tpc_start(1'b0), .tpc_start_pc({SRAM_ADDR_W{1'b0}}),
        .tpc_busy(tpc1_busy), .tpc_done(tpc1_done), .tpc_error(tpc1_error),
        .global_sync_in(1'b0), .sync_request(), .sync_grant(1'b0),
        .noc_rx_data(tpc1_noc_rx_data), .noc_rx_addr(tpc1_noc_rx_addr),
        .noc_rx_valid(tpc1_noc_rx_valid), .noc_rx_ready(tpc1_noc_rx_ready),
        .noc_rx_is_instr(1'b0),
        .noc_tx_data(tpc1_noc_tx_data), .noc_tx_addr(tpc1_noc_tx_addr),
        .noc_tx_dest_x(tpc1_noc_tx_dest_x), .noc_tx_dest_y(tpc1_noc_tx_dest_y),
        .noc_tx_valid(tpc1_noc_tx_valid), .noc_tx_ready(tpc1_noc_tx_ready),
        .axi_awaddr(), .axi_awlen(), .axi_awvalid(), .axi_awready(1'b1),
        .axi_wdata(), .axi_wlast(), .axi_wvalid(), .axi_wready(1'b1),
        .axi_bresp(2'b0), .axi_bvalid(1'b0), .axi_bready(),
        .axi_araddr(), .axi_arlen(), .axi_arvalid(), .axi_arready(1'b1),
        .axi_rdata({SRAM_WIDTH{1'b0}}), .axi_rlast(1'b0), .axi_rvalid(1'b0), .axi_rready()
    );

    //==========================================================================
    // Router 0 (x=0, y=0) — TPC0's router
    //==========================================================================

    noc_router #(
        .DATA_WIDTH(NOC_DATA_W), .ADDR_WIDTH(SRAM_ADDR_W),
        .COORD_BITS(4), .FIFO_DEPTH(4), .ROUTER_X(0), .ROUTER_Y(0)
    ) router0 (
        .clk(clk), .rst_n(rst_n),
        // Local in: TPC0 noc_tx (flit = {addr, data})
        .local_in_data  ({tpc0_noc_tx_addr, tpc0_noc_tx_data}),
        .local_in_dest_x(tpc0_noc_tx_dest_x),
        .local_in_dest_y(tpc0_noc_tx_dest_y),
        .local_in_valid (tpc0_noc_tx_valid),
        .local_in_ready (tpc0_noc_tx_ready),
        // Local out: not used (TPC0 only sends in these tests)
        .local_out_data(), .local_out_dest_x(), .local_out_dest_y(),
        .local_out_valid(), .local_out_ready(1'b1),
        // East: to router1
        .east_out_data(ew_data), .east_out_dest_x(ew_dest_x), .east_out_dest_y(ew_dest_y),
        .east_out_valid(ew_valid), .east_out_ready(ew_ready),
        .east_in_data(we_data),   .east_in_dest_x(we_dest_x),  .east_in_dest_y(we_dest_y),
        .east_in_valid(we_valid), .east_in_ready(we_ready),
        // North: boundary
        .north_in_data({NOC_DATA_W{1'b0}}), .north_in_dest_x(4'd0), .north_in_dest_y(4'd0),
        .north_in_valid(1'b0), .north_in_ready(),
        .north_out_data(), .north_out_dest_x(), .north_out_dest_y(),
        .north_out_valid(), .north_out_ready(1'b1),
        // South: boundary
        .south_in_data({NOC_DATA_W{1'b0}}), .south_in_dest_x(4'd0), .south_in_dest_y(4'd0),
        .south_in_valid(1'b0), .south_in_ready(),
        .south_out_data(), .south_out_dest_x(), .south_out_dest_y(),
        .south_out_valid(), .south_out_ready(1'b1),
        // West: boundary
        .west_in_data({NOC_DATA_W{1'b0}}), .west_in_dest_x(4'd0), .west_in_dest_y(4'd0),
        .west_in_valid(1'b0), .west_in_ready(),
        .west_out_data(), .west_out_dest_x(), .west_out_dest_y(),
        .west_out_valid(), .west_out_ready(1'b1)
    );

    //==========================================================================
    // Router 1 (x=1, y=0) — TPC1's router
    //==========================================================================

    noc_router #(
        .DATA_WIDTH(NOC_DATA_W), .ADDR_WIDTH(SRAM_ADDR_W),
        .COORD_BITS(4), .FIFO_DEPTH(4), .ROUTER_X(1), .ROUTER_Y(0)
    ) router1 (
        .clk(clk), .rst_n(rst_n),
        // Local out → TPC1 noc_rx
        .local_out_data(r1_local_out_data),
        .local_out_dest_x(), .local_out_dest_y(),
        .local_out_valid(r1_local_out_valid),
        .local_out_ready(tpc1_noc_rx_ready),
        // Local in: TPC1 noc_tx (TPC1 never sends; valid always 0)
        .local_in_data  ({tpc1_noc_tx_addr, tpc1_noc_tx_data}),
        .local_in_dest_x(tpc1_noc_tx_dest_x),
        .local_in_dest_y(tpc1_noc_tx_dest_y),
        .local_in_valid (tpc1_noc_tx_valid),
        .local_in_ready (tpc1_noc_tx_ready),
        // West: from router0
        .west_in_data(ew_data),   .west_in_dest_x(ew_dest_x),  .west_in_dest_y(ew_dest_y),
        .west_in_valid(ew_valid), .west_in_ready(ew_ready),
        .west_out_data(we_data),  .west_out_dest_x(we_dest_x), .west_out_dest_y(we_dest_y),
        .west_out_valid(we_valid),.west_out_ready(we_ready),
        // North: boundary
        .north_in_data({NOC_DATA_W{1'b0}}), .north_in_dest_x(4'd0), .north_in_dest_y(4'd0),
        .north_in_valid(1'b0), .north_in_ready(),
        .north_out_data(), .north_out_dest_x(), .north_out_dest_y(),
        .north_out_valid(), .north_out_ready(1'b1),
        // South: boundary
        .south_in_data({NOC_DATA_W{1'b0}}), .south_in_dest_x(4'd0), .south_in_dest_y(4'd0),
        .south_in_valid(1'b0), .south_in_ready(),
        .south_out_data(), .south_out_dest_x(), .south_out_dest_y(),
        .south_out_valid(), .south_out_ready(1'b1),
        // East: boundary
        .east_in_data({NOC_DATA_W{1'b0}}), .east_in_dest_x(4'd0), .east_in_dest_y(4'd0),
        .east_in_valid(1'b0), .east_in_ready(),
        .east_out_data(), .east_out_dest_x(), .east_out_dest_y(),
        .east_out_valid(), .east_out_ready(1'b1)
    );

    //==========================================================================
    // Tasks
    //==========================================================================

    // Load one instruction into TPC0 instr_mem via noc_rx (is_instr=1).
    // Instruction occupies lower 128 bits of the 256-bit word.
    task load_instr;
        input [11:0] addr;
        input [127:0] instr;
        begin
            @(negedge clk);
            tpc0_noc_rx_addr     = {8'd0, addr};
            tpc0_noc_rx_data     = {{SRAM_WIDTH-128{1'b0}}, instr};
            tpc0_noc_rx_is_instr = 1;
            tpc0_noc_rx_valid    = 1;
            @(posedge clk);
            while (!tpc0_noc_rx_ready) @(posedge clk);
            @(negedge clk);
            tpc0_noc_rx_valid    = 0;
            tpc0_noc_rx_is_instr = 0;
        end
    endtask

    // Write one SRAM word into TPC0 SRAM via noc_rx (is_instr=0).
    // addr: byte address (same byte-address space used by DMA int_ptr).
    task load_sram0;
        input [SRAM_ADDR_W-1:0] addr;
        input [SRAM_WIDTH-1:0]  data;
        begin
            @(negedge clk);
            tpc0_noc_rx_addr     = addr;
            tpc0_noc_rx_data     = data;
            tpc0_noc_rx_is_instr = 0;
            tpc0_noc_rx_valid    = 1;
            @(posedge clk);
            while (!tpc0_noc_rx_ready) @(posedge clk);
            @(negedge clk);
            tpc0_noc_rx_valid = 0;
        end
    endtask

    // Start TPC0 and poll for done with timeout.
    task run_tpc0;
        input [SRAM_ADDR_W-1:0] pc;
        begin
            @(negedge clk);
            tpc0_start_pc = pc;
            tpc0_start    = 1;
            @(posedge clk);
            @(negedge clk);
            tpc0_start = 0;
            timeout = 0;
            while (!tpc0_done && timeout < 2000) begin
                @(posedge clk);
                timeout = timeout + 1;
            end
        end
    endtask

    // Read TPC1 SRAM via hierarchical access and compare.
    // addr: same byte-address as noc_rx_addr / DMA ext_ptr.
    // Must match sram_subsystem.v get_bank/get_word with SRAM_BANKS=4, SRAM_DEPTH=256.
    task check_tpc1_sram;
        input [SRAM_ADDR_W-1:0] addr;
        input [SRAM_WIDTH-1:0]  expected;
        reg [BANK_BITS-1:0] bank;
        reg [WORD_BITS-1:0] word;
        reg [SRAM_WIDTH-1:0] actual;
        begin
            bank = addr[BANK_BITS-1:0] ^ addr[BANK_BITS+WORD_BITS-1:WORD_BITS];
            word = addr[BANK_BITS+WORD_BITS-1:BANK_BITS];
            case (bank)
                2'd0: actual = tpc1_inst.sram_inst.bank_gen[0].bank_inst.mem[word];
                2'd1: actual = tpc1_inst.sram_inst.bank_gen[1].bank_inst.mem[word];
                2'd2: actual = tpc1_inst.sram_inst.bank_gen[2].bank_inst.mem[word];
                2'd3: actual = tpc1_inst.sram_inst.bank_gen[3].bank_inst.mem[word];
            endcase
            if (actual === expected) begin
                $display("  PASS: TPC1 SRAM[0x%05X] = 0x%h...%h",
                         addr, actual[255:224], actual[31:0]);
            end else begin
                $display("  FAIL: TPC1 SRAM[0x%05X]: expected 0x%h...%h, got 0x%h...%h",
                         addr, expected[255:224], expected[31:0],
                               actual[255:224],   actual[31:0]);
                errors = errors + 1;
            end
        end
    endtask

    //==========================================================================
    // DMA_NOC_SEND command builder
    //
    // 128-bit command layout (matches dma_engine.v comment and field decode):
    //   [127:120] opcode  = 0x03 (DMA)
    //   [119:112] subop   = 0x03 (NOC_SEND)
    //   [111:108] dest_x  (4b)
    //   [107:104] dest_y  (4b)
    //   [103:92]  12'b0   (unused gap in ext_addr)
    //   [91:72]   dest_sram_base (20b) — destination byte address in peer SRAM
    //   [71:52]   int_addr (20b)       — source byte address in local SRAM
    //   [51:40]   rows (12b)
    //   [39:28]   cols (12b)
    //   [27:16]   ext_stride (12b, unused for NOC_SEND)
    //   [15:4]    int_stride (12b)
    //   [3:0]     flags
    //==========================================================================

    localparam [7:0] OP_DMA      = 8'h03;
    localparam [7:0] OP_HALT     = 8'hFF;
    localparam [7:0] DMA_NOC_SEND = 8'h03;

    function [127:0] make_noc_send;
        input [3:0]  dest_x;
        input [3:0]  dest_y;
        input [19:0] dest_sram_base;
        input [19:0] src_sram_addr;
        input [11:0] rows;
        input [11:0] cols;
        input [11:0] int_stride;
        begin
            make_noc_send = {
                OP_DMA,       DMA_NOC_SEND,   // [127:112]
                dest_x,       dest_y,          // [111:104]
                12'b0,        dest_sram_base,  // [103:72]
                src_sram_addr,                 // [71:52]
                rows,         cols,            // [51:28]
                12'd0,        int_stride,      // [27:4]
                4'd0                           // [3:0]
            };
        end
    endfunction

    //==========================================================================
    // Test data words (easy to identify in waveforms)
    //==========================================================================

    localparam [SRAM_WIDTH-1:0] WORD_A = {32{8'hAA}};
    localparam [SRAM_WIDTH-1:0] WORD_B = {32{8'hBB}};
    localparam [SRAM_WIDTH-1:0] WORD_C = {32{8'hCC}};

    //==========================================================================
    // Stimulus
    //==========================================================================

    initial begin
        $display("");
        $display("==============================================================");
        $display("  NoC TX Testbench  (DMA_NOC_SEND via 2-router E-W mesh)");
        $display("  TPC0(0,0) --> router0 --east--> router1 --> TPC1(1,0)");
        $display("==============================================================");
        $display("");

        // Release reset
        #(CLK * 5);
        rst_n = 1;
        #(CLK * 5);

        //----------------------------------------------------------------------
        $display("[TEST 1] Idle sanity: TPC1 SRAM zero before any transfer");
        check_tpc1_sram(20'd0,  {SRAM_WIDTH{1'b0}});
        check_tpc1_sram(20'd32, {SRAM_WIDTH{1'b0}});
        #(CLK * 5);

        //----------------------------------------------------------------------
        $display("");
        $display("[TEST 2] Single word: TPC0 SRAM[byte=0] -> TPC1 SRAM[byte=0]");

        // Pre-load source word into TPC0 SRAM at byte address 0
        load_sram0(20'd0, WORD_A);
        $display("  TPC0 SRAM[0x00000] <- 0xAA...AA");

        // Program at instr addr 0: NOC_SEND (1 row, 1 col), then HALT
        load_instr(12'h000, make_noc_send(
            4'd1,    // dest_x = 1 (TPC1)
            4'd0,    // dest_y = 0
            20'd0,   // dest SRAM byte base = 0
            20'd0,   // src  SRAM byte addr = 0
            12'd1,   // rows = 1
            12'd1,   // cols = 1
            12'd0    // int_stride (unused for 1 row)
        ));
        load_instr(12'h001, {OP_HALT, 120'd0});

        run_tpc0(20'd0);

        if (tpc0_done && !tpc0_error)
            $display("  TPC0 done in %0d cycles", timeout);
        else begin
            $display("  FAIL: TPC0 did not complete (done=%b error=%b timeout=%0d)",
                     tpc0_done, tpc0_error, timeout);
            errors = errors + 1;
        end

        // Allow a few extra cycles for the flit to propagate through the router
        // pipeline and the SRAM write to commit in TPC1.
        #(CLK * 20);

        check_tpc1_sram(20'd0, WORD_A);
        #(CLK * 5);

        //----------------------------------------------------------------------
        $display("");
        $display("[TEST 3] Two words (cols=2): TPC0 SRAM[0,32] -> TPC1 SRAM[0,32]");
        // BYTES_PER_WORD=32: DMA advances int_ptr and ext_ptr by 32 per column.
        // Col 0: src byte addr=0, dst byte addr=0
        // Col 1: src byte addr=32, dst byte addr=32

        load_sram0(20'd0,  WORD_B);   // col 0 source
        load_sram0(20'd32, WORD_C);   // col 1 source  (byte addr 32)
        $display("  TPC0 SRAM[0x00000] <- 0xBB...BB");
        $display("  TPC0 SRAM[0x00020] <- 0xCC...CC");

        // Program at instr addr 0x010: NOC_SEND (1 row, 2 cols), then HALT
        load_instr(12'h010, make_noc_send(
            4'd1,    // dest_x = 1
            4'd0,    // dest_y = 0
            20'd0,   // dest SRAM byte base = 0
            20'd0,   // src  SRAM byte addr = 0
            12'd1,   // rows = 1
            12'd2,   // cols = 2
            12'd0    // int_stride
        ));
        load_instr(12'h011, {OP_HALT, 120'd0});

        run_tpc0(20'h010);

        if (tpc0_done && !tpc0_error)
            $display("  TPC0 done in %0d cycles", timeout);
        else begin
            $display("  FAIL: TPC0 did not complete (done=%b error=%b timeout=%0d)",
                     tpc0_done, tpc0_error, timeout);
            errors = errors + 1;
        end

        #(CLK * 20);

        // Byte addr 0  → bank = 0^0=0, word = 0  (unchanged from test 2)
        check_tpc1_sram(20'd0,  WORD_B);
        // Byte addr 32 → bank = 0^0=0, word = 8
        check_tpc1_sram(20'd32, WORD_C);
        #(CLK * 5);

        //----------------------------------------------------------------------
        $display("");
        $display("==============================================================");
        $display("  Tests: 7, Errors: %0d", errors);
        if (errors == 0)
            $display("  >>> ALL NOC TX TESTS PASSED! <<<");
        else
            $display("  >>> SOME TESTS FAILED <<<");
        $display("==============================================================");
        $display("");
        $finish;
    end

    initial begin
        $dumpfile("sim/waves/noc_tx.vcd");
        $dumpvars(0, tb_noc_tx);
    end

    // Global timeout guard
    initial begin
        #(CLK * 50000);
        $display("TIMEOUT: simulation exceeded 50000 cycles");
        $finish;
    end

endmodule
