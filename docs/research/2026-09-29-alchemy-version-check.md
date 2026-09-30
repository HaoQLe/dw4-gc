# Alchemy version-check recovery

Verified on 2026-09-29, from baseline `89032ae` on personal-fork branch `work`. Functional commit: `c586318`. This bounded task recovers only `Gap::Core::igArkCore::checkAlchemyVersion(int)` at `0x8003D1C8` (108 bytes), its diagnostic and report-suppression flag. The configured `igArkCore.cpp` split is complete and linked from source; the constructor and other class methods remain original. Completed UART and `igGap` recovery were not repeated.

## Evidence and changes

The required normal report was refreshed before editing. Normal fuzzy similarity was 86.55556%; strict objdiff (`functionRelocDiffs=data_value`) was 85.81481%. The original function establishes these differences:

- Both the version comparison and diagnostic argument use `0xC80` (3200). Corrected the shared `IG_ALCHEMY_VERSION` definition from 5000. The lifecycle object's compiled output remains matching.
- A version mismatch reports only when the byte at `this + 0x79` equals exactly one. The constructor zeroes that byte, but its full layout and field meaning remain unrecovered. The source reads the existing opaque array at `0x79 - 0x16` as `igBool` and compares it with `true`. No class fields were renamed, split or added; the opaque `0x14` and `0x16..0x397` storage and verified string offsets are preserved. The diagnostic suggests a version-mismatch policy flag, but does not by itself establish a field name.
- The original 345-byte diagnostic at `0x80468CF8` uses “behaviour” and a newline before `failOnDllVersionMismatch`. Restored those exact bytes, preserving the original “registring” spelling.
- The call at `0x8003D208` targets `0x8006EEE4`. Its variadic prologue builds a `va_list`, forwards severity one, format and arguments to `0x8006F138`, and returns its result. That common path formats with `vsnprintf` and calls the registered handler. This supports naming the target `igReportError`, consistent with the existing C declaration and error-report macro. The reporter itself remains original.
- The existing report macro matches the remaining control flow: skip an already suppressed report, accept return one without code from the disabled debug assertion, and set the suppression byte only for return two. No macro changes were needed.

After correcting the instructions and diagnostic, strict similarity reached only 99.25926%: storage ownership still differed. That result was not accepted as complete.

## Data ownership, padding and relocations

Assigned only the source-owned diagnostic (`.data`, `0x80468CF8..0x80468E51`, 345 bytes) and suppression byte (`.sbss`, `0x80562118..0x80562119`, one byte) to this unit. Named them with the pinned compiler's generated local symbols, `@24` and `igonce$15`, and recorded local binding. Their only original references are in this function.

The pinned split tool initially rejected the automatically generated remainder starting at the unaligned string end. Explicit remainder splits begin at `0x80468E54` and `0x8056211C`, with four-byte alignment. They retain original objects and have no source configuration. The intervening three bytes in each section are zero alignment padding, reproduced by the linker. No placeholder data or padding arrays were added. The tool's gap/alignment behavior was checked against the [pinned v1.8.3 implementation](https://github.com/encounter/decomp-toolkit/blob/v1.8.3/src/util/split.rs).

An independent ELF parser compared section type, flags, size, alignment and bytes, clearing only instruction fields populated by relocations. All 108 text bytes, 345 data bytes and the one-byte BSS section agree. All five relocation records agree in offset, type, addend and target name, binding, visibility, definition section, value, size and type:

| Offset in `.text` | Relocation | Target |
| --- | --- | --- |
| `0x20` | `R_PPC_EMB_SDA21` | Local `igonce$15` in `.sbss` |
| `0x2E` | `R_PPC_ADDR16_HA` | Local `@24` in `.data` |
| `0x36` | `R_PPC_ADDR16_LO` | Local `@24` in `.data` |
| `0x40` | `R_PPC_REL24` | External `igReportError` |
| `0x58` | `R_PPC_EMB_SDA21` | Local `igonce$15` in `.sbss` |

## Verification and progress

Used the unchanged engine compiler pin `GC/2.6`, `-O4,p`, `-inline auto` and existing ABI settings. Ran:

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
build/tools/objdiff-cli diff -p . -u main/Alchemy/src/igCore/igArkCore \
  -c functionRelocDiffs=data_value \
  -o build/GDJEB2/igArkCore-final-strict.json --format json-pretty
/opt/homebrew/bin/python3 build/GDJEB2/analysis/verify_igArkCore.py
shasum orig/GDJEB2/sys/main.dol build/GDJEB2/main.dol
```

All configured source compiles. Strict objdiff reports the function, `.text`, `.data` and `.sbss` at 100%. The generated link rule explicitly uses `build/GDJEB2/src/Alchemy/src/igCore/igArkCore.o`, and the normal checksum check passes. Original and source-linked DOL SHA-1: `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. Independent review found no blocking issues. Generated reports, comparison scripts, assembly and original inputs remain ignored. The pre-existing `FILE_POS.C` case warning remains; configuration also reports the two intentionally original remainder objects as missing source configuration. These are linked from their generated original objects.

| Metric | Before → after | Percentage-point delta | Exact byte gain |
| --- | --- | --- | --- |
| Matched code | 8.677519925% → 8.680127643% | +0.002607718 | +108 |
| Fully linked code | 8.337357590% → 8.339965308% | +0.002607718 | +108 |
| Matched data | 10.988156013% → 11.011208310% | +0.023052297 | +346 |

Matched functions increase from 1,186 to 1,187, and complete units from 173 to 174. Code denominator remains 4,141,552 bytes. **Data denominator changes from 1,503,801 to 1,503,795 bytes:** the six zero padding bytes are now supplied by linker alignment and excluded from object totals. With the baseline denominator held constant, the 346 recovered bytes contribute +0.023008363 percentage points; the denominator change contributes the remaining +0.000043934. **Unit denominator changes from 5,132 to 5,134** because two original storage objects were divided around the recovered storage. The configured engine category now contains 524 code bytes and 354 data bytes; its 100% reflects only the two configured units, not the full Alchemy engine.

Next proposed bounded target: investigate `Gap::Core::igArkCore::igArkCore()` at `0x8003D234` (196 bytes). Establish field-offset evidence while preserving unknown meanings, inspect constructor/string initialization and relocations, and consider extending the existing split only after exact matching. No recovery of that constructor was attempted here.
