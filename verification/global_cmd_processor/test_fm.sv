`default_nettype none
module global_cmd_processor_formal;
    localparam NUM_TPCS    = 4;
    localparam SRAM_ADDR_W = 20;
    localparam AXI_ADDR_W  = 12;
    localparam AXI_DATA_W  = 32;

    logic                         clk, rst_n;
    logic [AXI_ADDR_W-1:0]        s_axi_awaddr;
    logic                         s_axi_awvalid, s_axi_awready;
    logic [AXI_DATA_W-1:0]        s_axi_wdata;
    logic [AXI_DATA_W/8-1:0]      s_axi_wstrb;
    logic                         s_axi_wvalid, s_axi_wready;
    logic [1:0]                   s_axi_bresp;
    logic                         s_axi_bvalid, s_axi_bready;
    logic [AXI_ADDR_W-1:0]        s_axi_araddr;
    logic                         s_axi_arvalid, s_axi_arready;
    logic [AXI_DATA_W-1:0]        s_axi_rdata;
    logic [1:0]                   s_axi_rresp;
    logic                         s_axi_rvalid, s_axi_rready;
    logic [NUM_TPCS-1:0]            tpc_start;
    logic [NUM_TPCS*SRAM_ADDR_W-1:0] tpc_start_pc;
    logic [NUM_TPCS-1:0]            tpc_busy, tpc_done, tpc_error;
    logic                         global_sync_out;
    logic [NUM_TPCS-1:0]          sync_request, sync_grant;
    logic                         irq;

    global_cmd_processor dut (.*);

    logic f_past_valid = 1'b0;
    always @(posedge clk) f_past_valid <= 1'b1;

    always @(posedge clk) if (!f_past_valid) assume (!rst_n);
    always @(posedge clk) if (f_past_valid)  assume (rst_n || !$past(rst_n));

    always @(posedge clk)
        if (f_past_valid && rst_n && $past(!rst_n))
            assert (tpc_start == '0 && !global_sync_out && !irq);

    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(tpc_start != '0))
            assert (tpc_start == '0);

    always @(posedge clk)
        if (rst_n && s_axi_bvalid) assert (s_axi_bresp == 2'b00);

    always @(posedge clk)
        if (rst_n && s_axi_rvalid) assert (s_axi_rresp == 2'b00);

    always @(posedge clk)
        if (rst_n) assert (!(s_axi_bvalid && s_axi_rvalid));

    genvar i;
    generate
        for (i = 0; i < NUM_TPCS; i++) begin : g_sync
            always @(posedge clk)
                if (rst_n && sync_grant[i])
                    assert (sync_request[i]);
        end
    endgenerate

    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(global_sync_out))
            assert (!global_sync_out);

endmodule
`default_nettype wire
