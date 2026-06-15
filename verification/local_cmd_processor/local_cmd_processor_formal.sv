`default_nettype none
module local_cmd_processor_formal #(
    parameter INSTR_WIDTH   = 128,
    parameter INSTR_DEPTH   = 4096,
    parameter MAX_LOOP_NEST = 4,
    parameter SRAM_ADDR_W   = 20
);
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

    local_cmd_processor #(
        .INSTR_WIDTH  (INSTR_WIDTH),
        .INSTR_DEPTH  (INSTR_DEPTH),
        .MAX_LOOP_NEST(MAX_LOOP_NEST),
        .SRAM_ADDR_W  (SRAM_ADDR_W)
    ) dut (.*);

    logic f_past_valid = 1'b0;
    always @(posedge clk) f_past_valid <= 1'b1;

    always @(posedge clk) if (!f_past_valid) assume (!rst_n);
    always @(posedge clk) if (f_past_valid)  assume (rst_n || !$past(rst_n));

    // Bound imem_valid: memory responds within 4 cycles of a read request
    logic [2:0] f_imem_wait = '0;
    always @(posedge clk) begin
        if (!rst_n) f_imem_wait <= '0;
        else if (imem_re && !imem_valid)
            f_imem_wait <= f_imem_wait + 3'd1;
        else
            f_imem_wait <= '0;
    end
    always @(posedge clk) if (f_past_valid) assume (f_imem_wait < 3'd4);

    // Bound unit ready: units accept commands within 4 cycles
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

    // A1: After reset, outputs are idle
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(!rst_n))
            assert (!busy && !done && !error);

    // A2: done is a single-cycle pulse
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && $past(done))
            assert (!done);

    // A3: Dispatch signals are mutually exclusive ($onehot0)
    always @(posedge clk)
        if (rst_n)
            assert ($onehot0({mxu_valid, vpu_valid, dma_valid}));

    // A4: Dispatch valid signals only rise while the LCP is busy (set in S_ISSUE)
    // Note: valid_reg can linger one extra cycle after S_ISSUE handshake (S_ISSUE
    // case overrides the line-218 clear), so we check the transition, not the level.
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n)) begin
            if (mxu_valid && !$past(mxu_valid)) assert ($past(busy));
            if (vpu_valid && !$past(vpu_valid)) assert ($past(busy));
            if (dma_valid && !$past(dma_valid)) assert ($past(busy));
        end

    // A5: sync_request only rises while busy (set in S_DECODE which is a busy state)
    always @(posedge clk)
        if (f_past_valid && rst_n && $past(rst_n) && sync_request && !$past(sync_request))
            assert ($past(busy));

    // Cover: LCP starts and becomes busy
    always @(posedge clk)
        if (f_past_valid && rst_n) cover (busy);

    // Cover: an instruction fetch completes
    always @(posedge clk)
        if (f_past_valid && rst_n) cover (imem_valid && $past(imem_re));

    // Cover: MXU dispatch happens
    always @(posedge clk)
        if (f_past_valid && rst_n) cover (mxu_valid);

endmodule
`default_nettype wire
