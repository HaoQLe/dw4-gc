# Storage-allocation recovery

Date: 2026-10-02. Baseline `work`: `5cf7f79`. The complete authorized batch is
three functions / 380 original bytes at `0x8004155C..0x800416D8`, exact and
source-linked in two units. Functional commits: accessor/growth `8df3ca9` and
allocator `f1e1f29`. No remainder, new owned data/BSS or emitted artifacts.
Independent fresh-compile reviews pass with no blocking findings.

## Selection and behavior

The group reuses observed storage offsets `+0x08/+0x0C/+0x10`, context/free
helpers and the four-byte hidden-result ABI. SDK reverb offers 1,148 bytes but
retains a separate floating-point register mismatch. Later insertion/search
routines add callback and live-range patterns. The selected group had stronger
dependency reuse and ABI evidence.

| Function | Bytes | Observed behavior |
| --- | --- | --- |
| `fn_8004155C` | 252 | Frees/resets on zero capacity; otherwise resolves metadata, allocates using element size, copies the smaller old/new capacity and frees old storage; writes final capacity |
| `fn_80041658` | 8 | Returns original global `lbl_80561D3C` |
| `fn_80041660` | 120 | Starts from max(old capacity,4), doubles below 1,024 then adds 1,024 until sufficient, reallocates and writes count |

The source partitions are synthetic and do not assert original translation-unit
boundaries. Globals, metadata lookup and allocation helpers remain external and
original. Signed comparisons, unchecked arithmetic/null/failure assumptions and
original copy-before-free ordering remain intact. Names and broader layouts
remain unknown.

Inspected dependencies establish metadata indexed lookup (`fn_800658E4`),
context lookup (`fn_80068430`) and null-guarded context freeing
(`fn_80068390`). Allocation helper `fn_80062BB8` uses metadata `+0x3C`,
unsigned-halfword virtual slot `0x64`, context slot `0xDC`, metadata-selected
storage offset, and a four-byte hidden result containing original success/failure.
The caller preserves the signed metadata index at global-object `+0x12`,
receiver slot `0x58`, unsigned sizing/division and ignored result.

## Compiler findings

The existing GC/2.6 engine `-O4,s` profile reproduces all three functions.
Short-value reference preserves signed extension after the metadata call.
Separate local declaration order reproduces metadata/old-storage/size-provider
registers and the copy minimum. The growth helper's named old-capacity/max
expression retains the original extra move and signed loop branches.

The final allocator difference came from capturing context and size in separate
statements. Its best historical candidate emitted 252/252 bytes with 96.82539%
strict similarity: registers and relocations agreed, but `lwz r12,0(r30)` moved
before `mr r31,r3; mr r3,r30`. Compiler AST/PCode/register dumps showed the
original order before late peephole forwarding and final scheduling. Receiver,
constness, proxy, result-lifetime, raw-table, local-state and scalar-expression
variants did not resolve that residual.

Keeping context lookup as the rightmost allocation argument and the virtual
sizing call inside the preceding size argument preserves their evaluation
dependencies and produces the exact original sequence:

```cpp
fn_80062BB8(metadata, object,
    static_cast<Gap::igUnsignedInt>(count * width) / value->slot64(),
    fn_80068430(object));
```

No scheduling option or compiler/tool pin was changed. The historical local
NonMatching tip `031a02b` on `task/storage-allocation-experiments` remains
preserved and unpublished; its mismatch is resolved in the final source.
Source variants, strict reports and compiler dumps stay ignored under
`build/GDJEB2/analysis/storage-allocation-recovery/`. The debugger required host
cache information and a localhost connection; publication uses normal pinned
wibo/Ninja compilation.

## Verification and progress

The 128-byte accessor/growth checkpoint was independently verified, integrated,
rechecked and published in `c0b53d7` while allocation stayed original. Recovering
the allocator then added 252 bytes without changing the partition count again.

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
/opt/homebrew/bin/python3 tools/decomp.py scratch unknown8004155C --keep
/opt/homebrew/bin/python3 tools/decomp.py verify \
  build/GDJEB2/obj/Alchemy/src/igCore/unknown8004155C.o \
  build/GDJEB2/src/Alchemy/src/igCore/unknown8004155C.o
/opt/homebrew/bin/python3 build/GDJEB2/analysis/storage-allocation-recovery/verify-allocator.py
/opt/homebrew/bin/python3 build/GDJEB2/analysis/storage-allocation-recovery/verify-batch.py
```

Strict objdiff (`functionRelocDiffs=data_value`) reports 100% for all three
functions and both `.text` sections. Independent ELF comparisons cover all
380 bytes, allocated section attributes, full function metadata, architecture
flags and 11 complete relocations including target metadata. Original target
SHA-256s remain unchanged. Map/Ninja identify source for all three functions,
with no UNUSED artifacts or extra code/data/BSS. Both DOL SHA-1s equal
repository-pinned `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`.
All configured source compilation and the normal checksum target pass.
Independent reviews repeat fresh private pinned compilation and exact ELF checks,
review behavior and verify provenance, artifacts, checksums and report deltas.

| Metric | Baseline → final | Gain |
| --- | --- | --- |
| Matched code | 376,576 → 376,956 / 4,141,552 | +380 bytes; +0.009175304 pp |
| Fully linked code | 362,488 → 362,868 / 4,141,552 | +380 bytes; +0.009175304 pp |
| Matched data | 165,586 → 165,586 / 1,503,795 | 0 |
| Matched functions | 1,298 → 1,301 / 23,334 | +3 |
| Completed units | 201 → 203 | +2 |
| Total units | 5,162 → 5,164 | +2 from partitioning original remainder |

Code/data/function denominators are unchanged. Earlier 348-byte/six-relocation
UNUSED destructor artifacts remain excluded. Configured engine totals become
17,988 code bytes, 354 data bytes, 117 functions and 31 complete units.

Next proposed investigation: storage insertion/append/removal at
`0x800416D8..0x80041894` (three functions / 444 bytes), reusing this allocator
and growth helper. Inspect signed guards and overlapping-copy arithmetic and
compare other candidates before selecting scope. This proposal starts no batch.
