`timescale 1ns/1ps
/*
 * Vector Unit Testbench
 * Tests basic VPU operations with corrected command encoding
 */

module tb_vector_unit;

    parameter LANES = 8;
    parameter DATA_WIDTH = 16;
    parameter VREG_COUNT = 32;
    parameter SRAM_ADDR_W = 20;
    parameter CLK = 10;
    
    reg clk, rst_n;
    reg [127:0] cmd;
    reg cmd_valid;
    wire cmd_ready, cmd_done;
    wire [SRAM_ADDR_W-1:0] sram_addr;
    wire [LANES*DATA_WIDTH-1:0] sram_wdata;
    reg [LANES*DATA_WIDTH-1:0] sram_rdata;
    wire sram_we, sram_re;
    reg sram_ready;
    
    // VPU opcodes
    localparam VOP_ADD          = 8'h01;
    localparam VOP_MADD         = 8'h04;
    localparam VOP_ADD_BCAST    = 8'h06;
    localparam VOP_BIAS_ADD     = 8'h07;
    localparam VOP_RELU         = 8'h10;
    localparam VOP_GELU         = 8'h11;
    localparam VOP_SILU         = 8'h12;
    localparam VOP_SIGMOID      = 8'h13;
    localparam VOP_TANH         = 8'h14;
    localparam VOP_SUM          = 8'h20;
    localparam VOP_MAX          = 8'h21;
    localparam VOP_MIN          = 8'h22;
    localparam VOP_GLOBAL_AVG   = 8'h23;
    localparam VOP_ZERO         = 8'h34;
    localparam VOP_SCALE        = 8'h35;
    localparam VOP_SCALE_Q8     = 8'h37;
    localparam VOP_SOFTMAX_P1   = 8'h40;
    localparam VOP_LAYERNORM_MEAN = 8'h51;
    
    vector_unit #(
        .LANES(LANES), .DATA_WIDTH(DATA_WIDTH), .VREG_COUNT(VREG_COUNT), .SRAM_ADDR_W(SRAM_ADDR_W)
    ) dut (
        .clk(clk), .rst_n(rst_n),
        .cmd(cmd), .cmd_valid(cmd_valid), .cmd_ready(cmd_ready), .cmd_done(cmd_done),
        .sram_addr(sram_addr), .sram_wdata(sram_wdata), .sram_rdata(sram_rdata),
        .sram_we(sram_we), .sram_re(sram_re), .sram_ready(sram_ready)
    );
    
    initial clk = 0;
    always #(CLK/2) clk = ~clk;
    
    // Command builder: [127:120]=opcode, [119:112]=subop, [111:107]=vd, [106:102]=vs1, [101:97]=vs2
    function [127:0] make_cmd;
        input [7:0] subop;
        input [4:0] vd, vs1, vs2;
    begin
        make_cmd = 0;
        make_cmd[127:120] = 8'h02;    // VPU opcode
        make_cmd[119:112] = subop;
        make_cmd[111:107] = vd;
        make_cmd[106:102] = vs1;
        make_cmd[101:97]  = vs2;
    end
    endfunction

    // Variant that also sets cmd[47:32] = imm (used by SCALE/SCALE_Q8)
    function [127:0] make_cmd_imm;
        input [7:0] subop;
        input [4:0] vd, vs1, vs2;
        input [15:0] imm;
    begin
        make_cmd_imm = 0;
        make_cmd_imm[127:120] = 8'h02;
        make_cmd_imm[119:112] = subop;
        make_cmd_imm[111:107] = vd;
        make_cmd_imm[106:102] = vs1;
        make_cmd_imm[101:97]  = vs2;
        make_cmd_imm[47:32]   = imm;
    end
    endfunction
    
    task issue_cmd;
        input [127:0] c;
    begin
        cmd = c; cmd_valid = 1;
        @(posedge clk);
        while (!cmd_ready) @(posedge clk);
        @(posedge clk);
        cmd_valid = 0;
        while (!cmd_done) @(posedge clk);
        @(posedge clk);
    end
    endtask
    
    task init_vrf;
        integer k;
    begin
        for (k = 0; k < VREG_COUNT; k = k + 1) dut.vrf[k] = 0;
    end
    endtask
    
    task print_vreg;
        input [4:0] idx;
    begin
        $display("    V%0d = [%d, %d, %d, %d, %d, %d, %d, %d]", idx,
            $signed(dut.vrf[idx][7*DATA_WIDTH +: DATA_WIDTH]),
            $signed(dut.vrf[idx][6*DATA_WIDTH +: DATA_WIDTH]),
            $signed(dut.vrf[idx][5*DATA_WIDTH +: DATA_WIDTH]),
            $signed(dut.vrf[idx][4*DATA_WIDTH +: DATA_WIDTH]),
            $signed(dut.vrf[idx][3*DATA_WIDTH +: DATA_WIDTH]),
            $signed(dut.vrf[idx][2*DATA_WIDTH +: DATA_WIDTH]),
            $signed(dut.vrf[idx][1*DATA_WIDTH +: DATA_WIDTH]),
            $signed(dut.vrf[idx][0*DATA_WIDTH +: DATA_WIDTH]));
    end
    endtask
    
    integer errors;
    reg signed [DATA_WIDTH-1:0] val;
    
    initial begin
        $display("");
        $display("╔══════════════════════════════════════════════════════════════╗");
        $display("║              Vector Unit Testbench                           ║");
        $display("╚══════════════════════════════════════════════════════════════╝");
        
        rst_n = 0; cmd = 0; cmd_valid = 0; sram_ready = 1; sram_rdata = 0;
        errors = 0;
        
        repeat(5) @(posedge clk);
        rst_n = 1;
        repeat(3) @(posedge clk);
        init_vrf();
        
        //======================================================================
        // TEST 1: Vector ADD
        //======================================================================
        $display("");
        $display("[TEST 1] Vector ADD: V2 = V0 + V1");
        
        dut.vrf[0] = {16'd8, 16'd7, 16'd6, 16'd5, 16'd4, 16'd3, 16'd2, 16'd1};
        dut.vrf[1] = {16'd80, 16'd70, 16'd60, 16'd50, 16'd40, 16'd30, 16'd20, 16'd10};
        print_vreg(0);
        print_vreg(1);
        
        issue_cmd(make_cmd(VOP_ADD, 5'd2, 5'd0, 5'd1));  // vd=2, vs1=0, vs2=1
        
        print_vreg(2);
        val = $signed(dut.vrf[2][0 +: DATA_WIDTH]);
        if (val == 11) $display("  PASS: V2[0] = %0d (1+10)", val);
        else begin $display("  FAIL: V2[0] = %0d, expected 11", val); errors = errors + 1; end
        
        val = $signed(dut.vrf[2][7*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 88) $display("  PASS: V2[7] = %0d (8+80)", val);
        else begin $display("  FAIL: V2[7] = %0d, expected 88", val); errors = errors + 1; end

        #(CLK * 5);

        //======================================================================
        // TEST 2: ReLU
        //======================================================================
        $display("");
        $display("[TEST 2] ReLU: V16 = relu(V5)");
        
        init_vrf();
        dut.vrf[5] = {16'sh0007, 16'sh0005, 16'sh0003, 16'sh0001, 16'sh0000, 16'shFFFF, 16'shFFFD, 16'shFFFB};
        print_vreg(5);
        
        issue_cmd(make_cmd(VOP_RELU, 5'd16, 5'd5, 5'd0));  // vd=16, vs1=5
        
        print_vreg(16);
        val = $signed(dut.vrf[16][0 +: DATA_WIDTH]);
        if (val == 0) $display("  PASS: relu(-5) = 0");
        else begin $display("  FAIL: relu(-5) = %0d, expected 0", val); errors = errors + 1; end
        
        val = $signed(dut.vrf[16][7*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 7) $display("  PASS: relu(7) = 7");
        else begin $display("  FAIL: relu(7) = %0d, expected 7", val); errors = errors + 1; end

        #(CLK * 5);

        //======================================================================
        // TEST 3: Reduction SUM
        //======================================================================
        $display("");
        $display("[TEST 3] Reduction SUM: V0 = sum(V3)");
        
        init_vrf();
        dut.vrf[3] = {16'd8, 16'd7, 16'd6, 16'd5, 16'd4, 16'd3, 16'd2, 16'd1};
        print_vreg(3);
        
        issue_cmd(make_cmd(VOP_SUM, 5'd0, 5'd3, 5'd0));  // vd=0, vs1=3
        
        print_vreg(0);
        val = $signed(dut.vrf[0][0 +: DATA_WIDTH]);
        if (val == 36) $display("  PASS: sum([1..8]) = %0d", val);
        else begin $display("  FAIL: sum = %0d, expected 36", val); errors = errors + 1; end

        #(CLK * 5);

        //======================================================================
        // TEST 4: ZERO
        //======================================================================
        $display("");
        $display("[TEST 4] Vector ZERO: V20 = 0");
        
        dut.vrf[20] = {LANES{16'hFFFF}};
        $display("    Before: V20 = %h", dut.vrf[20]);
        
        issue_cmd(make_cmd(VOP_ZERO, 5'd20, 5'd0, 5'd0));  // vd=20
        
        $display("    After:  V20 = %h", dut.vrf[20]);
        if (dut.vrf[20] == 0) $display("  PASS: V20 zeroed");
        else begin $display("  FAIL: V20 not zero"); errors = errors + 1; end

        //======================================================================
        // TEST 5: Sigmoid
        // PWL: y = clamp(x + 16384, 0, 32767)
        //   sigmoid(0)      = 16384  (midpoint)
        //   sigmoid(32767)  = 32767  (saturated high)
        //   sigmoid(-32768) = 0      (saturated low)
        //======================================================================
        $display("");
        $display("[TEST 5] Sigmoid: V22 = sigmoid(V6)");

        init_vrf();
        // lane[0]=0, lane[1]=32767 (max), lane[2]=-32768 (min)
        dut.vrf[6][0*DATA_WIDTH +: DATA_WIDTH] = 16'sh0000;
        dut.vrf[6][1*DATA_WIDTH +: DATA_WIDTH] = 16'sh7FFF;
        dut.vrf[6][2*DATA_WIDTH +: DATA_WIDTH] = 16'sh8000;

        issue_cmd(make_cmd(VOP_SIGMOID, 5'd22, 5'd6, 5'd0));

        val = $signed(dut.vrf[22][0*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 16384) $display("  PASS: sigmoid(0) = %0d", val);
        else begin $display("  FAIL: sigmoid(0) = %0d, expected 16384", val); errors = errors + 1; end

        val = $signed(dut.vrf[22][1*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 32767) $display("  PASS: sigmoid(32767) = %0d (saturated)", val);
        else begin $display("  FAIL: sigmoid(32767) = %0d, expected 32767", val); errors = errors + 1; end

        val = $signed(dut.vrf[22][2*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 0) $display("  PASS: sigmoid(-32768) = %0d (saturated)", val);
        else begin $display("  FAIL: sigmoid(-32768) = %0d, expected 0", val); errors = errors + 1; end

        #(CLK * 5);

        //======================================================================
        // TEST 6: Tanh
        // PWL: y = clamp(2*x, -32768, 32767)
        //   tanh(0)      = 0
        //   tanh(32767)  = 32767 (saturated high)
        //   tanh(-32768) = -32768 (saturated low)
        //======================================================================
        $display("");
        $display("[TEST 6] Tanh: V23 = tanh(V7)");

        init_vrf();
        dut.vrf[7][0*DATA_WIDTH +: DATA_WIDTH] = 16'sh0000;
        dut.vrf[7][1*DATA_WIDTH +: DATA_WIDTH] = 16'sh7FFF;
        dut.vrf[7][2*DATA_WIDTH +: DATA_WIDTH] = 16'sh8000;

        issue_cmd(make_cmd(VOP_TANH, 5'd23, 5'd7, 5'd0));

        val = $signed(dut.vrf[23][0*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 0) $display("  PASS: tanh(0) = %0d", val);
        else begin $display("  FAIL: tanh(0) = %0d, expected 0", val); errors = errors + 1; end

        val = $signed(dut.vrf[23][1*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 32767) $display("  PASS: tanh(32767) = %0d (saturated)", val);
        else begin $display("  FAIL: tanh(32767) = %0d, expected 32767", val); errors = errors + 1; end

        val = $signed(dut.vrf[23][2*DATA_WIDTH +: DATA_WIDTH]);
        if (val == -32768) $display("  PASS: tanh(-32768) = %0d (saturated)", val);
        else begin $display("  FAIL: tanh(-32768) = %0d, expected -32768", val); errors = errors + 1; end

        #(CLK * 5);

        //======================================================================
        // TEST 7: SiLU = x * sigmoid(x) >> 15
        //   silu(0)      = 0  (0 * sigmoid(0) = 0)
        //   silu(16384)  = 16383  (16384 * 32767 >> 15)
        //   silu(-32768) = 0  (sigmoid(-32768) = 0, so product = 0)
        //======================================================================
        $display("");
        $display("[TEST 7] SiLU: V24 = silu(V8)");

        init_vrf();
        dut.vrf[8][0*DATA_WIDTH +: DATA_WIDTH] = 16'sh0000;
        dut.vrf[8][1*DATA_WIDTH +: DATA_WIDTH] = 16'sh4000;  // 16384
        dut.vrf[8][2*DATA_WIDTH +: DATA_WIDTH] = 16'sh8000;  // -32768

        issue_cmd(make_cmd(VOP_SILU, 5'd24, 5'd8, 5'd0));

        val = $signed(dut.vrf[24][0*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 0) $display("  PASS: silu(0) = %0d", val);
        else begin $display("  FAIL: silu(0) = %0d, expected 0", val); errors = errors + 1; end

        val = $signed(dut.vrf[24][1*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 16383) $display("  PASS: silu(16384) = %0d", val);
        else begin $display("  FAIL: silu(16384) = %0d, expected 16383", val); errors = errors + 1; end

        val = $signed(dut.vrf[24][2*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 0) $display("  PASS: silu(-32768) = %0d (sigmoid saturated to 0)", val);
        else begin $display("  FAIL: silu(-32768) = %0d, expected 0", val); errors = errors + 1; end

        #(CLK * 5);

        //======================================================================
        // TEST 8: GELU = x * sigmoid(1.702*x) >> 15, 1.702 ≈ 27/16 = 1.6875
        //   gelu(0)      = 0
        //   gelu(16384)  = 16383  (arg = 27648 → sigmoid saturates → 32767)
        //   gelu(-16384) = 0  (arg = -27648 → sigmoid = 0 → product = 0)
        //======================================================================
        $display("");
        $display("[TEST 8] GELU: V25 = gelu(V9)");

        init_vrf();
        dut.vrf[9][0*DATA_WIDTH +: DATA_WIDTH] = 16'sh0000;
        dut.vrf[9][1*DATA_WIDTH +: DATA_WIDTH] = 16'sh4000;  // 16384
        dut.vrf[9][2*DATA_WIDTH +: DATA_WIDTH] = 16'shC000;  // -16384

        issue_cmd(make_cmd(VOP_GELU, 5'd25, 5'd9, 5'd0));

        val = $signed(dut.vrf[25][0*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 0) $display("  PASS: gelu(0) = %0d", val);
        else begin $display("  FAIL: gelu(0) = %0d, expected 0", val); errors = errors + 1; end

        val = $signed(dut.vrf[25][1*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 16383) $display("  PASS: gelu(16384) = %0d", val);
        else begin $display("  FAIL: gelu(16384) = %0d, expected 16383", val); errors = errors + 1; end

        val = $signed(dut.vrf[25][2*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 0) $display("  PASS: gelu(-16384) = %0d (scaled arg saturates sigmoid to 0)", val);
        else begin $display("  FAIL: gelu(-16384) = %0d, expected 0", val); errors = errors + 1; end

        #(CLK * 5);

        //======================================================================
        // TEST 9: MADD: V26 = V10 * V11 + V26
        //   V10 = [2, 4], V11 = [3, 5], V26 (initial) = [10, 20]
        //   Result: [2*3+10, 4*5+20] = [16, 40]
        //======================================================================
        $display("");
        $display("[TEST 9] MADD: V26 = V10 * V11 + V26");

        init_vrf();
        dut.vrf[10][0*DATA_WIDTH +: DATA_WIDTH] = 16'sh0002;   // 2
        dut.vrf[10][1*DATA_WIDTH +: DATA_WIDTH] = 16'sh0004;   // 4
        dut.vrf[11][0*DATA_WIDTH +: DATA_WIDTH] = 16'sh0003;   // 3
        dut.vrf[11][1*DATA_WIDTH +: DATA_WIDTH] = 16'sh0005;   // 5
        dut.vrf[26][0*DATA_WIDTH +: DATA_WIDTH] = 16'sh000A;   // 10 (accumulator)
        dut.vrf[26][1*DATA_WIDTH +: DATA_WIDTH] = 16'sh0014;   // 20

        issue_cmd(make_cmd(VOP_MADD, 5'd26, 5'd10, 5'd11));

        val = $signed(dut.vrf[26][0*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 16) $display("  PASS: 2*3+10 = %0d", val);
        else begin $display("  FAIL: 2*3+10 = %0d, expected 16", val); errors = errors + 1; end

        val = $signed(dut.vrf[26][1*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 40) $display("  PASS: 4*5+20 = %0d", val);
        else begin $display("  FAIL: 4*5+20 = %0d, expected 40", val); errors = errors + 1; end

        #(CLK * 5);

        //======================================================================
        // TEST 10: BIAS_ADD and ADD_BCAST (both should be elementwise a+b)
        //   V12 = [100, 200], V13 = [7, 8]
        //   BIAS_ADD: V27 = [107, 208]
        //   ADD_BCAST: V28 = [107, 208]  (same ALU path)
        //======================================================================
        $display("");
        $display("[TEST 10] BIAS_ADD / ADD_BCAST: V27 = V12 + V13");

        init_vrf();
        dut.vrf[12][0*DATA_WIDTH +: DATA_WIDTH] = 16'sh0064;   // 100
        dut.vrf[12][1*DATA_WIDTH +: DATA_WIDTH] = 16'sh00C8;   // 200
        dut.vrf[13][0*DATA_WIDTH +: DATA_WIDTH] = 16'sh0007;   // 7
        dut.vrf[13][1*DATA_WIDTH +: DATA_WIDTH] = 16'sh0008;   // 8

        issue_cmd(make_cmd(VOP_BIAS_ADD, 5'd27, 5'd12, 5'd13));

        val = $signed(dut.vrf[27][0*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 107) $display("  PASS: BIAS_ADD 100+7 = %0d", val);
        else begin $display("  FAIL: BIAS_ADD 100+7 = %0d, expected 107", val); errors = errors + 1; end

        issue_cmd(make_cmd(VOP_ADD_BCAST, 5'd28, 5'd12, 5'd13));

        val = $signed(dut.vrf[28][0*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 107) $display("  PASS: ADD_BCAST 100+7 = %0d", val);
        else begin $display("  FAIL: ADD_BCAST 100+7 = %0d, expected 107", val); errors = errors + 1; end

        #(CLK * 5);

        //======================================================================
        // TEST 11: SCALE (Q10: result = x * imm / 1024)
        //   V14[0] = 512, imm = 2048 (= 2.0 in Q10)
        //   Expected: 512 * 2048 / 1024 = 1024
        //   V14[1] = -1024, imm = 1024 (= 1.0 in Q10)
        //   Expected: -1024 * 1024 / 1024 = -1024
        //======================================================================
        $display("");
        $display("[TEST 11] SCALE (Q10): V29 = V14 * imm / 1024");

        init_vrf();
        dut.vrf[14][0*DATA_WIDTH +: DATA_WIDTH] = 16'sh0200;   // 512
        dut.vrf[14][1*DATA_WIDTH +: DATA_WIDTH] = 16'shFC00;   // -1024

        issue_cmd(make_cmd_imm(VOP_SCALE, 5'd29, 5'd14, 5'd0, 16'd2048));

        val = $signed(dut.vrf[29][0*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 1024) $display("  PASS: SCALE 512 * 2.0 = %0d", val);
        else begin $display("  FAIL: SCALE 512 * 2.0 = %0d, expected 1024", val); errors = errors + 1; end

        // Re-issue with imm=1024 (scale 1.0) — lane 1 = -1024
        issue_cmd(make_cmd_imm(VOP_SCALE, 5'd29, 5'd14, 5'd0, 16'd1024));

        val = $signed(dut.vrf[29][1*DATA_WIDTH +: DATA_WIDTH]);
        if (val == -1024) $display("  PASS: SCALE -1024 * 1.0 = %0d", val);
        else begin $display("  FAIL: SCALE -1024 * 1.0 = %0d, expected -1024", val); errors = errors + 1; end

        #(CLK * 5);

        //======================================================================
        // TEST 12: SCALE_Q8 (Q8: result = x * imm / 256)
        //   V15[0] = 512, imm = 128 (= 0.5 in Q8)  → expected 256
        //   V15[1] = -256, imm = 256 (= 1.0 in Q8) → expected -256
        //======================================================================
        $display("");
        $display("[TEST 12] SCALE_Q8 (Q8): V30 = V15 * imm / 256");

        init_vrf();
        dut.vrf[15][0*DATA_WIDTH +: DATA_WIDTH] = 16'sh0200;   // 512
        dut.vrf[15][1*DATA_WIDTH +: DATA_WIDTH] = 16'shFF00;   // -256

        issue_cmd(make_cmd_imm(VOP_SCALE_Q8, 5'd30, 5'd15, 5'd0, 16'd128));

        val = $signed(dut.vrf[30][0*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 256) $display("  PASS: SCALE_Q8 512 * 0.5 = %0d", val);
        else begin $display("  FAIL: SCALE_Q8 512 * 0.5 = %0d, expected 256", val); errors = errors + 1; end

        issue_cmd(make_cmd_imm(VOP_SCALE_Q8, 5'd30, 5'd15, 5'd0, 16'd256));

        val = $signed(dut.vrf[30][1*DATA_WIDTH +: DATA_WIDTH]);
        if (val == -256) $display("  PASS: SCALE_Q8 -256 * 1.0 = %0d", val);
        else begin $display("  FAIL: SCALE_Q8 -256 * 1.0 = %0d, expected -256", val); errors = errors + 1; end

        #(CLK * 5);

        //======================================================================
        // TEST 13: GLOBAL_AVG and LAYERNORM_MEAN (average of all LANES lanes)
        //   V16 = [10, 20, 30, 40, 50, 60, 70, 80]  sum=360, avg=45
        //   GLOBAL_AVG(V17, V16) → V17[0] = 45
        //   V18 = [-8, -8, -8, -8, 8, 8, 8, 8]  sum=0, avg=0
        //   LAYERNORM_MEAN(V19, V18) → V19[0] = 0
        //======================================================================
        $display("");
        $display("[TEST 13] GLOBAL_AVG and LAYERNORM_MEAN");

        init_vrf();
        dut.vrf[16][0*DATA_WIDTH +: DATA_WIDTH] = 16'sh000A;  // 10
        dut.vrf[16][1*DATA_WIDTH +: DATA_WIDTH] = 16'sh0014;  // 20
        dut.vrf[16][2*DATA_WIDTH +: DATA_WIDTH] = 16'sh001E;  // 30
        dut.vrf[16][3*DATA_WIDTH +: DATA_WIDTH] = 16'sh0028;  // 40
        dut.vrf[16][4*DATA_WIDTH +: DATA_WIDTH] = 16'sh0032;  // 50
        dut.vrf[16][5*DATA_WIDTH +: DATA_WIDTH] = 16'sh003C;  // 60
        dut.vrf[16][6*DATA_WIDTH +: DATA_WIDTH] = 16'sh0046;  // 70
        dut.vrf[16][7*DATA_WIDTH +: DATA_WIDTH] = 16'sh0050;  // 80

        issue_cmd(make_cmd(VOP_GLOBAL_AVG, 5'd17, 5'd16, 5'd0));

        val = $signed(dut.vrf[17][0*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 45) $display("  PASS: GLOBAL_AVG([10..80]) = %0d", val);
        else begin $display("  FAIL: GLOBAL_AVG([10..80]) = %0d, expected 45", val); errors = errors + 1; end

        init_vrf();
        dut.vrf[18][0*DATA_WIDTH +: DATA_WIDTH] = 16'shFFF8;  // -8
        dut.vrf[18][1*DATA_WIDTH +: DATA_WIDTH] = 16'shFFF8;  // -8
        dut.vrf[18][2*DATA_WIDTH +: DATA_WIDTH] = 16'shFFF8;  // -8
        dut.vrf[18][3*DATA_WIDTH +: DATA_WIDTH] = 16'shFFF8;  // -8
        dut.vrf[18][4*DATA_WIDTH +: DATA_WIDTH] = 16'sh0008;  // +8
        dut.vrf[18][5*DATA_WIDTH +: DATA_WIDTH] = 16'sh0008;  // +8
        dut.vrf[18][6*DATA_WIDTH +: DATA_WIDTH] = 16'sh0008;  // +8
        dut.vrf[18][7*DATA_WIDTH +: DATA_WIDTH] = 16'sh0008;  // +8

        issue_cmd(make_cmd(VOP_LAYERNORM_MEAN, 5'd19, 5'd18, 5'd0));

        val = $signed(dut.vrf[19][0*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 0) $display("  PASS: LAYERNORM_MEAN(4x-8, 4x+8) = %0d", val);
        else begin $display("  FAIL: LAYERNORM_MEAN(4x-8, 4x+8) = %0d, expected 0", val); errors = errors + 1; end

        #(CLK * 5);

        //======================================================================
        // TEST 14: SOFTMAX_P1 (MAX reduction — same tree as VOP_MAX)
        //   V20 = [-5, 10, -3, 20, 0, 15, -1, 5]  max = 20
        //======================================================================
        $display("");
        $display("[TEST 14] SOFTMAX_P1 (max reduction): V21 = max(V20)");

        init_vrf();
        dut.vrf[20][0*DATA_WIDTH +: DATA_WIDTH] = 16'shFFFB;  // -5
        dut.vrf[20][1*DATA_WIDTH +: DATA_WIDTH] = 16'sh000A;  // 10
        dut.vrf[20][2*DATA_WIDTH +: DATA_WIDTH] = 16'shFFFD;  // -3
        dut.vrf[20][3*DATA_WIDTH +: DATA_WIDTH] = 16'sh0014;  // 20
        dut.vrf[20][4*DATA_WIDTH +: DATA_WIDTH] = 16'sh0000;  // 0
        dut.vrf[20][5*DATA_WIDTH +: DATA_WIDTH] = 16'sh000F;  // 15
        dut.vrf[20][6*DATA_WIDTH +: DATA_WIDTH] = 16'shFFFF;  // -1
        dut.vrf[20][7*DATA_WIDTH +: DATA_WIDTH] = 16'sh0005;  // 5

        issue_cmd(make_cmd(VOP_SOFTMAX_P1, 5'd21, 5'd20, 5'd0));

        val = $signed(dut.vrf[21][0*DATA_WIDTH +: DATA_WIDTH]);
        if (val == 20) $display("  PASS: SOFTMAX_P1 max([-5,10,-3,20,0,15,-1,5]) = %0d", val);
        else begin $display("  FAIL: SOFTMAX_P1 max = %0d, expected 20", val); errors = errors + 1; end

        #(CLK * 5);

        //======================================================================
        // Summary
        //======================================================================
        #(CLK * 10);
        $display("");
        $display("════════════════════════════════════════════════════════════");
        if (errors == 0) begin
            $display(">>> ALL TESTS PASSED! <<<");
        end else begin
            $display(">>> SOME TESTS FAILED <<<");
            $display("    Errors: %0d", errors);
        end
        $display("════════════════════════════════════════════════════════════");
        $finish;
    end
    
    initial #50000 begin $display("TIMEOUT"); $finish; end

endmodule
