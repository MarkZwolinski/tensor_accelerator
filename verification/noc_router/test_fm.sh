#!/bin/bash
set -e

while IFS= read -r line; do
    MUT_ID=$(echo "$line" | awk '{print $1}')
    MUTATION=$(echo "$line" | awk '{$1=""; print}' | sed 's/^ //')

    cat > task_fm_${MUT_ID}.sby <<SBYSCRIPT
[options]
mode bmc
depth 20

[engines]
smtbmc boolector

[script]
read_rtlil $PRJDIR/database/design.il
$MUTATION
read -formal $PRJDIR/test_fm.sv
prep -top noc_router_formal
setundef -init -zero

SBYSCRIPT

    if sby -f task_fm_${MUT_ID}.sby 2>&1; then
        echo "$MUT_ID FAIL" >> output.txt
    else
        echo "$MUT_ID PASS" >> output.txt
    fi
done < input.txt
