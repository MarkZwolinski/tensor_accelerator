.PHONY: all bmc cover mcy clean

all: bmc cover

bmc:
	sby -f systolic_array.sby bmc

cover:
	sby -f systolic_array.sby cover

mcy:
	mcy init && mcy run

clean:
	rm -rf systolic_array_bmc systolic_array_cover database tasks
