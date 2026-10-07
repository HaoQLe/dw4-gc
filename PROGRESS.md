# Digimon World 4 fork progress

Updated: 2026-10-07. Development repository: [HaoQLe/dw4-gc](https://github.com/HaoQLe/dw4-gc), default branch `work`. Work stays in this fork; upstream PRs require an explicit user request. See [AGENTS.md](AGENTS.md) for the authoritative workflow.

## Resume here

- **Generator round 5 (user request 2026-10-07):** signature pass, floating point and struct copies in FLOW; functional commit `33ecdd9` (task branch `task/generator-round5`).
  - **Totals:** matched code 32.955182%, linked 32.919640%, matched data 15.137835% (+39,220 code bytes each, +1,220 data bytes); 16,000 functions (+710); 3,747/6,970 units.
  - **Yield:** 730 functions gained (40,896 bytes), 20 lost (1,676 bytes). By cause:
    - recovered round-4 losses: 25 of 47 (1,648 bytes);
    - floating point: 74 functions (6,780 bytes);
    - local structs: 26 (2,532 bytes);
    - struct copies: 5 (136 bytes);
    - consistency fixes (pointer returns, adopted parameter types, gap parameters, call-free functions): 590 (29,672 bytes).
  - **Against the round-4 projection:** 100–150 KB was projected; this round gave 39 KB without loops. The expected generator plateau is lowered to about 34–35%; loops are the last template-scale pool.
  - **Fix:** `emit.py` no longer mixes functions with and without original exception entries in one unit; an extra entry had shifted every later `extab` address.
  - **Verification:** `verify_units.py` checked 914 changed units, none failing; 10 functions excluded. `build.sha1` OK. An independent review re-compared all 3,507 generated units (939,584 bytes) and confirmed map, splits and counts.
  - **Retained (active):**
    - 22 of the 47 round-4 losses (template-prototype, arity and void-result conflicts);
    - 20 newly lost functions, each exact when generated alone; the conflict is with neighbouring prototypes, for example the `fn_8027B4C4` family (`ceil` on a `double` call result) and `fn_80281E80` (parameter casts);
    - two unverified points: GX FIFO two-value load order (`fn_80102670`) and whether a signature-pass rerun reproduces `signatures.json`.
  - **Next investigation:** choose per prototype conflict which side wins by bytes, rather than always letting templates win; then simple counted loops.
  - Details: [generator round 5](docs/research/2026-10-07-generator-round5.md).
- **Generator round 4 closed (user request 2026-10-06):** forward control flow in the FLOW template; functional commit `05f7803`.
  - **Totals:** matched code 32.008194%, linked 31.972652% (+77,524 bytes each).
  - **Template:** `if`/`else` blocks, early and conditional returns, three join strategies (`flow_cf.json`), integer arithmetic, indexed loads/stores, global stores, function-pointer, variadic and local-address calls.
  - **Retained:**
    - 47 previously generated functions (3,132 bytes) lost to prototype-order conflicts; a second signature pass is the likely fix;
    - about 570 branchy candidates not exact (struct copies, string-pool releases, evaluation order, register choice);
    - floating-point code is unmodeled.
  - **Projection:** remaining code is 68.0%: loops 36.7%, branchier functions 15.9%, small branchy 8.4%, straight 7.0%. Further template work might add 100–150 KB (to about 35%); beyond that needs per-function decompilation.
  - Details: [generator round 4](docs/research/2026-10-06-generator-round4.md).
- **Generator round 3 closed (user request 2026-10-06):** `work` at `b03f148`; both metrics exceed 30%.
  - **Totals:** matched code 30.136335%, linked 30.100792%.
  - **Yield:** +233,384 bytes over round 2, from:
    - hierarchical vtable-read temporaries (members per destructor level, a root class running the base constructor);
    - speed and lmw compiler profiles;
    - the FLOW template (field access, virtual calls, inferred parameters).
  - **Consolidation:** emission merges generated runs, giving 6,564 units in total, of which 3,099 are generated.
  - **Verification:** every changed unit is compiled with its own flags before linking.
  - **Known artifact:** 287 isolated exception-enabled units carry 5,740 bytes of unmatched object-level extab data. These come from unused destructor copies stripped at link; the executable is exact.
  - **Retained:**
    - 15 functions (744 bytes) left generated units;
    - 68 vtable-read temporaries (about 11 KB, register allocation);
    - about 130 flow candidates;
    - the `fn_80021E10` family.
  - **Remaining code:** mostly branchy. The next gains need control-flow support or manual decompilation.
  - Details: [generator round 3](docs/research/2026-10-06-generator-round3.md).
- **Generator round 2 closed (user request 2026-10-05):** `work` at `f63c8ec`.
  - **Tool:** `tools/unknowngen/` reproduces every generated unit; see its README.
  - **Yield:** +155,008 bytes (3,580 functions), from the no-small-data profile, position-independent symbols, the destructor and leaf templates, immediate-parameterized templates and constant-return calls.
  - **Totals:** matched code 24.501154%, linked 24.465612%.
  - **Link hang:** a unit ending at the hand-placed label `__OSSystemCallVectorStart` hung `mwldeppc`. Functions touching `.text` labels now keep their original objects.
  - **Retained:**
    - the `fn_80021E10` factory family (99.76%; the vtable lands in `r4` where the original uses `r12`);
    - 9 call-only candidates.
  - **30% assessment:** needs +227,738 bytes. The remaining repeated families (about 358 KB over about 415 families) have a long tail; the top 50 hold about 160 KB. A third generator round may reach about 27–28%; 30% also needs manual decompilation of unique functions.
  - Details: [generator round 2](docs/research/2026-10-05-generator-round2.md).
- **20% milestone batch closed (user request 2026-10-05):** both targets reached on `work` at `f814ea4`. Matched code is 20.758402% and fully linked code is 20.722860%.
  - **Checkpoint `69fd3b4`:** six exact Alchemy units in `0x8004B394..0x8004DE4C` (64 functions, 8,408 bytes); `ansi_files` linked.
  - **Checkpoint `f814ea4`:** 2,102 generated exact units with 8,060 functions and 434,448 bytes, emitted from relocation-verified boilerplate templates.
  - Method, exclusions and review: [generated boilerplate note](docs/research/2026-10-05-generated-boilerplate-recovery.md).
  - **Kept local on `task/alchemy-core-20pct` as NonMatching experiments:**
    - `fn_8004BD50` (97.75%), `fn_8004B9FC` (97.19%), `fn_8004BBE0` (97.72%), `fn_8004DB40` (99.76%), `fn_8004DCC0` (98.85%);
    - `fn_8004CCE0`, which needs `.sbss` local-static ownership;
    - `fn_8004291C` (93.9% natural form; permuter best 185/330);
    - the 164-byte factory family `fn_80021E10`, blocked on vtable-load scheduling and register allocation;
    - `ReverbSTDCreate`.
  - **Next-batch candidates (not started):**
    - more generator templates (factory variants, 112/120-byte families, the 133 near-exact candidates);
    - merging single-function generated runs as neighbouring functions are recovered;
    - classifying the `unknownGen/` regions as engine or game.

- **10% milestone batch is complete and source-linked (closed `89ae0fd`, baseline `0e0ce32`).**

  Scope:
  - All 83 Alchemy functions at `0x800442F8..0x8004B394` (28,828 bytes) in 14 synthetic units, with owned `.data 0x80469070..0x80469528`.
  - Six SDK/runtime units: `__init_cpp_exceptions`, `odenotstub`, `axartlfo`, `dvdlow`, `OSAlloc`, `reverb_hi`.

  Verification: every checkpoint passed strict objdiff, the persistent-fresh-object canonical verifier (final run: 20 units, 136 functions, 41,024 bytes, 1,357 relocations), map/Ninja provenance, all-source build, byte-identical DOL with the pinned SHA-1 and an independent review.

  Totals compared with the baseline:

  | Measure | Baseline | Now | Change |
  | --- | --- | --- | --- |
  | Matched code | 388,036 (9.369312%) | 416,864 (**10.065405%**) | +28,828 bytes |
  | Fully linked code | 373,948 (9.029157%) | 414,972 (**10.019722%**) | +41,024 bytes |
  | Matched data | 165,586 (11.011%) | 166,842 (11.094730%) | +1,256 bytes |
  | Functions | 1,390 | 1,473 | +83 |
  | Complete units | 213 | 233 | +20 |

  The unit denominator grew by 16 (5,175 → 5,191), from synthetic gap and padding partitions.

  No remainder or blocker. The paused `fn_8004291C` stays excluded and original-linked. Reusable compiler findings are in [milestone evidence](docs/research/2026-10-04-string-stream-large-recovery.md). No new batch is started.

- **10% batch checkpoint `cb1ef60` (on `work`): both matched and fully linked code exceed 10%.** fn_800442F8 (1,276 bytes, 46 relocations) is exact and source-linked in its own unit, `0x800442F8..0x800447F4`.

  Compiler finding: function locals are numbered below inline temporaries. Holding the two storage pointers and the else-branch element in locals colors them after the initial lookup, so the lookup takes r26 as in the original. A reused `value` variable creates a separate web, which explained the earlier trade-off.

  Checks: the 19-unit verifier (135 functions, 40,672 bytes, 1,344 relocations), byte-identical DOL with the pinned SHA-1 and an independent review pass.

  Totals: matched 416,512 (**10.056906%**), linked 414,620 (**10.011223%**), data 166,842 (11.094730%), 1,472 functions, 232/5,191 units.

  Only remaining active target: fn_80045BA8 (352 bytes, 95.45%). Its argument moves happen before the second text conditional. Next try: compute the arguments as function locals in statement order.

- **10% batch checkpoint `2ce2f5a` (on `work`):** fn_80045FA4 is exact and source-linked in its own unit, `0x80045FA4..0x80046254` (688 bytes, 25 relocations). A decomp-permuter run found the fix: an inline wrapper around the entry constructor call adds the temporaries that let the owner outrank the node for r31. The 18-unit verifier (134 functions, 39,396 bytes, 1,298 relocations), byte-identical DOL with the pinned SHA-1 and an independent review pass.

  Totals: matched 415,236 (**10.026096%**), linked 413,344 (9.980413%), data 166,842, 1,471 functions, 231/5,191 units. Fully linked code is about 812 bytes short of 10%.

  Active remainders:
  - **fn_800442F8 (99.92%):** only `value` differs (r25 vs r26). The original colors `value` before the store helpers' temps. Ruled out: whole-body or branch inline helpers (not inlined, or numbered late), reference-assign spellings and condition inversion. A 50-minute permuter run (workspace `permuter-442F8`) found nothing.
  - **fn_80045BA8 (95.45%):** the original places the `r3`/`r6` argument moves before the second text conditional. A 50-minute permuter run (`permuter-45BA8`) found nothing.

  Next investigation: try to make `value` an early-created frontend temp in fn_800442F8, and run longer or reseeded permuter searches.

- **10% batch checkpoint `572409c` (on `work`): matched code reaches 10%.** fn_800489E4 (2,664 bytes, 22 relocations) is exact and source-linked in its own unit, `0x800489E4..0x8004944C`.

  Compiler findings:
  - CSE merges zero initializations of inline temporaries but not of caller locals.
  - Inline locals are numbered in forward declaration order.
  - Each decoder site therefore uses the original's mix: helper call, caller-local accumulation (`SignedInto`/`UnsignedInto`), or a helper with a specific local order (`SignedNext`/`SignedValue`).
  - `SignedInto(p+4,value)` reproduces the first decoder's separate cursor.

  Checks: the 17-unit verifier (133 functions, 38,708 bytes, 1,273 relocations), map provenance, all-source build, byte-identical DOL with the pinned SHA-1 and an independent review all pass.

  Totals: matched 414,548 (**10.009484%**), linked 412,656 (9.963800%), data 166,842 (11.094730%), 1,470 functions, 230/5,191 units. Fully linked still needs about 1,500 bytes.

  Active mismatches:

  | Function | Size | Match |
  | --- | --- | --- |
  | fn_800442F8 | 1,276 | 99.92% |
  | fn_80045FA4 | 688 | 99.53% |
  | fn_80045BA8 | 352 | 95.45% |

- **10% batch checkpoint `5b75c45` (on `work`):** fn_8004A41C is exact (3,960 bytes) and joins the `0x800496E8` unit. That unit now owns `.text` through `0x8004B394` and `.data` through `0x80469528`. MWCC 8-byte `.data` alignment requires fn_8004A41C's two jump tables to share the object that begins at `lbl_80469070`. An unreferenced 0x50-byte string block lies between the tables. It is defined as opaque force-active `lbl_80469334` and changes only the `.comment` force-active flag.

  Source forms:
  - `char letter`;
  - direct `sprintf` for the integer appends and for struct-field arguments evaluated after the format conditional;
  - one function-scope `entry` variable.

  Checks: the persistent-fresh-object verifier passes all 16 units (132 functions, 36,044 bytes, 1,251 relocations). Strict objdiff passes with explicit jump-table alias normalization. The map, all-source build, byte-identical DOL with the pinned SHA-1 and an independent review all pass.

  Totals: matched 411,884 (9.945161%), linked 409,992 (9.899478%), data 166,842 (11.094730%), 1,469 functions, 229/5,191 units. Changes: +3,960 code, +500 data, +1 function.

  Remaining for the 10% linked goal: about 4,163 bytes. Active mismatches:

  | Function | Size | Match |
  | --- | --- | --- |
  | fn_800489E4 | 2,664 | 96.85% |
  | fn_800442F8 | 1,276 | 99.92% |
  | fn_80045FA4 | 688 | 99.53% |
  | fn_80045BA8 | 352 | 95.45% |

  The compiler-trace tools now live in ignored `build/GDJEB2/analysis/tools/`, after `/tmp` cleanup removed the old copies.

- **10% batch checkpoint `bcf2e75` (on `work`):** five more exact units source-link: 26 functions, 6,884 bytes and 276 relocations. They are `0x800447F4..0x80044A9C`, `0x80044A9C..0x800450E0`, and three exact parser runs `0x8004577C..0x80045BA8`, `0x80045D08..0x80045FA4` and `0x80046254..0x80046D84`. Parser functions are partitioned along function boundaries, with definitions in address order (MWCC emits in definition order). fn_800442F8, fn_80045BA8 and fn_80045FA4 stay original-linked. Compiler findings:
  - The allocator gives each value the lowest callee-saved register already in use, and colors in descending vreg order.
  - Inline results and inline parameters are numbered after locals.
  - An else-first nullable-text helper (`textElse`) fixes fn_80044A9C.
  - A receiver wrapper taking the string object makes `text()` evaluate after the receiver load, which fixes fn_80044C10.
  - An inline element accessor plus a direct hidden-result return fixes fn_800447F4.

  Checks: strict objdiff passes; the only `.text` metadata differences are interleaved weak destructors, which are UNUSED. The 16-unit independent ELF verifier (131 functions, 32,084 bytes, 1,011 relocations), map provenance, all-source build, byte-identical DOL with the pinned SHA-1, and an independent review (which also showed header users are unchanged) all pass. Totals: matched 407,924 (9.849545%), linked 406,032 (9.803861%), data 166,342 (11.061481%), 1,468 functions, 229/5,191 units. Changes: +6,884 matched, +6,884 linked, +26 functions, +5 units; denominator +6 from auto gap units. Remaining active mismatches:

  | Function | Match |
  | --- | --- |
  | fn_800442F8 | 99.92% |
  | fn_80045FA4 | 99.53% |
  | fn_80045BA8 | 95.45% |
  | fn_800489E4 | 96.85% |
  | fn_8004A41C | 99.17% |

  fn_8004A41C's data also needs to merge with the 0x800496E8 unit.

- **10% batch checkpoint `340bb0b` (on `work`):** unit `0x800496E8..0x8004A41C`, 10 functions /3,380 bytes /207 relocations, is exact and source-linked. It also owns `.data` `0x80469070..0x80469334` (708 bytes). The pinned compiler always emits `.data` with 8-byte alignment, so the 16-entry jump table at `0x804692F4` can link only when its unit starts at the 8-aligned original object `lbl_80469070`. The unit therefore owns the three opaque name tables, the serializer string and the jump table, generated from the original relocations. `#pragma force_active` keeps the two self-referenced tables live and sets only the `.comment` force-active flag, which the original has. Compiler finding: MWCC colors callee-saved vregs in descending vreg order, and frontend temps number after locals. An inline accessor makes a cached value a late temp, which fixed fn_8004A1B8; `char length` fixed fn_8004A2F0's byte load. Strict objdiff (functions/data 100%; weak-destructor `.text` size and the `@154` jump-table name are explicit normalizations), independent ELF checks for 11 units /105 functions /25,200 bytes /735 relocations, map provenance, all-source build, pinned DOL SHA-1 and independent review pass. Totals: matched 401,040 (9.683327%), linked 399,148 (9.637644%), data 166,342 (11.061481%), 1,442 functions, 224/5,185 units; +3,380 matched, +3,380 linked, +708 data, +10 functions, +1 unit; denominator +2. fn_8004A41C's jump tables at `0x80469384`/`0x804693C4` cannot link from a separate unit, because the next 8-aligned start lies inside this unit's data. Recovering it requires merging it into this unit and reproducing the unreferenced 0x50-byte `igObject::` strings at `0x80469334`.

- **10% batch verified checkpoints (`5122f44`, `317e0b2`, `15285cf`, integrated into `work`):** six SDK/runtime units /53 existing matched functions /12,196 bytes and four new Alchemy units /42 functions /9,624 bytes are source-linked. All 95 checkpoint functions /21,820 bytes /528 full relocations pass strict objdiff, independent fresh ELF checks including explicit function bindings, map/Ninja provenance, all-source compilation and byte-for-byte pinned DOL equality. Fresh review caught four explicit weak DVD definitions; `317e0b2` restores their bindings without changing code. Published totals are 397,660 matched bytes (9.601714526%), 395,768 linked bytes (9.556031169%), 165,634 matched data bytes (11.014400234%), 1,432 functions and 223/5,183 complete units. Relative to milestone baseline: +9,624 matched, +21,820 linked, +48 data, +42 functions, +10 complete units; denominator +8. All remaining targets stay active. Local experiment `003767e` preserves all 83 implementations: 72 functions /16,160 bytes are privately strict-exact; 11 mismatches remain, with 6,536 exact bytes still in incomplete original-linked units. Formatter improved to 3,956/3,960 bytes, 99.166664%; next inspect lexical byte-register lifetimes and hidden-result scheduling, then the remaining parser/register mismatches and owned jump tables. Paused `fn_8004291C` remains excluded. See [milestone evidence](docs/research/2026-10-04-string-stream-large-recovery.md).

- **Metadata/storage follow-up batch is complete and source-linked: 40 functions / 5,388 original code bytes / 150 full relocations**, range `0x80042DEC..0x800442F8`, baseline `fcae0b0`. Functional commit `baf4780`; `task/metadata-followup-recovery` is integrated into `work`. Strict objdiff, independent ELF code/section/function/full-relocation checks, all-source compilation, source-map/Ninja provenance, original-object immutability, pinned DOL checksum and independent final fresh-compile review pass. Publication gates pass again on integrated `work`. Four synthetic units own no data/BSS; three identical weak destructors emit 348 bytes / six relocations, coalesce to one UNUSED map entry and are excluded. No remainder or blocker in this batch. The previously paused `fn_8004291C` remains out of scope and original-linked; prior experiment tips are preserved. See [follow-up evidence](docs/research/2026-10-04-metadata-followup-recovery.md). Next proposed investigation: inspect the original region beginning at `0x800442F8` and compare dependency/ABI confidence with alternatives before selecting scope. This proposal starts no new batch.

- **Larger batch paused at the user's request on 2026-10-04:** 50 functions / 5,908 original code bytes at `0x800416D8..0x80042DEC`, baseline `85c1520`. **49 functions / 5,692 bytes / 123 original relocations are exact, source-linked and published** in six synthetic partitions: `fe3044d` (12 functions / 1,896 bytes), `54b37bf` (36 functions / 2,900 bytes), and ordering `a308886` (one function / 896 bytes). All publication gates and independent fresh-compile review passed again on integrated `work`; ledger checkpoint `2bc17a2` was published. The remaining `fn_8004291C` is **on hold**, original-linked in published `work`; its local NonMatching candidate is 216 bytes / 99.25926%, with eight target/array `r5/r6` instruction differences and all three full relocations agreeing. Local-only candidates `51aff11` and `bae7d2f`, ordering development `9ac1f74`, and experiment checkpoint `8cc10d0` on `task/storage-metadata-large-recovery` are preserved. The user-authorized local `-O4,p` test emitted identical code/sections/metadata/relocations to pinned `-O4,s`, so published flags remain fixed. Subsequent compiler traces and source experiments did not improve the lookup. This is a user-requested pause, not batch completion or a technical hard blocker. **Do not resume the lookup without a new user request.** If resumed, use the recorded frontend/backend and register-graph evidence before choosing further experiments. Selection, exact partitions, verification and retained mismatch: [larger-batch evidence](docs/research/2026-10-03-storage-metadata-large-recovery.md).

- Storage-allocation batch is **complete and source-linked: three functions / 380 original bytes / 11 full relocations**, range `0x8004155C..0x800416D8`, in two source units. Functional commits: accessor/growth checkpoint `8df3ca9`, allocator `f1e1f29`; baseline `5cf7f79`. Task branch `task/storage-allocation-recovery` is integrated into `work`; all publication checks pass again on integrated revision `e6507f1`. Strict objdiff, independent exact ELF checks, all-source build, map/Ninja provenance, no-artifact checks, pinned checksum, exact progress deltas and independent fresh-compile reviews pass. No remainder or owned data/BSS. Nested allocation arguments resolved the allocator's final scheduling difference without compiler-option changes. Local experiment tip `031a02b` is preserved and its old mismatch is historical. See [storage-allocation handoff](docs/research/2026-10-02-storage-allocation-recovery.md). Next proposed investigation: insertion/append/removal helpers at `0x800416D8..0x80041894` (444 bytes); inspect signed guards and overlapping-copy arithmetic and compare alternatives before selecting another batch. This proposal starts no new batch.

- Creation/lookup hooks are **complete and source-linked: five functions / 408 original bytes / 12 full relocations**, range `0x800413C4..0x8004155C`. Functional commit `0b2bddb`, baseline `73f7969`; task branch `task/creation-lookup-recovery` is integrated into `work`. Strict objdiff, independent exact ELF checks, all-source build, map/Ninja source provenance, no-artifact checks, pinned DOL checksum and independent fresh-compile review pass. All publication checks pass again on integrated `work`. No remainder or owned data/BSS. See [creation/lookup handoff](docs/research/2026-10-01-creation-lookup-recovery.md). The proposed storage-allocation group is now recovered in the batch above.


- Metadata construction/access batch is **complete and source-linked: six functions / 932 original bytes / 31 full relocations**, range `0x80041020..0x800413C4`. Functional commit `bca74d7`, baseline `ce41066`; task branch `task/metadata-recovery` is integrated into `work`. Strict objdiff, independent exact ELF checks, all-source build, source provenance, no-artifact checks, pinned DOL checksum and independent fresh-compile review pass; all publication checks pass again on integrated `work`. No remainder or new owned data/BSS. Selection and compiler evidence: [metadata handoff](docs/research/2026-10-01-metadata-recovery.md). The proposed five creation/lookup hooks are now recovered in the batch above.
- Workflow acceleration is **adopted and verified**: `tools/decomp.py` provides private per-unit scratch compilation, independent exact ELF verification and deterministic report ranking; the matching playbook and coordinator/worker worktree contract are now repository policy. Twenty-one tests, exact and partial real-project scratch runs, configured-object immutability checks, all 204 built source-object parser checks and independent review pass. Use [the matching playbook](docs/decomp/matching-playbook.md) for normal recovery and [the parallel workflow](docs/decomp/parallel-workflow.md) only for an explicitly authorized multi-worker batch. Tooling commits `5cd5381`, `9096580`; research/design checkpoint `071d07b`.
- The aggregate dispatch continuation batch is **complete: 3 exact functions / 344 original bytes / 9 full relocations, source-linked**. Functional commit `130de4b`. The recovered range `0x80040C84..0x80040DDC` adds the global accessor, slot-`0xD4` fan-out and bounded slot-`0xE0` parser/dispatcher while preserving unknown meanings. Strict and independent ELF checks, source provenance, the pinned DOL checksum and an independent fresh-compile review pass; publication checks pass again after integration into `work`. See [aggregate continuation evidence](docs/research/2026-10-01-aggregate-dispatch-continuation.md).
- The offset-adjusted aggregate dispatch batch is **complete: 3 exact functions / 516 original bytes / 6 full relocations, source-linked**. Functional commit `784bf49`. The recovered range `0x80040A80..0x80040C84` reuses the aggregate layout, adjusts two coordinates by owner/element offsets and preserves the nested halfword-stride loop without assigning semantic names. Strict and independent ELF checks, source provenance, the pinned DOL checksum and an independent fresh-build review pass; publication checks pass again after integration into `work`. See [offset-dispatch evidence](docs/research/2026-09-30-offset-dispatch-recovery.md).
- The aggregate dispatch batch is **complete: 20 exact functions / 2,572 original bytes / 40 full relocations, source-linked**. Functional commit `357bfba`. The recovered range `0x80040074..0x80040A80` preserves the observed container layout, adjacent virtual calls and signed/unsigned loop distinctions without assigning semantic names. All publication gates and independent review pass. See [aggregate dispatch evidence](docs/research/2026-09-30-aggregate-dispatch-recovery.md).
- The user-targeted retained batch is **complete: ten exact functions / 3,316 original bytes, source-linked**, with 69 full relocations. Functional commits: seven-function checkpoint `9849800`, hash `5a2992f`, probe `bee25a8`, lookup `45a1e2d`. The remaining three added 804 verified bytes; no target remains unrecovered or hard blocked. See [continuation evidence](docs/research/2026-09-30-retained-register-recovery.md) and [earlier seven-function checkpoint](docs/research/2026-09-30-retained-recovery.md).
- All configured source builds, strict objdiff, independent ELF bytes/section/symbol/full-relocation comparisons, map/Ninja source provenance, the pinned DOL checksum and independent reviews pass. Publication gates passed again after integration into personal-fork `work`.
- Lookup/hash use unchanged default `-O4,p`. Probe, aggregate dispatch, offset-dispatch and aggregate-continuation units use the existing verified per-unit `-O4,s` profile alongside the earlier seven units; compiler/tool pins and other objects retain their settings. No new owned data/BSS or compiler artifacts are counted.
- Standing workflow preference: automatically continue an authorized batch until every target is verified or each remainder has an evidenced hard blocker. Exact-subset publication is a checkpoint; investigation stalls and execution interruptions retain active scope. See [AGENTS.md](AGENTS.md#recovery-throughput).
- Preserved local experiment tips: lifecycle `45030f5`, post-lifecycle `67cb882`, storage `ad82114`, continuation `fe8ce09`, parser `c14e101`, retained candidates `ec1093d`. Their old mismatches are historical evidence. `task/retained-register-recovery` holds the completed continuation; no experiment branch was rewritten, deleted or published.
- Parallel Alchemy recovery is **complete and source-linked: 15 functions / 1,400 original bytes / 47 full relocations**, with no remainder. Three workers recovered storage/byte conversion (516 bytes), constructor/wrapper/accessor (304 bytes) and aggregate string construction (580 bytes) concurrently. Source commits `e7a16cb`, `191406f`, `d6b2236`; source-link commit `1f046ae`. Strict and independent contextual ELF checks, all-source build, provenance, UNUSED artifact exclusion, pinned checksum and independent fresh-compile source reviews pass. Independent final review passes; all publication checks pass again after integration into `work`. See [parallel recovery handoff](docs/research/2026-10-01-parallel-alchemy-recovery.md). The proposed metadata group is now recovered in the metadata batch above.
- Before new recovery: inspect Git status/recent commits and the handoff; preserve user edits and prior tips. The current ignored analysis has a working compiler AST/PCode/register-graph debugger and verified continuation checker.

## Completed work

Rows record each session's result at the time; the retained-recovery row and resume section give the current status of earlier stalls.

| Work | Status and evidence | Commit / detailed notes |
| --- | --- | --- |
| Fork and development workflow | Fork created; `origin` points to HaoQLe, `upstream` to ivanno4317; `work` is published and the fork's default branch. | `f72e735`; [AGENTS.md](AGENTS.md) |
| Initial research and starting plan | Project configuration and primary-source tools/resources investigated. Research snapshots are dated, not live progress. | `f72e735`; [starting plan](docs/research/2026-09-29-starting-plan.md), [resources](docs/research/2026-09-29-resources.md) |
| Accelerated matching workflow | Private per-unit compile/diff, strict reusable ELF verification, explainable target ranking, matching tactics and isolated coordinator/worker ownership are adopted. Twenty-one unit/integration tests, exact and partial real-object smoke checks, configured-output immutability, all built-source parser checks and independent review pass. Recovery totals are unchanged. | `071d07b`, `5cd5381`, `9096580`; [research](docs/research/2026-10-01-peer-decomp-acceleration.md), [matching playbook](docs/decomp/matching-playbook.md), [parallel workflow](docs/decomp/parallel-workflow.md) |
| Local matching-build baseline | Supplied GDJEB2 CISO successfully extracted; pinned compilers run on this Mac; all configured source builds; original and rebuilt DOL share the expected checksum. | Recorded in `c974833`; [host/build notes](docs/research/2026-09-29-uart-console.md) |
| 20% milestone batch | Six exact Alchemy units, `ansi_files` linked and 2,102 generated exact boilerplate units (8,060 functions, 434,448 bytes). Two independent reviews and pinned DOL equality pass. Matched code 20.758402%, linked 20.722860%. | `69fd3b4`, `f814ea4`; [generated boilerplate note](docs/research/2026-10-05-generated-boilerplate-recovery.md) |
| Generator round 2 | `unknowngen` committed as a reproducible repository tool; +155,008 bytes (3,580 functions) in exact generated units. Independent review and pinned DOL equality pass. Matched code 24.501154%, linked 24.465612%. | `78d0f4b`..`f63c8ec`; [round-2 note](docs/research/2026-10-05-generator-round2.md) |
| Generator round 3 | Matched and linked code both exceed 30%. +233,384 bytes: hierarchical temporaries, speed/lmw profiles, FLOW template, consolidated and verified units. Independent review, reproducibility and pinned DOL equality pass. | `92ac6cd`..`b03f148`; [round-3 note](docs/research/2026-10-06-generator-round3.md) |
| Generator round 4 | Forward control flow in FLOW: +77,524 bytes (838 functions gained, 47 lost). Per-unit verification, independent review and pinned DOL equality pass. | `05f7803`; [round-4 note](docs/research/2026-10-06-generator-round4.md) |
| UART console runtime unit | **Complete and linked from source.** Recovered `fn_8009F35C`; made initializer static inline. All three functions, 224 code bytes and 8 data bytes match. Strict objdiff and whole-DOL verification passed; independent review found no issues. | Functional commit `bd5b375`; [UART handoff](docs/research/2026-09-29-uart-console.md) |
| Alchemy lifecycle unit (`igGap.cpp`) | **Complete and linked from source.** `igRefAlchemy(int)` and `igReleaseAlchemy()` match: 416 code bytes, 8 owned BSS bytes, all 34 relocation records. Corrected class layout, five registrar targets and shared-global references; corrected the synthetic BSS split. All configured source compiles and whole-DOL checksum passes; independent review found no blocking issues. | Functional commit `6ac6304`; [Alchemy handoff](docs/research/2026-09-29-alchemy-lifecycle.md) |
| Alchemy version-check split (`igArkCore.cpp`) | **Complete and linked from source.** `checkAlchemyVersion(int)` matches: 108 code bytes, 345 diagnostic bytes, one suppression BSS byte and all five relocations. Corrected version, opaque-byte gate, diagnostic and report target; preserved unknown class fields. All configured source compiles and whole-DOL checksum passes; independent review found no blocking issues. Other class methods remain original. | Functional commit `c586318`; [version-check handoff](docs/research/2026-09-29-alchemy-version-check.md) |
| Alchemy constructor (`igArkCore.cpp`) | **Complete and linked from source.** `igArkCore()` matches all 196 bytes and has no relocations. The expanded split preserves the original version-check code/data and all five relocations. Null string initialization and observed opaque-storage writes are recovered without semantic field names. All configured source compiles and whole-DOL checksum passes; independent review found no blocking issues. | Functional commit `62ef4b4`; [constructor handoff](docs/research/2026-09-29-igarkcore-constructor.md) |
| Alchemy bootstrap (`igArkCore.cpp`) | **Complete and linked from source.** `initBootstrap()` matches all 420 bytes and 45 relocation records. The extended split preserves the earlier code, diagnostic data and five relocations. Shared globals remain original; field meanings and virtual-slot semantics remain unnamed. All configured source compiles and whole-DOL checksum passes; independent review found no issues. | Functional commit `40b83bf`; [bootstrap handoff](docs/research/2026-09-29-igarkcore-bootstrap.md) |
| Alchemy remaining lifecycle and helper batch | **Complete authorized nine-function cluster; complete verified 15-helper subset, all linked from source.** 5,092 new code bytes, exact original code/data and 267 relevant relocation records across three source partitions. All configured source compiles, source-linked DOL checksum passes and independent review found no blocking issues. Two helper mismatches remain original/local NonMatching. | Functional commit `901ff2b`; [batch handoff](docs/research/2026-09-30-igarkcore-lifecycle.md); local-only experiment `45030f5` |
| Post-lifecycle bounded batch | **Partial recovery complete and verified:** 12 of 14 functions, 564 code bytes and 22 full relevant relocation records match and link from three synthetic source partitions. All configured source compiles, expected DOL SHA-1 passes and independent review found no blocking issues. Two stalled functions remain original/local NonMatching. | Functional commit `06fc2d3`; [batch handoff](docs/research/2026-09-30-post-lifecycle-batch.md); local-only experiment `67cb882` |
| Storage helper bounded batch | **Partial recovery complete and verified:** 6 of 7 functions, 748 code bytes and 10 full relevant relocation records match and link from two synthetic source partitions. All configured source compiles, expected DOL SHA-1 passes and independent review found no issues. One stalled function remains original/local NonMatching. | Functional commit `90b4fc8`; [batch handoff](docs/research/2026-09-30-storage-batch.md); local-only experiment `ad82114` |
| Storage continuation bounded investigation | **No exact recovery:** all four functions / 1,244 bytes investigated; no source promotion. Four candidates remain local NonMatching, with independent review and unchanged normal-build progress. | [Investigation handoff](docs/research/2026-09-30-storage-continuation.md); local-only experiment `fe8ce09` |
| Storage context and conversion/dispatch wrapper fallback | **Verified recovery:** three functions / 568 code bytes and 12 full relocations match and source-link. All-source build, pinned DOL checksum, independent review and post-integration checks pass. Context probes did not resolve earlier storage stalls; their local branch is unchanged. | Functional commit `a0f5ca0`; [handoff](docs/research/2026-09-30-storage-context-and-wrappers.md) |
| String-expansion bounded batch | **Partial recovery verified:** two empty hooks / 8 code bytes, zero relocations, exact ELF section/symbol metadata, source-linked DOL and independent review pass. Parser remains local NonMatching with 22 register-only differences. | Functional commit `596421d`; [handoff](docs/research/2026-09-30-string-expansion.md); local-only experiment `c14e101` |
| Retained-mismatch recovery | **Complete and verified:** ten functions / 3,316 code bytes and 69 full relocations match and source-link. Existing profiles, all-source build, exact ELF checks, pinned checksum, independent reviews and post-integration checks pass. No remainder. | Functional commits `9849800`, `5a2992f`, `bee25a8`, `45a1e2d`; [final handoff](docs/research/2026-09-30-retained-register-recovery.md) |
| Aggregate virtual-dispatch family | **Complete and verified:** 20 functions / 2,572 code bytes and 40 full relocations match and source-link. Exact section/symbol/relocation checks, all-source build, map provenance, pinned checksum and independent fresh-build review pass. No remainder or emitted data/BSS/artifacts. | Functional commit `357bfba`; [handoff](docs/research/2026-09-30-aggregate-dispatch-recovery.md) |
| Offset-adjusted aggregate dispatchers | **Complete and verified:** three functions / 516 code bytes and six full relocations match and source-link. Exact section/symbol/relocation checks, all-source build, map provenance, pinned checksum and independent fresh-build review pass. No remainder or emitted data/BSS/artifacts. | Functional commit `784bf49`; [handoff](docs/research/2026-09-30-offset-dispatch-recovery.md) |
| Aggregate dispatch continuation | **Complete and verified:** three functions / 344 code bytes and nine full relocations match and source-link. Exact section/symbol/relocation checks, all-source build, map provenance, pinned checksum and independent fresh-compile review pass. No owned data/BSS or emitted artifacts. | Functional commit `130de4b`; [handoff](docs/research/2026-10-01-aggregate-dispatch-continuation.md) |
| Parallel Alchemy storage/conversion, constructor/wrapper/accessor and string builder | **Complete and source-linked:** 15 functions / 1,400 original bytes / 47 full relocations. Strict/contextual ELF checks, all-source build, provenance, UNUSED exclusion, pinned checksum and independent source reviews pass; final integration review and repeated `work` publication checks pass. No remainder or owned data/BSS. | Source commits `e7a16cb`, `191406f`, `d6b2236`; link commit `1f046ae`; [handoff](docs/research/2026-10-01-parallel-alchemy-recovery.md) |
| Metadata construction/access | **Complete and source-linked:** six functions / 932 original bytes / 31 full relocations. Strict objdiff, exact independent ELF checks, all-source build, source provenance, pinned checksum and independent fresh-compile review pass. No remainder, owned data/BSS or emitted artifacts. | Functional commit `bca74d7`; [handoff](docs/research/2026-10-01-metadata-recovery.md) |

| Creation and lookup hooks | **Complete and source-linked:** five functions / 408 original bytes / 12 full relocations. Strict objdiff, independent exact ELF checks, all-source build, source provenance, pinned checksum and independent fresh-compile review pass. No remainder, owned data/BSS or emitted artifacts. | Functional commit `0b2bddb`; [handoff](docs/research/2026-10-01-creation-lookup-recovery.md) |

| Storage allocation/accessor/growth | **Complete and source-linked:** three functions / 380 original bytes / 11 full relocations in two source units. Exact ELF/strict objdiff, all-source build, provenance, artifact exclusion, pinned checksum and independent fresh-compile reviews pass. No remainder or owned data/BSS. | Functional commits `8df3ca9`, `f1e1f29`; [handoff](docs/research/2026-10-02-storage-allocation-recovery.md) |

| Larger storage/order/wrapper/metadata batch | **Paused at user request: 49 of 50 functions / 5,692 of 5,908 bytes / 123 original relocations, source-linked and published.** All publication gates and independent fresh-compile review pass again after integration. The lookup register mismatch is on hold and original-linked; two new 116-byte destructors are UNUSED and excluded. | Functional checkpoints `fe3044d`, `54b37bf`, `a308886`; [evidence](docs/research/2026-10-03-storage-metadata-large-recovery.md) |

| Metadata/storage follow-up | **Complete and source-linked:** 40 functions / 5,388 original bytes / 150 full relocations in four synthetic source units. Strict and independent ELF checks, all-source build, provenance, pinned checksum and independent fresh-compile review pass; publication gates pass again after integration. No remainder or owned data/BSS; 348 emitted bytes / six relocations excluded as coalesced UNUSED weak artifacts. | Functional commit `baf4780`; [evidence](docs/research/2026-10-04-metadata-followup-recovery.md) |

The UART work also has historical [upstream PR #3](https://github.com/ivanno4317/dw4-gc/pull/3), created before the fork-first policy. Its review/merge status is independent of the verified fork result. This policy change does not modify that PR.

Throughput preference remains evidence-backed aggregate recovery, dependency reuse and strict publication gates. The follow-up batch adds 40 functions / 5,388 original bytes with no remainder. The earlier larger batch has recovered 49 functions / 5,692 original bytes, with one function / 216 bytes paused at the user’s request. The verified subset is published; the unrecovered lookup requires explicit authorization to resume. Historical fuzzy matches and discarded compiler artifacts are not recovered progress.

## Verified numeric snapshot

Source: local `build/GDJEB2/report.json`, refreshed on 2026-10-06 at `05f7803` and compared with round-4 base `41344b0`. The checks passed: all-source build, per-unit verification of every changed unit, an independent clean rebuild and comparison of all 13,753 generated functions (bytes and relocations), map provenance, pinned DOL equality (`e409a88a…`) and pipeline reproducibility. Totals include inherited upstream matches.

| Metric | Verified value |
| --- | --- |
| Matched executable code | 1,325,636 / 4,141,552 bytes (32.008194%) |
| Fully linked source code | 1,324,164 / 4,141,552 bytes (31.972652%) |
| Matched functions | 15,290 / 23,334 |
| Completed units | 3,474 / 6,744 |
| Matched data | 226,422 / 1,503,795 bytes (15.056707%) |

| Generator round 4 (`41344b0` → `05f7803`) | Before → after | Exact gain |
| --- | --- | --- |
| Matched code | 30.136335% → 32.008194% | +77,524 bytes (+1.871859 pp) |
| Fully linked code | 30.100792% → 31.972652% | +77,524 bytes (+1.871860 pp) |
| Matched data | 14.976909% → 15.056707% | +1,200 bytes (+0.079798 pp) |

- **Units:** 6,564 → 6,744; completed units 3,339 → 3,474. Code, data and function denominators are unchanged.
- **Functions:** 14,499 → 15,290.
- **Complete data (232,330):** includes 5,908 exception-table artifact bytes from unused destructor copies.

| Generator round 3 (`c5cdee8` → `b03f148`) | Before → after | Exact gain |
| --- | --- | --- |
| Matched code | 24.501154% → 30.136335% | +233,384 bytes (+5.635181 pp) |
| Fully linked code | 24.465612% → 30.100792% | +233,384 bytes (+5.635180 pp) |
| Matched data | 14.801353% → 14.976909% | +2,640 bytes (+0.175556 pp) |

- **Units:** 8,777 → 6,564, and completed units 4,816 → 3,339, because generated runs were consolidated. Code, data and function denominators are unchanged.
- **Functions:** 13,177 → 14,499.
- **Complete data (231,130):** includes the 5,740 artifact bytes above.

| Generator round 2 (`162166c` → `f63c8ec`) | Before → after | Exact gain |
| --- | --- | --- |
| Matched code | 20.758402% → 24.501154% | +155,008 bytes (+3.742752 pp) |
| Fully linked code | 20.722860% → 24.465612% | +155,008 bytes (+3.742752 pp) |
| Matched data | 13.093673% → 14.801353% | +25,680 bytes (+1.707680 pp) |

The unit denominator changes from 7,401 to 8,777 because of synthetic partitions; the code, data and function denominators are unchanged. Function count goes from 9,597 to 13,177 and completed units from 2,342 to 4,816. Earlier snapshots remain in Git history.

| Active milestone published checkpoints | Before → after | Exact gain |
| --- | --- | --- |
| Matched code | 9.369337871% → 9.601714526% | +9,624 bytes /+0.232376655 percentage points |
| Fully linked code | 9.029175536% → 9.556031169% | +21,820 bytes /+0.526855633 percentage points |
| Matched data | 11.011208310% → 11.014400234% | +48 bytes /+0.003191924 percentage points |

Checkpoint gains: +42 matched functions, +10 completed units; denominator 5,175 → 5,183 (+1 DVD padding, +7 partitions for four verified Alchemy source ranges and original remainders). Experimental Alchemy matches outside these four units are excluded from this published snapshot. The milestone remains active.

| Follow-up batch metric | Before → after | Delta | Exact gain |
| --- | --- | --- | --- |
| Matched code | 9.239241714% → 9.369337871% | +0.130096157 percentage points | +5,388 bytes |
| Fully linked code | 8.899079379% → 9.029175536% | +0.130096157 percentage points | +5,388 bytes |
| Matched data | 11.011208310% → 11.011208310% | 0 percentage points | 0 bytes |

Follow-up gains: +40 functions and +4 completed units. **Unit denominator: 5,171 → 5,175** from four synthetic recovery partitions. Code/data/function denominators are unchanged. Configured engine totals are 29,068 code bytes, 354 data bytes, 206 functions and 41 complete units. Three identical weak destructors emit 348 bytes / six relocations, coalesce to one UNUSED map entry and are excluded. Independent final review and repeated integrated `work` gates pass. No selected target remains unrecovered or blocked.

| Paused larger-batch metric | Before → checkpoint | Delta | Exact gain |
| --- | --- | --- | --- |
| Matched code | 9.101805314% → 9.239241714% | +0.137436401 percentage points | +5,692 bytes |
| Fully linked code | 8.761642978% → 8.899079379% | +0.137436401 percentage points | +5,692 bytes |
| Matched data | 11.011208310% → 11.011208310% | 0 percentage points | 0 bytes |

Earlier paused checkpoint: +49 functions and +6 completed units. **Unit denominator: 5,164 → 5,171** from synthetic recovery/original partitions. Code/data/function denominators remain unchanged. Two new 116-byte destructors / four relocations and earlier 348 bytes / six relocations are UNUSED and excluded. Independent review passes. The unrecovered portion is paused at the user’s request.

Prior storage-allocation verification: normal configure, all configured source compilation, strict objdiff and independent exact ELF comparisons pass for all three functions: 380 original bytes, complete section/function metadata and 11 full relocations with target metadata. Source map/Ninja provenance, original-object immutability and artifact exclusion pass for both source units. Both DOL SHA-1s equal pinned `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. Independent fresh-compile reviews found no blocking issues. No new owned data/BSS or emitted artifacts. No target remains unrecovered.

**Compiler artifacts remain excluded:** earlier string and reference-view destructors (232 bytes / four relocations), plus the parallel string builder's weak destructor (116 bytes / two relocations), remain UNUSED in the map. Their 348 bytes / six relocations are not recovered progress.

| Storage-allocation batch metric | Before → after | Delta | Exact gain |
| --- | --- | --- | --- |
| Matched code | 9.092630009% → 9.101805314% | +0.009175304 percentage points | +380 bytes |
| Fully linked code | 8.752467674% → 8.761642978% | +0.009175304 percentage points | +380 bytes |
| Matched data | 11.011208310% → 11.011208310% | 0 percentage points | 0 bytes |

Three newly matched functions; completed units increase 201 → 203. **Unit denominator: 5,162 → 5,164** because the original remainder is partitioned into allocator, accessor/growth and trailing original units. Code/data/function denominators remain unchanged. Configured engine totals are 17,988 code bytes, 354 data bytes, 117 functions and 31 complete units. The 128-byte checkpoint was published in `c0b53d7`; the final allocator adds another 252 bytes with no further denominator change. Local experiment branch `task/storage-allocation-experiments` retains `031a02b`, unpublished and unchanged.

| Metadata session metric | Before → after | Delta | Exact gain |
| --- | --- | --- | --- |
| Matched code | 9.060274989% → 9.082778630% | +0.022503641 percentage points | +932 bytes |
| Fully linked code | 8.720112653% → 8.742616295% | +0.022503641 percentage points | +932 bytes |
| Matched data | 11.011208310% → 11.011208310% | 0 percentage points | 0 bytes |

Six newly matched functions; completed units increase 199 → 200. **Unit denominator: 5,160 → 5,161** from the metadata partition. Other denominators remain unchanged; see its handoff for full evidence.

| Parallel-Alchemy session metric | Before → after | Delta | Exact gain |
| --- | --- | --- | --- |
| Matched code | 9.026471236% → 9.060274989% | +0.033803753 percentage points | +1,400 bytes |
| Fully linked code | 8.686308901% → 8.720112653% | +0.033803753 percentage points | +1,400 bytes |
| Matched data | 11.011208310% → 11.011208310% | 0 percentage points | 0 bytes |

Fifteen newly matched functions; completed units increase 196 → 199. **Unit denominator: 5,158 → 5,160** because the preparation splits the 820-byte original remainder into two source units and isolates the string builder from its trailing original remainder. Code/data/function denominators remain unchanged. Configured engine totals are 16,268 code bytes, 354 data bytes, 103 functions and 27 complete units. Coordinator branch `task/parallel-alchemy-recovery` is integrated into `work`; clean local worker branches retain exact tips `c8bb907`, `af37fab`, `1fc29bf`, unpublished independently of integrated source commits.

| Aggregate-continuation session metric | Before → after | Delta | Exact gain |
| --- | --- | --- | --- |
| Matched code | 9.018165171% → 9.026471236% | +0.008306065 percentage points | +344 bytes |
| Fully linked code | 8.678002836% → 8.686308901% | +0.008306065 percentage points | +344 bytes |
| Matched data | 11.011208310% → 11.011208310% | 0 percentage points | 0 bytes |

Three newly matched functions; completed units increase 195 → 196. **Unit denominator: 5,157 → 5,158** because isolating the source prefix partitions the trailing original remainder. Code/data/function denominators remain unchanged. Configured engine totals are 14,868 code bytes, 354 data bytes, 88 functions and 24 complete units.

| Offset-dispatch session metric | Before → after | Delta | Exact gain |
| --- | --- | --- | --- |
| Matched code | 9.005706073% → 9.018165171% | +0.012459097 percentage points | +516 bytes |
| Fully linked code | 8.665543738% → 8.678002836% | +0.012459097 percentage points | +516 bytes |
| Matched data | 11.011208310% → 11.011208310% | 0 percentage points | 0 bytes |

Three newly matched functions; completed units increase 194 → 195. **Unit denominator: 5,156 → 5,157** because isolating the source prefix partitions the previous original remainder into source and trailing-remainder units. Code/data/function denominators remain unchanged. Configured engine totals are 14,524 code bytes, 354 data bytes, 85 functions and 23 complete units.

| Aggregate-dispatch session metric | Before → after | Delta | Exact gain |
| --- | --- | --- | --- |
| Matched code | 8.943603750% → 9.005706073% | +0.062102323 percentage points | +2,572 bytes |
| Fully linked code | 8.603441415% → 8.665543738% | +0.062102323 percentage points | +2,572 bytes |
| Matched data | 11.011208310% → 11.011208310% | 0 percentage points | 0 bytes |

Twenty newly matched functions; completed units increase 193 → 194. **Unit denominator: 5,154 → 5,156** because isolating the interior source range partitions one original remainder into left/source/right units. Code/data/function denominators remain unchanged. Configured engine totals are 14,008 code bytes, 354 data bytes, 82 functions and 22 complete units.

| Retained-recovery session metric | Before → after | Delta | Exact gain |
| --- | --- | --- | --- |
| Matched code | 8.863537147% → 8.943603750% | +0.080066603 percentage points | +3,316 bytes |
| Fully linked code | 8.523374812% → 8.603441415% | +0.080066603 percentage points | +3,316 bytes |
| Matched data | 11.011208310% → 11.011208310% | 0 percentage points | 0 bytes |

Ten newly matched functions; completed units increase 183 → 193. **Unit denominator: 5,150 → 5,154**, because independently isolating rebuild and hash each partitions an original remainder into three. Code/data/function denominators remain 4,141,552 bytes, 1,503,795 bytes and 23,334 functions. Configured engine totals are 11,436 code bytes, 354 data bytes, 62 functions and 21 complete units; its 100% applies only to configured units. Historical comparisons remain in linked handoffs.

## User-facing progress updates

At each completed-task handoff, show this fork's aggregate **matched code**, **fully linked code** and **matched data** percentages from the local report, with the source revision/date. These correspond to `.measures.matched_code_percent`, `.complete_code_percent` and `.matched_data_percent`; fuzzy similarity is not decompiled progress. Use two decimals for dashboard-style totals.

For source-recovery tasks, show each metric as `before% → after% (change in percentage points)` and include exact matched/linked byte gains. Calculate from unrounded totals; use enough decimal places for a small nonzero change to remain visible. Also identify newly matched functions/completed units. If the denominator or reporting configuration changed, flag the comparison instead of attributing all movement to recovery.

For documentation-only tasks, show the current verified totals and label progress unchanged. If fresh verification is unavailable, label the numbers as the last verified snapshot. The upstream decomp.dev dashboard tracks a different repository/revision and is not authoritative for our fork. Keep this ledger's snapshot current; Git history preserves previous checkpoints.

## Open findings and constraints

- The UART stub's semantic name/parameter list remains unknown. Its return-zero behavior is verified; retain the existing address-based name until there is stronger evidence.
- Alchemy `igGap.cpp` and the configured `igArkCore` version-check, constructor, bootstrap, nine-function lifecycle cluster and 15-helper subset are complete and source-linked. Other unconfigured methods/helpers remain original. The `igArkCore` bytes at `0x14` and `0x16..0x397` remain explicitly unnamed. Constructor write widths, offsets and values are verified; the full class layout and semantic meanings remain unrecovered. The bootstrap dependency declarations and local vtable view preserve only observed calling conventions; unused slot signatures and semantic types remain unrecovered. Shared `_arkCore`, `kSuccess`, `kFailure` and bootstrap-global storage remains original. The configured game category contains zero bytes; its displayed 100% is not completed gameplay recovery.
- Seven earlier retained stalls are now exact and source-linked in `9849800`: callback helper, growth, dispatch, boolean parsing, storage reserve, rebuild and parser. The verified size profile resolved their shared compiler patterns. Existing behavior and uncertain field meanings remain preserved; see [current recovery evidence](docs/research/2026-09-30-retained-recovery.md) and older handoffs for ABI details.
- All retained storage/string mismatches from the ten-function batch are recovered. Hash explicit branch assignment, probe pointer-value temporary/offset assignment and lookup local state/count read resolved the final source/compiler-shape differences; see [continuation evidence](docs/research/2026-09-30-retained-register-recovery.md). Retained local candidates remain historical.
- Existing wrappers retain verified seven-argument receiver/eight-argument provider views and four-byte hidden-result ABI without claiming semantic class names. See [wrapper evidence](docs/research/2026-09-30-storage-context-and-wrappers.md).
- The aggregate dispatch source records only the observed owner pointer at `0x34`, element count/array offsets and virtual slots `0x6C..0xC4`. Maximum, fan-out, sum and short-circuit behavior is exact; class, field and slot meanings remain unknown. See [aggregate dispatch evidence](docs/research/2026-09-30-aggregate-dispatch-recovery.md).
- The offset-dispatch source extends only the observed layout through virtual slots `0xC8..0xD0`, owner/element offset `0x08`, owner halfword `0x14` and nested aggregate slot `0x5C`. Coordinate adjustment, accumulation and nested fan-out behavior are exact; class, field and slot meanings remain unknown. See [offset-dispatch evidence](docs/research/2026-09-30-offset-dispatch-recovery.md).
- The aggregate continuation source adds only the observed global accessor, virtual slots `0xD4` and `0xE0`, and the two original parsing formats. Its fan-out, element-offset adjustment and parsed return sum are exact; class, field, slot and format meanings remain unknown. See [aggregate continuation evidence](docs/research/2026-10-01-aggregate-dispatch-continuation.md).
- Parallel storage/conversion, constructor/wrapper/accessor and string-builder recovery is exact and source-linked. Local views retain observed byte storage, unsigned halfword access, hidden-result slot `0xE4` and pooled-string lifetimes; meanings remain unnamed. A and C use the established size profile, B the default profile. Original globals/formats/vtables remain external; array cleanup remains absent as observed. See [parallel recovery evidence](docs/research/2026-10-01-parallel-alchemy-recovery.md).
- Metadata construction/access preserves receiver storage/count offsets `+0x08/+0x0C`, entry metadata/name/word offsets `+0x08/+0x0C/+0x10`, metadata name offset `+0x1C`, slot `0x58`, signed count/index guards and byte search flag. Reference release tests the original low 23 bits; pooled-string and factory helpers remain original. Full semantic types remain unrecovered. See [metadata evidence](docs/research/2026-10-01-metadata-recovery.md).
- Creation/lookup hooks retain observed storage/count/array offsets `+0x10/+0x08/+0x10`, virtual slots `0x70/0x74`, byte test returns and original release-before-call ordering. Metadata-driven creation and ancestry-test/append helpers remain external and original; semantic types and names remain unknown. See [creation/lookup evidence](docs/research/2026-10-01-creation-lookup-recovery.md).
- Storage allocation preserves signed index `+0x12`, metadata field `+0x3C`, virtual slots `0x58/0x64`, unsigned 16-bit sizing/division, hidden four-byte result, copy-before-free ordering and unchecked original failure behavior. Explicit nested call arguments preserve the original evaluation/scheduling dependencies. The accessor and signed growth policy reuse `+0x08/+0x0C`. Names and broader type meanings remain unknown. See [storage-allocation evidence](docs/research/2026-10-02-storage-allocation-recovery.md).
- Metadata/storage follow-up preserves factory retain/insertion/release lifetimes, eight-argument creation, provider hidden results, callback context/boolean return, standard-layout pointer keys and pooled-string cleanup. Unknown fields/slots remain address-based. Unchecked removal and dead-release behavior are preserved as observed. The inline key-construction adapter resolves hidden-result stack ordering with unchanged compiler pins. All forty selected functions are exact; see [follow-up evidence](docs/research/2026-10-04-metadata-followup-recovery.md).
- The current Mac needs `/opt/homebrew/bin/python3` because the login shell selects Python 3.7. Homebrew Python and pinned wibo/compiler execution were verified during the baseline build.
- The existing `FILE_POS.C` case warning is unchanged. Configuration also warns about the two explicit original remainder splits having no source configuration; they intentionally link generated original objects. The supplied image's header says GDJEB2 revision 0 despite the README's revision label; its DOL matches the project's pinned checksum.
- The inherited CI uses a private upstream container. Local checks establish completion; upstream CI availability is not required for work in our fork.

## Maintaining this ledger

After each task, update the completed-work table or current-task state with the functional commit, verified result and next action. Record unfinished attempts with their branch, evidence and remaining mismatch. Add a detailed note only when the investigation warrants it, and link it here.

Refresh the numeric snapshot after changes to code, splits, symbols or compiler configuration. Regenerate the normal build report and checksum checks; record the source revision and date so future sessions can distinguish a historical snapshot from current verification. Keep the full generated report, original game data and assembly ignored. Git commits preserve the history; this ledger supplies the current handoff.
