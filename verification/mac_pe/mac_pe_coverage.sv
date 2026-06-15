// mac_pe_coverage.sv — Functional coverage layer (methodology Step 4)
// Verilator-compatible: covergroup @(posedge clk) is NOT supported by Verilator.
// Uses bit variables + always @(posedge clk) instead.
`timescale 1ns/1ps
module mac_pe_coverage #(
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
    input logic [ACC_WIDTH-1:0]   psum_out
);

    // ── Coverage bins (bit variables; set once, never cleared) ─────────────

    // Input control combinations
    bit cov_idle            = 0;  // !enable && !load_weight
    bit cov_lw_only         = 0;  // load_weight && !enable
    bit cov_en_only         = 0;  // enable && !load_weight
    bit cov_en_and_lw       = 0;  // enable && load_weight simultaneous
    bit cov_en_with_clear   = 0;  // enable && clear_acc

    // Weight operand values
    bit cov_weight_zero     = 0;  // weight_reg = 0 (via load_weight)
    bit cov_weight_max_pos  = 0;  // weight_in = 127
    bit cov_weight_max_neg  = 0;  // weight_in = -128 (8'h80)

    // Activation operand values
    bit cov_act_zero        = 0;  // act_in = 0
    bit cov_act_max_pos     = 0;  // act_in = 127
    bit cov_act_max_neg     = 0;  // act_in = -128

    // psum_in boundary
    bit cov_psum_nonzero    = 0;  // psum_in != 0 when accumulating

    // Assertion antecedent bins (detect vacuous passes if 0 at end)
    bit cov_A1_ant          = 0;  // $rose(rst_n) seen
    bit cov_A3_ant          = 0;  // enable seen
    bit cov_A4_ant          = 0;  // enable && !clear_acc seen
    bit cov_A5_ant          = 0;  // enable && clear_acc seen

    // Cross / corner cases
    bit cov_lw_then_en      = 0;  // load_weight in one cycle, enable the next
    bit cov_consecutive_en  = 0;  // two consecutive enable cycles
    bit cov_wr_when_en      = 0;  // load_weight AND enable in same cycle (covered by cov_en_and_lw)

    logic prev_enable     = 0;
    logic prev_lw         = 0;
    logic prev_rst_n      = 0;

    always @(posedge clk) begin
        if (rst_n) begin
            // Control combination bins
            if (!enable && !load_weight)  cov_idle           = 1;
            if (load_weight && !enable)   cov_lw_only        = 1;
            if (enable && !load_weight)   cov_en_only        = 1;
            if (enable && load_weight)    cov_en_and_lw      = 1;
            if (enable && clear_acc)      cov_en_with_clear  = 1;

            // Operand value bins (sampled at the posedge before the computation)
            if (load_weight && weight_in == '0)           cov_weight_zero    = 1;
            if (load_weight && weight_in == 8'd127)       cov_weight_max_pos = 1;
            if (load_weight && weight_in == 8'h80)        cov_weight_max_neg = 1;
            if (enable && act_in == '0)                   cov_act_zero       = 1;
            if (enable && act_in == 8'd127)               cov_act_max_pos    = 1;
            if (enable && act_in == 8'h80)                cov_act_max_neg    = 1;
            if (enable && !clear_acc && psum_in != '0)    cov_psum_nonzero   = 1;

            // Antecedent bins
            if ($rose(rst_n))             cov_A1_ant = 1;
            if (enable)                   cov_A3_ant = 1;
            if (enable && !clear_acc)     cov_A4_ant = 1;
            if (enable && clear_acc)      cov_A5_ant = 1;

            // Cross bins
            if (prev_lw && !prev_enable && enable)  cov_lw_then_en     = 1;
            if (prev_enable && enable)               cov_consecutive_en = 1;
        end

        // Track $rose(rst_n) for A1 antecedent bin
        if (!prev_rst_n && rst_n) cov_A1_ant = 1;

        prev_enable <= enable;
        prev_lw     <= load_weight;
        prev_rst_n  <= rst_n;
    end

    // ── print_coverage task ─────────────────────────────────────────────────
    task automatic print_coverage();
        int hits = 0, total = 0;
        automatic bit hit_arr[18];
        automatic string names[18];

        hit_arr[0]  = cov_idle;            hit_arr[1]  = cov_lw_only;
        hit_arr[2]  = cov_en_only;         hit_arr[3]  = cov_en_and_lw;
        hit_arr[4]  = cov_en_with_clear;   hit_arr[5]  = cov_weight_zero;
        hit_arr[6]  = cov_weight_max_pos;  hit_arr[7]  = cov_weight_max_neg;
        hit_arr[8]  = cov_act_zero;        hit_arr[9]  = cov_act_max_pos;
        hit_arr[10] = cov_act_max_neg;     hit_arr[11] = cov_psum_nonzero;
        hit_arr[12] = cov_A1_ant;          hit_arr[13] = cov_A3_ant;
        hit_arr[14] = cov_A4_ant;          hit_arr[15] = cov_A5_ant;
        hit_arr[16] = cov_lw_then_en;      hit_arr[17] = cov_consecutive_en;

        names[0]  = "idle";             names[1]  = "lw_only";
        names[2]  = "en_only";          names[3]  = "en_and_lw";
        names[4]  = "en_with_clear";    names[5]  = "weight_zero";
        names[6]  = "weight_max_pos";   names[7]  = "weight_max_neg";
        names[8]  = "act_zero";         names[9]  = "act_max_pos";
        names[10] = "act_max_neg";      names[11] = "psum_nonzero";
        names[12] = "A1_antecedent";    names[13] = "A3_antecedent";
        names[14] = "A4_antecedent";    names[15] = "A5_antecedent";
        names[16] = "lw_then_en";       names[17] = "consecutive_en";

        total = 18;
        for (int i = 0; i < total; i++) begin
            if (hit_arr[i]) hits++;
            else $display("  MISS: %s", names[i]);
        end
        $display("Coverage: %0d/%0d bins (%.1f%%)",
                 hits, total, 100.0 * hits / total);
    endtask

endmodule
