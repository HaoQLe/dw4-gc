#!/usr/bin/env python3
"""Print a splits.txt block for a source unit covering a .text range, with the extab and
extabindex ranges of the functions inside it (from the original exception index).

usage: tools/splitblock.py <unit path> <text start hex> <text end hex>
example: tools/splitblock.py Game/Bec/beNDMWGameRam.cpp 8036D224 8036D644

Run from the repository root after a normal build (needs orig/GDJEB2 and the symbol map)."""
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent / "unknowngen"))
import callshape  # noqa: E402


def exception_ranges(lo, hi):
    """(extab start, end), (extabindex start, end) for functions starting in [lo, hi), or Nones."""
    a, n = callshape._section_of(callshape._symaddr("extabindex"))
    data = callshape.rd(a, n)
    entries = [struct.unpack_from(">3I", data, k) + (a + k,) for k in range(0, n, 12)]
    extab_starts = sorted(e for _, _, e, _ in entries)
    inside = [x for x in entries if lo <= x[0] < hi]
    if not inside:
        return None, None
    index = (min(x[3] for x in inside), max(x[3] for x in inside) + 12)
    first = min(x[2] for x in inside)
    last = max(x[2] for x in inside)
    following = [e for e in extab_starts if e > last]
    extab_end = following[0] if following else None
    # The last entry's extab runs to the next entry's start (entries are contiguous).
    return (first, extab_end), index


def main():
    if len(sys.argv) != 4:
        sys.exit(__doc__)
    unit, lo, hi = sys.argv[1], int(sys.argv[2], 16), int(sys.argv[3], 16)
    extab, index = exception_ranges(lo, hi)
    print("%s:" % unit)
    if extab:
        print("\textab       start:0x%08X end:0x%08X" % extab)
        print("\textabindex  start:0x%08X end:0x%08X" % index)
    print("\t.text       start:0x%08X end:0x%08X" % (lo, hi))


if __name__ == "__main__":
    main()
