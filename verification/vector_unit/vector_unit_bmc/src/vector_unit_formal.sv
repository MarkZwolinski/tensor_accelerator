`default_nettype none
module vector_unit_formal #(
    parameter LANES       = 64,
    parameter DATA_WIDTH  = 16,
    parameter VREG_COUNT  = 32,
    parameter SRAM_ADDR_W = 20
);
    logic                              clk, rst_n;
    logic [127:0]                      cmd;
    logic                              cmd_valid;
    logic                              cmd_ready, cmd_done;
    logic [SRAM_ADDR_W-1:0]            sram_addr;
    logic [LANES*DATA_WIDTH-1:0]       sram_wdata;
    logic [LANES*DATA_WIDTH-1:0]       sram_rdata;
    logic                              sram_we, sram_re, sram_ready;

    vector_unit #(
        .LANES      (LANES),
        .DATA_WIDTH (DATA_WIDTH),
        .VREG_COUNT (VREG_COUNT),
        .SRAM_ADDR_W(SRAM_ADDR_W)
    ) dut (.*);

    logic f_past_valid = 1'b0;
    always @(posedge clk) f_past_valid <= 1'b1;

    always @(posedge clk) if (!f_past_valid) assume (!rst_n);
    always @(posedge clk) if (f_past_valid)  assume (rst_n || !$past(rst_n));

    // Bound sram_ready to prevent infinite stall (liveness assumption)
    logic [2:0] f_sram_stall = '0;
    always @(posedge clk) begin
        if (!rst_n) f_sram_stall <= '0;
        else if ((sram_re || sram_we) && !sram_ready)
            f_sram_stall <= f_sram_stall + 3'd1;
        else
            f_sram_stall <= '0;
    end
    always @(posedge clk) if (f_past_valid) assume (f_sram_stall < 3'd4);

    // A1: After reset, cmd_ready=1, cmd_done=0
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(!rst_n))
            assert (cmd_ready && !cmd_done);

    // A2: cmd_ready deasserts the cycle after command accepted
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(cmd_ready && cmd_valid))
            assert (!cmd_ready);

    // A3: cmd_done is a single-cycle pulse
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(cmd_done))
            assert (!cmd_done);

    // A4: cmd_done and cmd_ready are simultaneously asserted
    // (done_reg is set in S_DONE→S_IDLE; cmd_ready = state==S_IDLE, so both true at once)
    always @(posedge clk)
        if (rst_n && cmd_done) assert (cmd_ready);

    // A5: No simultaneous SRAM read and write
    always @(posedge clk)
        if (rst_n) assert (!(sram_we && sram_re));

    // A6: No SRAM activity when idle (cmd_ready=1 means no command in flight)
    always @(posedge clk)
        if (f_past_valid && rst_n && cmd_ready)
            assert (!sram_we && !sram_re);

    // Cover: a command completes
    always @(posedge clk)
        if (f_past_valid && rst_n) cover (cmd_done);

    // Cover: SRAM write happens (STORE op)
    always @(posedge clk)
        if (f_past_valid && rst_n) cover (sram_we);

    // Cover: two commands back-to-back
    always @(posedge clk)
        if (f_past_valid && rst_n) cover ($past(cmd_done) && cmd_done);

endmodule
`default_nettype wire
