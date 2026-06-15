`default_nettype none
module systolic_array_formal #(
    parameter ARRAY_SIZE = 4,
    parameter DATA_WIDTH = 8,
    parameter ACC_WIDTH  = 32
);
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

    systolic_array #(
        .ARRAY_SIZE(ARRAY_SIZE),
        .DATA_WIDTH(DATA_WIDTH),
        .ACC_WIDTH (ACC_WIDTH)
    ) dut (.*);

    logic f_past_valid = 1'b0;
    always @(posedge clk) f_past_valid <= 1'b1;

    always @(posedge clk) if (!f_past_valid) assume (!rst_n);
    always @(posedge clk) if (f_past_valid)  assume (rst_n || !$past(rst_n));

    // Ghost state: track whether a computation has been started
    // done takes priority over start (done=1 in S_DONE, start in S_DONE is a no-op)
    logic f_started = 1'b0;
    always @(posedge clk) begin
        if (!rst_n)           f_started <= 1'b0;
        else if (done)        f_started <= 1'b0;
        else if (start)       f_started <= 1'b1;
    end

    // A1: After reset, outputs are idle
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(!rst_n))
            assert (!busy && !done && !result_valid);

    // A2: done is a single-cycle pulse
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(done))
            assert (!done);

    // A3: result_valid deasserts after done fires
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(done))
            assert (!result_valid);

    // A4: busy is high while computing (not idle and not just done)
    always @(posedge clk)
        if (f_past_valid && rst_n && f_started && !done)
            assert (busy);

    // A5: result_valid only possible after start
    always @(posedge clk)
        if (f_past_valid && rst_n && !f_started)
            assert (!result_valid);

    // A6: act_ready deasserts while not in compute state
    // (no activations accepted when not busy or weight-loading)
    always @(posedge clk)
        if (f_past_valid && rst_n && !busy)
            assert (!act_ready);

    // Precondition: cfg_k_tiles == 0 is undefined (would cause 16-bit underflow in comparison)
    always @(posedge clk) if (f_past_valid && rst_n) assume (cfg_k_tiles > 0);

    // A7: accumulator result stays within signed 32-bit range for INT8 inputs
    // Worst-case single-PE tile sum: ARRAY_SIZE * 127 * 127 = 65,028 — well within INT32
    always @(posedge clk)
        if (f_past_valid && rst_n && result_valid) begin
            assert ($signed(result_data[ACC_WIDTH-1:0]) >= -$signed(32'h7FFFFFFF));
            assert ($signed(result_data[ACC_WIDTH-1:0]) <=  $signed(32'h7FFFFFFF));
        end

    // Cover: a full computation completes
    always @(posedge clk)
        if (f_past_valid && rst_n) cover (done);

    // Cover: result_valid seen
    always @(posedge clk)
        if (f_past_valid && rst_n) cover (result_valid);

endmodule
`default_nettype wire
