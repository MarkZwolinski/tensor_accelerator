.PHONY: all bmc cover mcy clean

all: bmc cover

bmc:
	sby -f sram_subsystem.sby bmc

cover:
	sby -f sram_subsystem.sby cover

mcy:
	mcy init && mcy run

clean:
	rm -rf sram_subsystem_bmc sram_subsystem_cover database tasks
