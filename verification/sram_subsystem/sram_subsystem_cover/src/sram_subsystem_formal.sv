`default_nettype none
module sram_subsystem_formal #(
    parameter NUM_BANKS  = 16,
    parameter BANK_DEPTH = 4096,
    parameter DATA_WIDTH = 256,
    parameter ADDR_WIDTH = 20
);
    logic                    clk, rst_n;

    // Port A: MXU weight read
    logic [ADDR_WIDTH-1:0]   mxu_w_addr;
    logic                    mxu_w_re;
    logic [DATA_WIDTH-1:0]   mxu_w_rdata;
    logic                    mxu_w_ready;

    // Port B: MXU activation read
    logic [ADDR_WIDTH-1:0]   mxu_a_addr;
    logic                    mxu_a_re;
    logic [DATA_WIDTH-1:0]   mxu_a_rdata;
    logic                    mxu_a_ready;

    // Port C: MXU result write
    logic [ADDR_WIDTH-1:0]   mxu_o_addr;
    logic [DATA_WIDTH-1:0]   mxu_o_wdata;
    logic                    mxu_o_we;
    logic                    mxu_o_ready;

    // Port D: VPU read/write
    logic [ADDR_WIDTH-1:0]   vpu_addr;
    logic [DATA_WIDTH-1:0]   vpu_wdata;
    logic                    vpu_we, vpu_re;
    logic [DATA_WIDTH-1:0]   vpu_rdata;
    logic                    vpu_ready;

    // Port E: DMA read/write
    logic [ADDR_WIDTH-1:0]   dma_addr;
    logic [DATA_WIDTH-1:0]   dma_wdata;
    logic                    dma_we, dma_re;
    logic [DATA_WIDTH-1:0]   dma_rdata;
    logic                    dma_ready;

    sram_subsystem #(
        .NUM_BANKS (NUM_BANKS),
        .BANK_DEPTH(BANK_DEPTH),
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) dut (.*);

    logic f_past_valid = 1'b0;
    always @(posedge clk) f_past_valid <= 1'b1;

    always @(posedge clk) if (!f_past_valid) assume (!rst_n);
    always @(posedge clk) if (f_past_valid)  assume (rst_n || !$past(rst_n));

    // Constrain: each port issues at most one operation type at a time
    always @(posedge clk) assume (!(vpu_we && vpu_re));
    always @(posedge clk) assume (!(dma_we && dma_re));

    // A1: ready only fires when the corresponding request is active (same-cycle)
    // (grant signals are combinational from the arbiter, not registered)
    always @(posedge clk)
        if (rst_n) assert (!mxu_w_ready || mxu_w_re);

    always @(posedge clk)
        if (rst_n) assert (!mxu_a_ready || mxu_a_re);

    always @(posedge clk)
        if (rst_n) assert (!mxu_o_ready || mxu_o_we);

    always @(posedge clk)
        if (rst_n) assert (!vpu_ready || vpu_we || vpu_re);

    always @(posedge clk)
        if (rst_n) assert (!dma_ready || dma_we || dma_re);

    // Cover: each port gets a ready
    always @(posedge clk)
        if (f_past_valid && rst_n) cover (mxu_w_ready);
    always @(posedge clk)
        if (f_past_valid && rst_n) cover (mxu_a_ready);
    always @(posedge clk)
        if (f_past_valid && rst_n) cover (vpu_ready);
    always @(posedge clk)
        if (f_past_valid && rst_n) cover (dma_ready);

endmodule
`default_nettype wire
