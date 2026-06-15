// test_fm.sv — MCY mutation-coverage formal wrapper for mac_pe
// Derived from mac_pe_formal.sv with hardcoded parameters for MCY compatibility.
// All ghost state uses SYNCHRONOUS reset; single-reset + step-0 assumptions added.
`default_nettype none
module mac_pe_formal;

    logic       clk;
    logic       rst_n;
    logic       enable;
    logic       load_weight;
    logic       clear_acc;
    logic [7:0] weight_in;
    logic [7:0] act_in;
    logic [7:0] act_out;
    logic [31:0] psum_in;
    logic [31:0] psum_out;

    mac_pe dut (.*);

    logic f_past_valid = 1'b0;
    always @(posedge clk) f_past_valid <= 1'b1;

    // Force reset at time 0
    always @(posedge clk)
        if (!f_past_valid) assume (!rst_n);

    // Single-reset model: once rst_n rises it stays high
    always @(posedge clk)
        if (f_past_valid) assume (rst_n || !$past(rst_n));

    // Ghost state — synchronous reset only (avoids async2sync DFFs in wrapper)
    logic [7:0] f_weight  = '0;
    logic [7:0] f_act_reg = '0;

    always @(posedge clk) begin
        if (!rst_n) begin
            f_weight  <= '0;
            f_act_reg <= '0;
        end else begin
            if (load_weight) f_weight  <= weight_in;
            if (enable)      f_act_reg <= act_in;
        end
    end

    wire signed [7:0]  f_a_s      = $signed(f_act_reg);
    wire signed [7:0]  f_w_s      = $signed(f_weight);
    wire signed [15:0] f_prod     = f_a_s * f_w_s;
    wire signed [31:0] f_prod_ext = 32'(signed'(f_prod));

    // A1: first cycle after reset — outputs are zero
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(!rst_n))
            assert (act_out == '0 && psum_out == '0);

    // A2: outputs stable when enable not asserted
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && !$past(enable))
            assert ($stable(act_out) && $stable(psum_out));

    // A3: act_out pipeline
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(enable))
            assert (act_out == $past(f_act_reg));

    // A4: accumulation formula
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(enable) && !$past(clear_acc))
            assert (psum_out == ($past(psum_in) + $past(f_prod_ext)));

    // A5: clear mode formula
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(enable) && $past(clear_acc))
            assert (psum_out == $past(f_prod_ext));

endmodule
`default_nettype wire
