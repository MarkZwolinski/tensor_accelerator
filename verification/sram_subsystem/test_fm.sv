`default_nettype none
module sram_subsystem_formal;
    localparam NUM_BANKS  = 16;
    localparam BANK_DEPTH = 4096;
    localparam DATA_WIDTH = 256;
    localparam ADDR_WIDTH = 20;

    logic                    clk, rst_n;
    logic [ADDR_WIDTH-1:0]   mxu_w_addr;
    logic                    mxu_w_re;
    logic [DATA_WIDTH-1:0]   mxu_w_rdata;
    logic                    mxu_w_ready;
    logic [ADDR_WIDTH-1:0]   mxu_a_addr;
    logic                    mxu_a_re;
    logic [DATA_WIDTH-1:0]   mxu_a_rdata;
    logic                    mxu_a_ready;
    logic [ADDR_WIDTH-1:0]   mxu_o_addr;
    logic [DATA_WIDTH-1:0]   mxu_o_wdata;
    logic                    mxu_o_we;
    logic                    mxu_o_ready;
    logic [ADDR_WIDTH-1:0]   vpu_addr;
    logic [DATA_WIDTH-1:0]   vpu_wdata;
    logic                    vpu_we, vpu_re;
    logic [DATA_WIDTH-1:0]   vpu_rdata;
    logic                    vpu_ready;
    logic [ADDR_WIDTH-1:0]   dma_addr;
    logic [DATA_WIDTH-1:0]   dma_wdata;
    logic                    dma_we, dma_re;
    logic [DATA_WIDTH-1:0]   dma_rdata;
    logic                    dma_ready;

    sram_subsystem dut (.*);

    logic f_past_valid = 1'b0;
    always @(posedge clk) f_past_valid <= 1'b1;

    always @(posedge clk) if (!f_past_valid) assume (!rst_n);
    always @(posedge clk) if (f_past_valid)  assume (rst_n || !$past(rst_n));

    always @(posedge clk) assume (!(vpu_we && vpu_re));
    always @(posedge clk) assume (!(dma_we && dma_re));

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

endmodule
`default_nettype wire
