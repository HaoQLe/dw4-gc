# Bounded string-expansion recovery

The selected scope was `fn_8003F858`, `fn_8003FD38` and `fn_8003FD3C`, `0x8003F858..0x8003FD40`: 1,256 original code bytes. The parser was favored over nearby dispatch helpers because its recovered caller establishes a hidden four-byte result and eight explicit arguments, and its library calls expose behavior. Nearby helpers still involve unresolved GPR-save patterns; retained storage misses had no new compiler evidence. Address adjacency does not prove an original translation unit.

## Verified subset

Functional commit `596421d` is integrated into `work`. Independent review reproduced identical pinned recompilation and all publication checks without blocking findings.

`unknown8003FD38.cpp` is a synthetic partition containing two observed empty virtual hooks. Each emits exactly `blr`, four bytes, with no relocations. Strict objdiff and independent big-endian ELF comparison establish exact `.text` bytes, flags 6, alignment 4, function sizes/binding/type/visibility/offsets, and absence of owned data/BSS or additional emitted code. Their virtual-table storage remains original.

The normal pinned configuration compiles all configured source, links both hooks from the source object (checked against the map and generated Ninja link inputs), and leaves `fn_8003F858` in `auto_03_8003F858_text.o`. Original and rebuilt DOL SHA-1 both equal the configuration pin `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. Checks are repeated after integration. Existing UNUSED destructors `__dt__Q33Gap4Core11igStringRefFv` and `__dt__16UnknownObjectRefFv` remain discarded: 116 bytes each, four associated relocation records in aggregate; neither is a gain from this batch. The new hooks emit no UNUSED artifacts.

## Retained parser

Local-only `task/string-expansion` at `c14e101` retains the full parser and both hooks in one **NonMatching** candidate. The closest parser emits 1,248 / 1,248 bytes, strict `functionRelocDiffs=data_value` similarity **99.64744%**. An independent masked ELF comparison finds 22 differing instruction words; all are register operands. All 38 complete relocation records, including target metadata, agree. Frame size `0x240`, `_savegpr_21`/`_restgpr_21`, branch structure, calls and immediates agree. This is a stall, not a completed recovery, and the parser remains original in published `work`.

The original/source persistent register assignment is: result pointer r26/r23; value r27/r25; first string r28/r26; first count r24/r27; second string r29/r28; second count r23/r29; output limit r25/r24. Success word r22, quoted-character temporary r21, pattern r30 and output r31 already agree. The 22 affected instruction positions (zero-based) are 7, 8, 10–14, 28, 127, 131, 135, 158, 179, 189, 193, 195, 204, 214, 294, 300, 302 and 305.

### Behavior established

The four-byte success result is captured before external calls. Empty/null format selects original global `lbl_8056211C`, then the original fallback string at `lbl_80468F04`, whose first string is `s+o'0x%x'`. Both globals remain original. The parser uses two 256-byte buffers and handles address, first string/count, second path/count and basename substitutions; custom single-quoted printf formats are copied with a 255-character bound. Double-quoted literals and backslash n/r/t escapes use the observed library calls. Unknown escapes are skipped.

Preserve the original asymmetric checks: basename mode calls `strrchr` on the second string without a null guard, full-path mode guards it, and first-string mode does not guard it. Each `strncat` receives the same full signed output limit converted to the library size type, rather than a shrinking capacity. The output is initially cleared only for a nonzero limit and its last byte is cleared only when the signed limit exceeds one. These are observations, not proposed safety improvements.

### Bounded variants

- Direct reconstruction: 1,248 bytes, 99.34295%; extra differences came from saving an already sign-extended local character.
- Reading the quoted character directly in the printf argument preserves its raw byte across `strlen` and delays sign extension: 1,248 bytes, 99.64744%, removing all non-register differences.
- Moving a char assignment into the loop condition: 1,236 bytes, 98.36539%; unsigned-byte condition with explicit signed casts: 1,244 bytes, 98.83013%. Both change sign-extension/control-flow details and were rejected.
- Diagnostic explicit result-pointer form, applied to the unsigned-byte condition candidate: 1,244 bytes and unchanged persistent-register assignment. This was not adopted.
- A C++ member-function representation, signed-long counts, unsigned counts, local count aliases and register storage hints all preserve the closest persistent-register mismatch; no improvement. These variants were rejected and compiler pins were unchanged.

Ignored analysis artifacts under `build/GDJEB2/analysis/string-expansion/` include the baseline, strict reports and ELF verifier. Generated assembly, original game inputs and candidate object files are excluded from commits. Only factual notes and the verified hooks are published; the experiment branch stays local.

## Progress

| Measure | Before | After | Gain |
| --- | ---: | ---: | ---: |
| Matched code | 367,080 / 4,141,552 (8.863343983%) | 367,088 / 4,141,552 (8.863537147%) | 8 bytes; 0.000193164 pp |
| Fully linked code | 352,992 / 4,141,552 (8.523181648%) | 353,000 / 4,141,552 (8.523374812%) | 8 bytes; 0.000193164 pp |
| Matched data | 165,586 / 1,503,795 (11.011208310%) | unchanged | 0 bytes; 0 pp |
| Matched functions | 1,234 / 23,334 | 1,236 / 23,334 | 2; denominator unchanged |
| Complete units | 182 / 5,148 | 183 / 5,150 | 1 complete unit; denominator +2 |

The unit denominator grows by two because the isolated hooks split one original remainder into a before remainder, source partition and after remainder. Code/data/function denominators do not change. Engine totals become 8,120 code bytes, 354 data bytes, 52 functions and 11 complete units.

Next proposed batch: inspect the allocator/storage dispatch cluster beginning at `fn_8003FD40`, compare candidates before selecting scope, and prioritize functions whose virtual layouts and call conventions can be established together. The parser needs a distinct register-allocation hypothesis before another retry. This proposal does not start another batch.
