// mac_pe_tb.sv — Simulation-layer testbench (methodology Step 2)
// Three-module split: this file drives stimulus; mac_pe_checker.sv holds SVA
// assertions; mac_pe_coverage.sv holds functional coverage.
`timescale 1ns/1ps
module mac_pe_tb;

    // ── Parameters (use `parameter` so Verilator -G can override) ──────────
    parameter int DATA_WIDTH = 8;
    parameter int ACC_WIDTH  = 32;

    // ── Clock ───────────────────────────────────────────────────────────────
    logic clk = 0;
    always #5 clk = ~clk;   // 10 ns period (100 MHz)

    // ── DUT signals ─────────────────────────────────────────────────────────
    logic                   rst_n       = 0;
    logic                   enable      = 0;
    logic                   load_weight = 0;
    logic                   clear_acc   = 0;
    logic [DATA_WIDTH-1:0]  weight_in   = '0;
    logic [DATA_WIDTH-1:0]  act_in      = '0;
    logic [DATA_WIDTH-1:0]  act_out;
    logic [ACC_WIDTH-1:0]   psum_in     = '0;
    logic [ACC_WIDTH-1:0]   psum_out;

    // ── DUT ─────────────────────────────────────────────────────────────────
    mac_pe #(.DATA_WIDTH(DATA_WIDTH), .ACC_WIDTH(ACC_WIDTH)) dut (.*);

    // ── Checker ─────────────────────────────────────────────────────────────
    mac_pe_checker #(.DATA_WIDTH(DATA_WIDTH), .ACC_WIDTH(ACC_WIDTH)) chk (
        .clk, .rst_n,
        .enable, .load_weight, .clear_acc,
        .weight_in, .act_in, .act_out, .psum_in, .psum_out
    );

    // ── Coverage ────────────────────────────────────────────────────────────
    mac_pe_coverage #(.DATA_WIDTH(DATA_WIDTH), .ACC_WIDTH(ACC_WIDTH)) cov (
        .clk, .rst_n,
        .enable, .load_weight, .clear_acc,
        .weight_in, .act_in, .act_out, .psum_in, .psum_out
    );

    // ── Reference model state ───────────────────────────────────────────────
    // Independent of DUT outputs — prevents DUT bugs from corrupting reference.
    logic [DATA_WIDTH-1:0] ref_weight  = '0;
    logic [DATA_WIDTH-1:0] ref_act_reg = '0;
    logic [DATA_WIDTH-1:0] ref_act_out = '0;
    logic [ACC_WIDTH-1:0]  ref_psum_out = '0;

    int errors = 0;

    // ── Parameter guard ─────────────────────────────────────────────────────
    initial begin
        if (DATA_WIDTH < 2 || ACC_WIDTH < 2*DATA_WIDTH)
            $fatal(1, "unsafe params: DATA_WIDTH=%0d ACC_WIDTH=%0d",
                   DATA_WIDTH, ACC_WIDTH);
    end

    // ── VCD (silently ignored without --trace) ───────────────────────────────
    initial begin
        $dumpfile("mac_pe_tb.vcd");
        $dumpvars(0, mac_pe_tb);
    end

    // ── Reference model ─────────────────────────────────────────────────────
    // Mirrors the RTL sequential logic exactly (non-blocking semantics:
    // product computed from OLD register values before any update).
    task automatic ref_step(
        input logic                  en, lw, ca,
        input logic [DATA_WIDTH-1:0] wi, ai,
        input logic [ACC_WIDTH-1:0]  pi
    );
        logic signed [DATA_WIDTH-1:0]   a_s, w_s;
        logic signed [2*DATA_WIDTH-1:0] prod;
        logic signed [ACC_WIDTH-1:0]    prod_ext;

        a_s      = $signed(ref_act_reg);   // signed view of unsigned storage
        w_s      = $signed(ref_weight);
        prod     = a_s * w_s;
        prod_ext = ACC_WIDTH'(signed'(prod));   // sign-extend 16 → 32

        if (lw) ref_weight  = wi;
        if (en) begin
            ref_act_out  = ref_act_reg;     // old act_reg
            ref_act_reg  = ai;
            if (ca) ref_psum_out = prod_ext;
            else    ref_psum_out = pi + prod_ext;
        end
    endtask

    // ── tick: drive one cycle, clock, update reference ──────────────────────
    // Caller is at "1ns after posedge N". tick() sets inputs, waits for
    // posedge N+1 (DUT processes), then updates reference and returns at
    // "1ns after posedge N+1" ready for the next tick.
    task automatic tick(
        input logic                  en   = 1'b0,
        input logic                  lw   = 1'b0,
        input logic                  ca   = 1'b0,
        input logic [DATA_WIDTH-1:0] wi   = '0,
        input logic [DATA_WIDTH-1:0] ai   = '0,
        input logic [ACC_WIDTH-1:0]  pi   = '0
    );
        enable = en; load_weight = lw; clear_acc = ca;
        weight_in = wi; act_in = ai; psum_in = pi;
        @(posedge clk); #1;
        ref_step(en, lw, ca, wi, ai, pi);
    endtask

    // ── chk_outputs: compare DUT outputs against reference ──────────────────
    task automatic chk_outputs(input string tag);
        if (act_out !== ref_act_out) begin
            $display("FAIL [%s] act_out: got %0d  exp %0d",
                     tag, $signed(act_out), $signed(ref_act_out));
            errors++;
        end
        if (psum_out !== ref_psum_out) begin
            $display("FAIL [%s] psum_out: got %0d  exp %0d",
                     tag, $signed(psum_out), $signed(ref_psum_out));
            errors++;
        end
    endtask

    // ── reset_dut ────────────────────────────────────────────────────────────
    task automatic reset_dut();
        rst_n = 0;
        enable = 0; load_weight = 0; clear_acc = 0;
        weight_in = '0; act_in = '0; psum_in = '0;
        ref_weight = '0; ref_act_reg = '0; ref_act_out = '0; ref_psum_out = '0;
        repeat(3) @(posedge clk);
        #1; rst_n = 1;   // deassert 1ns after posedge; DUT is now live
    endtask

    // ═══════════════════════════════════════════════════════════════════════
    // Test sequences (T1–T12)
    // ═══════════════════════════════════════════════════════════════════════
    initial begin
        reset_dut();
        // We are now 1ns after posedge with rst_n=1, all inputs 0.

        // ── T1: Post-reset ───────────────────────────────────────────────
        if (act_out !== '0 || psum_out !== '0) begin
            $display("FAIL [T1] post-reset: act_out=%0d psum_out=%0d",
                     act_out, psum_out);
            errors++;
        end

        // ── T2: Single MAC: weight=5, act=3 → psum_out=15 ───────────────
        // Pipeline: act_reg latency means useful psum appears in 2nd enable cycle.
        tick(.lw(1), .wi(8'd5));        // cycle A: load weight=5
        chk_outputs("T2 weight_loaded");
        tick(.en(1), .ai(8'd3));        // cycle B: act_reg ← 3, product=0*5=0
        chk_outputs("T2 cycle1");
        tick(.en(1), .ai(8'd3));        // cycle C: product=3*5=15, psum_out=15
        chk_outputs("T2 cycle2");
        tick();                         // idle to deassert enable

        // ── T3: Multi-cycle accumulation: weight=3, acts=[1,2,3,4] ──────
        reset_dut();
        tick(.lw(1), .wi(8'd3));
        tick(.en(1), .ai(8'd1));  chk_outputs("T3 c1");  // psum=0    (product=0*3)
        tick(.en(1), .ai(8'd2));  chk_outputs("T3 c2");  // psum=3    (product=1*3)
        tick(.en(1), .ai(8'd3));  chk_outputs("T3 c3");  // psum=6    (product=2*3)
        tick(.en(1), .ai(8'd4));  chk_outputs("T3 c4");  // psum=9    (product=3*3)
        tick(.en(1), .ai(8'd0));  chk_outputs("T3 c5");  // psum=12   (product=4*3)
        tick();

        // ── T4: clear_acc discards psum_in ───────────────────────────────
        reset_dut();
        tick(.lw(1), .wi(8'd4));
        tick(.en(1), .ai(8'd2));                           // prime: act_reg=2
        tick(.en(1), .ai(8'd5), .pi(32'd100), .ca(1));    // product=2*4=8; clear→psum=8, not 108
        chk_outputs("T4 clear_acc");
        tick();

        // ── T5: enable=0 freezes outputs ────────────────────────────────
        reset_dut();
        tick(.lw(1), .wi(8'd7));
        tick(.en(1), .ai(8'd2));         // prime pipeline
        tick(.en(1), .ai(8'd3));         // psum_out = 2*7 = 14
        tick();                          // idle ×3 — outputs must not change
        tick();
        tick();
        chk_outputs("T5 frozen_after_idle");

        // ── T6: load_weight during enable ────────────────────────────────
        // Weight loaded this cycle takes effect the NEXT cycle's product
        // (weight_reg updated; product uses old act_reg, not new weight yet).
        reset_dut();
        tick(.lw(1), .wi(8'd2));
        tick(.en(1), .ai(8'd5));                           // act_reg=5, product=0*2=0
        tick(.en(1), .lw(1), .wi(8'd10), .ai(8'd1));      // weight=10 loaded; product=5*2=10
        chk_outputs("T6 new_weight_loads");
        tick(.en(1), .ai(8'd1));                           // product=1*10=10 (new weight)
        chk_outputs("T6 new_weight_active");
        tick();

        // ── T7: signed pos × pos ──────────────────────────────────────────
        reset_dut();
        tick(.lw(1), .wi(8'd12));
        tick(.en(1), .ai(8'd11));
        tick(.en(1), .ai(8'd0));  chk_outputs("T7 pos_pos");   // 11*12=132
        tick();

        // ── T8: signed neg × pos ─────────────────────────────────────────
        reset_dut();
        tick(.lw(1), .wi(8'hFE));   // -2 (two's complement)
        tick(.en(1), .ai(8'd3));
        tick(.en(1), .ai(8'd0));  chk_outputs("T8 neg_pos");   // -2*3=-6
        tick();

        // ── T9: signed neg × neg ─────────────────────────────────────────
        reset_dut();
        tick(.lw(1), .wi(8'hFD));   // -3
        tick(.en(1), .ai(8'hFE));   // -2
        tick(.en(1), .ai(8'd0));  chk_outputs("T9 neg_neg");   // (-3)*(-2)=6
        tick();

        // ── T10: No overflow: weight=127, act=127, 8 accumulation cycles ─
        reset_dut();
        tick(.lw(1), .wi(8'd127));
        tick(.en(1), .ai(8'd127));  // prime
        repeat (8) begin
            tick(.en(1), .ai(8'd127));
            chk_outputs("T10 no_overflow");
        end
        tick();

        // ── T11: load_weight with enable=0 (weight loads, no compute) ────
        // Verifies weight is updated even when not computing.
        reset_dut();
        tick(.lw(1), .wi(8'd99));   chk_outputs("T11 lw_no_en_1");  // psum unchanged
        tick(.lw(1), .wi(8'd55));   chk_outputs("T11 lw_no_en_2");  // still 0
        tick(.en(1), .ai(8'd1));
        tick(.en(1), .ai(8'd1));    chk_outputs("T11 last_weight");  // 1*55=55
        tick();

        // ── T12: clear_acc immediately after reset ───────────────────────
        reset_dut();
        tick(.lw(1), .wi(8'd6));
        tick(.en(1), .ai(8'd4), .ca(1));             // prime + clear (product=0*6=0)
        tick(.en(1), .ai(8'd0), .ca(1),              // product=4*6=24; psum_in=0xFFFF ignored
             .pi(32'hFFFF_FFFF));
        chk_outputs("T12 clear_after_reset");
        tick();

        // ═════════════════════════════════════════════════════════════════
        cov.print_coverage();
        if (errors == 0 && chk.assertion_failures == 0)
            $display("RESULT: PASS — all checks passed");
        else
            $display("RESULT: FAIL — %0d errors, %0d assertion failures",
                     errors, chk.assertion_failures);
        $finish;
    end

endmodule
