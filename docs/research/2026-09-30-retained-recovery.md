# Retained mismatch recovery

The user targeted all ten retained functions, 3,316 original code bytes, rather than a new adjacent batch. Baseline was `work` at `4cc8280`. The investigation compared retained sources and fresh compiler output before source promotion. Prior experiment branch tips remain unchanged.

## Verified result and optimization context

Functional commit `9849800` recovers seven functions / **2,512 original bytes** from source. It is integrated into `work`. Three functions / 804 bytes remain original on the published branch. This completes the bounded investigation with a verified partial recovery, not an exact ten-function result.

The shared blocker was optimization context: the existing GC/2.6 compiler with `-O4,s` reproduces signed division, boolean normalization, GPR helper saves/restores, fill-loop structure and parser register choices that the baseline `-O4,p` did not. The user explicitly authorized the proposed **verified per-unit profile correction** after reviewing the seven exact candidates. `configure.py` derives `cflags_engine_size` by replacing only `-O4,p` in the existing engine flags. Only these seven new units use it; existing objects, compiler and tool tags retain their settings. This establishes a working matching profile, not proof of original translation-unit boundaries or original build settings.

| Function | Original bytes | Full relocations | Additional source evidence |
| --- | ---: | ---: | --- |
| `fn_8003E4FC` | 120 | 3 | Separate loop-index and callback-offset initialization reproduces allocation. |
| `fn_8003E8B8` | 188 | 3 | Original growth expression remains `capacity *= (3 * capacity) / 2`. |
| `fn_8003E9B4` | 88 | 3 | Existing virtual dispatch body matches with the size profile. |
| `fn_8003EA18` | 208 | 6 | Signed parsed integer and nonzero boolean conversion preserved. |
| `fn_8003EF94` | 220 | 4 | Volatile view preserves the original second storage-size read. |
| `fn_8003F3FC` | 440 | 10 | Indexed fill uses cached count; end pointer is declared before element pointer. |
| `fn_8003F858` | 1,248 | 38 | Retained direct-character-read parser now matches completely. |
| **Total** | **2,512** | **67** | No owned data/BSS or additional emitted code. |

Each function has a synthetic source partition. These boundaries let exact subsets link independently; they do not establish historical source ownership. Shared globals and vtables remain original. The shared storage header adds only the observed slots `0x74`, `0x78`, `0x7C`, with no field-layout change. The two existing consumers (`unknown8003ED10`, 644 bytes; `unknown8003F070`, 104 bytes) remain exact.

Preserved behavior includes the unusual capacity growth, cached rebuild size, masked reference-count release with its second read, the byte-valued insertion result, and parser asymmetric null guards, repeated full concatenation limit and original format globals. Earlier handoffs describe their calling conventions and field observations. No semantic type/field renaming is inferred.

## Verification

Normal configure, all-source compilation, report generation and source-linked DOL checksum pass on the task branch and again after integration into `work`:

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
/opt/homebrew/bin/python3 build/GDJEB2/analysis/retained-recovery/verify.py --linked
```

Strict objdiff (`functionRelocDiffs=data_value`) reports 100% for every new function and text section. An independent big-endian ELF comparison checks all allocated section bytes with relocation masks, section flags/alignment, complete relocation records and target metadata, and exact function definitions. It confirms 2,512 bytes / 67 relocations and no new compiler artifacts. The map and Ninja link inputs confirm all seven functions originate from configured source objects; the remaining three originate from the original `auto_03_8003F0D8_text.o` object.

Both original and rebuilt DOL SHA-1 equal the repository pin `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. Independent review recompiled seven new units and both existing header consumers with configured flags, reproduced the comparisons, provenance, hashes and report deltas, and resolved declaration-consistency findings before integration. `UnknownCallbacks` has the same three-field definition as the existing source; EF94 uses the shared storage declaration.

Previously discarded 116-byte string and 116-byte reference-view destructors remain UNUSED, with four discarded relocations; their 232 bytes are excluded from recovery. Original inputs, generated objects/assembly, strict reports, baseline and verifier stay ignored under `orig/` and `build/GDJEB2/analysis/retained-recovery/`.

## Retained local candidates

New local-only branch **`task/retained-recovery-experiments` at `ec1093d`** retains only the three unfinished functions in a NonMatching unit with the diagnostic size profile. Configured recompilation and strict objdiff reproduce:

| Function | Emitted / original bytes | Strict similarity | Concrete remaining difference |
| --- | ---: | ---: | --- |
| `fn_8003F0D8` lookup | 480 / 480 | 99.708336% | Seven instruction words swap cached-count and comparison registers `r6/r8`. |
| `fn_8003F2B8` hash | 104 / 104 | 98.26923% | Eight instruction words swap storage/count registers `r3/r6`. |
| `fn_8003F320` probe | 220 / 220 | 99.90909% | One loop-back branch targets the indexed load rather than the preceding backing-pointer reload. |

The closest probe preserves the original storage pointer and is equivalent for the unsuccessful loop body, which has no calls or writes. Nevertheless its hoisted field read fails exact recovery and is not promoted. An alternate volatile-pointer candidate preserves that reload but has four differing register words (220 bytes, 99.454544%); its source remains ignored for future comparison. The closest candidates are not hard-blocked by missing external functions or unavailable tooling: they are unresolved compiler/source-shape matches.

Bounded attempts included hidden-result and temporary-lifetime forms; member/virtual definitions; parameter and declaration order; inline policies; raw/reference/aggregate storage views; comparison-load signed casts; sum type/cast variants; control-flow forms; pointer/offset views; and wide integer aliases. Ignored diagnostics also compared optimization levels and selected optimization switches. None improved lookup/hash to exact or removed probe's final difference. Final comparison-reference and one-sided signed-load views also failed. Other compiler options were never applied to the published configuration. Earlier branch variants and behavior-changing variants were not promoted.

Old experiment tips remain `45030f5` (lifecycle), `67cb882` (post-lifecycle), `ad82114` (storage), `fe8ce09` (continuation), and `c14e101` (parser). Their old strict misses are historical; seven are now resolved by this publication. The new branch remains local and is not merged into `work`.

## Progress and next candidate

| Measure | Before | After | Gain |
| --- | ---: | ---: | ---: |
| Matched code | 367,088 / 4,141,552 (8.863537147%) | 369,600 / 4,141,552 (8.924190738%) | 2,512 bytes; 0.060653591 pp |
| Fully linked code | 353,000 / 4,141,552 (8.523374812%) | 355,512 / 4,141,552 (8.584028403%) | 2,512 bytes; 0.060653591 pp |
| Matched data | 165,586 / 1,503,795 (11.011208310%) | unchanged | 0 bytes; 0 pp |
| Matched functions | 1,236 / 23,334 | 1,243 / 23,334 | 7; denominator unchanged |
| Complete units | 183 / 5,150 | 190 / 5,152 | 7 complete; denominator +2 |

The unit denominator grows by two because isolating rebuild splits one original remainder into a before remainder, source unit and after remainder. Code/data/function denominators are unchanged. Engine configured totals become 10,632 code bytes, 354 data bytes, 59 functions and 18 completed units; their 100% does not describe the entire original engine.

Next proposed batch: inspect allocator/storage dispatch beginning at `fn_8003FD40`, comparing its calling conventions, virtual layout and viable source subsets before selecting scope. The three retained functions require a distinct hypothesis tied to the recorded instruction differences. This proposal does not start another batch.
