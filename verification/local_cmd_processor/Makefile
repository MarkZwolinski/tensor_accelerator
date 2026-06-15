.PHONY: all bmc cover mcy clean

all: bmc cover

bmc:
	sby -f local_cmd_processor.sby bmc

cover:
	sby -f local_cmd_processor.sby cover

mcy:
	mcy init && mcy run

clean:
	rm -rf local_cmd_processor_bmc local_cmd_processor_cover database tasks
