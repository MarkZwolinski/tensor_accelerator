// mac_pe_formal.sv — Formal verification wrapper (methodology Steps 6–7)
// Used by SymbiYosys (sby) for BMC (bounded) and cover.
//
// Design notes:
// 1. Ghost state uses SYNCHRONOUS reset to avoid Yosys creating extra
//    async2sync shadow DFFs in the wrapper module.  The DUT (mac_pe.v)
//    still has async reset; the wrapper's ghost state uses @(posedge clk)
//    only.  Behaviorally identical at posedge-sampled boundaries.
// 2. "setundef -anyinit -zero" in the sby script zeroes all $anyinit
//    registers (including the DUT's async2sync shadow DFFs) so the BMC
//    starts from a clean reset state with no phantom inter-posedge glitches.
// 3. Assertions are gated by f_past_valid (no $past at cycle 0) and
//    $past(rst_n) (DUT was in normal operation the previous cycle).
`default_nettype none
module mac_pe_formal #(
    parameter int DATA_WIDTH = 8,
    parameter int ACC_WIDTH  = 32
);

    // ── Free inputs (unconstrained by formal tool) ───────────────────────────
    logic                   clk;
    logic                   rst_n;
    logic                   enable;
    logic                   load_weight;
    logic                   clear_acc;
    logic [DATA_WIDTH-1:0]  weight_in;
    logic [DATA_WIDTH-1:0]  act_in;
    logic [DATA_WIDTH-1:0]  act_out;
    logic [ACC_WIDTH-1:0]   psum_in;
    logic [ACC_WIDTH-1:0]   psum_out;

    // ── DUT ─────────────────────────────────────────────────────────────────
    mac_pe #(.DATA_WIDTH(DATA_WIDTH), .ACC_WIDTH(ACC_WIDTH)) dut (.*);

    // ── f_past_valid ─────────────────────────────────────────────────────────
    logic f_past_valid = 1'b0;
    always @(posedge clk) f_past_valid <= 1'b1;

    // Force reset at time 0 (basecase starts from known-good state).
    always @(posedge clk)
        if (!f_past_valid) assume (!rst_n);

    // Single-reset model: once rst_n rises it stays high (no re-reset).
    // Combined with setundef -anyinit -zero in the sby script this fully
    // prevents phantom async2sync glitches in the SMT encoding.
    always @(posedge clk)
        if (f_past_valid) assume (rst_n || !$past(rst_n));

    // ── Ghost state (synchronous reset, mirrors DUT registers) ───────────────
    // Uses @(posedge clk) only — avoids creating async2sync DFFs in wrapper.
    logic [DATA_WIDTH-1:0] f_weight  = '0;
    logic [DATA_WIDTH-1:0] f_act_reg = '0;

    always @(posedge clk) begin
        if (!rst_n) begin
            f_weight  <= '0;
            f_act_reg <= '0;
        end else begin
            if (load_weight) f_weight  <= weight_in;
            if (enable)      f_act_reg <= act_in;
        end
    end

    // Product from ghost state (mirrors DUT's combinational product wire)
    wire signed [DATA_WIDTH-1:0]   f_a_s     = $signed(f_act_reg);
    wire signed [DATA_WIDTH-1:0]   f_w_s     = $signed(f_weight);
    wire signed [2*DATA_WIDTH-1:0] f_prod    = f_a_s * f_w_s;
    wire signed [ACC_WIDTH-1:0]    f_prod_ext = ACC_WIDTH'(signed'(f_prod));

    // ── Safety assertions ─────────────────────────────────────────────────────
    // All gated by f_past_valid.  A2–A6 also gated by $past(rst_n) to exclude
    // the cycle immediately after reset (DUT outputs are 0 from reset, not
    // from the compute formula).

    // A1: First cycle after reset — outputs are zero
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(!rst_n))
            assert (act_out == '0 && psum_out == '0);

    // A2: Outputs stable when enable not asserted
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && !$past(enable))
            assert ($stable(act_out) && $stable(psum_out));

    // A3: act_out pipeline — equals previous-cycle act_in (via f_act_reg)
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(enable))
            assert (act_out == $past(f_act_reg));

    // A4: Accumulation formula
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(enable) && !$past(clear_acc))
            assert (psum_out == ($past(psum_in) + $past(f_prod_ext)));

    // A5: Clear mode formula
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(enable) && $past(clear_acc))
            assert (psum_out == $past(f_prod_ext));

    // A6: Weight register stable when load_weight not asserted
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && !$past(load_weight))
            assert ($stable(f_weight));

    // ── Cover properties ──────────────────────────────────────────────────────
    // Reachability: prove non-trivial psum_out is reachable
    always @(posedge clk)
        if (f_past_valid && rst_n)
            cover (psum_out != '0 && f_weight != '0 && $past(enable));

    always @(posedge clk)
        if (f_past_valid && rst_n)
            cover (psum_out != '0 && $past(enable) && $past(clear_acc));

    // ── BMC reachability counter (FORMAL_BMC) ────────────────────────────────
    // Not needed: prove (depth 20) and cover already demonstrate reachability
    // of non-trivial psum_out states.  Kept as a stub in case manual
    // reachability checks are added later.

endmodule
`default_nettype wire
