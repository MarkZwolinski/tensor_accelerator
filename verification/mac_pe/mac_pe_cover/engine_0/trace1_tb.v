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
  mac_pe_formal UUT (

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
    // UUT.$auto$async2sync.\cc:107:execute$277  = 1'b0;
    // UUT.$auto$async2sync.\cc:116:execute$275  = 1'b1;
    // UUT.$auto$async2sync.\cc:116:execute$281  = 1'b1;
    // UUT.$past$mac_pe_formal.\sv:113$23$0  = 1'b0;
    // UUT.$past$mac_pe_formal.\sv:113$24$0  = 1'b0;
    // UUT.$past$mac_pe_formal.\sv:47$1$0  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$215  = 8'b00000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$217  = 32'b00000000000000000000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$219  = 8'b00000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$221  = 8'b00000000;
    UUT.f_past_valid = 1'b0;
    UUT.f_weight = 8'b00000000;

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
