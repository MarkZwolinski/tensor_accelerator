// dma_engine_formal.sv — Formal verification wrapper (methodology Steps 6–8)
// Used by sby prove/cover/bmc targets and as template for MCY test_fm.sv.
`timescale 1ns/1ps
module dma_engine_formal #(
    parameter EXT_ADDR_W = 40,
    parameter INT_ADDR_W = 20,
    parameter DATA_WIDTH = 256,
    parameter MAX_BURST  = 16
)(
    input  logic                    clk,
    input  logic                    rst_n,

    // Command interface
    input  logic [127:0]            cmd,
    input  logic                    cmd_valid,
    output logic                    cmd_ready,
    output logic                    cmd_done,

    // SRAM interface
    output logic [INT_ADDR_W-1:0]   sram_addr,
    output logic [DATA_WIDTH-1:0]   sram_wdata,
    input  logic [DATA_WIDTH-1:0]   sram_rdata,
    output logic                    sram_we,
    output logic                    sram_re,
    input  logic                    sram_ready,

    // AXI write
    output logic [EXT_ADDR_W-1:0]   axi_awaddr,
    output logic [7:0]               axi_awlen,
    output logic                     axi_awvalid,
    input  logic                     axi_awready,
    output logic [DATA_WIDTH-1:0]    axi_wdata,
    output logic                     axi_wlast,
    output logic                     axi_wvalid,
    input  logic                     axi_wready,
    input  logic [1:0]               axi_bresp,
    input  logic                     axi_bvalid,
    output logic                     axi_bready,

    // AXI read
    output logic [EXT_ADDR_W-1:0]   axi_araddr,
    output logic [7:0]               axi_arlen,
    output logic                     axi_arvalid,
    input  logic                     axi_arready,
    input  logic [DATA_WIDTH-1:0]    axi_rdata,
    input  logic                     axi_rlast,
    input  logic                     axi_rvalid,
    output logic                     axi_rready
);

    // ── DUT instantiation ────────────────────────────────────────────────────
    dma_engine #(
        .EXT_ADDR_W(EXT_ADDR_W),
        .INT_ADDR_W(INT_ADDR_W),
        .DATA_WIDTH(DATA_WIDTH),
        .MAX_BURST (MAX_BURST)
    ) dut (.*);

    // ── $past guard and reset constraints ───────────────────────────────────
    reg f_past_valid = 0;
    always @(posedge clk) f_past_valid <= 1;

    // Force reset at time 0 (BMC/prove basecase starts from known-good state).
    always @(posedge clk)
        if (!f_past_valid) assume (!rst_n);

    // Single-reset model: once rst_n rises it stays high.
    // Prevents Yosys async2sync from detecting spurious falling edges at
    // posedges (cc:107 = prev_high && now_low becomes 0 when rst_n can't fall).
    always @(posedge clk)
        if (f_past_valid) assume (rst_n || !$past(rst_n));

    // ── A1: SRAM never simultaneously reads and writes ────────────────────
    always @(posedge clk) begin
        if (rst_n)
            assert (!(sram_we && sram_re));
    end

    // ── A2: cmd_ready deasserts the cycle after a command is accepted ──────
    // Gate with $past(rst_n): exclude the cycle immediately after reset exits
    // (DUT was in reset when cmd_valid was seen so no real handshake occurred).
    always @(posedge clk) begin
        if (f_past_valid && rst_n && $past(rst_n)) begin
            if ($past(cmd_ready && cmd_valid))
                assert (!cmd_ready);
        end
    end

    // ── A3: cmd_done is a single-cycle pulse ──────────────────────────────
    always @(posedge clk) begin
        if (f_past_valid && rst_n && $past(rst_n)) begin
            if ($past(cmd_done))
                assert (!cmd_done);
        end
    end

    // ── A4: AXI read and write address channels are mutually exclusive ─────
    always @(posedge clk) begin
        if (rst_n)
            assert (!(axi_arvalid && axi_awvalid));
    end

    // ── A5: cmd_done and cmd_ready are asserted simultaneously ────────────
    // S_DONE sets done_reg=1 and state→S_IDLE in the same posedge, so
    // cmd_ready (combinational from state==S_IDLE) is 1 whenever cmd_done=1.
    always @(posedge clk) begin
        if (rst_n && cmd_done)
            assert (cmd_ready);
    end

    // ── Cover: reachable interesting states ───────────────────────────────
    always @(posedge clk) begin
        cover (rst_n && cmd_done);               // complete DMA transfer
        cover (rst_n && sram_we);                // LOAD path wrote to SRAM
        cover (rst_n && sram_re);                // STORE path read from SRAM
        cover (rst_n && axi_arvalid);            // AXI read channel active
        cover (rst_n && axi_awvalid);            // AXI write channel active
        cover (rst_n && !cmd_ready && cmd_valid);// backpressure seen
    end

`ifdef FORMAL_BMC
    // Constrain initial state to reset
    initial assume (!rst_n);

    // Count how many times cmd_done has fired
    reg [7:0] f_done_count = 0;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            f_done_count <= 0;
        else if (cmd_done)
            f_done_count <= f_done_count + 1;
    end

    // Reachability covers — verify BMC finds these states
    always @(posedge clk) begin
        cover (f_done_count >= 1);   // at least one complete transfer
        cover (f_done_count >= 2);   // back-to-back transfers
    end
`endif

endmodule
