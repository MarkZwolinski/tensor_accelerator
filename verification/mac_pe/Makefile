# Makefile — mac_pe verification (methodology Step 5 / 5b / 9)
# Targets: sim, model-test, formal-{prove,bmc,cover}, mcy

TOP      = mac_pe_tb
DUT      = ../../rtl/core/mac_pe.v
TB_SRCS  = mac_pe_tb.sv mac_pe_checker.sv mac_pe_coverage.sv
SIM      = obj_dir/V$(TOP)

DATA_WIDTH ?= 8
ACC_WIDTH  ?= 32

VFLAGS = --binary --sv --timing --top-module $(TOP) \
         -Wno-TIMESCALEMOD -Wno-INITIALDLY -Wno-WIDTHEXPAND -Wno-UNSIGNED \
         -Wno-BADVLTPRAGMA -Wno-PINMISSING \
         -GDATA_WIDTH=$(DATA_WIDTH) -GACC_WIDTH=$(ACC_WIDTH)

TRACE ?= 0
ifeq ($(TRACE),1)
VFLAGS += --trace
endif

# ── Stamp file: rebuild when DUT, parameters, or TRACE flag change ──────────
FLAGS_FILE = .build_flags
FLAGS_CURR = DUT=$(DUT) DATA_WIDTH=$(DATA_WIDTH) ACC_WIDTH=$(ACC_WIDTH) TRACE=$(TRACE)
$(shell echo "$(FLAGS_CURR)" > $(FLAGS_FILE).tmp; \
  diff -q $(FLAGS_FILE).tmp $(FLAGS_FILE) >/dev/null 2>&1 \
    && rm $(FLAGS_FILE).tmp || mv $(FLAGS_FILE).tmp $(FLAGS_FILE))

# ── Layer 1: Simulation ──────────────────────────────────────────────────────
.PHONY: all sim model-test

all: sim

sim: $(SIM)
	$(SIM)

$(SIM): $(TB_SRCS) $(DUT) $(FLAGS_FILE)
	verilator $(VFLAGS) $(TB_SRCS) $(DUT)

annotate: sim
	verilator_coverage --annotate annotated/ coverage.dat

# ── Layer 1b: Python model property tests ────────────────────────────────────
model-test: test_mac_pe_model.py
	pytest test_mac_pe_model.py -v

# ── Layer 2: Formal ──────────────────────────────────────────────────────────
.PHONY: formal formal-prove formal-bmc formal-cover formal-clean

FORMAL_SRCS = mac_pe_formal.sv $(DUT)

formal: formal-prove formal-bmc formal-cover

formal-prove: $(FORMAL_SRCS) mac_pe.sby
	sby -f mac_pe.sby prove

formal-cover: $(FORMAL_SRCS) mac_pe.sby
	sby -f mac_pe.sby cover

formal-bmc: $(FORMAL_SRCS) mac_pe_bmc.sby
	sby -f mac_pe_bmc.sby

formal-clean:
	rm -rf mac_pe_prove mac_pe_cover mac_pe_bmc

# ── Layer 3: Mutation coverage ───────────────────────────────────────────────
.PHONY: mcy mcy-status mcy-clean

MCY_SRCS = config.mcy $(DUT) test_fm.sv test_fm.sh test_fm.sby

mcy: $(MCY_SRCS)
	mcy init && mcy run

mcy-status:
	mcy status

mcy-clean:
	rm -rf database tasks

# ── Clean ────────────────────────────────────────────────────────────────────
.PHONY: clean clean-all

clean:
	rm -rf obj_dir annotated coverage.dat mac_pe_tb.vcd $(FLAGS_FILE) $(FLAGS_FILE).tmp

clean-all: clean formal-clean mcy-clean
