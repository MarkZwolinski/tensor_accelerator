.PHONY: all bmc cover mcy clean

all: bmc cover

bmc:
	sby -f vector_unit.sby bmc

cover:
	sby -f vector_unit.sby cover

mcy:
	mcy init && mcy run

clean:
	rm -rf vector_unit_bmc vector_unit_cover database tasks
