`ifndef VERILATOR
module testbench;
  reg [4095:0] vcdfile;
  reg clock;
`else
module testbench(input clock, output reg genclock);
  initial genclock = 1;
`endif
  reg genclock = 1;
  reg [31:0] cycle = 0;
  global_cmd_processor_formal UUT (

  );
`ifndef VERILATOR
  initial begin
    if ($value$plusargs("vcd=%s", vcdfile)) begin
      $dumpfile(vcdfile);
      $dumpvars(0, testbench);
    end
    #5 clock = 0;
    while (genclock) begin
      #5 clock = 0;
      #5 clock = 1;
    end
  end
`endif
  initial begin
`ifndef VERILATOR
    #1;
`endif
    // UUT.$auto$async2sync.\cc:107:execute$739  = 1'b0;
    // UUT.$auto$async2sync.\cc:116:execute$737  = 1'b1;
    // UUT.$auto$async2sync.\cc:116:execute$743  = 1'b1;
    // UUT.$auto$async2sync.\cc:116:execute$749  = 1'b1;
    // UUT.$auto$async2sync.\cc:116:execute$755  = 1'b1;
    // UUT.$past$global_cmd_processor_formal.\sv:47$7$0  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$627  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$629  = 8'b00000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$631  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$633  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$635  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$637  = 3'b000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$639  = 32'b00000000000000000000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$641  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$645  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$647  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$649  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$651  = 20'b00000000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$653  = 20'b00000000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$655  = 20'b00000000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$657  = 20'b00000000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$659  = 4'b0000;
    UUT.f_past_valid = 1'b0;

    // state 0
  end
  always @(posedge clock) begin
    // state 1
    if (cycle == 0) begin
    end

    // state 2
    if (cycle == 1) begin
    end

    // state 3
    if (cycle == 2) begin
    end

    // state 4
    if (cycle == 3) begin
    end

    genclock <= cycle < 4;
    cycle <= cycle + 1;
  end
endmodule
