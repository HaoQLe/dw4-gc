#!/usr/bin/env python3
"""Add (or replace) a source unit's block in config/GDJEB2/splits.txt, in .text address order,
computing its exception-table ranges with splitblock.py.

usage: tools/addsplit.py <unit path> <text start hex> <text end hex>
Refuses to overlap another unit's .text range."""
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from splitblock import exception_ranges  # noqa: E402

SPLITS = Path("config/GDJEB2/splits.txt")


def block_text(unit, lo, hi):
    extab, index = exception_ranges(lo, hi)
    lines = ["%s:" % unit]
    if extab:
        lines.append("\textab       start:0x%08X end:0x%08X" % extab)
        lines.append("\textabindex  start:0x%08X end:0x%08X" % index)
    lines.append("\t.text       start:0x%08X end:0x%08X" % (lo, hi))
    return "\n".join(lines)


def main():
    if len(sys.argv) != 4:
        sys.exit(__doc__)
    unit, lo, hi = sys.argv[1], int(sys.argv[2], 16), int(sys.argv[3], 16)
    blocks = SPLITS.read_text().rstrip("\n").split("\n\n")
    blocks = [b for b in blocks if not b.startswith(unit + ":")]
    position = len(blocks)
    for i, b in enumerate(blocks):
        m = re.search(r"\.text\s+start:0x([0-9A-F]+) end:0x([0-9A-F]+)", b)
        if not m:
            continue
        s, e = int(m[1], 16), int(m[2], 16)
        if s < hi and lo < e:
            sys.exit("overlaps %s" % b.split("\n")[0])
        if s >= hi and position == len(blocks):
            position = i
    blocks.insert(position, block_text(unit, lo, hi))
    SPLITS.write_text("\n\n".join(blocks) + "\n")
    print(blocks[position])


if __name__ == "__main__":
    main()
