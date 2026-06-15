#!/bin/bash
# MCY formal mutation test for mac_pe.
# MCY convention: "PASS" → COVERED (mutation caught), "FAIL" → UNCOVERED.
# MCY runs this from tasks/$TASK/ with PRJDIR pointing to the project dir.

set -e

# Process each mutation in input.txt (format: "<id> <mutation_command>")
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
prep -top mac_pe_formal
setundef -init -zero

SBYSCRIPT

    if sby -f task_fm_${MUT_ID}.sby 2>&1; then
        echo "$MUT_ID FAIL" >> output.txt   # formal passed = NOT caught = UNCOVERED
    else
        echo "$MUT_ID PASS" >> output.txt   # formal failed = caught = COVERED
    fi
done < input.txt
