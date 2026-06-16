#!/usr/bin/env python3
"""
Cycle-Accurate Vector Processing Unit (VPU) Model

Mirrors rtl/core/vector_unit.v:
  - VPUOp values match VOP_* localparams exactly
  - PWL approximations for sigmoid/tanh/SiLU/GELU match RTL combinational logic
  - DATA_WIDTH = 16 (INT16 throughout)
  - ELEMENTS_PER_WORD = 16 (256-bit SRAM word / 16-bit element)
  - MADD reads current dst as accumulator via a third SRAM fetch (FETCH_C states)
"""

from dataclasses import dataclass, field
from enum import IntEnum
import numpy as np


DATA_WIDTH       = 16
ELEMENTS_PER_WORD = 16          # 256-bit SRAM word / 16-bit element = 16 elements
SIGMOID_BIAS     = 1 << (DATA_WIDTH - 2)         # 16384
SIGNED_MAX       = (1 << (DATA_WIDTH - 1)) - 1   # 32767
SIGNED_MIN       = -(1 << (DATA_WIDTH - 1))       # -32768


class VPUOp(IntEnum):
    ADD            = 0x01
    SUB            = 0x02
    MUL            = 0x03
    MADD           = 0x04   # elementwise a*b + current_dst (truncated to INT16)
    ADD_BCAST      = 0x06
    BIAS_ADD       = 0x07
    RELU           = 0x10
    GELU           = 0x11
    SILU           = 0x12
    SIGMOID        = 0x13
    TANH           = 0x14
    SUM            = 0x20
    MAX            = 0x21
    MIN            = 0x22
    GLOBAL_AVG     = 0x23
    LOAD           = 0x30
    STORE          = 0x31
    BCAST          = 0x32
    MOV            = 0x33
    ZERO           = 0x34
    SCALE          = 0x35   # y = saturate(x * imm // 1024)  [Q10 format]
    SCALE_Q8       = 0x37   # y = saturate(x * imm // 256)   [Q8 format]
    SOFTMAX_P1     = 0x40   # pass-1: find max across all elements
    LAYERNORM_MEAN = 0x51   # mean = SUM / total_elements


class VPUState(IntEnum):
    IDLE    =  0
    FETCH_A =  1
    WAIT_A1 =  2
    WAIT_A2 =  3
    FETCH_B =  4
    WAIT_B1 =  5
    WAIT_B2 =  6
    FETCH_C =  7   # MADD: read dst as accumulator
    WAIT_C1 =  8
    WAIT_C2 =  9
    COMPUTE = 10
    WRITE   = 11
    NEXT    = 12
    DONE    = 13


@dataclass
class VPUCommand:
    opcode:      int = VPUOp.ADD
    src_a_addr:  int = 0
    src_b_addr:  int = 0
    dst_addr:    int = 0
    length:      int = 1
    imm:         int = 0   # used by SCALE / SCALE_Q8


class VectorUnit:
    ELEMENTS_PER_WORD = ELEMENTS_PER_WORD

    def __init__(self, verbose=False):
        self.verbose = verbose
        self.reset()

    def reset(self):
        self.state       = VPUState.IDLE
        self.state_next  = VPUState.IDLE
        self.cmd_reg     = VPUCommand()
        self.elem_count  = 0
        self.accumulator = 0
        self.data_a   = np.zeros(ELEMENTS_PER_WORD, dtype=np.int16)
        self.data_b   = np.zeros(ELEMENTS_PER_WORD, dtype=np.int16)
        self.data_c   = np.zeros(ELEMENTS_PER_WORD, dtype=np.int16)
        self.data_out = np.zeros(ELEMENTS_PER_WORD, dtype=np.int16)
        self.sram_addr  = 0
        self.sram_wdata = 0
        self.sram_we    = False
        self.sram_re    = False
        self.cmd_ready  = True
        self.cmd_done   = False
        self.cycle      = 0

    def log(self, msg):
        if self.verbose:
            print(f"[VPU @{self.cycle:3d}] {self.state.name:10s} | {msg}")

    # ------------------------------------------------------------------ packing

    def _pack(self, arr):
        result = 0
        for i, val in enumerate(arr):
            result |= (int(val) & 0xFFFF) << (i * 16)
        return result

    def _unpack(self, val):
        arr = np.zeros(ELEMENTS_PER_WORD, dtype=np.int16)
        for i in range(ELEMENTS_PER_WORD):
            w = (val >> (i * 16)) & 0xFFFF
            arr[i] = np.int16(w if w < 32768 else w - 65536)
        return arr

    # ------------------------------------------------------------------ op classification

    def _needs_b(self, op):
        return op in (VPUOp.ADD, VPUOp.SUB, VPUOp.MUL, VPUOp.MADD,
                      VPUOp.ADD_BCAST, VPUOp.BIAS_ADD,
                      VPUOp.MAX, VPUOp.MIN)

    def _needs_c(self, op):
        """MADD reads the current dst value as accumulator (third SRAM read)."""
        return op == VPUOp.MADD

    def _is_reduce(self, op):
        return op in (VPUOp.SUM, VPUOp.MAX, VPUOp.MIN,
                      VPUOp.GLOBAL_AVG, VPUOp.SOFTMAX_P1,
                      VPUOp.LAYERNORM_MEAN)

    # ------------------------------------------------------------------ activation helpers
    # Each formula matches the RTL generate-block combinational logic exactly.

    @staticmethod
    def _sigmoid(arr):
        """clamp(x + SIGMOID_BIAS, 0, SIGNED_MAX)  — linear ramp through origin."""
        v = arr.astype(np.int32) + SIGMOID_BIAS
        return np.clip(v, 0, SIGNED_MAX).astype(np.int16)

    @staticmethod
    def _tanh(arr):
        """clamp(2x, SIGNED_MIN, SIGNED_MAX)."""
        return np.clip(arr.astype(np.int32) * 2, SIGNED_MIN, SIGNED_MAX).astype(np.int16)

    @staticmethod
    def _silu(arr):
        """x * sigmoid(x) >> 15  (arithmetic; matches RTL silu_prod[2*DW-2:DW-1])."""
        sig  = VectorUnit._sigmoid(arr)
        prod = arr.astype(np.int64) * sig.astype(np.int64)
        return np.clip(prod >> (DATA_WIDTH - 1), SIGNED_MIN, SIGNED_MAX).astype(np.int16)

    @staticmethod
    def _gelu(arr):
        """x * sigmoid(27x >> 4) >> 15  (27/16 ≈ 1.6875 ≈ 1.702)."""
        arg_sat = np.clip(arr.astype(np.int64) * 27 >> 4,
                          SIGNED_MIN, SIGNED_MAX).astype(np.int16)
        sig  = VectorUnit._sigmoid(arg_sat)
        prod = arr.astype(np.int64) * sig.astype(np.int64)
        return np.clip(prod >> (DATA_WIDTH - 1), SIGNED_MIN, SIGNED_MAX).astype(np.int16)

    # ------------------------------------------------------------------ ALU

    def _compute(self, op, a, b, c=None):
        def sat(v):
            return np.clip(v, SIGNED_MIN, SIGNED_MAX).astype(np.int16)

        if op in (VPUOp.ADD, VPUOp.ADD_BCAST, VPUOp.BIAS_ADD):
            return sat(a.astype(np.int32) + b.astype(np.int32))
        if op == VPUOp.SUB:
            return sat(a.astype(np.int32) - b.astype(np.int32))
        if op == VPUOp.MUL:
            return sat(a.astype(np.int32) * b.astype(np.int32))
        if op == VPUOp.MADD:
            # Matches RTL: madd_full = a*b + c (32-bit), result = madd_full[15:0]
            full = a.astype(np.int64) * b.astype(np.int64) + c.astype(np.int64)
            return full.astype(np.int16)   # 2's-complement truncation to lower 16 bits
        if op == VPUOp.RELU:
            return np.maximum(a, 0).astype(np.int16)
        if op == VPUOp.SIGMOID:
            return self._sigmoid(a)
        if op == VPUOp.TANH:
            return self._tanh(a)
        if op == VPUOp.SILU:
            return self._silu(a)
        if op == VPUOp.GELU:
            return self._gelu(a)
        if op == VPUOp.ZERO:
            return np.zeros(ELEMENTS_PER_WORD, dtype=np.int16)
        if op in (VPUOp.MOV, VPUOp.BCAST, VPUOp.LOAD):
            return a.copy()
        if op == VPUOp.SCALE:
            v = a.astype(np.int64) * int(self.cmd_reg.imm)
            return sat((v >> 10).astype(np.int32))
        if op == VPUOp.SCALE_Q8:
            v = a.astype(np.int64) * int(self.cmd_reg.imm)
            return sat((v >> 8).astype(np.int32))
        return a.copy()   # unknown op: passthrough (visible as wrong in tests)

    # ------------------------------------------------------------------ clock

    def posedge(self, cmd_valid=False, cmd=None, sram_rdata=0, sram_ready=True):
        self.cycle += 1
        self.state   = self.state_next
        self.sram_we = False
        self.sram_re = False
        self.cmd_done = False

        if self.state == VPUState.IDLE:
            self.cmd_ready = True
            if cmd_valid and cmd:
                self.cmd_reg     = cmd
                self.elem_count  = 0
                self.accumulator = 0
                self.log(f"CMD: {VPUOp(cmd.opcode).name}")
                self.state_next = VPUState.FETCH_A
                self.cmd_ready  = False
            else:
                self.state_next = VPUState.IDLE

        elif self.state == VPUState.FETCH_A:
            self.sram_addr  = self.cmd_reg.src_a_addr + self.elem_count * 32
            self.sram_re    = True
            self.state_next = VPUState.WAIT_A1

        elif self.state == VPUState.WAIT_A1:
            self.state_next = VPUState.WAIT_A2

        elif self.state == VPUState.WAIT_A2:
            self.data_a = self._unpack(sram_rdata)
            self.log(f"Got A: {self.data_a[:4]}...")
            if self._needs_b(self.cmd_reg.opcode):
                self.state_next = VPUState.FETCH_B
            else:
                self.state_next = VPUState.COMPUTE

        elif self.state == VPUState.FETCH_B:
            self.sram_addr  = self.cmd_reg.src_b_addr + self.elem_count * 32
            self.sram_re    = True
            self.state_next = VPUState.WAIT_B1

        elif self.state == VPUState.WAIT_B1:
            self.state_next = VPUState.WAIT_B2

        elif self.state == VPUState.WAIT_B2:
            self.data_b = self._unpack(sram_rdata)
            self.log(f"Got B: {self.data_b[:4]}...")
            if self._needs_c(self.cmd_reg.opcode):
                self.state_next = VPUState.FETCH_C
            else:
                self.state_next = VPUState.COMPUTE

        elif self.state == VPUState.FETCH_C:
            # MADD: read current value at dst as the accumulator operand (data_c)
            self.sram_addr  = self.cmd_reg.dst_addr + self.elem_count * 32
            self.sram_re    = True
            self.state_next = VPUState.WAIT_C1

        elif self.state == VPUState.WAIT_C1:
            self.state_next = VPUState.WAIT_C2

        elif self.state == VPUState.WAIT_C2:
            self.data_c = self._unpack(sram_rdata)
            self.log(f"Got C: {self.data_c[:4]}...")
            self.state_next = VPUState.COMPUTE

        elif self.state == VPUState.COMPUTE:
            if self._is_reduce(self.cmd_reg.opcode):
                op = self.cmd_reg.opcode
                if op in (VPUOp.SUM, VPUOp.GLOBAL_AVG, VPUOp.LAYERNORM_MEAN):
                    self.accumulator += int(np.sum(self.data_a.astype(np.int32)))
                elif op in (VPUOp.MAX, VPUOp.SOFTMAX_P1):
                    m = int(np.max(self.data_a))
                    self.accumulator = max(self.accumulator, m) if self.elem_count > 0 else m
                elif op == VPUOp.MIN:
                    m = int(np.min(self.data_a))
                    self.accumulator = min(self.accumulator, m) if self.elem_count > 0 else m
                self.log(f"Reduce acc={self.accumulator}")
            else:
                self.data_out = self._compute(
                    self.cmd_reg.opcode, self.data_a, self.data_b,
                    c=self.data_c if self._needs_c(self.cmd_reg.opcode) else None,
                )
                self.log(f"Compute out: {self.data_out[:4]}...")
            self.state_next = VPUState.WRITE

        elif self.state == VPUState.WRITE:
            if self._is_reduce(self.cmd_reg.opcode):
                op      = self.cmd_reg.opcode
                is_last = (self.elem_count == self.cmd_reg.length - 1)
                if is_last and op in (VPUOp.GLOBAL_AVG, VPUOp.LAYERNORM_MEAN):
                    total  = self.cmd_reg.length * ELEMENTS_PER_WORD
                    scalar = self.accumulator // total
                else:
                    scalar = self.accumulator
                out    = np.zeros(ELEMENTS_PER_WORD, dtype=np.int16)
                out[0] = np.int16(np.clip(scalar, SIGNED_MIN, SIGNED_MAX))
                self.sram_wdata = self._pack(out)
            else:
                self.sram_wdata = self._pack(self.data_out)
            self.sram_addr  = self.cmd_reg.dst_addr + self.elem_count * 32
            self.sram_we    = True
            self.state_next = VPUState.NEXT

        elif self.state == VPUState.NEXT:
            self.elem_count += 1
            if self.elem_count >= self.cmd_reg.length:
                self.state_next = VPUState.DONE
            else:
                self.state_next = VPUState.FETCH_A

        elif self.state == VPUState.DONE:
            self.cmd_done  = True
            self.cmd_ready = True
            self.log("DONE")
            self.state_next = VPUState.IDLE


class SRAMModel:
    def __init__(self):
        self.mem   = {}
        self.rdata = 0
        self._next = 0

    def posedge(self, addr=0, wdata=0, we=False, re=False):
        self.rdata = self._next
        word = addr >> 5   # byte address / 32 = 32-byte word index
        if we:
            self.mem[word] = wdata
        if re:
            self._next = self.mem.get(word, 0)


# ---------------------------------------------------------------------------
# Tests
# ---------------------------------------------------------------------------

def _make_vec(values):
    """Pad to ELEMENTS_PER_WORD int16 elements."""
    arr = np.zeros(ELEMENTS_PER_WORD, dtype=np.int16)
    for i, v in enumerate(values):
        arr[i] = np.int16(v)
    return arr


def test_vpu():
    print("=" * 60)
    print("VPU MODEL TESTS  (INT16, opcodes match RTL VOP_* values)")
    print("=" * 60)

    errors = 0
    vpu  = VectorUnit(verbose=False)
    sram = SRAMModel()

    def run(cmd, max_cycles=200):
        first = True
        for _ in range(max_cycles):
            sram.posedge(addr=vpu.sram_addr, wdata=vpu.sram_wdata,
                         we=vpu.sram_we, re=vpu.sram_re)
            vpu.posedge(cmd_valid=first, cmd=cmd if first else None,
                        sram_rdata=sram.rdata, sram_ready=True)
            first = False
            if vpu.cmd_done:
                return True
        return False

    def check(label, got, expected):
        nonlocal errors
        if np.array_equal(got, expected):
            print(f"  PASS: {label}")
        else:
            print(f"  FAIL: {label}")
            print(f"        got      {got}")
            print(f"        expected {expected}")
            errors += 1

    # ------------------------------------------------------------------ Test 1: ReLU
    print("\n--- TEST 1: ReLU (VPUOp=0x10) ---")
    data = _make_vec([-5, -1, 0, 1, 5, 10, -32768, 32767])
    sram.mem[0x000 >> 5] = vpu._pack(data)
    assert run(VPUCommand(opcode=VPUOp.RELU, src_a_addr=0x000, dst_addr=0x100))
    result   = vpu._unpack(sram.mem.get(0x100 >> 5, 0))
    expected = np.maximum(data, 0).astype(np.int16)
    check("relu([-5,-1,0,1,5,10,-32768,32767])", result[:8], expected[:8])

    # ------------------------------------------------------------------ Test 2: ADD
    print("\n--- TEST 2: Vector ADD (VPUOp=0x01) ---")
    a = _make_vec([1, 2, 3, 4, 100, -100, 32767, -32768])
    b = _make_vec([10, 20, 30, 40, 50, -50, 1, -1])
    sram.mem[0x200 >> 5] = vpu._pack(a)
    sram.mem[0x300 >> 5] = vpu._pack(b)
    assert run(VPUCommand(opcode=VPUOp.ADD, src_a_addr=0x200, src_b_addr=0x300, dst_addr=0x400))
    result   = vpu._unpack(sram.mem.get(0x400 >> 5, 0))
    expected = np.clip(a.astype(np.int32) + b.astype(np.int32), SIGNED_MIN, SIGNED_MAX).astype(np.int16)
    check("a+b (with saturation at INT16 boundaries)", result[:8], expected[:8])

    # ------------------------------------------------------------------ Test 3: SUM reduction
    print("\n--- TEST 3: SUM reduction (VPUOp=0x20) ---")
    data = _make_vec([1, 2, 3, 4, 5, 6, 7, 8])
    sram.mem[0x500 >> 5] = vpu._pack(data)
    assert run(VPUCommand(opcode=VPUOp.SUM, src_a_addr=0x500, dst_addr=0x600))
    result = vpu._unpack(sram.mem.get(0x600 >> 5, 0))
    check("sum([1..8]) = 36 in lane 0", result[:1], np.array([36], dtype=np.int16))

    # ------------------------------------------------------------------ Test 4: SIGMOID
    print("\n--- TEST 4: Sigmoid (VPUOp=0x13) ---")
    data = _make_vec([0, 32767, -32768, 16384, -16384])
    sram.mem[0x700 >> 5] = vpu._pack(data)
    assert run(VPUCommand(opcode=VPUOp.SIGMOID, src_a_addr=0x700, dst_addr=0x800))
    result = vpu._unpack(sram.mem.get(0x800 >> 5, 0))
    expected = VectorUnit._sigmoid(data)
    check("sigmoid([0, 32767, -32768, 16384, -16384])", result[:5], expected[:5])
    # spot-check known values
    check("sigmoid(0) = 16384",   result[:1], np.array([16384], dtype=np.int16))
    check("sigmoid(32767) = 32767", result[1:2], np.array([32767], dtype=np.int16))
    check("sigmoid(-32768) = 0",  result[2:3], np.array([0],     dtype=np.int16))

    # ------------------------------------------------------------------ Test 5: TANH
    print("\n--- TEST 5: Tanh (VPUOp=0x14) ---")
    data = _make_vec([0, 32767, -32768, 8192])
    sram.mem[0x900 >> 5] = vpu._pack(data)
    assert run(VPUCommand(opcode=VPUOp.TANH, src_a_addr=0x900, dst_addr=0xA00))
    result = vpu._unpack(sram.mem.get(0xA00 >> 5, 0))
    expected = VectorUnit._tanh(data)
    check("tanh([0, 32767, -32768, 8192])", result[:4], expected[:4])
    check("tanh(0) = 0",        result[:1], np.array([0],      dtype=np.int16))
    check("tanh(32767) = 32767", result[1:2], np.array([32767], dtype=np.int16))
    check("tanh(-32768) = -32768", result[2:3], np.array([-32768], dtype=np.int16))

    # ------------------------------------------------------------------ Test 6: SiLU
    print("\n--- TEST 6: SiLU (VPUOp=0x12) ---")
    data = _make_vec([0, 16384, -32768])
    sram.mem[0xB00 >> 5] = vpu._pack(data)
    assert run(VPUCommand(opcode=VPUOp.SILU, src_a_addr=0xB00, dst_addr=0xC00))
    result = vpu._unpack(sram.mem.get(0xC00 >> 5, 0))
    expected = VectorUnit._silu(data)
    check("silu([0, 16384, -32768])", result[:3], expected[:3])
    check("silu(0) = 0",       result[:1],  np.array([0],     dtype=np.int16))
    check("silu(16384) = 16383", result[1:2], np.array([16383], dtype=np.int16))
    check("silu(-32768) = 0",  result[2:3], np.array([0],     dtype=np.int16))

    # ------------------------------------------------------------------ Test 7: GELU
    print("\n--- TEST 7: GELU (VPUOp=0x11) ---")
    data = _make_vec([0, 16384, -16384])
    sram.mem[0xD00 >> 5] = vpu._pack(data)
    assert run(VPUCommand(opcode=VPUOp.GELU, src_a_addr=0xD00, dst_addr=0xE00))
    result = vpu._unpack(sram.mem.get(0xE00 >> 5, 0))
    expected = VectorUnit._gelu(data)
    check("gelu([0, 16384, -16384])", result[:3], expected[:3])
    check("gelu(0) = 0",        result[:1],  np.array([0],     dtype=np.int16))
    check("gelu(16384) = 16383", result[1:2], np.array([16383], dtype=np.int16))
    check("gelu(-16384) = 0",   result[2:3], np.array([0],     dtype=np.int16))

    # ------------------------------------------------------------------ Test 8: MADD
    print("\n--- TEST 8: MADD a*b+c (VPUOp=0x04) ---")
    a   = _make_vec([2, 4])
    b   = _make_vec([3, 5])
    acc = _make_vec([10, 20])   # initial dst value (= accumulator)
    sram.mem[0x1000 >> 5] = vpu._pack(a)
    sram.mem[0x1100 >> 5] = vpu._pack(b)
    sram.mem[0x1200 >> 5] = vpu._pack(acc)   # dst holds accumulator
    assert run(VPUCommand(opcode=VPUOp.MADD,
                          src_a_addr=0x1000, src_b_addr=0x1100,
                          dst_addr=0x1200, length=1))
    result = vpu._unpack(sram.mem.get(0x1200 >> 5, 0))
    check("2*3+10=16, 4*5+20=40", result[:2], np.array([16, 40], dtype=np.int16))

    # ------------------------------------------------------------------ Test 9: GLOBAL_AVG
    print("\n--- TEST 9: GLOBAL_AVG (VPUOp=0x23) ---")
    # 16 elements [10,20,...,160] → sum=1360, avg=85
    vals = [(i + 1) * 10 for i in range(ELEMENTS_PER_WORD)]
    data = _make_vec(vals)
    sram.mem[0x1300 >> 5] = vpu._pack(data)
    assert run(VPUCommand(opcode=VPUOp.GLOBAL_AVG, src_a_addr=0x1300, dst_addr=0x1400))
    result = vpu._unpack(sram.mem.get(0x1400 >> 5, 0))
    expected_avg = sum(vals) // ELEMENTS_PER_WORD   # = 85
    check(f"avg([10..160]) = {expected_avg}", result[:1], np.array([expected_avg], dtype=np.int16))

    # ------------------------------------------------------------------ Test 10: SCALE / SCALE_Q8
    print("\n--- TEST 10: SCALE Q10 and SCALE_Q8 (VPUOp=0x35, 0x37) ---")
    data = _make_vec([512, -1024])
    sram.mem[0x1500 >> 5] = vpu._pack(data)
    # SCALE Q10: 512 * 2048 >> 10 = 1024;  -1024 * 1024 >> 10 = -1024
    assert run(VPUCommand(opcode=VPUOp.SCALE, src_a_addr=0x1500, dst_addr=0x1600,
                          imm=2048))
    result = vpu._unpack(sram.mem.get(0x1600 >> 5, 0))
    check("SCALE: 512 * 2.0(Q10) = 1024", result[:1], np.array([1024],  dtype=np.int16))

    sram.mem[0x1500 >> 5] = vpu._pack(_make_vec([512, -256]))
    assert run(VPUCommand(opcode=VPUOp.SCALE_Q8, src_a_addr=0x1500, dst_addr=0x1700,
                          imm=128))
    result = vpu._unpack(sram.mem.get(0x1700 >> 5, 0))
    check("SCALE_Q8: 512 * 0.5(Q8) = 256", result[:1], np.array([256], dtype=np.int16))

    # ------------------------------------------------------------------ Summary
    print()
    print("=" * 60)
    if errors == 0:
        print("ALL VPU MODEL TESTS PASSED!")
    else:
        print(f"FAILED: {errors} test(s)")
    print("=" * 60)
    return errors == 0


if __name__ == "__main__":
    import sys
    sys.exit(0 if test_vpu() else 1)
