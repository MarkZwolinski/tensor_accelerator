.PHONY: all bmc cover mcy clean

all: bmc cover

bmc:
	sby -f global_cmd_processor.sby bmc

cover:
	sby -f global_cmd_processor.sby cover

mcy:
	mcy init && mcy run

clean:
	rm -rf global_cmd_processor_bmc global_cmd_processor_cover database tasks
