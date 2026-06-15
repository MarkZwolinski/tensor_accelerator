`default_nettype none
module systolic_array_formal;
    localparam ARRAY_SIZE = 4;
    localparam DATA_WIDTH = 8;
    localparam ACC_WIDTH  = 32;

    logic                              clk, rst_n;
    logic                              start, clear_acc;
    logic [15:0]                       cfg_k_tiles;
    logic                              weight_load_en;
    logic [$clog2(ARRAY_SIZE)-1:0]     weight_load_col;
    logic [ARRAY_SIZE*DATA_WIDTH-1:0]  weight_load_data;
    logic                              act_valid;
    logic [ARRAY_SIZE*DATA_WIDTH-1:0]  act_data;
    logic                              act_ready;
    logic                              busy, done;
    logic                              result_valid;
    logic [ARRAY_SIZE*ACC_WIDTH-1:0]   result_data;
    logic                              result_ready;

    systolic_array dut (.*);

    logic f_past_valid = 1'b0;
    always @(posedge clk) f_past_valid <= 1'b1;

    always @(posedge clk) if (!f_past_valid) assume (!rst_n);
    always @(posedge clk) if (f_past_valid)  assume (rst_n || !$past(rst_n));

    logic f_started = 1'b0;
    always @(posedge clk) begin
        if (!rst_n)           f_started <= 1'b0;
        else if (done)        f_started <= 1'b0;
        else if (start)       f_started <= 1'b1;
    end

    always @(posedge clk)
        if (f_past_valid && rst_n && $past(!rst_n))
            assert (!busy && !done && !result_valid);

    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(done))
            assert (!done);

    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(done))
            assert (!result_valid);

    always @(posedge clk)
        if (f_past_valid && rst_n && f_started && !done)
            assert (busy);

    always @(posedge clk)
        if (f_past_valid && rst_n && !f_started)
            assert (!result_valid);

    always @(posedge clk)
        if (f_past_valid && rst_n && !busy)
            assert (!act_ready);

endmodule
`default_nettype wire
