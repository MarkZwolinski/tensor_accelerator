.PHONY: all bmc cover mcy clean

all: bmc cover

bmc:
	sby -f noc_router.sby bmc

cover:
	sby -f noc_router.sby cover

mcy:
	mcy init && mcy run

clean:
	rm -rf noc_router_bmc noc_router_cover database tasks
