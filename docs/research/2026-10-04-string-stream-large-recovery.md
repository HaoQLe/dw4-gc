# Active matched-and-linked 10% milestone batch

The user requested one large recovery batch reaching at least 10% for both matched executable code and fully source-linked code. Baseline is `0e0ce32`: 388,036 /4,141,552 matched code bytes, 373,948 linked bytes, 165,586 /1,503,795 matched data bytes, 1,390 /23,334 functions and 213 /5,175 complete units. The selected new Alchemy range is `0x800442F8..0x8004B394`, 83 functions /28,828 bytes. Six already-matched SDK/runtime units add 12,196 possible linked bytes. The earlier paused `fn_8004291C` remains excluded. The full selected batch remains active.

## Verified SDK/runtime linkage checkpoint (`5122f44`)

Source linking now uses `__init_cpp_exceptions` (124 bytes /3 functions), `odenotstub` (2,688 /14), `axartlfo` (180 /1), `dvdlow` (3,708 /21), `OSAlloc` (1,648 /7), and `reverb_hi` (3,848 /7). This adds **12,196 fully linked bytes**, with no new matched code or functions. Reverb's 64 small-data bytes now match. A separate original-only DVD BSS padding partition removes 16 padding bytes from the source-owned matched-data tally; the net matched-data gain is 48 bytes. Completed units increase by six, and the denominator increases by one for the padding partition.

The five LFO arrays must be external: another original unit has forty HA/LO references to them. Odenotstub's fourteen surviving definitions were reversed relative to the original linked order. Their definitions now follow original order, with unused helpers retained early to preserve inlining. A small early inline adapter retains the original DBGReadStatus body and DBWrite's original inlining. Hu_IsStub's separate original weak owner remains at `0x8025B738`; retaining the SDK source's strong definition incorrectly inserted eight bytes before DBClose.

Reverb's DoCrossTalk originally references float 1.0 at `0x80566F98`, despite the inherited candidate referencing 0.6. The source now uses the original constant. Four externally referenced constants retain their original address-based names and order: double magic at `0x80566F90`, then 1.0, 0.3 and 0.6. This removes a link-time alignment discrepancy. Original-only DVD padding `0x80512750..0x80512760` preserves the following BSS and small-data placement without inventing a source variable.

The apparent pointer at `.rodata:0x8045D418` is an audio sample pair, not an OSAlloc string reference. Its word `0x804C810F` represents adjacent signed 16-bit samples -32692 and -32497 in the smooth waveform beginning at `lbl_8045D380`. `fn_803C4710` transfers the waveform through ARQPostRequest. Blocking that single inferred relocation removes the false dependency; the original and final executable bytes remain unchanged. Original objects were deliberately regenerated for this analyzer correction, with old hashes preserved in ignored baseline evidence.

Validation uses the pinned normal configuration, strict objdiff `functionRelocDiffs=data_value`, and a separate ELF parser. All 53 original functions /12,196 instruction bytes are exact. All 355 relevant full relocation records agree after explicitly documented representation normalization: MW233 SDA records use the immediate field while reconstructed records use the instruction address; section-anchor references resolve to the same named original target, byte offset, size, type and visibility; analyzer-inferred globals become source-local where the map and successful external linking establish ownership. Source-local object offsets differ because unused functions are present, so each original function's exact original VMA and size is independently checked in the map.

DOL files carry no ELF access flags. The analyzer labels `.sdata2` read-only (flags2); the pinned compiler's predefined constant section emits flags3, consistent with the repository EABI header. This inference difference is recorded explicitly. Original alignment-only tails are checked as zero padding with final layout preserved. Original owned constants retain their exact bytes and linked addresses; reverb's extra unused 100.0 literal is excluded. The source emits 4,116 absent-original function bytes /99 relocations, all marked UNUSED and excluded from recovered totals. The inline adapter emits no extra standalone function.

An independent reviewer performed fresh pinned SDK compiles, inspected instruction and relocation metadata, identified the false audio relocation and three layout blockers, and checked the inline adapter's behavior. The coordinator applied those remedies and reran final strict and independent ELF comparisons, map/Ninja source provenance and the normal all-source build. The source-linked DOL SHA-1 is the pinned `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`.

Detailed generated comparisons, baseline report, pre-regeneration original hashes, independent review and verification scripts remain ignored under `build/GDJEB2/analysis/string-stream-large-recovery/`.

## Verified Alchemy checkpoint (`317e0b2`)

Three synthetic source units recover 28 functions /7,932 original bytes: `0x80046D84..0x80047878` (24 functions /2,804 bytes), serializer `0x80047878..0x800489E4` (one /4,460), and binary readers `0x8004944C..0x800496E8` (three /668). Their 125 full relocations agree; fresh pinned strict comparison and independent ELF parsing prove bytes, section metadata, function bindings and target metadata. The first unit emits two weak destructors, 224 bytes /three relocations, interleaved with original functions. The writer emits two more, 192 bytes /three relocations. All four are UNUSED and excluded. Original function map addresses prove no compiler artifact contributes recovered code. These units own no data/BSS.

The serializer's signed encoder formal ordering `(int value,char *p)` resolves its last register differences. Integer `&0xFF` preserves the original mask normalization. Separate case15 and default retain the original dispatch shape. Hidden-result locks preserve virtual slots 0x84/0x7C and scoped cleanup. The fixed 32-byte temporary buffer, unchecked original branches, volatile count reload during growth, and recursive record-copy lifetimes remain as observed. The reader's high-byte-first OR expression and reuse of the second decoded accumulator as the final shift reproduce the original byte-load/register sequence without compiler-option changes. The float temporary's bits are loaded even though its value is unused, as in the original.

Fresh review also identified four DVD functions explicitly scoped weak in original metadata but emitted strong by the earlier source checkpoint: `__DVDInitWA`, `__DVDInterruptHandler`, `DVDLowWaitCoverClose`, `DVDLowStopMotor`. Definition-scoped `__declspec(weak)` restores all four. Original code bytes and final executable remain unchanged. This is distinct from analyzer-inferred global/source-local binding normalization; explicit weak scope must match exactly. The updated canonical verifier enforces owned function binding for all nine SDK/Alchemy units.

After integration on `work`, all nine units pass again: 81 functions /20,128 original bytes /480 relocations; every owned function/data byte and map VMA, fresh-versus-configured metadata, source-link provenance and full original-versus-linked DOL equality. All configured source compiles. The DOL SHA-1 remains `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. Published totals: matched 395,968, linked 394,076, matched data165,634, functions1,418, complete units222/5,181. Original-only remainders remain generated and link original objects.

## Verified lexer checkpoint (`15285cf`)

The entire `0x800450E0..0x8004577C` lexer unit is now exact: 14 functions /1,692 bytes /48 relocations. Indexed destination writes `buffer[count]` allow the pinned compiler to generate the original advancing-pointer induction, resolving the final line-reader register rotation. No compiler flags change. Source linking and independent fresh comparison pass for this fourth Alchemy unit, including all prior SDK/Alchemy checkpoint units.

The added unit emits an absent-original 116-byte weak reference destructor /two relocations. The linker selects its definition as UNUSED and omits the identical superseded destructor from the 46D84 map. Both copies have identical bytes, full relocations, weak binding, size/type/visibility, and the symbol is absent from the final ELF. The canonical verifier explicitly checks this coalescing case. No discarded artifact contributes recovered bytes.

Checks repeated on integrated `work`: all-source compilation; strict fresh comparisons; independent function bytes/section attributes/full relocation target metadata/function bindings; original map VMAs and source provenance; full linked DOL equality and pinned SHA-1. All ten checkpoint units /95 functions /21,820 original bytes /528 relocations pass. Published totals: matched397,660 (9.601714526%), linked395,768 (9.556031169%), matched data165,634 (11.014400234%), functions1,432, complete units223/5,183. Milestone gains are9,624 matched bytes,21,820 linked bytes,48 data bytes,42 functions and10 complete units; denominator+8. Unfinished source stays local.

## Verified aggregate unit checkpoint (`340bb0b`)

All ten functions at `0x800496E8..0x8004A41C` are exact: 3,380 bytes, with 47 `.text` and 160 `.data` relocations. Fixes:

- fn_800496E8 moved its trailing walk loop into an inline helper.
- fn_8004A1B8 gets its cached size from inline `unknown800496E8Size`.
- fn_8004A2F0 declares `char length=p[1]`.

The compiler register-graph trace (`debug-base-fn_8004A1B8`) shows coloring in descending vreg order. Locals are numbered before frontend CSE temps, so the `index<<2` temp outranked local `size` for r31. Making size an inline-result temp reverses that. In fn_8004A2F0, an `int` local let the load and the sign extension share one vreg. A separate char temp moved `length` above `p`/`begin`. A `char` local reproduces the original separate load temp with `length` in place.

Data ownership: every compiled `.data` (all 86 source objects; also a minimal test) has alignment ≥8. When provisionally linked alone, the table moved to `0x804692F8` and the checksum failed. The nearest preceding 8-aligned genuine object start is `lbl_80469070`, after zero padding `0x8046906D..0x80469070`. The unit owns `0x80469070..0x80469334` as opaque `{char[N]; const char *[M]}` objects matching analyzer boundaries, plus `lbl_804692E4` and the table. The linker stripped the two self-referenced tables as UNUSED until `#pragma force_active` was added; this changes only `.comment` flags. dtk's `force_active` symbol attribute did not add them to FORCEACTIVE. Verifier `reviewer-eleven-verify.py` adds explicit jump-table alias normalization and sorted full `.data` relocation comparison. Independent review confirmed every item. `tools/decomp.py verify` reports `.text` metadata differences only for the two UNUSED weak destructors (0xC0 bytes), as for the serializer.

fn_8004A41C's tables follow 0x50 bytes of unreferenced `igObject::internalRelease`/`release`/`~igSmartPointer<`/`(Unknown)` strings. Its data cannot start at an 8-aligned address outside this unit. Promoting it requires merging it into this unit and reproducing those orphan literals in order.

## Verified parser and storage checkpoint (`bcf2e75`)

Five exact units (26 functions, 6,884 bytes) source-link. The trace mechanism, from `debug-c5-fn_800442F8` and others: GPR coloring walks vregs in descending number, and each value gets the lowest callee-saved register already in use that is still available. Locals are numbered in reverse declaration order, and frontend/inline temps after locals. Nodes at the high-degree threshold are simplified last and so colored first.

- **fn_80044A9C:** `!value ? "" : value` adds temporaries. They raise owner/storage interference, so those two get colored first.
- **fn_80044C10:** the original loads the receiver before the nullable text conditional. An inline `unknown80044C10Load(receiver,const String&)` reproduces this; multi-return text helpers matched the order but added a branch.
- **fn_800447F4:** `unknown800442F8At` makes the element a late temp. `return fn_800218F4(...).value;` keeps the returned value and the hidden-result release in one register.
- **Parser partitions:** the parser unit is split at fn_80045BA8 and fn_80045FA4 into a shared header and per-run files, with definitions in address order.

Retained mismatches, all local NonMatching:

- **fn_800442F8 (99.92%):** uses reference-argument store, plain store, create and string-store helpers. Only `value` takes r25 where the original has r26; the original needs an interfering r25 neighbor.
- **fn_80045BA8 (95.45%):** first argument fixed with `textElse`. The original places the `r3`/`r6` moves before the second conditional; wrapper permutations didn't move them.
- **fn_80045FA4:** `object` and `value` are simplified in ascending order. Member, identity-inline and parameter variants were rejected.

## Verified formatter checkpoint (`5b75c45`)

fn_8004A41C reached 100% through four changes:

- **`char letter=*p++`:** fixes the token/digit loop registers and the earlier 4-byte size difference.
- **Direct `sprintf` in the `d` case-1/2 appends:** fixes the r21/r22 permutations, including the case-8 entry loop.
- **One function-scope `entry` variable:** the original gives case `r`'s entry a higher vreg than case `d`'s `end`.
- **Direct `sprintf` with `value.x` as the last argument:** the original loads the field after the format conditional, which an inline helper parameter prevents.

The 0x50-byte unreferenced `igObject::...` string block occurs once in the DOL. Pinned MWCC does not emit orphan literals for dead `if(0)`, unused inline or constant-false code, so the block is reproduced as opaque force-active `lbl_80469334`. Data placement shows MWCC emits `.data` in definition order interleaved with per-function jump tables; the table created second is placed first. The `0x800496E8` unit now owns `.data 0x80469070..0x80469528`. The independent review found only cosmetic unused inline helpers.

## Verified record decoder checkpoint (`572409c`)

fn_800489E4 is exact. Traces (`debug-g1/h3-fn_800489E4`) show the second CSE pass, which runs after loop preheader insertion, rewrites a later `li 0` into a copy for compiler/inline temporaries. Caller locals keep separate `li`. The original keeps separate zeros where the decoder accumulates into a caller-owned variable, and merges them where an inline helper's locals hold both values.

Per-site search combined pointer-out, reference-return and caller-reference helpers. Inline locals are numbered in forward declaration order, so `SignedNext` (value, byte, p, shift) gives the second decoder byte r6 and value r8. `SignedInto(p+4,value)` makes the first cursor an inline parameter numbered above the second decoder's temporaries. All 17 sign-extension loops and 24 decode sites keep the original semantics; the independent review confirmed them.

## Batch closure (`89ae0fd`)

- **fn_800442F8:** function-local storage and element pointers number below inline temporaries, so they are colored after the initial lookup, which then takes r26. A reused variable splits into separate webs, which explains the earlier trade-off between the start web and the first store.
- **fn_80045BA8:** arguments are computed into function locals in statement order. The table handle goes through an integer round-trip cast, which keeps copy propagation from moving its argument copy past the second nullable-text conditional.
- **fn_80045FA4:** found by decomp-permuter. The workspaces under `permuter-*` use a C-parseable base and a C++ compile wrapper.

All 83 selected functions and six SDK units are source-linked, and matched and linked code both exceed 10%. The table below is historical.

## Historical active-recovery notes

Local experiment `003767e` preserves all 83 implementations, with72 private strict-exact functions /16,160 bytes. After `572409c`, three functions /2,316 original bytes remain partial (table below); the remaining exact candidates stay in incomplete original-linked units. All targets stay active. None meets the hard-blocker criterion. The paused lookup remains excluded.

| Active function | Original / emitted bytes | Strict similarity | Concrete next investigation |
| --- | --- | --- | --- |
| fn_800442F8 | 1,276 /1,276 | 99.92163% | Only `value` (r25 vs r26); see parser/storage checkpoint notes. |
| fn_80045BA8 | 352 /352 | 95.454544% | Original first nullable-string branch/dead branch and receiver/index/ref argument scheduling. |
| fn_80045FA4 | 688 /688 | 99.53488% | Only16 owner/node register30/31 substitutions; test late-temp vreg ordering (inline result) for the owner. |

The parser's unsigned-byte loader assigned to signed int restores the original volatile cursor and signed tests; native member functions do not change the underlying ABI. Derived receiver alias changes arise from frontend lifetime shape. Fresh independent reasoning review covers22 retained ABI/type/inline forms and canonically verifies all25 parser relocations; the remaining16 changes are exclusively a register permutation.

Reader prefix and flags decoded lexically now reproduce independent zero initialization; the high-byte-first OR expression exactly reproduces original word loads. Expanding all signed loops lexically or adding default-initializer formals worsens coalescing; the best mixed candidate is retained. Formatter direct ternaries, explicit case15, unknown-kind continue-before-comma behavior and small typed formatting/append adapters improve its match from89.05% to99.166664%. Original unchecked behavior remains as observed. Its .data tables and the aggregate16-entry table remain original-owned; promotion requires correct ownership plus complete byte/relocation checks, not relaxed objdiff.

Ignored experiment runs now retain the exact candidate source and sibling header snapshots, alongside private object and strict report. Recorded failed probes include member ABI, loop offsets, byte-local conversion, pointer-return/out-value decoding, default argument initialization and quoted loop forms. Review notes and artifacts remain below `build/GDJEB2/analysis/string-stream-large-recovery/`. The batch remains active through execution/context boundaries; no new batch is proposed.
