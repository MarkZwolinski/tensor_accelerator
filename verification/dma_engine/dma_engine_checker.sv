// dma_engine_checker.sv — SVA assertion layer for dma_engine (methodology Step 3)
`timescale 1ns/1ps
module dma_engine_checker #(
    parameter int DATA_WIDTH = 256
)(
    input logic clk,
    input logic rst_n,
    input logic cmd_ready,
    input logic cmd_valid,
    input logic cmd_done,
    input logic sram_we,
    input logic sram_re,
    input logic axi_arvalid,
    input logic axi_awvalid,
    input logic axi_wvalid,
    input logic axi_wlast,
    output int  assertion_failures
);

    // ── Concurrent SVA assertions ───────────────────────────────────────────

    // A1: SRAM never reads and writes in the same cycle (mutual exclusion)
    // This is a combinational invariant — no |=> needed.
    A1_sram_mutex: assert property (
        @(posedge clk) disable iff (!rst_n)
        !(sram_we && sram_re)
    ) else $display("A1_sram_mutex: FAIL — we && re simultaneously at %0t", $time);

    // A2: After cmd accepted (cmd_ready && cmd_valid), cmd_ready deasserts
    // The DUT transitions from IDLE, so cmd_ready must go low.
    A2_cmd_ready_drops: assert property (
        @(posedge clk) disable iff (!rst_n)
        (cmd_ready && cmd_valid) |=> !cmd_ready
    ) else $display("A2_cmd_ready_drops: FAIL at %0t", $time);

    // A3: cmd_done is a single-cycle pulse
    A3_done_pulse: assert property (
        @(posedge clk) disable iff (!rst_n)
        cmd_done |=> !cmd_done
    ) else $display("A3_done_pulse: FAIL at %0t", $time);

    // A4: AXI read and write address channels not simultaneously valid
    // (DUT processes one direction at a time — this is a design invariant,
    // not a strict AXI4 requirement, but holds for this single-channel DUT.)
    A4_axi_exclusive: assert property (
        @(posedge clk) disable iff (!rst_n)
        !(axi_arvalid && axi_awvalid)
    ) else $display("A4_axi_exclusive: FAIL at %0t", $time);

    // A5: cmd_ready must reassert after cmd_done
    // (DUT goes DONE→IDLE, so cmd_ready should be high on the cycle after cmd_done)
    A5_ready_after_done: assert property (
        @(posedge clk) disable iff (!rst_n)
        cmd_done |=> cmd_ready
    ) else $display("A5_ready_after_done: FAIL at %0t", $time);

    // ── Mirror always block for countable failure signal ────────────────────
    logic prev_cmd_ready, prev_cmd_valid, prev_cmd_done;
    logic prev_axi_arvalid, prev_axi_awvalid;
    logic prev_sram_we, prev_sram_re;

    always @(posedge clk) begin
        prev_cmd_ready   <= cmd_ready;
        prev_cmd_valid   <= cmd_valid;
        prev_cmd_done    <= cmd_done;
        prev_axi_arvalid <= axi_arvalid;
        prev_axi_awvalid <= axi_awvalid;
        prev_sram_we     <= sram_we;
        prev_sram_re     <= sram_re;
    end

    always @(posedge clk) begin
        assertion_failures = 0;
        if (rst_n) begin
            // Mirror A1: combinational check this cycle
            if (sram_we && sram_re)
                assertion_failures++;
            // Mirror A2: cmd_ready dropped after accept
            if (prev_cmd_ready && prev_cmd_valid && cmd_ready)
                assertion_failures++;
            // Mirror A3: cmd_done single-cycle
            if (prev_cmd_done && cmd_done)
                assertion_failures++;
            // Mirror A4: AXI exclusive (combinational this cycle)
            if (axi_arvalid && axi_awvalid)
                assertion_failures++;
            // Mirror A5: cmd_ready reasserts after cmd_done
            if (prev_cmd_done && !cmd_ready)
                assertion_failures++;
        end
    end

endmodule
