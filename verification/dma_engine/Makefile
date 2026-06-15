# Makefile — dma_engine verification (methodology Step 5 / 5b / 9)

TOP      = dma_engine_tb
DUT      = ../../rtl/core/dma_engine.v
TB_SRCS  = dma_engine_tb.sv dma_engine_checker.sv dma_engine_coverage.sv
SIM      = obj_dir/V$(TOP)

VFLAGS = --binary --sv --timing --top-module $(TOP) \
         -Wno-TIMESCALEMOD -Wno-INITIALDLY -Wno-WIDTHEXPAND -Wno-UNSIGNED \
         -Wno-BADVLTPRAGMA -Wno-PINMISSING -Wno-IMPLICITSTATIC

TRACE ?= 0
ifeq ($(TRACE),1)
VFLAGS += --trace
endif

FLAGS_FILE = .build_flags
FLAGS_CURR = DUT=$(DUT) TRACE=$(TRACE)
$(shell echo "$(FLAGS_CURR)" > $(FLAGS_FILE).tmp; \
  diff -q $(FLAGS_FILE).tmp $(FLAGS_FILE) >/dev/null 2>&1 \
    && rm $(FLAGS_FILE).tmp || mv $(FLAGS_FILE).tmp $(FLAGS_FILE))

.PHONY: all sim model-test

all: sim

sim: $(SIM)
	$(SIM)

$(SIM): $(TB_SRCS) $(DUT) $(FLAGS_FILE)
	verilator $(VFLAGS) $(TB_SRCS) $(DUT)

model-test: test_dma_model.py
	pytest test_dma_model.py -v

.PHONY: formal formal-prove formal-bmc formal-cover formal-clean

FORMAL_SRCS = dma_engine_formal.sv $(DUT)

formal: formal-prove formal-bmc formal-cover

formal-prove: $(FORMAL_SRCS) dma_engine.sby
	sby -f dma_engine.sby prove

formal-cover: $(FORMAL_SRCS) dma_engine.sby
	sby -f dma_engine.sby cover

formal-bmc: $(FORMAL_SRCS) dma_engine_bmc.sby
	sby -f dma_engine_bmc.sby

formal-clean:
	rm -rf dma_engine_prove dma_engine_cover dma_engine_bmc

.PHONY: mcy mcy-status mcy-clean

mcy: config.mcy $(DUT) test_fm.sv test_fm.sh test_fm.sby
	mcy init && mcy run

mcy-status:
	mcy status

mcy-clean:
	rm -rf database tasks

.PHONY: clean clean-all

clean:
	rm -rf obj_dir dma_engine_tb.vcd $(FLAGS_FILE) $(FLAGS_FILE).tmp

clean-all: clean formal-clean mcy-clean
