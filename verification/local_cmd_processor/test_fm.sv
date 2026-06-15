`default_nettype none
module local_cmd_processor_formal;
    localparam INSTR_WIDTH   = 128;
    localparam INSTR_DEPTH   = 4096;
    localparam MAX_LOOP_NEST = 4;
    localparam SRAM_ADDR_W   = 20;

    logic                         clk, rst_n;
    logic                         start;
    logic [SRAM_ADDR_W-1:0]       start_pc;
    logic                         busy, done, error;
    logic [SRAM_ADDR_W-1:0]       imem_addr;
    logic [INSTR_WIDTH-1:0]       imem_data;
    logic                         imem_re, imem_valid;
    logic [INSTR_WIDTH-1:0]       mxu_cmd;
    logic                         mxu_valid, mxu_ready, mxu_done;
    logic [INSTR_WIDTH-1:0]       vpu_cmd;
    logic                         vpu_valid, vpu_ready, vpu_done;
    logic [INSTR_WIDTH-1:0]       dma_cmd;
    logic                         dma_valid, dma_ready, dma_done;
    logic                         global_sync_in, sync_request, sync_grant;

    local_cmd_processor dut (.*);

    logic f_past_valid = 1'b0;
    always @(posedge clk) f_past_valid <= 1'b1;

    always @(posedge clk) if (!f_past_valid) assume (!rst_n);
    always @(posedge clk) if (f_past_valid)  assume (rst_n || !$past(rst_n));

    logic [2:0] f_imem_wait = '0;
    always @(posedge clk) begin
        if (!rst_n) f_imem_wait <= '0;
        else if (imem_re && !imem_valid)
            f_imem_wait <= f_imem_wait + 3'd1;
        else
            f_imem_wait <= '0;
    end
    always @(posedge clk) if (f_past_valid) assume (f_imem_wait < 3'd4);

    logic [2:0] f_mxu_wait = '0, f_vpu_wait = '0, f_dma_wait = '0;
    always @(posedge clk) begin
        if (!rst_n) begin
            f_mxu_wait <= '0; f_vpu_wait <= '0; f_dma_wait <= '0;
        end else begin
            f_mxu_wait <= (mxu_valid && !mxu_ready) ? f_mxu_wait + 3'd1 : '0;
            f_vpu_wait <= (vpu_valid && !vpu_ready) ? f_vpu_wait + 3'd1 : '0;
            f_dma_wait <= (dma_valid && !dma_ready) ? f_dma_wait + 3'd1 : '0;
        end
    end
    always @(posedge clk) if (f_past_valid) begin
        assume (f_mxu_wait < 3'd4);
        assume (f_vpu_wait < 3'd4);
        assume (f_dma_wait < 3'd4);
    end

    always @(posedge clk)
        if (f_past_valid && rst_n && $past(!rst_n))
            assert (!busy && !done && !error);

    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(done))
            assert (!done);

    always @(posedge clk)
        if (rst_n)
            assert ($onehot0({mxu_valid, vpu_valid, dma_valid}));

    always @(posedge clk)
        if (f_past_valid && rst_n && !busy)
            assert (!mxu_valid && !vpu_valid && !dma_valid);

    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && sync_request && !$past(sync_request))
            assert ($past(busy));

endmodule
`default_nettype wire
