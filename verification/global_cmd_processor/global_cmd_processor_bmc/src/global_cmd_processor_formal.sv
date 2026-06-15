`default_nettype none
module global_cmd_processor_formal #(
    parameter NUM_TPCS    = 4,
    parameter SRAM_ADDR_W = 20,
    parameter AXI_ADDR_W  = 12,
    parameter AXI_DATA_W  = 32
);
    logic                         clk, rst_n;

    // AXI-Lite slave
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

    // TPC control
    logic [NUM_TPCS-1:0]            tpc_start;
    logic [NUM_TPCS*SRAM_ADDR_W-1:0] tpc_start_pc;
    logic [NUM_TPCS-1:0]            tpc_busy, tpc_done, tpc_error;

    // Sync
    logic                         global_sync_out;
    logic [NUM_TPCS-1:0]          sync_request, sync_grant;

    // IRQ
    logic                         irq;

    global_cmd_processor #(
        .NUM_TPCS   (NUM_TPCS),
        .SRAM_ADDR_W(SRAM_ADDR_W),
        .AXI_ADDR_W (AXI_ADDR_W),
        .AXI_DATA_W (AXI_DATA_W)
    ) dut (.*);

    logic f_past_valid = 1'b0;
    always @(posedge clk) f_past_valid <= 1'b1;

    always @(posedge clk) if (!f_past_valid) assume (!rst_n);
    always @(posedge clk) if (f_past_valid)  assume (rst_n || !$past(rst_n));

    // A1: After reset, tpc_start is all-zero
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(!rst_n))
            assert (tpc_start == '0 && !global_sync_out && !irq);

    // A2: tpc_start is a single-cycle pulse (global_start_pulse)
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(tpc_start != '0))
            assert (tpc_start == '0);

    // A4: AXI responses are always OKAY
    always @(posedge clk)
        if (rst_n && s_axi_bvalid) assert (s_axi_bresp == 2'b00);

    always @(posedge clk)
        if (rst_n && s_axi_rvalid) assert (s_axi_rresp == 2'b00);

    // A5: bvalid and rvalid are mutually exclusive
    always @(posedge clk)
        if (rst_n) assert (!(s_axi_bvalid && s_axi_rvalid));

    // A6: sync_grant[i] only asserts when sync_request[i] is set
    genvar i;
    generate
        for (i = 0; i < NUM_TPCS; i++) begin : g_sync
            always @(posedge clk)
                if (rst_n && sync_grant[i])
                    assert (sync_request[i]);
        end
    endgenerate

    // A7: global_sync_out is a single-cycle pulse
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(global_sync_out))
            assert (!global_sync_out);

    // Cover: tpc_start fires
    always @(posedge clk)
        if (f_past_valid && rst_n) cover (tpc_start != '0);

    // Cover: a write transaction completes
    always @(posedge clk)
        if (f_past_valid && rst_n) cover (s_axi_bvalid && s_axi_bready);

    // Cover: a read transaction completes
    always @(posedge clk)
        if (f_past_valid && rst_n) cover (s_axi_rvalid && s_axi_rready);

    // Cover: IRQ fires
    always @(posedge clk)
        if (f_past_valid && rst_n) cover (irq);

endmodule
`default_nettype wire
