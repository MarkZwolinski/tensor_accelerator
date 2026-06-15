// test_fm.sv — MCY mutation-coverage formal wrapper for dma_engine
// Derived from dma_engine_formal.sv with all async2sync fixes applied.
`timescale 1ns/1ps
module dma_engine_formal (
    input  logic         clk,
    input  logic         rst_n,

    input  logic [127:0] cmd,
    input  logic         cmd_valid,
    output logic         cmd_ready,
    output logic         cmd_done,

    output logic [19:0]  sram_addr,
    output logic [255:0] sram_wdata,
    input  logic [255:0] sram_rdata,
    output logic         sram_we,
    output logic         sram_re,
    input  logic         sram_ready,

    output logic [39:0]  axi_awaddr,
    output logic [7:0]   axi_awlen,
    output logic         axi_awvalid,
    input  logic         axi_awready,
    output logic [255:0] axi_wdata,
    output logic         axi_wlast,
    output logic         axi_wvalid,
    input  logic         axi_wready,
    input  logic [1:0]   axi_bresp,
    input  logic         axi_bvalid,
    output logic         axi_bready,

    output logic [39:0]  axi_araddr,
    output logic [7:0]   axi_arlen,
    output logic         axi_arvalid,
    input  logic         axi_arready,
    input  logic [255:0] axi_rdata,
    input  logic         axi_rlast,
    input  logic         axi_rvalid,
    output logic         axi_rready
);

    dma_engine #(
        .EXT_ADDR_W(40),
        .INT_ADDR_W(20),
        .DATA_WIDTH(256),
        .MAX_BURST (16)
    ) dut (.*);

    reg f_past_valid = 0;
    always @(posedge clk) f_past_valid <= 1;

    // Force reset at step 0; single-reset model prevents re-assertion
    always @(posedge clk)
        if (!f_past_valid) assume (!rst_n);
    always @(posedge clk)
        if (f_past_valid) assume (rst_n || !$past(rst_n));

    // A1: SRAM never simultaneously reads and writes
    always @(posedge clk)
        if (rst_n) assert (!(sram_we && sram_re));

    // A2: cmd_ready deasserts after handshake (gate with $past(rst_n))
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n))
            if ($past(cmd_ready && cmd_valid))
                assert (!cmd_ready);

    // A3: cmd_done is a single-cycle pulse
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n))
            if ($past(cmd_done))
                assert (!cmd_done);

    // A4: AXI read and write address channels are mutually exclusive
    always @(posedge clk)
        if (rst_n) assert (!(axi_arvalid && axi_awvalid));

    // A5: cmd_done and cmd_ready are simultaneously asserted (same-cycle)
    always @(posedge clk)
        if (rst_n && cmd_done) assert (cmd_ready);

endmodule
