# Post-lifecycle matching recovery

Investigated on 2026-09-30 from published baseline `96da874`. Scope was
`0x8003E9B4..0x8003ED10`: 14 functions, 860 original code bytes.
Functional commit and final verification are recorded in
[PROGRESS.md](../../PROGRESS.md). This batch stops with 12 functions and
564 bytes recovered and source-linked. Two functions remain original.

## Evidence and recovery partitions

Original assembly, dependency implementations, global storage and ELF
relocations were inspected before choosing source boundaries. Adjacency
does not establish an original translation unit. Three synthetic partitions
preserve the independently verified subset across two unmatched functions:

| Source partition | Original range | Functions | Code bytes |
| --- | --- | --- | --- |
| `unknown8003EA0C.cpp` | `0x8003EA0C..0x8003EA18` | 1 | 12 |
| `unknown8003EAE8.cpp` | `0x8003EAE8..0x8003EB7C` | 1 | 148 |
| `unknown8003EB7C.cpp` | `0x8003EB7C..0x8003ED10` | 10 | 404 |
| **Verified total** | | **12** | **564** |

The first accessor reads a word at `+0x34` and masks its low 16 bits.
It uses a separate opaque layout from the later objects; no relationship
to `igArkCore` is asserted. Its preceding unmatched wrapper calls
`fn_80038948`, which returns lazy shared `lbl_80561E4C`, then calls virtual
slot `0xD0` with the input pointer and count multiplied by that word.

The formatter writes into a 1,024-byte stack buffer with `sprintf`, using
the original `%s`, `true` and `false` strings. It returns a four-byte
string reference through hidden return storage in `r3`; the unused receiver
is in `r4` and boolean pointer in `r5`. A nontrivial copy-constructor
declaration preserves that ABI without emitting a copy operation. It lazily
allocates the same 16-byte string pool through `fn_80054140` /
`fn_80053F28`, then acquires through `fn_80054094`. It writes the acquired
pointer directly to return storage; there is no old-reference release.
The pool global `lbl_80562140` remains original storage. The integer-form
null test preserves the observed `addic.` stack-address check; a direct
pointer test was optimized away. `unsigned long` is the pinned compiler's
32-bit address integer, unlike this project's 64-bit `igUnsignedLong`.

The later ten functions reuse original vtable `lbl_80473E30`, whose entries
refer back to several of these functions. Initialization calls
`fn_8006388C`, reinstalls the original table, and conditionally calls
`fn_8003EBC8`. The latter and the copy-shaped `fn_8003EC04` call
`fn_800638E0` and `fn_800639E4` respectively, then reinstall the table and
return the receiver. A scoped `auto_inline off` pragma preserves the
observed direct call to the small initializer; compiler flags are unchanged.
`fn_8003EC40` delegates to `fn_80063B1C`. Two stubs return one.
`fn_8003EC68` passes a stack byte to virtual slot `0x8C`. Setters write
words at `+0x08` and `+0x0C`. `fn_8003ECB4` compares signed `+0x08` with
the signed word at `receiver->unknown10 + 0x08`, conditionally calls
`fn_8004155C(storage, value, 4)`, then calls slot `0x7C` with `+0x0C`.

The partial virtual declarations reserve only the observed slot offsets.
Unused signatures and field meanings remain unknown. No instance or
replacement vtable is emitted, and the original table remains in its
original data object. The `true`, `false`, `%s` and parser `%d%n` strings
remain externally defined original `.sdata`; this batch owns no new data
or BSS. Address-based function names are retained.

## Unfinished candidates and bounded experiments

Local-only `task/igarkcore-post-lifecycle` at `67cb882` preserves the full
candidate batch with all three candidate units NonMatching. It is not an
ancestor of published recovery and is not pushed.

- `fn_8003E9B4`, 88 original bytes: strict similarity 60%. The body has
  the original `r29`/`r30`/`r31` allocation and virtual-call instructions,
  but compilation emits a 96-byte function with individual GPR saves and
  restores instead of `_savegpr_29` / `_restgpr_29`, and a different order
  of the initial parameter moves. Integer/pointer return forms, a no-argument
  dependency declaration, signed count and an explicit target local all
  retained the same mismatch. Compiler settings were not changed.
- `fn_8003EA18`, 208 original bytes: strict similarity 95.76923%. It parses
  `%d%n`, uses consumed characters when positive, otherwise tests four-byte
  `true` and five-byte `false` prefixes through `fn_8007784C`, leaving output
  unchanged on failure. The candidate is 212 bytes: zero-to-boolean
  conversion emits `neg` / `or` / `srwi` instead of original `subic` /
  `subfe`. Signed/unsigned int/long and volatile types, byte output view,
  implicit/explicit bool conversion, negation, conditional and unsigned
  comparison forms did not resolve it. Alternate comparisons sometimes
  worsened the match. The retained candidate uses a signed `int` to respect
  the observed `%d` input format.

No previous UART, Alchemy lifecycle, version-check, constructor, bootstrap
or lifecycle-helper recovery was repeated. The earlier local experiment
`task/igarkcore-lifecycle` remains at `45030f5`; its two functions were not
revisited. All four retained mismatches still link from original objects.

## Exact verification

Baseline and final builds use pinned `GC/2.6` and the existing engine flags.
Strict objdiff (`functionRelocDiffs=data_value`) gives 100% for all twelve
functions and the three complete original text sections.

An independent big-endian ELF comparison verifies 564 original code bytes,
section attributes, all twelve function symbol definitions and **22 full
relocation records**: zero in the accessor, ten in the formatter and twelve
in the object partition. Records match in location, type, addend and target
name, definition section, value, size, binding, type and visibility. Only
relocation-controlled instruction bits are masked for the byte comparison.
Symbol-table entry order is irrelevant; original/source function metadata
is compared in address order. No target renaming or artifact subtraction
is needed in these new units, and their source text has no extra functions.

Independent review recompiled all three partitions with the exact configured
compiler and flags, reproduced strict matches and confirmed source ELF
contents, the verifier, map, checksum and report deltas; no blocking issues
were found. All configured source compilation passes. The map confirms all
twelve functions link from these source objects and the unmatched functions remain
original. Original and rebuilt DOL SHA-1 both equal
`e409a88a7379ed1a536f93b0a303a0ce7cd5d877`.

The previously emitted UNUSED 116-byte string destructor and 116-byte
reference-view destructor remain excluded from executable recovery. This
batch does not count either artifact or its relocations as new recovery.

Commands:

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
# Targeted ninja compilation and strict objdiff for each new source unit.
/opt/homebrew/bin/python3 build/GDJEB2/analysis/post-lifecycle/verify.py --linked
shasum orig/GDJEB2/sys/main.dol build/GDJEB2/main.dol
git diff --check
```

Generated assembly, variant sources, strict reports and the supplemental
ELF verifier remain ignored under `build/GDJEB2/analysis/post-lifecycle/`.

## Progress and next candidate

| Metric | Before → after | Percentage-point delta | Exact byte gain |
| --- | --- | --- | --- |
| Matched code | 8.817950372% → 8.831568455% | +0.013618083 | +564 |
| Fully linked code | 8.477788037% → 8.491406120% | +0.013618083 | +564 |
| Matched data | 11.011208310% → 11.011208310% | 0 | 0 |

Matched code: 365,200 → 365,764 bytes. Linked code: 351,112 → 351,676.
Matched functions: 1,213 → 1,225. Completed units: 176 → 179.
**Unit denominator changes: 5,138 → 5,143**, from three source partitions
and two original-code holes. Code/data/function denominators remain
4,141,552 / 1,503,795 / 23,334. The engine category's 100% applies only
to seven configured source units (6,796 code bytes and 354 data bytes).

Next proposed bounded batch: `0x8003ED10..0x8003F0D8`, seven functions,
968 bytes. Assembly inspection shows reuse of the object's `+0x10` /
`+0x14` storage, signed storage words at `+0x08` / `+0x0C`, four-byte
elements, `fn_8004155C`, additional `fn_80041660` / `fn_80041AF8`, original
success/failure globals and several virtual slots. Principal unknowns are
the additional storage fields, hidden-result ABI and loop/register forms.
These are candidate boundaries, not a recovered source unit. No source
recovery beyond the current authorized range was started.
