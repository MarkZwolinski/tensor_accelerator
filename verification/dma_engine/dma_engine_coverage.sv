// dma_engine_coverage.sv — Functional coverage for dma_engine (methodology Step 4)
`timescale 1ns/1ps
module dma_engine_coverage #(
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
    input logic axi_awvalid
);

    // ── Coverage bins ───────────────────────────────────────────────────────
    bit cov_load_cmd        = 0;  // LOAD command issued
    bit cov_store_cmd       = 0;  // STORE command issued
    bit cov_cmd_done        = 0;  // cmd_done observed
    bit cov_sram_write      = 0;  // SRAM write (LOAD path)
    bit cov_sram_read       = 0;  // SRAM read  (STORE path)
    bit cov_axi_read_ar     = 0;  // AXI AR channel used
    bit cov_axi_write_aw    = 0;  // AXI AW channel used
    bit cov_backpressure    = 0;  // cmd_valid && !cmd_ready (DUT busy)
    bit cov_consecutive_cmds= 0;  // two commands back-to-back
    // Assertion antecedent bins
    bit cov_A2_ant          = 0;  // cmd_ready && cmd_valid seen
    bit cov_A3_ant          = 0;  // cmd_done seen
    bit cov_A5_ant          = 0;  // cmd_done then check cmd_ready

    logic prev_cmd_ready = 0;
    logic prev_cmd_done  = 0;
    logic prev_cmd_valid = 0;
    logic [7:0] cmd_count = 0;

    always @(posedge clk) begin
        if (rst_n) begin
            if (cmd_valid && cmd_ready)       begin cov_load_cmd   = 1; cmd_count++; end // simplified
            if (cmd_done)                     cov_cmd_done          = 1;
            if (sram_we)                      cov_sram_write        = 1;
            if (sram_re)                      cov_sram_read         = 1;
            if (axi_arvalid)                  cov_axi_read_ar       = 1;
            if (axi_awvalid)                  cov_axi_write_aw      = 1;
            if (cmd_valid && !cmd_ready)      cov_backpressure      = 1;
            if (prev_cmd_done && cmd_valid)   cov_consecutive_cmds  = 1;
            // Antecedents
            if (cmd_ready && cmd_valid)       cov_A2_ant = 1;
            if (cmd_done)                     cov_A3_ant = 1;
            if (prev_cmd_done)                cov_A5_ant = 1;
            // Track STORE separately: detect AW without AR in same sequence
            if (axi_awvalid && !axi_arvalid)  cov_store_cmd = 1;
        end
        prev_cmd_ready <= cmd_ready;
        prev_cmd_done  <= cmd_done;
        prev_cmd_valid <= cmd_valid;
    end

    task automatic print_coverage();
        int hits = 0, total = 0;
        automatic bit hit_arr[12];
        automatic string names[12];

        hit_arr[0]  = cov_load_cmd;        names[0]  = "load_cmd";
        hit_arr[1]  = cov_store_cmd;       names[1]  = "store_cmd";
        hit_arr[2]  = cov_cmd_done;        names[2]  = "cmd_done";
        hit_arr[3]  = cov_sram_write;      names[3]  = "sram_write";
        hit_arr[4]  = cov_sram_read;       names[4]  = "sram_read";
        hit_arr[5]  = cov_axi_read_ar;     names[5]  = "axi_read_ar";
        hit_arr[6]  = cov_axi_write_aw;    names[6]  = "axi_write_aw";
        hit_arr[7]  = cov_backpressure;    names[7]  = "backpressure";
        hit_arr[8]  = cov_consecutive_cmds;names[8]  = "consecutive_cmds";
        hit_arr[9]  = cov_A2_ant;          names[9]  = "A2_antecedent";
        hit_arr[10] = cov_A3_ant;          names[10] = "A3_antecedent";
        hit_arr[11] = cov_A5_ant;          names[11] = "A5_antecedent";

        total = 12;
        for (int i = 0; i < total; i++) begin
            if (hit_arr[i]) hits++;
            else $display("  MISS: %s", names[i]);
        end
        $display("Coverage: %0d/%0d bins (%.1f%%)",
                 hits, total, 100.0 * hits / total);
    endtask

endmodule
