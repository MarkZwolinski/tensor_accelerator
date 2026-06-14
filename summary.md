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
