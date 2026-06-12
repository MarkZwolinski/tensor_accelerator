# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

This is an FPGA Tensor Accelerator — a production-quality RTL implementation of a neural network inference engine. The design targets Xilinx UltraScale+/Versal FPGAs and features a 2×2 grid of Tensor Processing Clusters (TPCs), each containing a 16×16 systolic array, a 64-lane VPU, and a 2D DMA engine.

The project has three parallel implementations that must stay in sync:
1. **RTL** (`rtl/`) — synthesizable Verilog, the ground truth for hardware behavior
2. **Python cycle-accurate model** (`model/`) — mirrors RTL state machines exactly, used for test vector generation and algorithm development
3. **Compiler** (`sw/compiler/`) — ONNX→assembly pipeline

## Commands

### RTL Simulation (requires `iverilog`)

```bash
# Run all tests (53 tests)
./run_tests.sh

# Individual unit tests via Makefile
make test_mac         # MAC PE only
make test_systolic    # Systolic array
make test_vpu         # Vector unit
make test_tpc         # Single TPC integration

# Run a specific testbench manually
iverilog -g2012 -DSIM -o sim/my_tb <rtl_files...> tb/tb_foo.v && vvp sim/my_tb

# Lint check
make lint             # verilator --lint-only
```

### Python Model Tests (requires `numpy`)

```bash
python3 model/systolic_array_model.py   # MXU: 3 tests
python3 model/dma_model.py              # DMA: 4 tests
python3 model/vpu_model.py              # VPU: 3 tests
python3 model/lcp_model.py              # LCP: 2 tests
python3 model/tpc_model.py              # Full TPC integration: 3 tests
```

### Compiler Tests

```bash
python3 sw/compiler/test_compiler.py        # 7 unit tests
python3 sw/compiler/test_integration.py     # 3 integration tests
python3 sw/compiler/test_extended_ops.py    # LeNet/ResNet/Transformer ops
```

### Compile an ONNX Model

```bash
python3 sw/compiler/compile.py model.onnx -o output.asm
python3 sw/compiler/compile.py model.onnx --quantize -o output.asm
```

### Assemble to Hex

```bash
python3 sw/assembler/assembler.py sw/examples/resnet_conv.asm -o program.hex
```

### Generate Test Vectors

```bash
python3 tests/realistic/lenet/golden.py        # LeNet test vectors
python3 tests/realistic/resnet_block/golden.py # ResNet test vectors
python3 tests/realistic/phase_c/golden.py      # Fused ops vectors
python3 tests/realistic/phase_d/golden.py      # Transformer ops vectors
python3 tests/realistic/phase_e/golden.py      # Stress test vectors
python3 tests/realistic/phase_f/golden.py      # Full model vectors
```

### Waveforms

```bash
surfer sim/waves/systolic_array.vcd   # Recommended viewer
gtkwave sim/waves/mac_pe.vcd sim/waves/mac_pe.gtkw
```

### FPGA Synthesis (requires Vivado)

```bash
vivado -mode batch -source scripts/synth.tcl
make synth && make impl && make bitstream
```

## Architecture

### Hardware Hierarchy

```
tensor_accelerator_top.v        ← AXI4 host interface + 2×2 TPC grid
  tensor_processing_cluster.v   ← Single TPC: MXU + VPU + DMA + SRAM + LCP
    systolic_array.v             ← 16×16 weight-stationary INT8 GEMM
      mac_pe.v                   ← Single multiply-accumulate PE
    vector_unit.v                ← 64-lane SIMD (ReLU, GELU, Add, Reduce)
    dma_engine.v                 ← 2D strided DMA with AXI4 interface
    sram_subsystem.v             ← 16-bank, 256-bit-wide on-chip SRAM
    local_cmd_processor.v        ← Instruction fetch/decode/dispatch per TPC
  global_cmd_processor.v        ← Top-level orchestration across all TPCs
  noc_router.v                   ← XY-routed 2×2 mesh NoC
```

The `SRAM` uses 1-cycle registered read latency — this is a critical timing detail that affects DMA STORE sequencing and VPU data capture. The model and RTL both have explicit `STORE_CAP` / `WAIT_A2` states to absorb this latency.

### Python Model Architecture

Each model file has a `posedge()` method modeling registered (clocked) behavior, separating `state`/`state_next` to reflect RTL pipeline stages. The models use identical state machine enum values to the RTL (e.g., `DMAState.STORE_CAP = 13` matches `dma_engine.v` exactly).

`tpc_model.py` integrates all units and is the reference for TPC-level programs. Use `TPCModel(verbose=True)` for cycle-by-cycle trace output.

### Compiler Pipeline

```
ONNX model
  → frontend/onnx_parser.py   (ONNX → IR Graph)
  → quantizer/quantizer.py    (FP32 → INT8, symmetric)
  → tiler/tiler.py            (large ops → 16×16 hardware tiles)
  → scheduler/scheduler.py    (topological order, dependency tracking)
  → codegen/codegen.py        (IR → assembly text)
  → assembler/assembler.py    (assembly → 128-bit hex)
```

The IR is defined in `sw/compiler/ir/graph.py`. The `HardwareConfig` object in `tiler/tiler.py` encodes the 16×16 array size and SRAM bank layout.

### ISA

Instructions are 128-bit fixed width. Fields: `[7:0]` opcode, `[15:8]` flags, then dst/src/imm fields. Opcode classes: TENSOR (0x00–0x1F), VECTOR (0x20–0x5F), DMA (0x60–0x7F), CONTROL (0x80–0x9F), SYNC (0xA0–0xAF), MISC (0xF0–0xFF). See `docs/ISA_REFERENCE.md` for full encoding.

### RTL Compile Flags

- `-g2012` — required for all RTL (SystemVerilog 2012 features)
- `-DSIM` — enables simulation-only blocks (e.g., `axi_memory_model.v` behavioral memory)
- `-I rtl/include` — needed for testbenches that use include files

### Key Invariants

- The systolic array is **weight-stationary**: weights load first (columns), then activations stream left-to-right, partial sums flow downward. Results emerge from the bottom row after `ARRAY_SIZE` cycles of draining.
- SRAM addresses are byte-addressed, but SRAM words are 256 bits (32 bytes). When writing `$readmemh` test vectors, one line = one 256-bit word.
- The Python model and RTL **must** produce identical outputs for the same program. If they diverge, the Python model is used to diagnose the RTL bug.

## Test Organization

| Directory | Contents |
|-----------|----------|
| `tb/` | All Verilog testbenches (unit + integration + E2E) |
| `tests/realistic/lenet/` | 28×28 LeNet test vectors + golden reference |
| `tests/realistic/resnet_block/` | 56×56 ResNet block test vectors |
| `tests/realistic/phase_c/` | Fused op tests (bias, layer chains) |
| `tests/realistic/phase_d/` | Transformer op tests (LayerNorm, Softmax, GELU) |
| `tests/realistic/phase_e/` | Stress tests (back-to-back, multi-TPC, boundary) |
| `tests/realistic/phase_f/` | Full model E2E (LeNet-5, ResNet, batch=4) |
| `cocotb/` | AXI4 protocol verification via cocotb (requires `cocotb-config`) |

`run_tests.sh` auto-generates test vectors via `golden.py` scripts if the `.hex` files are missing.
