`default_nettype none
module vector_unit_formal;
    localparam LANES       = 64;
    localparam DATA_WIDTH  = 16;
    localparam VREG_COUNT  = 32;
    localparam SRAM_ADDR_W = 20;

    logic                              clk, rst_n;
    logic [127:0]                      cmd;
    logic                              cmd_valid;
    logic                              cmd_ready, cmd_done;
    logic [SRAM_ADDR_W-1:0]            sram_addr;
    logic [LANES*DATA_WIDTH-1:0]       sram_wdata;
    logic [LANES*DATA_WIDTH-1:0]       sram_rdata;
    logic                              sram_we, sram_re, sram_ready;

    vector_unit dut (.*);

    logic f_past_valid = 1'b0;
    always @(posedge clk) f_past_valid <= 1'b1;

    always @(posedge clk) if (!f_past_valid) assume (!rst_n);
    always @(posedge clk) if (f_past_valid)  assume (rst_n || !$past(rst_n));

    logic [2:0] f_sram_stall = '0;
    always @(posedge clk) begin
        if (!rst_n) f_sram_stall <= '0;
        else if ((sram_re || sram_we) && !sram_ready)
            f_sram_stall <= f_sram_stall + 3'd1;
        else
            f_sram_stall <= '0;
    end
    always @(posedge clk) if (f_past_valid) assume (f_sram_stall < 3'd4);

    always @(posedge clk)
        if (f_past_valid && rst_n && $past(!rst_n))
            assert (cmd_ready && !cmd_done);

    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(cmd_ready && cmd_valid))
            assert (!cmd_ready);

    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(cmd_done))
            assert (!cmd_done);

    always @(posedge clk)
        if (rst_n && cmd_done) assert (cmd_ready);

    always @(posedge clk)
        if (rst_n) assert (!(sram_we && sram_re));

    always @(posedge clk)
        if (f_past_valid && rst_n && cmd_ready)
            assert (!sram_we && !sram_re);

endmodule
`default_nettype wire
