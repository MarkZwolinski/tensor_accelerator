# 🚀 FPGA Tensor Accelerator

A production-quality RTL implementation of a tensor processing unit for neural network inference, featuring a 2×2 grid of Tensor Processing Clusters (TPCs) with 16×16 systolic arrays.

![Architecture](https://img.shields.io/badge/Architecture-Systolic_Array-blue)
![Status](https://img.shields.io/badge/Status-Synthesis_Ready-green)
![License](https://img.shields.io/badge/License-MIT-yellow)

## ✨ Features

- **4 Tensor Processing Clusters (TPCs)** in a 2×2 mesh
- **16×16 Systolic Arrays** (256 INT8 MACs per TPC)
- **64-lane Vector Processing Unit** for activations (ReLU, GELU, Softmax)
- **2D DMA Engine** with strided access patterns
- **16-bank SRAM Subsystem** with multi-port access
- **Network-on-Chip (NoC)** with XY routing
- **AXI4 Memory Interface** (DDR4/LPDDR4/LPDDR5 support)
- **Cycle-accurate Python Model** for software simulation and verification

## 📊 Performance

| Metric | Value |
|--------|-------|
| Peak Throughput | 409 GOPS @ 200 MHz |
| Data Type | INT8 (with INT32 accumulation) |
| On-chip SRAM | 2 MB (configurable) |
| Target Devices | Xilinx UltraScale+, Versal |

## 🧪 Simulation Results

### MAC PE Verification ✅

All 7 tests passing:

```
╔════════════════════════════════════════════════════════════╗
║           MAC Processing Element Testbench                 ║
╚════════════════════════════════════════════════════════════╝

[TEST 1] Loading weight = 3
  PASS: weight_reg = 3 (expected 3)

[TEST 2] Computing 3 × 4 + 0 = 12
  PASS: psum_out = 12 (expected 12)

[TEST 3] Accumulating: 12 + (3 × 5) = 27
  PASS: psum_out = 27 (expected 27)

[TEST 4] Signed multiply: 3 × (-2) = -6
  PASS: psum_out = -6 (expected -6)

╔════════════════════════════════════════════════════════════╗
║   Passed: 7    Failed: 0                                   ║
╚════════════════════════════════════════════════════════════╝
   >>> ALL TESTS PASSED! <<<
```

<!-- 
To add waveform screenshots:
1. Run: ./debug.sh and select option 1
2. Take screenshot of Surfer window
3. Save as: docs/images/mac_pe_waveform.png
4. Uncomment the line below:
-->
<!-- ![MAC PE Waveform](docs/images/mac_pe_waveform.png) -->

### Systolic Array Waveform

The systolic array implements weight-stationary dataflow:

```
Cycle   State    Activity
─────   ─────    ────────────────────────────
0-16    LOAD     Weights loaded column by column
17-48   COMPUTE  Activations stream, MACs accumulate  
49-64   DRAIN    Results emerge from bottom row
65      DONE     Computation complete
```

<!-- ![Systolic Array Waveform](docs/images/systolic_array_waveform.png) -->

## 📁 Project Structure

```
tensor_accelerator/
├── rtl/                    # Synthesizable Verilog
│   ├── core/               # Compute units
│   │   ├── mac_pe.v        # MAC processing element
│   │   ├── systolic_array.v# 16×16 systolic array
│   │   ├── vector_unit.v   # 64-lane SIMD VPU
│   │   └── dma_engine.v    # 2D DMA controller
│   ├── memory/             # Memory subsystem
│   │   ├── sram_subsystem.v
│   │   ├── memory_controller_wrapper.v
│   │   └── axi_memory_model.v (sim only)
│   ├── control/            # Controllers
│   │   ├── local_cmd_processor.v
│   │   └── global_cmd_processor.v
│   ├── noc/                # Network on Chip
│   │   └── noc_router.v
│   └── top/                # Top-level modules
│       ├── tensor_processing_cluster.v
│       └── tensor_accelerator_top.v
├── model/                  # Cycle-accurate Python models
│   ├── systolic_array_model.py  # MXU: weight-stationary GEMM
│   ├── dma_model.py        # DMA: LOAD/STORE with AXI
│   ├── vpu_model.py        # VPU: ReLU, Add, reductions
│   ├── lcp_model.py        # LCP: instruction fetch/decode
│   └── tpc_model.py        # TPC: integrated system model
├── tb/                     # Testbenches
├── sw/                     # Software tools
│   ├── assembler/          # Instruction assembler
│   └── examples/           # Example kernels
├── docs/                   # Documentation
├── constraints/            # FPGA constraints
└── scripts/                # Build scripts
```

## 🚀 Quick Start

### Prerequisites

```bash
# macOS
brew install icarus-verilog
brew install surfer          # Waveform viewer (recommended)
# Or: brew install --cask gtkwave

# Ubuntu/Debian
sudo apt install iverilog gtkwave

# Windows (via WSL or direct)
# Install Icarus Verilog from: http://bleyer.org/icarus/
```

### Run Simulation

```bash
# Extract and enter directory
tar -xzf tensor_accelerator.tar.gz
cd tensor_accelerator

# Interactive test menu
./debug.sh

# Or run all tests directly
make test
```

### View Waveforms

```bash
# After running tests, view with Surfer
surfer sim/waves/mac_pe.vcd
surfer sim/waves/systolic_array.vcd

# Or with GTKWave (use preset signals)
gtkwave sim/waves/mac_pe.vcd sim/waves/mac_pe.gtkw
```

## 🔧 FPGA Synthesis (Vivado)

```bash
# Batch mode
vivado -mode batch -source scripts/synth.tcl

# Or in Vivado GUI
source scripts/synth.tcl
```

### Supported Targets

| Board | Device | Memory | Status |
|-------|--------|--------|--------|
| ZCU104 | XCZU7EV | DDR4 | ✅ Tested |
| VCU118 | XCVU9P | DDR4 | ✅ Tested |
| VCK190 | XCVC1902 | DDR4/LPDDR4 | ✅ Tested |
| VM2152 | XCVM2152 | LPDDR5 | 🔜 Planned |

## 📖 Documentation

| Document | Description |
|----------|-------------|
| [VERILOG_TUTORIAL.md](docs/VERILOG_TUTORIAL.md) | **Complete design walkthrough** - start here! |
| [ISA_GUIDE.md](docs/ISA_GUIDE.md) | **Instruction Set Architecture** - assembly → binary |
| [presentation.html](docs/presentation.html) | **Interactive slide deck** - open in browser |
| [Python Models](#-cycle-accurate-python-model) | **Cycle-accurate simulation** - see section below |
| [WAVEFORMS.md](docs/WAVEFORMS.md) | Waveform capture guide for Surfer |
| [SYNTHESIS_READINESS.md](docs/SYNTHESIS_READINESS.md) | FPGA synthesis checklist |
| [MEMORY_INTEGRATION.md](docs/MEMORY_INTEGRATION.md) | DDR4/LPDDR5 integration guide |
| [TEST_FLOW.md](docs/TEST_FLOW.md) | Verification methodology |
| [SIMULATOR_COMPARISON.md](docs/SIMULATOR_COMPARISON.md) | Verilator vs ModelSim vs VCS |

## 🏗️ Architecture Overview

```
┌─────────────────────────────────────────────────────────────────────┐
│                      TENSOR ACCELERATOR                             │
│  ┌─────────────┐  ┌─────────────┐  ┌─────────────┐  ┌─────────────┐│
│  │    TPC 0    │══│    TPC 1    │  │    TPC 2    │══│    TPC 3    ││
│  │  ┌───────┐  │  │  ┌───────┐  │  │  ┌───────┐  │  │  ┌───────┐  ││
│  │  │16×16  │  │  │  │16×16  │  │  │  │16×16  │  │  │  │16×16  │  ││
│  │  │Systolic│  │  │  │Systolic│  │  │  │Systolic│  │  │  │Systolic│  ││
│  │  │Array  │  │  │  │Array  │  │  │  │Array  │  │  │  │Array  │  ││
│  │  └───────┘  │  │  └───────┘  │  │  └───────┘  │  │  └───────┘  ││
│  └──────┬──────┘  └──────┬──────┘  └──────┬──────┘  └──────┬──────┘│
│         └────────────────┴────────────────┴────────────────┘       │
│                              │ NoC                                  │
│                    ┌─────────▼─────────┐                           │
│                    │  Global Controller │                           │
│                    └─────────┬─────────┘                           │
└──────────────────────────────┼──────────────────────────────────────┘
                               │ AXI4
                    ┌──────────▼──────────┐
                    │   External Memory   │
                    │   (DDR4/LPDDR5)     │
                    └─────────────────────┘
```

## 🐍 Cycle-Accurate Python Model

The project includes a **complete cycle-accurate Python model** that mirrors the RTL implementation exactly. This enables:
- **Software simulation** without Verilog tools
- **Test vector generation** for RTL verification  
- **Algorithm development** before hardware implementation
- **Cross-validation** between Python and RTL

### Architecture

```
┌─────────────────────────────────────────────────────────────────┐
│                    TPC Python Model (tpc_model.py)              │
│                                                                 │
│  ┌──────────────┐                                               │
│  │     LCP      │  Instruction fetch, decode, dispatch          │
│  │ lcp_model.py │  Loop handling, unit synchronization          │
│  └──────┬───────┘                                               │
│         │ dispatches to                                         │
│         ▼                                                       │
│  ┌──────────────┬──────────────┬──────────────┐                │
│  │     MXU      │     VPU      │     DMA      │                │
│  │  systolic_   │  vpu_model   │  dma_model   │                │
│  │  array_model │    .py       │    .py       │                │
│  │     .py      │              │              │                │
│  │              │              │              │                │
│  │ Weight-      │ ReLU, Add,   │ LOAD/STORE   │                │
│  │ stationary   │ Sub, Max,    │ 2D strided   │                │
│  │ GEMM         │ Reductions   │ transfers    │                │
│  └──────┬───────┴──────┬───────┴──────┬───────┘                │
│         │              │              │                         │
│         └──────────────┴──────────────┘                         │
│                        │                                        │
│                   ┌────▼────┐         ┌────────────┐           │
│                   │  SRAM   │◄───────►│  AXI Mem   │           │
│                   │ Model   │         │   Model    │           │
│                   └─────────┘         └────────────┘           │
└─────────────────────────────────────────────────────────────────┘
```

### Model Files

| File | Lines | Description |
|------|-------|-------------|
| `model/systolic_array_model.py` | 770 | Weight-stationary MXU with PE array, skew/de-skew |
| `model/dma_model.py` | 500 | DMA engine with AXI & SRAM interfaces |
| `model/vpu_model.py` | 300 | Vector unit: ReLU, Add, reductions |
| `model/lcp_model.py` | 400 | Command processor with loops |
| `model/tpc_model.py` | 350 | **Integrated TPC** combining all units |

### Key Design Principles

**1. State Machine Matching**
Each model uses identical state machines to the RTL:
```python
# DMA states match rtl/core/dma_engine.v exactly
class DMAState(IntEnum):
    IDLE = 0
    DECODE = 1
    LOAD_ADDR = 2
    LOAD_DATA = 3
    LOAD_WRITE = 4
    STORE_REQ = 5
    STORE_WAIT = 6
    STORE_CAP = 13   # Critical: wait for SRAM read latency
    STORE_ADDR = 7
    # ...
```

**2. Registered Output Modeling**
Proper separation of combinational and sequential logic:
```python
def posedge(self, ...):
    # Update state from previous cycle's next_state
    self.state = self.state_next
    
    # Compute next state and outputs (combinational)
    if self.state == DMAState.LOAD_ADDR:
        self.axi_arvalid = True
        if axi_arready:
            self.state_next = DMAState.LOAD_DATA
```

**3. SRAM Latency Modeling**
1-cycle registered read latency, matching RTL:
```python
class SRAMModel:
    def posedge(self, addr, wdata, we, re):
        # Output is from PREVIOUS cycle's read
        self.rdata = self._rdata_next
        
        if re:
            # Schedule data for NEXT cycle
            self._rdata_next = self.mem[addr >> 5]
```

### How We Know The Model Is Correct

#### 1. Unit Test Coverage

Each model has self-contained tests that verify functional correctness:

| Model | Test | What It Verifies |
|-------|------|------------------|
| DMA | 1-word LOAD | External → SRAM transfer |
| DMA | 4-word LOAD | Burst transfers |
| DMA | 1-word STORE | SRAM → External (tests SRAM latency handling) |
| DMA | 2D LOAD | Strided access patterns |
| VPU | ReLU | `max(x, 0)` for all elements |
| VPU | Vector Add | Saturating addition with overflow |
| VPU | Sum Reduce | Accumulation across vector |
| LCP | Simple program | NOP → TENSOR → HALT sequence |
| LCP | Loop program | LOOP 3 iterations verification |
| MXU | 2×2, 3×3, 4×4 GEMM | Matrix multiply correctness |

#### 2. Integration Tests (tpc_model.py)

The TPC model runs complete programs that exercise multiple units:

```python
# TEST 3: DMA LOAD → VPU RELU pipeline
program = [
    make_dma_instr(DMAOp.LOAD, ext_addr=0x00, int_addr=0x100),
    make_vpu_instr(VPUOp.RELU, src_a=0x100, dst=0x200),
    make_halt()
]
# Verifies: DMA loads from AXI, VPU processes, correct data flow
```

#### 3. RTL Cross-Validation

The Python model was developed alongside RTL fixes:

| Bug Found | Python Model | RTL Fix |
|-----------|--------------|---------|
| DMA STORE timing | `S_STORE_CAP` state added | `dma_engine.v` line 180 |
| SRAM read latency | `_rdata_next` pipeline | `sram_bank.v` registered output |
| VPU data capture | `WAIT_A1`→`WAIT_A2` states | `vector_unit.v` timing |

#### 4. Numerical Verification

```python
# NumPy golden reference
expected = np.dot(A.astype(np.int32), B.astype(np.int32))

# Python model result
C = tpc.read_sram(0x200, 4).reshape(2, 2)

# Must match exactly
assert np.array_equal(C, expected.astype(np.int8))
```

### Running Python Model Tests

#### Prerequisites

```bash
# Python 3.8+ with NumPy
pip install numpy
```

#### Run Individual Model Tests

```bash
cd tensor_accelerator

# DMA Engine (4 tests)
python3 model/dma_model.py
# Output: ALL DMA MODEL TESTS PASSED!

# Vector Processing Unit (3 tests)  
python3 model/vpu_model.py
# Output: ALL VPU TESTS PASSED!

# Local Command Processor (2 tests)
python3 model/lcp_model.py
# Output: ALL LCP TESTS PASSED!

# Systolic Array / MXU (3 tests)
python3 model/systolic_array_model.py
# Output: ALL TESTS PASSED!

# Full TPC Integration (3 tests)
python3 model/tpc_model.py
# Output: ALL TPC INTEGRATED TESTS PASSED!
```

#### Run All Tests (RTL + Python)

```bash
./run_tests.sh
# Runs 22 tests total:
#   - 18 RTL tests (requires iverilog)
#   - 4 Python model tests (requires Python + NumPy)
```

#### Verbose Mode for Debugging

```python
# Enable cycle-by-cycle tracing
tpc = TPCModel(verbose=True)
tpc.run()

# Output:
# [LCP @  1] FETCH        PC=  0 | Fetching
# [LCP @  3] DECODE       PC=  0 | Decoded: op=0x03 subop=0x01
# [DMA @  5] IDLE         | CMD: LOAD
# [DMA @  7] LOAD_ADDR    | AR addr=0x0
# [DMA @ 11] LOAD_DATA    | R data=0xdead0000
# ...
```

### Using the Model for Development

#### 1. Test New Algorithms

```python
from model.tpc_model import TPCModel, make_mxu_instr, make_vpu_instr, make_halt

tpc = TPCModel()

# Load your matrices
tpc.load_sram(0x000, weights)
tpc.load_sram(0x100, activations)

# Run GEMM + ReLU
tpc.load_program([
    make_mxu_instr(0x000, 0x100, 0x200, M=4, K=4, N=4),
    make_vpu_instr(VPUOp.RELU, 0x200, 0, 0x300, length=1),
    make_halt()
])
tpc.run()

# Read results
output = tpc.read_sram(0x300, 16).reshape(4, 4)
```

#### 2. Generate RTL Test Vectors

```python
# Run Python model, capture intermediate values
tpc = TPCModel(verbose=True)
tpc.run()

# Export SRAM state for RTL $readmemh
with open('test_vectors.hex', 'w') as f:
    for addr in range(256):
        f.write(f'{tpc.sram.mem[addr]:064x}\n')
```

#### 3. Cycle Count Analysis

```python
tpc = TPCModel()
tpc.load_program(my_program)
tpc.run()

print(f"Total cycles: {tpc.cycle}")
# Use for performance optimization
```

## 🧪 Example: Matrix Multiplication

```verilog
// The systolic array computes C = A × B
// Weight-stationary dataflow:
//   1. Load weights (B) into PEs - they stay in place
//   2. Stream activations (A) from left
//   3. Accumulate partial sums flowing down
//   4. Results emerge from bottom

// Each PE computes:
psum_out = psum_in + (activation × weight)
```

## 📝 Assembly Example

```asm
# ResNet Convolution Kernel
LOOP        64                # 64 output channels
    DMA.LOAD_2D W_SRAM, W_DDR, 16, 16, 256
    DMA.LOAD_2D A_SRAM, A_DDR, 16, 16, 256
    TENSOR.GEMM OUT_SRAM, A_SRAM, W_SRAM, 16, 16, 16
    VEC.RELU    OUT_SRAM, OUT_SRAM
    DMA.STORE_2D OUT_DDR, OUT_SRAM, 16, 16, 256
ENDLOOP
HALT
```

### Compile to Binary

```bash
# Compile assembly to hex (for Verilog $readmemh)
python3 sw/assembler/assembler.py sw/examples/resnet_conv.asm -o program.hex

# Output: 128-bit instructions
# 05000000000000000000004000000000  // LOOP 64
# 03010400000000100010001001000000  // DMA.LOAD_2D
# ...
# ff000000000000000000000000000000  // HALT
```

See [ISA_GUIDE.md](docs/ISA_GUIDE.md) for complete instruction encoding details.

## 🤝 Contributing

Contributions welcome! Please read the documentation first, especially:
1. [VERILOG_TUTORIAL.md](docs/VERILOG_TUTORIAL.md) - Understand the design
2. [TEST_FLOW.md](docs/TEST_FLOW.md) - How to verify changes

## 📄 License

MIT License - see [LICENSE](LICENSE) for details.

## 🙏 Acknowledgments

- Inspired by Google TPU, NVIDIA Tensor Cores, and academic systolic array research
- Built with guidance from Anthropic's Claude

---

**⭐ Star this repo if you find it useful!**
# tensor_accelerator
