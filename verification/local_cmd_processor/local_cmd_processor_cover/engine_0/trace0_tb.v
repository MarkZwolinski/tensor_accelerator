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
  local_cmd_processor_formal UUT (

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
    // UUT.$auto$async2sync.\cc:107:execute$1950  = 1'b0;
    // UUT.$auto$async2sync.\cc:116:execute$1948  = 1'b1;
    // UUT.$auto$async2sync.\cc:116:execute$1954  = 1'b1;
    // UUT.$auto$async2sync.\cc:116:execute$1960  = 1'b1;
    // UUT.$past$local_cmd_processor_formal.\sv:100$17$0  = 1'b0;
    // UUT.$past$local_cmd_processor_formal.\sv:34$3$0  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1810  = 4'b0000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1812  = 20'b00000000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1814  = 128'b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1816  = 2'b00;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1818  = 20'b00000000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1820  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1822  = 128'b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1824  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1826  = 128'b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1828  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1830  = 128'b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1832  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1834  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1836  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1838  = 1'b0;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1840  = 8'b00000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1842  = 8'b00000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1844  = 20'b00000000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1846  = 20'b00000000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1848  = 20'b00000000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1850  = 20'b00000000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1852  = 16'b0000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1854  = 16'b0000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1856  = 16'b0000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1858  = 16'b0000000000000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1860  = 8'b00000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1862  = 8'b00000000;
    // UUT.dut.$auto$async2sync.\cc:253:execute$1864  = 8'b00000000;
    UUT.f_dma_wait = 3'b000;
    UUT.f_imem_wait = 3'b000;
    UUT.f_mxu_wait = 3'b000;
    UUT.f_past_valid = 1'b0;
    UUT.f_vpu_wait = 3'b000;

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

    genclock <= cycle < 3;
    cycle <= cycle + 1;
  end
endmodule
