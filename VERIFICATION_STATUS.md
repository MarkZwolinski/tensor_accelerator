# Tensor Accelerator — Verification Status

**Date:** 2026-06-16
**Version:** v0.2.0
**Status:** Unit tests passing; integration tests in progress

---

## Executive Summary

| Category | Tests | Passing | Notes |
|----------|-------|---------|-------|
| RTL unit tests | 38 | 37 | 1 skipped (DMA STORE RTL bug) |
| Python model tests | 16 | 16 | vpu_model + dma_model |
| Integration tests | — | — | In progress |

### RTL Bugs Fixed Since v0.1.0

| Fix | Component | Description |
|-----|-----------|-------------|
| Fix 1 | VPU RTL | VOP_SIGMOID/TANH/SILU/GELU all silently passed through; replaced with correct INT16 PWL approximations |
| Fix 3 | Assembler | `SCALE_Q8` missing from `VectorSubop` enum; `subop_map.get(subop, 0)` silently encoded unknown subops as 0 |
| Fix 4 | VPU RTL | 13 VOP subops (MADD, BIAS_ADD, SCALE, GLOBAL_AVG, SOFTMAX_P1, etc.) had no `case` entry — all fell through to passthrough; SUM reduction tree zero-extended signed inputs, producing wrong results for negative values |
| Fix 8 | LCP RTL | `loop_sp` declared `[$clog2(MAX_LOOP_NEST)-1:0]` = 2 bits; silently wrapped to 0 on the 4th push, making 4-level nesting trigger a false underflow error |
| Fix 10 | Assembler + Codegen | VECTOR instruction encoding mismatch: assembler packed vd/vs1/vs2 as three 16-bit fields; codegen passed SRAM addresses as VRF indices — both fixed together |

---

## 1. Unit Tests — RTL

### 1.1 MAC Processing Element (`rtl/core/mac_pe.v`)

**Testbench:** `tb/tb_mac_pe.v` — **6/6 PASS**

| Test | Description |
|------|-------------|
| 1 | Weight load |
| 2 | 3 × 4 + 0 = 12 |
| 3 | Accumulate: 12 + (3 × 5) = 27 |
| 4 | Signed: 3 × (−2) = −6 |
| 5 | Large: 127 × 127 = 16129 |
| 6 | Neg × neg: (−5) × (−7) = 35 |

```bash
iverilog -g2012 -DSIM -o sim/tb_mac -I rtl/include rtl/core/mac_pe.v tb/tb_mac_pe.v && vvp sim/tb_mac
```

---

### 1.2 Systolic Array (`rtl/core/systolic_array.v`)

**Testbench:** `tb/tb_systolic_array.v` — **5/5 PASS**

| Test | Description |
|------|-------------|
| 1 | 2×2 matrix multiply |
| 2 | 4×4 identity matrix (C = A × I = A) |
| 3 | Negative weights — signed diagonal |
| 4 | INT8 boundary: (−128) × (−128) = 16384 |
| 5 | Signed k-tile accumulation: mixed-sign cancel to 0 |

```bash
iverilog -g2012 -DSIM -o sim/tb_sys -I rtl/include \
    rtl/core/mac_pe.v rtl/core/systolic_array.v tb/tb_systolic_array.v && vvp sim/tb_sys
```

---

### 1.3 Vector Processing Unit (`rtl/core/vector_unit.v`)

**Testbench:** `tb/tb_vector_unit.v` — **14/14 PASS** (LANES=64, DATA_WIDTH=16)

| Test | Operation | Notes |
|------|-----------|-------|
| 1 | VOP_ADD element-wise | Lanes 0 and 7 checked |
| 2 | VOP_RELU | Negative clamp to 0, positive pass-through |
| 3 | VOP_SUM reduction | All 64 lanes = 10, sum = 640 |
| 4 | VOP_ZERO | Clears full 64-lane register |
| 5 | VOP_SIGMOID | PWL: clamp(x+16384, 0, 32767); 0→16384, saturation both sides |
| 6 | VOP_TANH | PWL: clamp(2x, −32768, 32767); saturation both sides |
| 7 | VOP_SILU | x × sigmoid(x) >> 15; zero, mid, neg-sat inputs |
| 8 | VOP_GELU | x × sigmoid(27x>>4) >> 15; zero, mid, neg-sat inputs |
| 9 | VOP_MADD | vd = vs1 × vs2 + vd (third VRF read port) |
| 10 | VOP_BIAS_ADD / VOP_ADD_BCAST | Both map to element-wise a+b |
| 11 | VOP_SCALE (Q10) | x × imm >> 10; 2.0 and 1.0 scale factors |
| 12 | VOP_SCALE_Q8 | x × imm >> 8; 0.5 and 1.0 scale factors |
| 13 | VOP_GLOBAL_AVG / VOP_LAYERNORM_MEAN | All 64 lanes; avg=45 and avg=0 cases |
| 14 | VOP_SOFTMAX_P1 (MAX reduction) | 64 lanes, max in upper half (lane 40 = 999) |

**Stub ops (no RTL implementation yet):** VOP_EXP, VOP_RSQRT, VOP_SCALE_SHIFT, VOP_SOFTMAX_P2/P3, VOP_BATCHNORM, VOP_LAYERNORM_VAR, VOP_LAYERNORM_NORM

```bash
iverilog -g2012 -DSIM -o sim/tb_vpu -I rtl/include rtl/core/vector_unit.v tb/tb_vector_unit.v && vvp sim/tb_vpu
```

---

### 1.4 Local Command Processor (`rtl/control/local_cmd_processor.v`)

**Testbench:** `tb/tb_local_cmd_processor.v` — **8/8 PASS**

| Test | Description |
|------|-------------|
| 1 | NOP + HALT |
| 2 | TENSOR command dispatch to MXU |
| 3 | Single-level hardware loop (3 iterations → 3 MXU ops) |
| 4 | Barrier synchronization (sync_request → sync_grant) |
| 5 | **2-level nested loop** (outer=3, inner=4 → 12 MXU ops) |
| 6 | **Max-depth nesting** (4 levels × 2 → 16 MXU ops, exercises full stack) |
| 7 | **Loop stack overflow** detection (5 LOOPs, limit=4 → error=1) |
| 8 | **Loop stack underflow** detection (ENDLOOP with empty stack → error=1) |

**Note:** Fix 8 widened `loop_sp` from 2 to 3 bits, enabling correct 4-level nesting and overflow detection.

```bash
iverilog -g2012 -DSIM -o sim/tb_lcp -I rtl/include \
    rtl/control/local_cmd_processor.v tb/tb_local_cmd_processor.v && vvp sim/tb_lcp
```

---

### 1.5 SRAM Subsystem (`rtl/memory/sram_subsystem.v`)

**Testbench:** `tb/tb_sram_subsystem.v` — **5/5 PASS**

| Test | Description |
|------|-------------|
| 1 | Basic write/read via MXU port |
| 2 | Concurrent multi-bank access |
| 3 | Priority arbitration (same bank conflict) |
| 4 | VPU write/read |
| 5 | DMA sequential writes |

Port priority: MXU_W > MXU_A > MXU_O > VPU > DMA. 1-cycle registered read latency.

```bash
iverilog -g2012 -DSIM -o sim/tb_sram -I rtl/include \
    rtl/memory/sram_subsystem.v tb/tb_sram_subsystem.v && vvp sim/tb_sram
```

---

### 1.6 DMA Engine (`rtl/core/dma_engine.v`)

**Testbench:** `tb/tb_dma_engine.v` — **4/5 PASS** (1 skipped)

| Test | Description | Result |
|------|-------------|--------|
| 1 | Command interface / ready handshake | ✅ |
| 2 | LOAD: ext[0] → sram[0] | ✅ |
| 3 | STORE: sram → ext | ⏭ Skipped — AXI write response timing mismatch in RTL |
| 4 | 2D LOAD: 2 rows × 1 col | ✅ |
| 5 | State machine reset | ✅ |

**Open issue:** STORE path in `tb_dma_engine.v` times out; the AXI write-response handshake in the RTL state machine does not match the testbench model. Separate fix required.

```bash
iverilog -g2012 -DSIM -o sim/tb_dma -I rtl/include rtl/core/dma_engine.v tb/tb_dma_engine.v && vvp sim/tb_dma
```

---

## 2. Unit Tests — Python Cycle-Accurate Models

### 2.1 VPU Model (`model/vpu_model.py`)

**10/10 PASS** — INT16, 20 VPUOp enum values matching RTL VOP_* opcodes exactly

| Test | Operation |
|------|-----------|
| 1 | ReLU (VPUOp=0x10) |
| 2 | ADD (VPUOp=0x01) |
| 3 | SUM reduction (VPUOp=0x20) |
| 4 | Sigmoid (VPUOp=0x13) — PWL |
| 5 | Tanh (VPUOp=0x14) — PWL |
| 6 | SiLU (VPUOp=0x12) |
| 7 | GELU (VPUOp=0x11) |
| 8 | MADD a×b+c (VPUOp=0x04) — reads dst as accumulator |
| 9 | GLOBAL_AVG (VPUOp=0x23) |
| 10 | SCALE Q10 (0x35) and SCALE_Q8 (0x37) |

```bash
python3 model/vpu_model.py
```

---

### 2.2 DMA Engine Model (`model/dma_model.py`)

**6/6 PASS**

| Test | Operation |
|------|-----------|
| 1 | LOAD 1 word (ext → SRAM) |
| 2 | STORE 1 word (SRAM → ext) |
| 3 | LOAD 4 words |
| 4 | 2D LOAD (2 rows × 2 cols, strided) |
| 5 | NOC_SEND 1 word (SRAM → peer TPC via NoC) |
| 6 | NOC_SEND with backpressure (noc_tx_ready deasserted 3 cycles) |

```bash
python3 model/dma_model.py
```

---

## 3. Modules Not Yet Unit-Tested

| Module | Priority | Blocking |
|--------|----------|---------|
| `rtl/control/global_cmd_processor.v` | High | Multi-TPC coordination |
| `rtl/noc/noc_router.v` | Medium | Inter-TPC transfers |
| `rtl/memory/memory_controller_wrapper.v` | Medium | External HBM/DDR |
| `rtl/top/tensor_processing_cluster.v` | High | Full TPC integration |
| `rtl/top/tensor_accelerator_top.v` | High | System-level |

---

## 4. Integration Tests

### 4.1 TPC Integration

**Status:** Work in progress — LCP→MXU dispatch verified; SRAM writeback not confirmed.

### 4.2 Full Chip

**Status:** Not started — blocked on GCP and NoC unit tests.

---

## 5. Open Issues

| ID | Component | Description | Severity |
|----|-----------|-------------|----------|
| A | DMA RTL | STORE path AXI write-response timing mismatch (TEST 3 skipped) | Medium |
| B | VPU RTL | Stub ops with no implementation: EXP, RSQRT, SCALE_SHIFT, SOFTMAX_P2/P3, BATCHNORM, LAYERNORM_VAR/NORM | Medium |
| C | ~~Compiler~~ | ~~VECTOR instruction encoding mismatch~~ — **FIXED** (Fix 10): assembler now packs vd/vs1/vs2 as 5-bit fields at [111:107]/[106:102]/[101:97]; codegen emits proper VEC.LOAD→ALU→VEC.STORE sequences with VRF register indices | ~~High~~ |
| D | LCP | VPU and DMA command dispatch not tested in `tb_local_cmd_processor.v` | Low |

---

## 6. Sign-off Checklist

- [x] MAC PE — 6/6
- [x] Systolic Array — 5/5 (signed arithmetic, k-tile accumulation)
- [x] VPU — 14/14 at LANES=64 (activation functions, reductions, MADD, SCALE)
- [x] LCP — 8/8 (including nested loops and error detection)
- [x] SRAM Subsystem — 5/5
- [x] Python VPU model — 10/10 (opcodes match RTL exactly)
- [x] Python DMA model — 6/6 (including NOC_SEND and backpressure)
- [ ] DMA Engine — STORE path RTL bug (issue A)
- [ ] GCP unit tests
- [ ] NoC router unit tests
- [ ] TPC integration end-to-end
- [ ] Full chip integration
- [ ] Synthesis / timing closure

---

**Last updated:** 2026-06-16 (Fix 10)
