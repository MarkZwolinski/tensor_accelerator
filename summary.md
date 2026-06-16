# Verification Flow Summary

Applied the 3-layer methodology from `methodology.md` to two RTL modules.

## Targets

| Module | Location | Why |
|--------|----------|-----|
| `mac_pe` | `rtl/core/mac_pe.v` | Leaf module; validates the flow quickly |
| `dma_engine` | `rtl/core/dma_engine.v` | Complex FSM; known STORE timing bug |

## Directory Structure

```
verification/
├── mac_pe/          # 12 files — complete
└── dma_engine/      # 12 files — complete
```

Each directory contains the same 12-file pattern:

| File | Layer | Purpose |
|------|-------|---------|
| `*_tb.sv` | Simulation | Directed tests + reference model + checker/coverage instantiation |
| `*_checker.sv` | Simulation | SVA assertions (Verilator-compatible mirror always block) |
| `*_coverage.sv` | Simulation | Functional coverage bins (bit variables, no covergroup) |
| `Makefile` | All | `sim`, `model-test`, `formal-prove/cover/bmc`, `mcy` targets |
| `test_*_model.py` | Simulation | Hypothesis property tests for the Python cycle-accurate model |
| `*_formal.sv` | Formal | k-induction/BMC wrapper with ghost state; `FORMAL_BMC` ifdef |
| `*.sby` | Formal | sby prove + cover tasks |
| `*_bmc.sby` | Formal | sby BMC (depth 50 for DMA, 40 for MAC) |
| `config.mcy` | Mutation | MCY config; DUT file reference |
| `test_fm.sv` | Mutation | Hardcoded-parameter formal wrapper; all assertions unconditional |
| `test_fm.sh` | Mutation | MCY runner (exit 0 = not caught, exit 1 = caught) |
| `test_fm.sby` | Mutation | sby BMC config for MCY, depth 20 |

## Key Design Decisions

**mac_pe testbench**: `tick()` sets inputs 1 ns after posedge then waits one posedge — consecutive calls produce consecutive DUT cycles with no idle gaps. Reference model computes product from old register values (mirrors RTL non-blocking semantics).

**dma_engine testbench**: Uses **registered** SRAM (1-cycle read latency) unlike the existing `tb/tb_dma_engine.v` (combinational), specifically to exercise the `S_STORE_CAP` state that absorbs SRAM latency.

**SVA reset**: `disable iff (!rst_n)` — active-low async reset. Async reset deasserted via `@(negedge clk); rst_n = 1` to avoid races.

**Formal ghost state**: Tracks DUT internal signals (`weight_reg`, `act_reg`, `f_in_flight`) using only input ports — prevents DUT bugs from corrupting the reference comparison.

## Assertions

### mac_pe (A1–A6)
- A1: post-reset outputs zero
- A2: weight stable unless `load_weight`
- A3: `act_out` pipelines `act_reg` by one cycle
- A4: accumulation formula (`psum_in + product`) when `!clear_acc`
- A5: clear path (`product` only) when `clear_acc`
- A6: outputs frozen when `!enable`

### dma_engine (A1–A5)
- A1: SRAM `we` and `re` mutually exclusive
- A2: `cmd_ready` deasserts the cycle after command accepted
- A3: `cmd_done` is a single-cycle pulse
- A4: AXI read and write address channels mutually exclusive
- A5: `cmd_ready` reasserts the cycle after `cmd_done`

---

## Session: 2026-06-12 — Test Run & Bug Fixes

### Test Suite Status

Ran `./run_tests.sh` (53 tests). Found and fixed **2 failures**. Suite now passes fully.

| Test | Status | Fix |
|------|--------|-----|
| `tb_systolic_array` Test 2 (4×4 Identity) | **FIXED** | Race condition in testbench `load_weights` task |
| Compiler Extended Ops — ResNet Block | **FIXED** | Scheduler OOM when node has two large activation inputs |

---

### Fix 1: `tb_systolic_array` — 4×4 Identity Test

**File:** `tb/tb_systolic_array.v`

**Symptom:** Column 0 of the result was all zeros; columns 1–3 correct.

**Root cause:** Test 2 weight loading started at exactly 1015 ns, which coincides with a clock posedge (5 + 101×10 = 1015 ns). The original `load_weights` task set signals *then* did `@(posedge clk)` — so the first `@(posedge clk)` for col=0 returned immediately (the posedge had already fired), col=1 signals overwrote col=0 signals before the RTL sampled them, and only odd-numbered columns were ever properly written. PE[0][0].weight_reg stayed 0 throughout computation.

**Fix:** Restructured `load_weights` (and `run_computation`) to put `@(posedge clk)` *before* setting signals — matching the pattern in `tb_systolic_comprehensive.v`:

```verilog
task load_weights;
    integer col, row;
    begin
        for (col = 0; col < ARRAY_SIZE; col = col + 1) begin
            @(posedge clk);           // wait FIRST, then set signals
            weight_load_en = 1;
            weight_load_col = col;
            for (row = 0; row < ARRAY_SIZE; row = row + 1) begin
                weight_load_data[row*DATA_WIDTH +: DATA_WIDTH] = matrix_B[row][col];
            end
        end
        @(posedge clk);
        weight_load_en = 0;
        weight_load_data = 0;
    end
endtask
```

---

### Fix 2: Compiler ResNet Block — OOM

**File:** `sw/compiler/scheduler/scheduler.py`

**Symptom:** `MemoryError: Out of act_1 memory: need 200704, have 61440`

**Root cause:** The ResNet `residual_add` node has two 200,704-byte activation inputs ("bn2_out" and "input"). The scheduler's `_schedule_node` routed all activation inputs to the same region (`act_1`, 256 KB). After allocating the first tensor (200,704 bytes), only 61,440 bytes remained — not enough for the second.

**Fix:** Alternate activation inputs between `act_0` and `act_1` using a per-call counter:

```python
act_inp_idx = 0
for inp_name in node.inputs:
    tensor = graph.get_tensor(inp_name)
    if not tensor:
        continue
    if tensor.data is not None:
        region = 'weight'
    else:
        if self.double_buffer:
            region = f'act_{act_inp_idx % 2}'
        else:
            region = 'act_a' if act_inp_idx == 0 else 'act_b'
        act_inp_idx += 1
```

---

## Session: 2026-06-12 to 2026-06-16 — VPU Correctness Fixes & Comprehensive Audit

### Codebase Audit

A full sweep of the RTL, assembler, and compiler identified 10 issues. Fixed: #1, #3, #4. Remaining open: #2, #5–#10.

| # | Component | Issue | Severity | Status |
|---|-----------|-------|----------|--------|
| 1 | VPU RTL | `VOP_SIGMOID`, `VOP_TANH`, `VOP_SILU` silently passthrough; `VOP_GELU` uses ReLU placeholder | High | **Fixed** |
| 2 | VPU RTL | `VOP_MADD` localparam defined but no `case` entry — passthrough | Medium | **Fixed (in Fix 4)** |
| 3 | Assembler | `SCALE_Q8` missing from `VectorSubop` enum; `subop_map.get(subop, 0)` silently codes unknown subops as NOP | Medium | **Fixed** |
| 4 | VPU RTL | 13 assembler-defined VOP subops have no RTL `case` entry — all silently passthrough | High | **Fixed** |
| 5 | Python model | `vpu_model.py` missing `VOP_SIGMOID`, `VOP_TANH`, `VOP_SILU`, `VOP_GELU`, `VOP_MADD` — RTL/model will diverge | Medium | Open |
| 6 | DMA model | `dma_model.py` `NOC_SEND` state machine stub raises `NotImplementedError` | Low | Open |
| 7 | VPU testbench | `tb_vector_unit.v` instantiates with `LANES=8`; production RTL uses 64 — coverage gap | Low | Open |
| 8 | LCP testbench | Nested loops (LOOP inside LOOP) never tested | Low | Open |
| 9 | VPU RTL | SUM reduction tree zero-extended inputs — signed negative values gave wrong SUM/average | Medium | **Fixed (in Fix 4)** |
| 10 | Docs | `VERIFICATION_STATUS.md` contains four stacked versions; outdated VPU test count (4/4) | Low | Open |

---

### Fix 1: VPU Activation Functions — Real PWL Approximations

**File:** `rtl/core/vector_unit.v`

**Symptom:** `VOP_SIGMOID` (0x13), `VOP_TANH` (0x14), and `VOP_SILU` (0x12) all fell through to `default: lane_result = lane_a` (passthrough). `VOP_GELU` (0x11) had a comment `// For FPGA POC, use ReLU as placeholder`.

**Implementations added** (all with INT16 arithmetic, `DATA_WIDTH`-parametric):

| Op | Formula | Approximation |
|----|---------|---------------|
| Sigmoid | `clamp(x + 16384, 0, 32767)` | 1-segment linear ramp; 0→0.5 at x=0 |
| Tanh | `clamp(2x, −32768, 32767)` | 1-segment linear ramp |
| SiLU | `x × sigmoid(x) >> 15` | Exact via PWL sigmoid; product widened to 32 bits |
| GELU | `x × sigmoid((27/16)·x) >> 15` | 27/16 ≈ 1.702 (0.85% error); product widened |

Critical implementation detail: Verilog multiply returns `max(n,m)` bits. All multiplications for SiLU and GELU sign-extend both operands to `2×DATA_WIDTH` bits before multiplying to avoid silent truncation:

```verilog
wire signed [2*DATA_WIDTH-1:0] silu_prod =
    $signed({{DATA_WIDTH{lane_a[i][DATA_WIDTH-1]}}, lane_a[i]}) *
    $signed({{DATA_WIDTH{1'b0}}, sig_a_out});
wire [DATA_WIDTH-1:0] silu_out = silu_prod[2*DATA_WIDTH-2:DATA_WIDTH-1];
```

**Tests added** (`tb/tb_vector_unit.v`, Tests 5–8):
- sigmoid(0)=16384, sigmoid(32767)=32767, sigmoid(−32768)=0
- tanh(0)=0, tanh(32767)=32767, tanh(−32768)=−32768
- silu(0)=0, silu(16384)=16383, silu(−32768)=0
- gelu(0)=0, gelu(16384)=16383, gelu(−16384)=0

---

### Fix 3: Assembler — SCALE_Q8 and Silent Failure Mode

**File:** `sw/assembler/assembler.py`

**Two problems fixed:**

1. `SCALE_Q8` (subop 0x37) was absent from the `VectorSubop` enum, so `VEC.SCALE_Q8` instructions encoded subop=0 (NOP) silently.

2. The lookup `subop_map.get(subop, 0)` meant *any* unknown VECTOR subop silently became subop=0. Changed to a hard error:

```python
if subop not in subop_map:
    raise ValueError(f"Unknown VECTOR subop '{subop}' at line {self.line_num}")
instr.subop = subop_map[subop]
```

**Added to enum and subop_map:**
```python
SCALE_Q8 = 0x37  # y = x * (scale/256), Q8 fixed-point multiplier
```

Argument parsing for `SCALE_Q8` follows the same path as `SCALE`: `dst, src, scale_imm, count`.

---

### Fix 4: 13 Missing VOP Subops in RTL + SUM Reduction Sign-Extension Bug

**Files:** `rtl/core/vector_unit.v`, `tb/tb_vector_unit.v`

#### Instruction encoding context

The RTL uses 5-bit VRF register indices packed into `cmd[111:107]`/`[106:102]`/`[101:97]`. The assembler's `Instruction` class uses independent 16-bit fields (`dst[111:96]`, `src0[95:80]`, etc.) filled with SRAM addresses by the compiler. This mismatch means the compiler-to-RTL simulation path is architecturally broken for all data-carrying ops — that's a larger redesign tracked separately. Fix 4 targets the VRF-mode RTL gap.

#### New VOP localparams (16 total added)

```verilog
localparam VOP_ADD_BCAST      = 8'h06;
localparam VOP_BIAS_ADD       = 8'h07;
localparam VOP_EXP            = 8'h15;  // stub
localparam VOP_RSQRT          = 8'h16;  // stub
localparam VOP_GLOBAL_AVG     = 8'h23;
localparam VOP_SCALE          = 8'h35;
localparam VOP_SCALE_SHIFT    = 8'h36;  // stub
localparam VOP_SCALE_Q8       = 8'h37;
localparam VOP_SOFTMAX_P1     = 8'h40;
localparam VOP_SOFTMAX_P2     = 8'h41;  // stub
localparam VOP_SOFTMAX_P3     = 8'h42;  // stub
localparam VOP_BATCHNORM      = 8'h50;  // stub
localparam VOP_LAYERNORM_MEAN = 8'h51;
localparam VOP_LAYERNORM_VAR  = 8'h52;  // stub
localparam VOP_LAYERNORM_NORM = 8'h53;  // stub
```

#### Fully implemented ops

| Op | Formula | Notes |
|----|---------|-------|
| `VOP_MADD` (0x04) | `vd = vs1 × vs2 + vd` | Third VRF read port `vc_data = vrf[vd_reg]`; 32-bit widened product |
| `VOP_ADD_BCAST` (0x06) | `lane_a + lane_b` | Same ALU as ADD; broadcast semantics are compiler's concern |
| `VOP_BIAS_ADD` (0x07) | `lane_a + lane_b` | Same ALU as ADD |
| `VOP_SCALE` (0x35) | `saturate(x × imm / 1024, INT16)` | Q10 format; 1.0 = 1024 |
| `VOP_SCALE_Q8` (0x37) | `saturate(x × imm / 256, INT16)` | Q8 format; 1.0 = 256; reuses same 32-bit product wire as SCALE |
| `VOP_GLOBAL_AVG` (0x23) | `SUM(all lanes) >>> REDUCE_STAGES` | Routed to S_REDUCE; exact for power-of-2 LANES |
| `VOP_SOFTMAX_P1` (0x40) | MAX reduction | Routed to S_REDUCE with MAX tree; same path as `VOP_MAX` |
| `VOP_LAYERNORM_MEAN` (0x51) | `SUM >>> REDUCE_STAGES` | Same path as `VOP_GLOBAL_AVG` |

SCALE and SCALE_Q8 both saturate using the same 32-bit product and differ only in right-shift amount (10 vs 8):
```verilog
wire signed [2*DATA_WIDTH-1:0] scale_prod =
    $signed({{DATA_WIDTH{lane_a[i][DATA_WIDTH-1]}}, lane_a[i]}) *
    $signed({{DATA_WIDTH{imm_reg[DATA_WIDTH-1]}}, imm_reg});
wire signed [2*DATA_WIDTH-1:0] scale_shr = scale_prod >>> 10;   // Q10
wire signed [2*DATA_WIDTH-1:0] scale_q8_shr = scale_prod >>> 8; // Q8
```

#### Stub ops (output zero, not passthrough)

`VOP_EXP`, `VOP_RSQRT`, `VOP_SCALE_SHIFT`, `VOP_SOFTMAX_P2`, `VOP_SOFTMAX_P3`, `VOP_BATCHNORM`, `VOP_LAYERNORM_VAR`, `VOP_LAYERNORM_NORM` — these require multi-cycle SRAM access or PWL approximations that are deferred. All now output `{DATA_WIDTH{1'b0}}` instead of passthrough so failures produce recognizable all-zero output rather than silently re-emitting the input.

#### S_DECODE routing

```verilog
VOP_SUM, VOP_MAX, VOP_MIN,
VOP_GLOBAL_AVG, VOP_SOFTMAX_P1, VOP_LAYERNORM_MEAN: begin
    state <= S_REDUCE;
end
```

#### S_REDUCE output path

```verilog
S_REDUCE: begin
    if (subop_reg == VOP_GLOBAL_AVG || subop_reg == VOP_LAYERNORM_MEAN) begin
        // Average = SUM / LANES (exact for power-of-2 LANES)
        vrf[vd_reg] <= {{(LANES-1)*DATA_WIDTH{1'b0}},
                        reduce_result[REDUCE_W-1:REDUCE_STAGES]};
    end else begin
        vrf[vd_reg] <= {{(LANES-1)*DATA_WIDTH{1'b0}}, reduce_result[DATA_WIDTH-1:0]};
    end
    state <= S_DONE;
end
```

#### SUM reduction sign-extension fix (bonus)

The reduction tree's initial stage previously zero-extended lane inputs:
```verilog
reduce_tree[0][lane] = {{REDUCE_STAGES{1'b0}}, lane_a[lane]};  // WRONG for negatives
```
Negative INT16 values (e.g., −1 = 0xFFFF) were treated as large positive numbers (65535), giving a wrong SUM. Changed to sign-extension:
```verilog
reduce_tree[0][lane] = {{REDUCE_STAGES{lane_a[lane][DATA_WIDTH-1]}}, lane_a[lane]};
```
Proof: SUM of 64 lanes of −1 = −64 in 22-bit 2's-complement = 0x3FFFC0; `reduce_result[21:6]` = 0xFFFF = −1. The 2's-complement modular arithmetic in REDUCE_W bits stays correct as long as the actual sum fits within signed REDUCE_W range, which is guaranteed by `REDUCE_W = DATA_WIDTH + REDUCE_STAGES`.

#### New tests added (`tb/tb_vector_unit.v`, Tests 9–14)

Also added `make_cmd_imm` function to inject the `imm` field (cmd[47:32]) for SCALE/SCALE_Q8.

| Test | Op | Stimulus | Expected |
|------|----|----------|----------|
| 9 | MADD | V10=[2,4], V11=[3,5], V26=[10,20] | V26=[16,40] |
| 10 | BIAS_ADD / ADD_BCAST | V12=[100,200], V13=[7,8] | V27=V28=[107,208] |
| 11 | SCALE (Q10) | V14[0]=512, imm=2048 | V29[0]=1024 |
| 11 | SCALE (Q10) | V14[1]=−1024, imm=1024 | V29[1]=−1024 |
| 12 | SCALE_Q8 (Q8) | V15[0]=512, imm=128 | V30[0]=256 |
| 12 | SCALE_Q8 (Q8) | V15[1]=−256, imm=256 | V30[1]=−256 |
| 13 | GLOBAL_AVG | V16=[10,20,30,40,50,60,70,80] | V17[0]=45 |
| 13 | LAYERNORM_MEAN | V18=[−8,−8,−8,−8,+8,+8,+8,+8] | V19[0]=0 |
| 14 | SOFTMAX_P1 | V20=[−5,10,−3,20,0,15,−1,5] | V21[0]=20 |

**Final VPU test count: 14/14 PASS. Full suite: all tests pass.**

---

### Open Items After This Session

| # | Description |
|---|-------------|
| 5 | `vpu_model.py` missing 5 new activation ops — model/RTL divergence for sigmoid/tanh/SiLU/GELU/MADD |
| 6 | `dma_model.py` `NOC_SEND` raises `NotImplementedError` |
| 7 | VPU testbench uses LANES=8; production RTL has LANES=64 — coverage gap for 64-lane corner cases |
| 8 | LCP nested loop (LOOP inside LOOP) not tested |
| 10 | `VERIFICATION_STATUS.md` stale (December 2024 dates, four concatenated versions) |
| — | Compiler→RTL instruction encoding mismatch: compiler writes 16-bit SRAM addresses into `dst`/`src0`/`src1` fields; RTL VPU decodes these fields as 5-bit VRF register indices — all compiler-generated VECTOR instructions produce wrong results in RTL simulation |
| — | Stub ops needing full implementation: `VOP_EXP`, `VOP_RSQRT`, `VOP_SCALE_SHIFT`, `VOP_SOFTMAX_P2/P3`, `VOP_BATCHNORM`, `VOP_LAYERNORM_VAR/NORM` |

---

## How to Run

```bash
# mac_pe
cd verification/mac_pe
make sim                # Verilator simulation (T1–T12 directed tests)
make sim TRACE=1        # + VCD waveform
make model-test         # pytest hypothesis tests
make formal-prove       # sby k-induction (A1–A6 unbounded)
make formal-bmc         # sby BMC (ghost state reachability)
make formal-cover       # sby cover (interesting states)
make mcy                # MCY mutation coverage

# dma_engine
cd verification/dma_engine
make sim                # T1–T8: LOAD, STORE (STORE_CAP path), 2D, backpressure
make model-test         # pytest hypothesis tests (wraps model/dma_model.py)
make formal-prove       # sby k-induction (A1–A5)
make formal-bmc         # sby BMC depth 50
make formal-cover       # sby cover
make mcy                # MCY mutation coverage
```
