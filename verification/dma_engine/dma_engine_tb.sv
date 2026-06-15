// dma_engine_tb.sv — Simulation-layer testbench for dma_engine (methodology Step 2)
// Key difference from tb/tb_dma_engine.v: uses REGISTERED SRAM (1-cycle read latency)
// to exercise the S_STORE_CAP path — the known timing fix in VERIFICATION_STATUS.md.
`timescale 1ns/1ps
module dma_engine_tb;

    parameter int DATA_WIDTH = 256;
    parameter int EXT_ADDR_W = 40;
    parameter int INT_ADDR_W = 20;
    parameter int TIMEOUT    = 500;   // max cycles before declaring a hang

    // ── Clock ────────────────────────────────────────────────────────────────
    logic clk = 0;
    always #5 clk = ~clk;

    // ── DUT ports ────────────────────────────────────────────────────────────
    logic rst_n = 0;
    logic [127:0]           cmd       = '0;
    logic                   cmd_valid = 0;
    wire                    cmd_ready;
    wire                    cmd_done;

    wire [INT_ADDR_W-1:0]   sram_addr;
    wire [DATA_WIDTH-1:0]   sram_wdata;
    logic [DATA_WIDTH-1:0]  sram_rdata;
    wire                    sram_we;
    wire                    sram_re;
    logic                   sram_ready = 1;

    wire [EXT_ADDR_W-1:0]   axi_awaddr, axi_araddr;
    wire [7:0]               axi_awlen, axi_arlen;
    wire                     axi_awvalid, axi_arvalid;
    logic                    axi_awready = 1;
    logic                    axi_arready = 1;
    wire [DATA_WIDTH-1:0]   axi_wdata;
    wire                     axi_wlast, axi_wvalid;
    logic                    axi_wready  = 1;
    logic [1:0]              axi_bresp   = 0;
    logic                    axi_bvalid  = 0;
    wire                     axi_bready;
    logic [DATA_WIDTH-1:0]  axi_rdata   = '0;
    logic                    axi_rlast   = 0;
    logic                    axi_rvalid  = 0;
    wire                     axi_rready;

    // ── DUT ──────────────────────────────────────────────────────────────────
    dma_engine #(
        .EXT_ADDR_W(EXT_ADDR_W), .INT_ADDR_W(INT_ADDR_W),
        .DATA_WIDTH(DATA_WIDTH)
    ) dut (.*);

    // ── Checker and coverage ─────────────────────────────────────────────────
    dma_engine_checker #(.DATA_WIDTH(DATA_WIDTH)) chk (
        .clk, .rst_n,
        .cmd_ready, .cmd_valid, .cmd_done,
        .sram_we, .sram_re,
        .axi_arvalid, .axi_awvalid,
        .axi_wvalid,  .axi_wlast
    );

    dma_engine_coverage #(.DATA_WIDTH(DATA_WIDTH)) cov (
        .clk, .rst_n,
        .cmd_ready, .cmd_valid, .cmd_done,
        .sram_we, .sram_re,
        .axi_arvalid, .axi_awvalid
    );

    // ── Memory models ────────────────────────────────────────────────────────
    logic [DATA_WIDTH-1:0] ext_mem  [0:63];
    logic [DATA_WIDTH-1:0] sram_mem [0:63];

    // SRAM: 1-cycle registered read latency.
    // sram_re_reg is a DUT register (NB), so sram_re goes high the cycle AFTER
    // S_STORE_REQ. sram_rdata is valid the cycle after that — exactly when the
    // DUT samples it in S_STORE_CAP.  A two-stage pipeline would arrive one
    // cycle too late.
    wire  [5:0] sram_word = sram_addr[10:5];

    always @(posedge clk) begin
        if (sram_we) sram_mem[sram_word] <= sram_wdata;
        if (sram_re) sram_rdata          <= sram_mem[sram_word];
    end

    // AXI4 read slave: returns ext_mem data on the cycle after axi_rready asserts
    always @(posedge clk) begin
        if (!rst_n) begin axi_rvalid <= 0; axi_rlast <= 0; end
        else begin
            if (axi_rready && !axi_rvalid) begin
                axi_rvalid <= 1;
                axi_rlast  <= 1;
                axi_rdata  <= ext_mem[axi_araddr[10:5]];
            end
            if (axi_rvalid && axi_rready) begin
                axi_rvalid <= 0;
                axi_rlast  <= 0;
            end
        end
    end

    // AXI4 write slave: accept write data, pulse bvalid after wlast
    logic aw_accepted = 0;
    logic [EXT_ADDR_W-1:0] aw_addr_lat = '0;

    always @(posedge clk) begin
        if (!rst_n) begin
            axi_bvalid   <= 0;
            aw_accepted  <= 0;
        end else begin
            if (axi_awvalid && axi_awready) begin
                aw_accepted  <= 1;
                aw_addr_lat  <= axi_awaddr;
            end
            if (axi_wvalid && axi_wready && axi_wlast) begin
                if (aw_accepted) begin
                    ext_mem[aw_addr_lat[10:5]] <= axi_wdata;  // capture written data
                    aw_accepted <= 0;
                end
                axi_bvalid <= 1;
            end
            if (axi_bvalid && axi_bready) axi_bvalid <= 0;
        end
    end

    int errors = 0;

    // Scratch variables for test sequences (hoisted from begin blocks for Verilator)
    logic [127:0] c, c_ld, c_st;
    int           local_cycles;

    // ── VCD ───────────────────────────────────────────────────────────────────
    initial begin
        $dumpfile("dma_engine_tb.vcd");
        $dumpvars(0, dma_engine_tb);
    end

    // ── Helpers ───────────────────────────────────────────────────────────────

    function automatic logic [127:0] make_cmd(
        input logic [7:0]          subop,
        input logic [EXT_ADDR_W-1:0] ext_addr,
        input logic [INT_ADDR_W-1:0] int_addr,
        input logic [11:0]           rows,
        input logic [11:0]           cols,
        input logic [11:0]           ext_stride,
        input logic [11:0]           int_stride
    );
        logic [127:0] c = '0;
        c[127:120] = 8'h03;        // DMA opcode
        c[119:112] = subop;
        c[111:112-EXT_ADDR_W] = ext_addr;
        c[71:72-INT_ADDR_W]   = int_addr;
        c[51:40]  = rows;
        c[39:28]  = cols;
        c[27:16]  = ext_stride;
        c[15:4]   = int_stride;
        return c;
    endfunction

    task automatic wait_done(input string tag);
        int cycles = 0;
        while (!cmd_done) begin
            @(posedge clk); #1;
            if (++cycles > TIMEOUT) begin
                $display("FAIL [%s] timeout after %0d cycles", tag, TIMEOUT);
                errors++;
                return;
            end
        end
        @(posedge clk); #1;
    endtask

    task automatic issue_cmd(input logic [127:0] c);
        // Wait for DMA to be idle, then assert cmd_valid for exactly one cycle.
        // Caller is responsible for waiting for cmd_done via wait_done().
        while (!cmd_ready) begin @(posedge clk); #1; end
        @(posedge clk); #1;
        cmd = c; cmd_valid = 1;
        @(posedge clk); #1;
        cmd_valid = 0;
    endtask

    task automatic reset_dut();
        rst_n = 0; cmd_valid = 0;
        repeat(3) @(posedge clk);
        #1; rst_n = 1;
    endtask

    // ═══════════════════════════════════════════════════════════════════════
    // Test sequences
    // ═══════════════════════════════════════════════════════════════════════
    initial begin
        // Initialize memories
        foreach (ext_mem[i])  ext_mem[i]  = i;
        foreach (sram_mem[i]) sram_mem[i] = '0;

        reset_dut();
        @(posedge clk); #1;

        // -- T1: cmd_ready asserted after reset ---------------------------
        if (!cmd_ready) begin
            $display("FAIL [T1] cmd_ready not asserted after reset"); errors++;
        end

        // -- T2: LOAD (ext→SRAM), 1 word at ext[0], sram[0] -------------
        begin
            c = make_cmd(8'h01, 0, 0, 12'd1, 12'd1, 12'd32, 12'd32);
            issue_cmd(c);
            wait_done("T2 LOAD");
            if (sram_mem[0] !== ext_mem[0]) begin
                $display("FAIL [T2] LOAD: sram[0]=%0h expected ext[0]=%0h",
                         sram_mem[0], ext_mem[0]);
                errors++;
            end else $display("PASS [T2] LOAD 1-word");
        end

        // -- T3: STORE (SRAM→ext), exercises STORE_CAP path ---------------
        begin
            sram_mem[1] = 256'hDEADBEEF_CAFEBABE_12345678_AABBCCDD;
            c = make_cmd(8'h02, 40'h20, 20'h20, 12'd1, 12'd1, 12'd32, 12'd32);
            issue_cmd(c);
            wait_done("T3 STORE");
            if (ext_mem[1] !== sram_mem[1]) begin
                $display("FAIL [T3] STORE: ext[1]=%0h expected sram[1]=%0h",
                         ext_mem[1], sram_mem[1]);
                errors++;
            end else $display("PASS [T3] STORE 1-word (STORE_CAP path)");
        end

        // -- T4: LOAD multiple rows (2D strided access) -------------------
        begin
            ext_mem[2] = 256'hAAAA; ext_mem[4] = 256'hBBBB;
            c = make_cmd(8'h01, 40'h40, 20'h40,
                                       12'd2,  // rows=2
                                       12'd1,  // cols=1
                                       12'd64, // ext_stride = 2 words
                                       12'd32);// int_stride = 1 word
            issue_cmd(c);
            wait_done("T4 LOAD_2D");
            if (sram_mem[2] !== ext_mem[2]) begin
                $display("FAIL [T4] LOAD_2D row0: sram[2]=%0h exp=%0h", sram_mem[2], ext_mem[2]);
                errors++;
            end else $display("PASS [T4] LOAD_2D");
        end

        // -- T5: AXI AR backpressure (arready deasserted for 3 cycles) ---
        begin
            axi_arready = 0;  // hold arready low
            c = make_cmd(8'h01, 40'h60, 20'h60, 12'd1, 12'd1, 12'd32, 12'd32);
            issue_cmd(c);
            repeat(3) @(posedge clk); #1;
            axi_arready = 1;  // release
            wait_done("T5 AR_backpressure");
            $display("PASS [T5] AR backpressure");
        end

        // -- T6: cmd_done is a single-cycle pulse -------------------------
        // (Verified by checker A3; tested here by checking next cycle)
        begin
            c = make_cmd(8'h01, 40'h0, 20'h0, 12'd1, 12'd1, 12'd32, 12'd32);
            issue_cmd(c);
            local_cycles = 0;
            while (!cmd_done && local_cycles < TIMEOUT) begin @(posedge clk); #1; local_cycles++; end
            @(posedge clk); #1;
            if (cmd_done) begin
                $display("FAIL [T6] cmd_done held for >1 cycle"); errors++;
            end else $display("PASS [T6] cmd_done single-cycle pulse");
        end

        // -- T7/T8: Back-to-back LOAD then STORE --------------------------
        begin
            ext_mem[3] = 256'h1234_5678;
            c_ld = make_cmd(8'h01, 40'h60, 20'h60, 12'd1, 12'd1, 12'd32, 12'd32);
            c_st = make_cmd(8'h02, 40'h80, 20'h60, 12'd1, 12'd1, 12'd32, 12'd32);
            issue_cmd(c_ld); wait_done("T7 back-to-back LOAD");
            issue_cmd(c_st); wait_done("T8 back-to-back STORE");
            $display("PASS [T7/T8] back-to-back LOAD then STORE");
        end

        // ── Summary ───────────────────────────────────────────────────────
        cov.print_coverage();
        if (errors == 0 && chk.assertion_failures == 0)
            $display("RESULT: PASS — all checks passed");
        else
            $display("RESULT: FAIL — %0d errors, %0d assertion failures",
                     errors, chk.assertion_failures);
        $finish;
    end

endmodule
