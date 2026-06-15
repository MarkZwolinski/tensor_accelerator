"""test_dma_model.py — Hypothesis property tests for dma_model.py (methodology Step 2b)

Wraps the existing cycle-accurate Python model to verify:
- LOAD correctness: ext→SRAM data integrity
- STORE correctness: SRAM→ext data integrity
- Invariants: cmd_done single-pulse, cmd_ready in IDLE only
"""

import sys
import os

sys.path.insert(0, os.path.join(os.path.dirname(__file__), "../../model"))

from dma_model import (
    DMAEngine, DMACommand, DMAState, DMAOp,
    SRAMModel, AXIMemory, run_cycles
)

from hypothesis import given, settings, assume
from hypothesis import strategies as st
import pytest


WORD_BYTES = 32   # DATA_WIDTH / 8 = 256 / 8
AXI_WORDS  = 256
SRAM_WORDS = 256
TIMEOUT    = 200


def word_idx(byte_addr: int) -> int:
    return (byte_addr >> 5) % AXI_WORDS


def make_env():
    dma  = DMAEngine(verbose=False)
    sram = SRAMModel(num_words=SRAM_WORDS, verbose=False)
    axi  = AXIMemory(size_words=AXI_WORDS, read_latency=2, verbose=False)
    return dma, sram, axi


# ─── helpers ──────────────────────────────────────────────────────────────────

def run_cmd(dma, sram, axi, cmd, max_cycles=TIMEOUT):
    """Run cmd to completion; return True on success."""
    done = run_cycles(dma, sram, axi, cmd, max_cycles=max_cycles)
    return done


# ─── LOAD correctness ─────────────────────────────────────────────────────────

@given(
    ext_word=st.integers(min_value=0, max_value=AXI_WORDS - 1),
    int_word=st.integers(min_value=0, max_value=SRAM_WORDS - 1),
    data=st.integers(min_value=0, max_value=0xFFFF_FFFF_FFFF_FFFF),
)
@settings(max_examples=300, deadline=5000)
def test_load_transfers_correct_data(ext_word, int_word, data):
    dma, sram, axi = make_env()
    axi.mem[ext_word] = data

    cmd = DMACommand(
        subop=DMAOp.LOAD,
        ext_addr=ext_word * WORD_BYTES,
        int_addr=int_word * WORD_BYTES,
        rows=1, cols=1,
        ext_stride=WORD_BYTES, int_stride=WORD_BYTES,
    )
    done = run_cmd(dma, sram, axi, cmd)
    assert done, "LOAD timed out"
    assert int(sram.mem[int_word]) == data, (
        f"LOAD: sram[{int_word}]=0x{int(sram.mem[int_word]):x} expected 0x{data:x}"
    )


# ─── STORE correctness ────────────────────────────────────────────────────────

@given(
    int_word=st.integers(min_value=0, max_value=SRAM_WORDS - 1),
    ext_word=st.integers(min_value=0, max_value=AXI_WORDS - 1),
    data=st.integers(min_value=0, max_value=0xFFFF_FFFF_FFFF_FFFF),
)
@settings(max_examples=300, deadline=5000)
def test_store_transfers_correct_data(int_word, ext_word, data):
    dma, sram, axi = make_env()
    sram.mem[int_word] = data

    cmd = DMACommand(
        subop=DMAOp.STORE,
        ext_addr=ext_word * WORD_BYTES,
        int_addr=int_word * WORD_BYTES,
        rows=1, cols=1,
        ext_stride=WORD_BYTES, int_stride=WORD_BYTES,
    )
    done = run_cmd(dma, sram, axi, cmd)
    assert done, "STORE timed out"
    assert int(axi.mem[ext_word]) == data, (
        f"STORE: axi[{ext_word}]=0x{int(axi.mem[ext_word]):x} expected 0x{data:x}"
    )


# ─── Multi-word LOAD ──────────────────────────────────────────────────────────

@given(
    n_words=st.integers(min_value=1, max_value=4),
    ext_base=st.integers(min_value=0, max_value=16),
    int_base=st.integers(min_value=0, max_value=16),
)
@settings(max_examples=200, deadline=10000)
def test_load_multiple_words(n_words, ext_base, int_base):
    assume(ext_base + n_words <= AXI_WORDS)
    assume(int_base + n_words <= SRAM_WORDS)

    dma, sram, axi = make_env()
    expected = [0xA0 + i for i in range(n_words)]
    for i, v in enumerate(expected):
        axi.mem[ext_base + i] = v

    cmd = DMACommand(
        subop=DMAOp.LOAD,
        ext_addr=ext_base * WORD_BYTES,
        int_addr=int_base * WORD_BYTES,
        rows=1, cols=n_words,
        ext_stride=WORD_BYTES, int_stride=WORD_BYTES,
    )
    done = run_cmd(dma, sram, axi, cmd, max_cycles=TIMEOUT * n_words)
    assert done, f"LOAD {n_words}-word timed out"
    for i in range(n_words):
        got = int(sram.mem[int_base + i])
        assert got == expected[i], f"Word {i}: got 0x{got:x} expected 0x{expected[i]:x}"


# ─── cmd_done single-cycle pulse ──────────────────────────────────────────────

def test_cmd_done_single_cycle_pulse():
    """cmd_done must deassert the cycle after it fires."""
    dma, sram, axi = make_env()
    axi.mem[0] = 0xDEAD

    cmd = DMACommand(subop=DMAOp.LOAD, ext_addr=0, int_addr=0, rows=1, cols=1)
    done_seen = False
    first = True

    for _ in range(TIMEOUT):
        sram.posedge(addr=dma.sram_addr, wdata=dma.sram_wdata,
                     we=dma.sram_we, re=dma.sram_re)
        axi.posedge(arvalid=dma.axi_arvalid, araddr=dma.axi_araddr, rready=dma.axi_rready,
                    awvalid=dma.axi_awvalid, awaddr=dma.axi_awaddr,
                    wvalid=dma.axi_wvalid, wdata=dma.axi_wdata, wlast=dma.axi_wlast)
        prev_done = dma.cmd_done
        dma.posedge(
            cmd_valid=first, cmd=cmd if first else None,
            sram_rdata=sram.rdata, sram_ready=True,
            axi_arready=axi.arready, axi_rvalid=axi.rvalid, axi_rdata=axi.rdata,
            axi_awready=axi.awready, axi_wready=axi.wready, axi_bvalid=axi.bvalid,
        )
        first = False

        if prev_done:
            assert not dma.cmd_done, "cmd_done held for more than 1 cycle"
            done_seen = True
            break

    assert done_seen, "cmd_done never fired"


# ─── cmd_ready only in IDLE ───────────────────────────────────────────────────

def test_cmd_ready_only_in_idle():
    """cmd_ready must be false while processing a command."""
    dma, sram, axi = make_env()
    axi.mem[0] = 0xBEEF

    cmd = DMACommand(subop=DMAOp.LOAD, ext_addr=0, int_addr=0, rows=1, cols=1)
    first = True
    cmd_accepted = False

    for _ in range(TIMEOUT):
        sram.posedge(addr=dma.sram_addr, wdata=dma.sram_wdata,
                     we=dma.sram_we, re=dma.sram_re)
        axi.posedge(arvalid=dma.axi_arvalid, araddr=dma.axi_araddr, rready=dma.axi_rready,
                    awvalid=dma.axi_awvalid, awaddr=dma.axi_awaddr,
                    wvalid=dma.axi_wvalid, wdata=dma.axi_wdata, wlast=dma.axi_wlast)

        # After cmd_accepted, cmd_ready must stay low until cmd_done
        if cmd_accepted and not dma.cmd_done:
            assert not dma.cmd_ready, (
                f"cmd_ready asserted in non-IDLE state (state={dma.state.name})"
            )

        if first and dma.cmd_ready:
            cmd_accepted = True

        dma.posedge(
            cmd_valid=first, cmd=cmd if first else None,
            sram_rdata=sram.rdata, sram_ready=True,
            axi_arready=axi.arready, axi_rvalid=axi.rvalid, axi_rdata=axi.rdata,
            axi_awready=axi.awready, axi_wready=axi.wready, axi_bvalid=axi.bvalid,
        )
        first = False

        if dma.cmd_done:
            break


# ─── Back-to-back commands ────────────────────────────────────────────────────

@given(
    data_a=st.integers(min_value=0, max_value=0xFFFF),
    data_b=st.integers(min_value=0, max_value=0xFFFF),
)
@settings(max_examples=100, deadline=10000)
def test_back_to_back_load_store(data_a, data_b):
    dma, sram, axi = make_env()
    axi.mem[0] = data_a
    sram.mem[2] = data_b

    cmd_ld = DMACommand(subop=DMAOp.LOAD,  ext_addr=0,              int_addr=0,
                        rows=1, cols=1, ext_stride=WORD_BYTES, int_stride=WORD_BYTES)
    cmd_st = DMACommand(subop=DMAOp.STORE, ext_addr=2 * WORD_BYTES, int_addr=2 * WORD_BYTES,
                        rows=1, cols=1, ext_stride=WORD_BYTES, int_stride=WORD_BYTES)

    assert run_cmd(dma, sram, axi, cmd_ld), "LOAD timed out"
    assert int(sram.mem[0]) == data_a, "LOAD data mismatch"

    assert run_cmd(dma, sram, axi, cmd_st), "STORE timed out"
    assert int(axi.mem[2]) == data_b, "STORE data mismatch"
