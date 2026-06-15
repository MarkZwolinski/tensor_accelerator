// mac_pe_checker.sv — SVA assertion layer (methodology Step 3)
// Verilator-compatible: $display not $error in else clauses (avoids $stop).
// Mirror always block provides a countable failure signal.
`timescale 1ns/1ps
module mac_pe_checker #(
    parameter int DATA_WIDTH = 8,
    parameter int ACC_WIDTH  = 32
)(
    input logic                   clk,
    input logic                   rst_n,
    input logic                   enable,
    input logic                   load_weight,
    input logic                   clear_acc,
    input logic [DATA_WIDTH-1:0]  weight_in,
    input logic [DATA_WIDTH-1:0]  act_in,
    input logic [DATA_WIDTH-1:0]  act_out,
    input logic [ACC_WIDTH-1:0]   psum_in,
    input logic [ACC_WIDTH-1:0]   psum_out,
    output int                    assertion_failures
);

    // ── Ghost state: mirrors DUT internals using only input signals ─────────
    // Updated only from weight_in/act_in — never reads DUT act_out/psum_out,
    // so a DUT bug cannot corrupt the reference.
    logic [DATA_WIDTH-1:0] f_weight  = '0;
    logic [DATA_WIDTH-1:0] f_act_reg = '0;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            f_weight  <= '0;
            f_act_reg <= '0;
        end else begin
            if (load_weight) f_weight  <= weight_in;
            if (enable)      f_act_reg <= act_in;
        end
    end

    // Combinational product from ghost state (mirrors RTL product wire)
    wire signed [DATA_WIDTH-1:0]   f_a_s    = $signed(f_act_reg);
    wire signed [DATA_WIDTH-1:0]   f_w_s    = $signed(f_weight);
    wire signed [2*DATA_WIDTH-1:0] f_prod   = f_a_s * f_w_s;
    wire signed [ACC_WIDTH-1:0]    f_prod_ext = ACC_WIDTH'(signed'(f_prod));

    // ── Concurrent SVA assertions ───────────────────────────────────────────
    // disable iff (!rst_n): async active-low reset disables assertions while
    // low, preventing false failures during reset.

    // A1: Post-reset: outputs are zero on the first enabled posedge after rst_n rises
    A1_post_reset: assert property (
        @(posedge clk) disable iff (!rst_n)
        $rose(rst_n) |=> act_out == '0 && psum_out == '0
    ) else $display("A1_post_reset: FAIL at time %0t", $time);

    // A2: Outputs freeze when enable is deasserted
    A2_frozen: assert property (
        @(posedge clk) disable iff (!rst_n)
        !enable |=> $stable(act_out) && $stable(psum_out)
    ) else $display("A2_frozen: FAIL at time %0t", $time);

    // A3: act_out is the registered act_reg value (1-cycle pipeline)
    // f_act_reg before posedge N holds act_in[N-1]; act_out after posedge N
    // equals that same value → $past(f_act_reg) captures the pre-update value.
    A3_act_pipeline: assert property (
        @(posedge clk) disable iff (!rst_n)
        enable |=> act_out == $past(f_act_reg)
    ) else $display("A3_act_pipeline: FAIL at time %0t", $time);

    // A4: Accumulation mode: psum_out = psum_in + product (using old act_reg)
    A4_accumulate: assert property (
        @(posedge clk) disable iff (!rst_n)
        (enable && !clear_acc) |=>
            psum_out == ($past(psum_in) + $past(f_prod_ext))
    ) else $display("A4_accumulate: FAIL at time %0t", $time);

    // A5: Clear mode: psum_out = product (psum_in discarded)
    A5_clear: assert property (
        @(posedge clk) disable iff (!rst_n)
        (enable && clear_acc) |=>
            psum_out == $past(f_prod_ext)
    ) else $display("A5_clear: FAIL at time %0t", $time);

    // ── Mirror always block ─────────────────────────────────────────────────
    // Verilator does not surface assertion pass/fail counts directly.
    // This block mirrors assertion conditions so assertion_failures is countable.
    // Uses registered copies of antecedents captured at the previous posedge.
    logic                  prev_enable;
    logic                  prev_clear_acc;
    logic [DATA_WIDTH-1:0] prev_f_act_reg;     // f_act_reg before its posedge update
    logic [ACC_WIDTH-1:0]  prev_psum_in;
    logic signed [ACC_WIDTH-1:0] prev_f_prod_ext; // product before f_act_reg update
    logic [DATA_WIDTH-1:0] prev_act_out;
    logic [ACC_WIDTH-1:0]  prev_psum_out;
    logic                  prev_rst_rose;

    always @(posedge clk) begin
        // Capture antecedents BEFORE this posedge's non-blocking updates complete
        // (non-blocking reads see old values at the clock edge)
        prev_enable      <= enable;
        prev_clear_acc   <= clear_acc;
        prev_f_act_reg   <= f_act_reg;
        prev_psum_in     <= psum_in;
        prev_f_prod_ext  <= f_prod_ext;
        prev_act_out     <= act_out;
        prev_psum_out    <= psum_out;
        prev_rst_rose    <= $rose(rst_n);
    end

    always @(posedge clk) begin
        assertion_failures = 0;
        if (rst_n) begin
            // Mirror A1
            if (prev_rst_rose && !(act_out == '0 && psum_out == '0))
                assertion_failures++;
            // Mirror A2: frozen when prev_enable=0
            if (!prev_enable && (act_out !== prev_act_out || psum_out !== prev_psum_out))
                assertion_failures++;
            // Mirror A3: act_out == old f_act_reg when prev_enable
            if (prev_enable && act_out !== prev_f_act_reg)
                assertion_failures++;
            // Mirror A4
            if (prev_enable && !prev_clear_acc &&
                psum_out !== (prev_psum_in + prev_f_prod_ext))
                assertion_failures++;
            // Mirror A5
            if (prev_enable && prev_clear_acc &&
                psum_out !== prev_f_prod_ext)
                assertion_failures++;
        end
    end

endmodule
