# Alchemy igArkCore constructor recovery

Verified on 2026-09-29 from baseline `839a7f2`, on
`task/igarkcore-constructor`, for integration into personal-fork `work`.
Scope: `Gap::Core::igArkCore::igArkCore()` at `0x8003D234`, 196 bytes.
The existing version-check split now also owns this constructor; other
class methods remain original. UART and lifecycle recovery are preserved.

## Original evidence and source

The constructor has 49 instructions, no stack frame, no calls, no data
references and no relocation records. It returns `this` in the unchanged
`r3`. Its stores, relative to `this`, are:

| Width / value | Offsets in instruction order |
| --- | --- |
| Word / zero (string references) | `0x398`, `0x39C` |
| Byte / zero | `0x14`, `0x15`, `0x16`, `0x00` |
| Word / zero | `0x18`, `0x30`, `0x20`, `0x24`, `0x28`, `0x2C`, `0x38`, `0x44`, `0x48` |
| Byte / zero | `0x74`, `0x75`, `0x76`, `0x77`, `0x78`, `0x79`, `0x7A` |
| Word / `0x80000` | `0x7C` |
| Word / `-1` | `0x80`, `0x84`, `0x88`, `0x8C` |
| Byte / zero | `0x90`, `0x110`, `0x190`, `0x210`, `0x310` |
| Word / zero | `0x50`, `0x54`, `0x34` |
| Byte / zero | `0x5C` |
| Word / zero | `0x60`, `0x58`, `0x64`, `0x68`, `0x3C`, `0x394`, `0x4C`, `0x6C`, `0x70` |

The first two stores initialize the existing `igStringRef` members' single
pointer to null. An inline default constructor supplies those stores without
calls. No string literals, pool acquisition or release calls occur here.
The opaque `0x14` byte and `0x16..0x397` array retain their existing layout
and names. Byte accesses and explicit word casts reproduce only observed
writes; they do not establish pointer types or field meanings. The isolated
byte clears at `0x90` and later offsets do not establish buffer sizes.
Untouched storage, including the four existing counter words at `0x04..0x10`,
remains untouched. No whole-object zeroing or speculative initialization was
added. The word casts are a recovery representation verified with this pinned
compiler, not a portable reconstructed class model.

Only the `.text` end of the existing split changes, from `0x8003D234` to
`0x8003D2F8`. Data and BSS ownership, symbols and compiler settings are
unchanged. The engine uses pinned `GC/2.6`, `-O4,p`, `-inline auto` and its
existing ABI options.

## Verification and compiler artifact

Before source recovery, the extended split was temporarily NonMatching.
Strict objdiff confirmed that the source lacked the constructor: only
108 of 304 target code bytes were present (35.526318% section match).
After recovery, strict objdiff (`functionRelocDiffs=data_value`) reports
100% for both functions, the 304 original code bytes, 345 diagnostic bytes
and one suppression BSS byte.

The initial whole-object ELF comparison correctly failed: defining the
constructor makes CodeWarrior emit an additional 116-byte out-of-line
`igStringRef` destructor. Removing the explicit string constructor did not
remove that artifact, so the natural null initializer was retained. No
compiler settings or additional splits were introduced to suppress it.

The final comparison checks the constructor's 196 raw bytes exactly (there
are no relocations), and checks all original section bytes after relocation
masking. Section types, flags and alignment match. All five original
relocation records agree in offset, type, addend, target name, binding,
visibility, definition section, value, size and symbol type. The additional
destructor has two call relocations beyond the recovered range. The link
map labels that destructor `UNUSED`; it contributes no executable code and
is not counted as recovered. Thus the complete ELF objects differ by this
discarded compiler artifact, while all configured original code/data and
relevant relocations match exactly.

Fresh checks:

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
build/tools/objdiff-cli diff \
  -1 build/GDJEB2/obj/Alchemy/src/igCore/igArkCore.o \
  -2 build/GDJEB2/src/Alchemy/src/igCore/igArkCore.o \
  -c functionRelocDiffs=data_value \
  -o build/GDJEB2/igArkCore-constructor-final-strict.json
/opt/homebrew/bin/python3 build/GDJEB2/analysis/verify_igArkCore_constructor.py
shasum orig/GDJEB2/sys/main.dol build/GDJEB2/main.dol
```

All checks passed. The supplemental ELF comparison and generated reports
remain under ignored `build/`. The compiled `igArkCore.o` supplies the
constructor at its original address in the link map. The normal checksum
rule passes, and original/source-linked DOL SHA-1 is
`e409a88a7379ed1a536f93b0a303a0ce7cd5d877`.
Independent review found no blocking issues and separately confirmed the
byte/relocation comparison, link-map evidence, checksum and report deltas.

## Progress

| Metric | Before → after | Percentage-point delta | Exact byte gain |
| --- | --- | --- | --- |
| Matched code | 8.680127643% → 8.684860168% | +0.004732525 | +196 |
| Fully linked code | 8.339965308% → 8.344697833% | +0.004732525 | +196 |
| Matched data | 11.011208310% → 11.011208310% | 0 | 0 |

Code totals: 359,492 → 359,688 matched bytes; 345,404 → 345,600 linked
bytes. Matched data remains 165,586 bytes. One additional matched function
(1,187 → 1,188); completed units remain 174. **No denominator changes:**
4,141,552 code bytes, 1,503,795 data bytes, 23,334 functions and 5,134
units. The engine category now contains 720 code bytes and 354 data bytes;
its 100% applies only to the two configured source units.

Next proposed bounded target: `Gap::Core::igArkCore::initBootstrap()` at
`0x8003D2F8` (420 bytes). Inspect its call targets and global storage before
extending the split. That target was not recovered in this task.
