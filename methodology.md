# Verification Methodology

Three-layer stack applied in sequence: **simulation** (directed tests + SVA + coverage), **formal** (k-induction + BMC + cover), and **mutation coverage** (MCY). All three are designed to be reusable. The following template describes how to apply each layer to any new synchronous RTL module.

## Step 1 — Understand the new design

Collect before writing any verification code:

| Item | theta4 FIFO answer | Needed for new design |
|------|-------------------|----------------------|
| Module name | `fifo` | `<module>` |
| Parameters | `WIDTH`, `DEPTH`, `ALMOST_FULL_TH`, `ALMOST_EMPTY_TH` | list all |
| Ports | clk, n_rst, we, re, wrdata, rddata, full, empty, … | list all |
| Reset polarity/style | active-low synchronous | active-high? async? |
| Key internal state | `count [POINTER_W:0]` | state variable to mirror as ghost |
| Safety invariants | `!(full && empty)`, `full → almost_full`, … | derive from spec |
| Reachable corner cases | `full`, `empty`, `sim_rw` | derive from spec |

---

## Simulation layer

## Step 2 — Create `<module>_tb.sv` (top-level testbench)

Three-file split: `<module>_tb.sv` drives stimulus, `<module>_checker.sv` holds SVA assertions, `<module>_coverage.sv` holds coverage. All compiled together; `<module>_tb.sv` instantiates the DUT, checker, and coverage module.

**`<module>_tb.sv` skeleton:**

```systemverilog
module <module>_tb;

    // Parameters — use `parameter` not `localparam` so Verilator -G can override
    parameter int WIDTH = 4, DEPTH = 12, ...;

    // Clock and DUT signals
    logic clk = 0;
    always #5 clk = ~clk;   // 10 ns period

    logic <reset>, <inputs>, <outputs>;

    // DUT instantiation
    <module> #(.WIDTH(WIDTH), ...) dut (.*);

    // Checker and coverage instantiation
    <module>_checker #(...) chk (.clk, .<reset>, <dut_outputs>, .assertion_failures);
    <module>_coverage #(...) cov (.clk, .<reset>, <dut_outputs>, <ref_state>);

    // Reference model — tracks expected state independently of DUT outputs
    <type> ref_model[...];

    // Helper tasks
    task reset_dut(); ... endtask
    task write_one(input logic [WIDTH-1:0] data); ... endtask   // drive inputs, check outputs
    task read_one(output logic [WIDTH-1:0] data); ... endtask
    task check_outputs(input int expected_state); ... endtask   // compare DUT vs ref model
    task idle_cycle(); ... endtask

    // Parameter guard — $fatal for unsafe parameter combinations
    initial begin
        if (<hazardous_condition>) $fatal(1, "unsafe parameters");
    end

    // VCD waveform support (silently ignored without --trace)
    initial begin $dumpfile("<module>_tb.vcd"); $dumpvars(0, <module>_tb); end

    // Test sequences
    int errors = 0;
    initial begin
        reset_dut();
        // T1: post-reset state
        // T2: basic write + read round-trip
        // T3: fill to maximum
        // T4: drain after fill (data integrity)
        // T5/T6: threshold boundaries
        // T7: write-when-full guard (overflow)
        // T8: read-when-empty guard (underflow)
        // T9: simultaneous read+write (net-zero count)
        // T10: state wraparound (multiple fill/drain cycles)
        // T11/T12: coverage corner cases

        // End-of-sim summary
        cov.print_coverage();
        if (errors == 0 && chk.assertion_failures == 0)
            $display("RESULT: PASS — all checks passed");
        else
            $display("RESULT: FAIL — %0d errors, %0d assertion failures",
                      errors, chk.assertion_failures);
        $finish;
    end

endmodule
```

**Key architecture choices:**
- Stimulus driven 1 ns after `posedge clk` to avoid setup/hold races with synchronous DUT
- Reference model uses its own state (not DUT outputs) to compute expected values — prevents DUT bugs from masking themselves in reference model comparisons
- `check_outputs` derives all expected flag values from the reference model state and parameters; no hardcoded counts
- Simultaneous operation tests use `ref_model.size() > 0` / `ref_model.size() < DEPTH` as guards — not `!empty`/`!full` — so DUT flag bugs don't silently corrupt the reference model
- Error counter accumulated throughout; single PASS/FAIL line at the end for easy CI parsing

**Test sequence design pattern:**

| Category | Tests | What to verify |
|----------|-------|----------------|
| Post-reset | T1 | Reset leaves design in known state |
| Basic operation | T2 | Single write + read round-trip |
| Boundary — full | T3, T7 | Fill to capacity; write-when-full rejected |
| Boundary — empty | T4, T8 | Drain completely; read-when-empty rejected |
| Threshold flags | T5, T6 | Almost-full / almost-empty assertion/de-assertion points |
| Simultaneous | T9 | Simultaneous read+write: net-zero state change |
| Wraparound | T10 | Multi-cycle fill/drain: pointer/state integrity across wrap |
| Coverage close | T11, T12 | Corner cases that simulation misses without explicit stimulus |

## Step 3 — Create `<module>_checker.sv` (SVA assertions)

```systemverilog
module <module>_checker #( <parameters> ) (
    input logic clk, <reset>, <dut_outputs>,
    output int  assertion_failures
);

    // Concurrent SVA assertions
    // Verilator: use $display not $error in else clauses ($error maps to $stop)

    // Combinational invariant
    A1_<name>: assert property (
        @(posedge clk) disable iff (!<reset>) <invariant>
    ) else $display("A1: <message>");

    // Sequential (one-cycle implication)
    A2_<name>: assert property (
        @(posedge clk) disable iff (!<reset>) <antecedent> |=> <consequent>
    ) else $display("A2: <message>");

    // Post-reset
    A3_<name>: assert property (
        @(posedge clk) $rose(<reset>) |=> <post_reset_state>
    ) else $display("A3: <message>");

    // Parallel always block mirrors assertion conditions for the failure counter
    // (Verilator does not support reading assertion pass/fail status directly)
    logic prev_<signal>;
    always @(posedge clk) begin
        prev_<signal> <= <signal>;
        assertion_failures <= 0; // reset each cycle or accumulate as needed
        if (<reset> && !<invariant>)              assertion_failures++;  // A1
        if (!prev_<reset> && <reset> && !<post_reset_state>) assertion_failures++; // A3
        ...
    end

endmodule
```

**Assertion categories to cover:**
- Mutual exclusion of output states (e.g., `!(full && empty)`)
- Implication chains (e.g., `full → almost_full`)
- Post-reset guarantees (`$rose(reset) |=> <known_state>`)
- Stability under no-change conditions (`we && full |=> full`)
- State-change guarantees (`re && full |=> !full`)

**Verilator compatibility:** `$error` in SVA `else` clause maps to `$stop` — use `$display` and let simulation continue. The parallel `always` block is the only way to get a countable failure signal without aborting simulation.

## Step 4 — Create `<module>_coverage.sv` (functional coverage)

```systemverilog
module <module>_coverage #( <parameters> ) (
    input logic clk, <reset>, <dut_outputs>, <ref_state>
);

    // Verilator: covergroup @(posedge clk) is NOT supported
    // Use bit variables + always @(posedge clk) instead

    bit cov_<bin_name> = 0;
    ...

    always @(posedge clk) begin
        if (<reset>) begin
            // Operations
            if (!we && !re)      cov_idle    = 1;
            if (we && !re)       cov_wr_only = 1;
            if (!we && re)       cov_rd_only = 1;
            if (we && re)        cov_sim_rw  = 1;

            // State values (use reference model, not DUT)
            if (<ref_state> == 0)            cov_state_zero    = 1;
            if (<ref_state> == <MAX_STATE>)  cov_state_full    = 1;
            ...

            // Status flags seen asserted
            if (full)         cov_flag_full         = 1;
            if (empty)        cov_flag_empty         = 1;
            if (almost_full)  cov_flag_almost_full   = 1;
            if (almost_empty) cov_flag_almost_empty  = 1;

            // Corner cases
            if (we && full)   cov_wr_when_full  = 1;
            if (re && empty)  cov_rd_when_empty = 1;

            // Cross bins
            if (we && re && full)   cov_sim_rw_full  = 1;
            if (we && re && empty)  cov_sim_rw_empty = 1;

            // Assertion antecedents (vacuous-pass detection)
            if ($rose(<reset>))  cov_reset_edge = 1;
            if (full && we)      cov_a5_ant     = 1;
            if (full && re)      cov_a6_ant     = 1;
        end
    end

    task print_coverage();
        int hits = 0, total = 0;
        // count hits / total, print each bin
        $display("Coverage: %0d/%0d bins (%.1f%%)", hits, total, 100.0*hits/total);
    endtask

endmodule
```

**Coverage bin design principles:**
- **Use the reference model** for state-value bins, not DUT outputs — DUT bugs can make `count` disagree with what was actually written/read
- **Assertion antecedent bins** confirm that sequential assertions (A4–A6 / A3 above) fired at least once — catches vacuous passes where the antecedent never held
- **Cross bins** explicitly force stimulus combinations that don't arise naturally (simultaneous RW when full/empty)
- Add bins for each boundary condition derived from the spec (threshold values, exactly-1, exactly-MAX)
- Aim for a bin that requires explicit test stimulus to close — this forces T11/T12-style tests

## Step 5 — Simulation Makefile targets

```makefile
TOP     = <module>_tb
DUT     = <module>.sv
TB_SRCS = <module>_tb.sv <module>_checker.sv <module>_coverage.sv
SIM     = obj_dir/V$(TOP)

WIDTH ?= <default>  DEPTH ?= <default>  ...

VFLAGS = --binary --sv --timing --top-module $(TOP) --coverage \
         -Wno-TIMESCALEMOD -Wno-INITIALDLY -Wno-WIDTHEXPAND \
         -GWIDTH=$(WIDTH) -GDEPTH=$(DEPTH) ...

TRACE ?= 0
ifeq ($(TRACE),1)
VFLAGS += --trace
endif

# Stamp file: rebuild when DUT, parameters, or TRACE change
FLAGS_FILE = .build_flags
FLAGS_CURR = DUT=$(DUT) WIDTH=$(WIDTH) ... TRACE=$(TRACE)
$(shell echo "$(FLAGS_CURR)" > $(FLAGS_FILE).tmp; \
  diff -q $(FLAGS_FILE).tmp $(FLAGS_FILE) >/dev/null 2>&1 \
    && rm $(FLAGS_FILE).tmp || mv $(FLAGS_FILE).tmp $(FLAGS_FILE))

all: sim
sim: $(SIM)
	$(SIM)
$(SIM): $(TB_SRCS) $(DUT) $(FLAGS_FILE)
	verilator $(VFLAGS) $(TB_SRCS) $(DUT)
annotate: sim
	verilator_coverage --annotate annotated/ coverage.dat
clean:
	rm -rf obj_dir annotated coverage.dat <module>_tb.vcd $(FLAGS_FILE) ...
```

The `.build_flags` stamp file forces recompilation whenever parameters or the DUT file change — critical when switching between correct/buggy DUTs or different parameter sets.

## Step 5b — Add hypothesis property-based testing

Two hypothesis additions complement the directed test sequences.

### `test_<module>_model.py` — pure Python `@given` tests (full shrinking)

A standalone pytest file with no Verilator dependency. Runs in under 1s. Create a `<Module>Model` class that mirrors the RTL exactly, then write `@given` tests against it:

```python
import os
from hypothesis import given, settings
from hypothesis import strategies as st

DEPTH = int(os.environ.get("DEPTH", 12))
WIDTH = int(os.environ.get("WIDTH", 4))
MASK  = (1 << WIDTH) - 1

class <Module>Model:
    def __init__(self):
        self._state = <initial_state>

    def <operation>(self, *args):
        # mirror RTL behavior exactly
        ...

    def check_invariants(self):
        assert <invariant_1>, "description"
        assert <invariant_2>, "description"
        ...

op_st = st.one_of(
    st.tuples(st.just('<op1>'), st.integers(0, MASK)),
    st.tuples(st.just('<op2>'), st.just(0)),
)

@given(ops=st.lists(op_st, min_size=1, max_size=100))
def test_invariants_hold_after_any_sequence(ops):
    model = <Module>Model()
    for op, data in ops:
        model.<dispatch>(op, data)
        model.check_invariants()

@given(ops=st.lists(op_st, min_size=1, max_size=100))
def test_data_integrity(ops):
    model = <Module>Model()
    shadow = []    # independent record of in-flight data
    for op, data in ops:
        if op == '<write_op>' and not model.<full>:
            shadow.append(data & MASK)
            model.<write>(data)
        elif op == '<read_op>' and not model.<empty>:
            expected = shadow.pop(0)
            got = model.<read>()
            assert got == expected
    model.check_invariants()
```

Add to Makefile:
```makefile
model-test: test_<module>_model.py
	pytest test_<module>_model.py -v
```

**Why:** `@given` gives full hypothesis semantics — automatic shrinking of failures to minimal counterexamples, persistent example database, coverage-guided generation. Catches algorithmic bugs (wrong count logic, incorrect ordering) faster than directed tests.

### `test_hypothesis_random` in `test_<module>.py` — RTL-level random stimulus

Add a second `@cocotb.test()` that generates diverse sequences and drives the DUT:

```python
import warnings
from hypothesis import strategies as st
from hypothesis.errors import HypothesisSideeffectWarning
warnings.filterwarnings("ignore", category=HypothesisSideeffectWarning)

def _make_seq_strategy():
    op = st.one_of(
        st.tuples(st.just('<write>'), st.integers(0, MASK)),
        st.tuples(st.just('<read>'),  st.just(0)),
        st.tuples(st.just('idle'),    st.just(0)),
    )
    return st.lists(op, min_size=5, max_size=50)

@cocotb.test()
async def test_hypothesis_random(dut):
    """200 hypothesis-generated sequences against DUT and reference model."""
    global errors, assertion_failures, ref_model
    errors = assertion_failures = 0
    ref_model = <initial>

    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    cocotb.start_soon(run_assertions(dut))
    cocotb.start_soon(sample_coverage(dut))

    seq_st = _make_seq_strategy()
    failing = []

    for trial in range(200):
        await reset_dut(dut)
        ops = seq_st.example()
        pre_err = errors
        for op, data in ops:
            if op == '<write>':  await write_one(dut, data)
            elif op == '<read>': await read_one(dut)
            else:                await idle_cycle(dut)
        if errors != pre_err:
            failing.append((trial, ops))
            dut._log.error(f"[hyp trial {trial}] failing sequence: {ops}")

    if failing or assertion_failures:
        raise AssertionError(f"{errors} error(s), {assertion_failures} assertion failure(s)")
```

**Key notes:**
- `@given` cannot wrap an async cocotb test (cocotb uses its own scheduler, not asyncio) — use `.example()` for generation instead; no automatic shrinking, but hypothesis's database and weighted generation still apply
- `_make_seq_strategy()` defers strategy construction to avoid `HypothesisSideeffectWarning`; suppress the warning anyway with the `warnings.filterwarnings` call
- The `COCOTB_CONFIG` in `Makefile.cocotb` should pin the pipx-installed version explicitly if multiple cocotb installs may be in `$PATH`

---

## Formal layer

## Step 6 — Create `<module>_formal.sv`

Adapt `fifo_formal.sv`. The structure is fixed; content changes per design:

```systemverilog
`default_nettype none
module <module>_formal #( <parameters> );

    logic clk, <reset_signal>, <inputs>;
    logic [W-1:0] <outputs>;

    <module> #( <params> ) dut (.*);

    // f_past_valid guard — always identical across designs
    logic f_past_valid = 1'b0;
    always @(posedge clk) f_past_valid <= 1'b1;

    // Safety assertions (combinational invariants)
    always @(posedge clk)
        if (f_past_valid && <out_of_reset>)
            assert ( <invariant> );

    // Sequential assertions using $past / $rose
    always @(posedge clk)
        if (f_past_valid && <out_of_reset> && $past(<antecedent>))
            assert ( <consequent> );

    // Ghost-state reachability (BMC task only)
`ifdef FORMAL_BMC
    always @(posedge clk) if (!f_past_valid) assume (<reset_asserted>);
    logic [N:0] f_state = '0;
    always @(posedge clk) begin
        if (<reset>) f_state <= '0;
        else         f_state <= f_state + <update_from_inputs_only>;
    end
    always @(posedge clk)
        if (f_past_valid && <out_of_reset>)
            if (f_state == <MAX>) assert (<dut_agrees>);
`endif

    // Cover properties
    always @(posedge clk)
        if (f_past_valid && <out_of_reset>)
            cover (<interesting_state>);

endmodule
```

Key adaptations:
- `<out_of_reset>`: active-low reset `n_rst` → use `n_rst` directly as the guard; active-high → negate it
- Ghost state update must use only **input signals** as guards (not DUT outputs) so it remains independent
- BMC `depth` ≥ cycles needed to traverse the full state range; rule of thumb: 2 × max_state_count

## Step 7 — Create sby scripts

**`<module>.sby`** (prove + cover, adapt `fifo.sby` — change file/module names):
```
[tasks]
prove
cover

[options]
prove: mode prove
cover: mode cover
depth <N>

[engines]
smtbmc boolector

[script]
read -formal <module>_formal.sv <module>.sv
prep -top <module>_formal

[files]
<module>_formal.sv
<module>.sv
```

**`<module>_bmc.sby`** (ghost-state BMC, adapt `fifo_bmc.sby`):
```
[options]
mode bmc
depth <N>

[engines]
smtbmc boolector

[script]
read_verilog -sv -formal -D FORMAL_BMC <module>_formal.sv <module>.sv
prep -top <module>_formal

[files]
<module>_formal.sv
<module>.sv
```

---

## MCY layer

## Step 8 — Create the MCY harness

**`config.mcy`** — change `fifo` → `<module>` in `[script]` and `[files]`; logic/report/test sections are identical.

**`test_fm.sv`** — adapt `test_fm.sv`: remove parameters, hardcode port widths to `config.mcy` defaults, instantiate `<module> dut (.*)` (no explicit parameters — MCY's `prep` produces non-parametric RTLIL). Include all assertions including ghost state **unconditionally** (no `ifdef` — MCY always uses BMC).

**`test_fm.sh`** — copy verbatim from theta4; no changes needed.

**`test_fm.sby`** — change `prep -top fifo_formal` → `prep -top <module>_formal`; everything else identical.

## Step 9 — Formal + MCY Makefile targets

```makefile
FORMAL_SRCS = <module>_formal.sv <module>.sv
MCY_SRCS    = config.mcy <module>.sv test_fm.sv test_fm.sh test_fm.sby

formal: formal-prove formal-bmc formal-cover
formal-prove: $(FORMAL_SRCS) <module>.sby
	sby -f <module>.sby prove
formal-bmc: $(FORMAL_SRCS) <module>_bmc.sby
	sby -f <module>_bmc.sby
formal-cover: $(FORMAL_SRCS) <module>.sby
	sby -f <module>.sby cover
formal-clean:
	rm -rf <module>_prove <module>_bmc <module>_cover

mcy: $(MCY_SRCS)
	mcy init && mcy run
mcy-status:
	mcy status
mcy-clean:
	rm -rf database tasks
```

## Verification sequence and expected outcomes

```bash
# Layer 1 — Simulation (directed + hypothesis)
make                        # PASS: 0 errors, 0 assertion failures; ≥95% coverage
make TRACE=1                # same with VCD waveform
make DUT=<buggy>.sv         # confirms tests catch known bugs
make -f Makefile.cocotb     # cocotb: T1–T12 + 200 hypothesis random sequences
make model-test             # pytest: 5 @given model tests, ~1s, no simulation

# Layer 2 — Formal
make formal-prove     # PASS: k-induction for all safety assertions
make formal-bmc       # PASS: ghost-state reachability holds for depth N
make formal-cover     # PASS: all cover properties reached

# Layer 3 — Mutation coverage
make mcy              # target: 100% mutation coverage
```

Expected progression:
1. Simulation PASS → directed tests catch all known bugs; coverage ≥ 95%
2. Model tests PASS → Python model invariants hold for all hypothesis-generated sequences
3. Formal prove PASS → safety properties hold unboundedly
4. BMC PASS → reachability assertions confirmed; no vacuous proof
5. Cover PASS → all interesting states reachable by the solver
6. MCY 100% → every single-point RTL mutation caught by at least one assertion

If MCY < 100%: run `mcy list --details`, identify surviving mutation signals/lines, add assertions targeting those. The typical gap pattern: pointer/state mutations survive when only flag-relationship assertions exist — add ghost-state assertions to close the gap (as A7/A8 did here, taking coverage from 26% to 100%).

## Files summary

| File | Source | Changes needed |
|------|--------|----------------|
| `<module>_tb.sv` | Adapt `fifo_tb.sv` | Ports, reference model type, test sequences |
| `<module>_checker.sv` | Adapt `fifo_checker.sv` | Assertion properties and mirror block |
| `<module>_coverage.sv` | Adapt `fifo_coverage.sv` | Bin conditions; keep always-block pattern |
| `test_<module>.py` | Adapt `test_fifo.py` | Ports, operations, add `test_hypothesis_random` |
| `test_<module>_model.py` | Adapt `test_fifo_model.py` | Model class, operations, invariants |
| `<module>_formal.sv` | Adapt `fifo_formal.sv` | Ports, assertions, ghost state |
| `<module>.sby` | Adapt `fifo.sby` | Module/file names only |
| `<module>_bmc.sby` | Adapt `fifo_bmc.sby` | Module/file names only |
| `config.mcy` | Adapt `config.mcy` | DUT name only |
| `test_fm.sv` | Adapt `test_fm.sv` | Hardcode port widths; remove `ifdef` |
| `test_fm.sh` | Copy verbatim | None |
| `test_fm.sby` | Adapt `test_fm.sby` | `prep -top` name only |
| `Makefile` | Adapt targets | Module/file names throughout |
| `Makefile.cocotb` | Adapt `Makefile.cocotb` | DUT name, pin `COCOTB_CONFIG` if needed |
