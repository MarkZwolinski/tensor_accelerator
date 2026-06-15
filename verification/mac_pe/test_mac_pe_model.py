"""test_mac_pe_model.py — Hypothesis property tests for the mac_pe Python model.

No Verilator dependency; runs in < 1 second.  Catches algorithmic bugs
(wrong product formula, incorrect pipeline ordering, clear_acc semantics)
faster than directed tests through automatic shrinking of failures.

Run with: pytest test_mac_pe_model.py -v
"""

import os
from hypothesis import given, settings, HealthCheck
from hypothesis import strategies as st

DATA_WIDTH = int(os.environ.get("DATA_WIDTH", 8))
ACC_WIDTH  = int(os.environ.get("ACC_WIDTH",  32))

DATA_MASK  = (1 << DATA_WIDTH) - 1
ACC_MASK   = (1 << ACC_WIDTH) - 1
DATA_MIN   = -(1 << (DATA_WIDTH - 1))
DATA_MAX   = (1 << (DATA_WIDTH - 1)) - 1


def to_signed(val: int, bits: int) -> int:
    """Reinterpret unsigned int as signed two's-complement."""
    if val >= (1 << (bits - 1)):
        val -= 1 << bits
    return val


def sign_extend(val: int, from_bits: int, to_bits: int) -> int:
    """Sign-extend a signed value from from_bits to to_bits."""
    if val >= (1 << (from_bits - 1)):
        val -= 1 << from_bits
    # Now val is a Python int with correct sign; mask to to_bits unsigned
    return val & ((1 << to_bits) - 1)


class MacPEModel:
    """Cycle-accurate model of rtl/core/mac_pe.v.

    Registers mirror the RTL exactly:
      - weight_reg: loaded when load_weight=1 (independent of enable)
      - act_reg:    updated from act_in when enable=1
      - act_out:    OLD act_reg when enable=1
      - psum_out:   computed from OLD act_reg * OLD weight_reg when enable=1
    """

    def __init__(self):
        self.weight_reg = 0   # unsigned DATA_WIDTH bits
        self.act_reg    = 0   # unsigned DATA_WIDTH bits
        self.act_out    = 0   # unsigned DATA_WIDTH bits
        self.psum_out   = 0   # unsigned ACC_WIDTH bits

    def reset(self):
        self.weight_reg = 0
        self.act_reg    = 0
        self.act_out    = 0
        self.psum_out   = 0

    def posedge(
        self,
        enable: bool = False,
        load_weight: bool = False,
        clear_acc: bool = False,
        weight_in: int = 0,
        act_in: int = 0,
        psum_in: int = 0,
    ) -> None:
        """Advance one clock cycle (non-blocking semantics)."""
        # Compute product from OLD register values (combinational in RTL)
        a_s = to_signed(self.act_reg & DATA_MASK, DATA_WIDTH)
        w_s = to_signed(self.weight_reg & DATA_MASK, DATA_WIDTH)
        prod = a_s * w_s                               # signed, fits in 2*DATA_WIDTH
        prod_ext = prod & ACC_MASK                     # sign-extend via mask + Python sign

        # Update registers (all from old values — non-blocking semantics)
        if load_weight:
            self.weight_reg = weight_in & DATA_MASK
        if enable:
            self.act_out  = self.act_reg               # old act_reg
            self.act_reg  = act_in & DATA_MASK
            if clear_acc:
                self.psum_out = prod_ext
            else:
                self.psum_out = (psum_in + prod_ext) & ACC_MASK

    def check_invariants(self) -> None:
        """Assert structural invariants hold on current state."""
        assert 0 <= self.weight_reg <= DATA_MASK,  "weight_reg out of range"
        assert 0 <= self.act_reg    <= DATA_MASK,  "act_reg out of range"
        assert 0 <= self.act_out    <= DATA_MASK,  "act_out out of range"
        assert 0 <= self.psum_out   <= ACC_MASK,   "psum_out out of range"


# ── Operation strategy ───────────────────────────────────────────────────────
data_st   = st.integers(0, DATA_MASK)
acc_st    = st.integers(0, ACC_MASK)

op_st = st.one_of(
    # load_weight only
    st.tuples(st.just("lw"),   data_st, st.just(0), st.just(0)),
    # enable only (accumulate)
    st.tuples(st.just("en"),   st.just(0), data_st, acc_st),
    # enable + clear_acc
    st.tuples(st.just("en_ca"), st.just(0), data_st, acc_st),
    # enable + load_weight simultaneous
    st.tuples(st.just("en_lw"), data_st, data_st, acc_st),
    # idle
    st.tuples(st.just("idle"), st.just(0), st.just(0), st.just(0)),
)


def dispatch(model: MacPEModel, op: tuple) -> None:
    kind, wi, ai, pi = op
    if kind == "lw":
        model.posedge(load_weight=True, weight_in=wi)
    elif kind == "en":
        model.posedge(enable=True, act_in=ai, psum_in=pi)
    elif kind == "en_ca":
        model.posedge(enable=True, clear_acc=True, act_in=ai, psum_in=pi)
    elif kind == "en_lw":
        model.posedge(enable=True, load_weight=True, weight_in=wi, act_in=ai, psum_in=pi)
    else:  # idle
        model.posedge()


# ── Tests ────────────────────────────────────────────────────────────────────
@given(ops=st.lists(op_st, min_size=1, max_size=100))
@settings(max_examples=500, suppress_health_check=[HealthCheck.too_slow])
def test_invariants_hold_after_any_sequence(ops):
    """Structural invariants must hold after every operation."""
    model = MacPEModel()
    for op in ops:
        dispatch(model, op)
        model.check_invariants()


@given(
    weight=data_st,
    acts=st.lists(data_st, min_size=1, max_size=30),
)
@settings(max_examples=300)
def test_accumulation_correctness(weight: int, acts: list):
    """psum_out must equal the dot-product up to the pipeline offset."""
    model = MacPEModel()
    model.posedge(load_weight=True, weight_in=weight)

    shadow_acc = 0   # independent running sum
    w_s = to_signed(weight, DATA_WIDTH)

    # First enable cycle loads act_reg but product is 0 (old act_reg=0)
    model.posedge(enable=True, act_in=acts[0], psum_in=0)
    # psum_out = 0 (product of old act_reg=0 and weight)
    assert model.psum_out == 0, f"First cycle psum should be 0, got {model.psum_out}"

    for i, act in enumerate(acts):
        a_s = to_signed(acts[i - 1] if i > 0 else 0, DATA_WIDTH)
        expected_prod = (a_s * w_s) & ACC_MASK
        shadow_acc = (shadow_acc + expected_prod) & ACC_MASK if i > 0 else 0

        model.posedge(enable=True, act_in=act if i + 1 < len(acts) else 0,
                      psum_in=shadow_acc)
        # After this posedge, psum_out = shadow_acc + product(acts[i-1] * weight)
        if i > 0:
            new_acc = (shadow_acc + ((to_signed(acts[i - 1], DATA_WIDTH) * w_s) & ACC_MASK)) & ACC_MASK
            assert model.psum_out == new_acc, (
                f"Cycle {i}: psum_out={model.psum_out} expected={new_acc}"
            )


@given(
    weight=data_st,
    act_before=data_st,
    act_clear=data_st,
    psum_ignored=acc_st,
)
@settings(max_examples=300)
def test_clear_acc_discards_psum_in(
    weight: int, act_before: int, act_clear: int, psum_ignored: int
):
    """When clear_acc=1, psum_out = product only (psum_in is discarded)."""
    model = MacPEModel()
    model.posedge(load_weight=True, weight_in=weight)
    model.posedge(enable=True, act_in=act_before, psum_in=0)  # prime act_reg

    # clear_acc: psum_out must equal product of old act_reg * weight_reg
    model.posedge(enable=True, clear_acc=True,
                  act_in=act_clear, psum_in=psum_ignored)

    w_s  = to_signed(weight, DATA_WIDTH)
    ab_s = to_signed(act_before, DATA_WIDTH)
    expected = (ab_s * w_s) & ACC_MASK
    assert model.psum_out == expected, (
        f"clear_acc: psum_out={model.psum_out} expected={expected} "
        f"(weight={w_s}, act_before={ab_s}, psum_ignored={psum_ignored})"
    )
