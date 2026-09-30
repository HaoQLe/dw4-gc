# Alchemy lifecycle recovery

Verified on 2026-09-29 on personal-fork branch `work`. Functional commit: `6ac6304`. Baseline: `26934e8`. This bounded task covers `Gap::igRefAlchemy(int)` at `0x8003CFC0` (172 bytes) and `Gap::igReleaseAlchemy()` at `0x8003D06C` (244 bytes). UART recovery was already complete and was left unchanged.

## Evidence and changes

The refreshed baseline reported 99.94231% normal fuzzy similarity for `igGap.cpp`, but neither function matched exactly. Strict objdiff with `functionRelocDiffs=data_value` exposed five wrong call targets in addition to allocation and member-offset mismatches. It reported 99.39535% for reference and 99.91803% for release. Source BSS was 20 bytes against an incorrectly assigned 464-byte target section.

- The original allocation requests `0x3A0` bytes, rather than the source class's `0x20`. The original constructor at `0x8003D234` initializes string members at `0x398` and `0x39C`, and byte fields at `0x14`, `0x15` and `0x16`. Release reads the pre-exit flag at `0x15` and inlines the two string-reference destructions at `0x39C` and `0x398`. Added opaque bytes make the existing class layout reproduce these offsets and allocation size. Their meanings remain unrecovered; the existing string names were retained.
- All five source registrations previously inherited the same global `igObject::arkRegister` declaration. Each original callback leads to metadata bearing the expected class-name string. Added each class's own static declaration and named only the five verified symbol targets:

| Original call | Registration callback | Class-name string address | Name |
| --- | --- | --- | --- |
| `0x800250A4` | `0x800250CC` | `0x80463664` | `igStringObj` |
| `0x80024F00` | `0x80024F28` | `0x80463654` | `igStringObjList` |
| `0x80030078` | `0x800300A0` | `0x8055D494` | `igFile` |
| `0x80026D00` | `0x80026D28` | `0x80463DB4` | `igRegistry` |
| `0x80026828` | `0x80026850` | `0x80463B38` | `igResource` |

The 64-bit reference-counter operations, bootstrap/initialization order, unconditional version check, pre-exit condition and final-release teardown already followed the original control flow. No compiler or tool pins were changed: the engine remains `GC/2.6`, with configured `-O4,p`, `-inline auto` and the existing ABI options.

## Small-data ownership and relocations

Raw ELF inspection was necessary even after the function similarity reached 100%. Objdiff can pair equal zero-valued BSS symbols despite differing bindings and storage ownership. The initial source incorrectly defined `_arkCore`, `kSuccess` and `kFailure` as local variables. Original engine functions outside this unit reference those same shared symbols at `0x80562100`, `0x805622D0` and `0x805622D4`. Changed the three references to `extern`, preserving their original generated storage.

Only `_initialized` is defined here: eight bytes at `0x80562108`, with accesses to the high and low words supported by assembly. Narrowed the synthetic `igGap.cpp` BSS split from `0x80562108..0x805622D8` to `0x80562108..0x80562110`. The remaining 456 bytes are emitted by `auto_10_80562110_sbss.o`, including the result globals. This is a corrected ownership boundary, not recovery of those bytes. No placeholder globals were introduced.

After these changes, a separate Python ELF parser compared all 34 relocation records between the target and source objects, including offset, type, target name, addend, binding, visibility, definition section, value and size. All records agreed. All 416 text bytes agreed after clearing the fields populated by `R_PPC_REL24` and `R_PPC_EMB_SDA21`; BSS type, size (eight bytes) and alignment (eight) also agreed. Strict objdiff independently reported both functions, `.text` and `.sbss` at 100%.

## Verification and progress

Ran the required configuration and build commands before editing and after recovery:

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
build/tools/objdiff-cli diff -p . -u main/Alchemy/src/igGap \
  -c functionRelocDiffs=data_value \
  -o build/GDJEB2/igGap-final-strict.json --format json-pretty
```

The final build marks `igGap.cpp` `Matching` and explicitly links `build/GDJEB2/src/Alchemy/src/igGap.o`. All configured source compiles. The source-linked DOL and original both have SHA-1 `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`, matching `config/GDJEB2/build.sha1`. Independent review found no blocking issues. `git diff --check` passed; the pre-existing `FILE_POS.C` case warning is unchanged. Original inputs, generated assembly, reports and strict snapshots remain ignored.

| Metric | Before → after | Percentage-point delta | Byte gain |
| --- | --- | --- | --- |
| Matched code | 8.667475381% → 8.677519925% | +0.010044544 | +416 |
| Fully linked code | 8.327313046% → 8.337357590% | +0.010044544 | +416 |
| Matched data | 10.987624027% → 10.988156013% | +0.000531985 | +8 |

Percentages are derived from exact byte totals. Aggregate denominators remain 4,141,552 code bytes and 1,503,801 data bytes. Matched functions rise from 1,184 to 1,186; complete units from 172 to 173 of 5,132. The engine category's assigned data shrinks from 464 to eight bytes because of the split correction; its data percentage is not comparable with the earlier category snapshot.

Next proposed bounded target: `Gap::Core::igArkCore::checkAlchemyVersion(int)` at `0x8003D1C8`, the existing 108-byte function in `src/Alchemy/src/igCore/igArkCore.cpp`. It remains `NonMatching` at 86.55556% normal fuzzy similarity. Its diagnostics and relocations need investigation; no recovery of it was attempted in this task.
