# Generator round 5: signatures, floating point and struct copies (2026-10-07)

## Result

Matched and fully linked code each gained 39,220 bytes. All generated units are source-linked, and the DOL SHA-1 is unchanged (`e409a88a…`).

| Metric | Before (`278f825`) | After | Gain |
| --- | --- | --- | --- |
| Matched code | 1,325,636 (32.008194%) | 1,364,856 (32.955182%) | +39,220 bytes (+0.946988 pp) |
| Fully linked code | 1,324,164 (31.972652%) | 1,363,384 (32.919640%) | +39,220 bytes (+0.946988 pp) |
| Matched data | 226,422 (15.056707%) | 227,642 (15.137835%) | +1,220 bytes (+0.081128 pp) |

- **Functions:** matched functions rose from 15,290 to 16,000 (+710): 730 gained (40,896 bytes), 20 lost (1,676 bytes).
- **Units:** 6,744 → 6,970; completed units 3,474 → 3,747. Code, data and function denominators are unchanged.
- **Gains by cause** (functions, bytes):

  | Cause | Functions | Bytes |
  | --- | --- | --- |
  | Round-4 losses recovered by the signature pass | 25 | 1,648 |
  | Floating point (functions with FP instructions) | 74 | 6,780 |
  | Local structs | 26 | 2,532 |
  | Struct copies | 5 | 136 |
  | Fixed-address stores | 10 | 128 |
  | Other: forced pointer returns, adopted parameter types, gap parameters, call-free functions, scratch `r3` | 590 | 29,672 |

**Against the round-4 projection.** Round 4 projected 100–150 KB (to about 34.5–35.5%) from float arguments, struct copies, a second signature pass and simple counted loops. This round, without loops, gained 39 KB (to 32.955%). Floating point, local structs and struct copies together gave 9.4 KB. Most FP code that the template can reach still differs in load scheduling and register choice. The prototype-consistency fixes gave the largest share. The generator plateau now looks closer to 34–35% than 35–37%: loops are the remaining template-scale pool.

## Definition-signature pre-pass

Round 4 lost 47 previously generated functions (3,132 bytes). A diagnostic generation pass recorded why:

| Cause | Functions |
| --- | --- |
| A caller earlier in address order declared the function differently (prototype conflict) | 31 |
| A caller used the result of a function generated as `void` | 4 |
| Callee arity or global-type conflicts | 2 |
| Generated in one file, but inexact after other prototypes changed | 10 |

Changes:

- **Signature pass.** `cycle.sh` first runs `gen.py --sigs-out`, which writes `tools/unknowngen/signatures.json`. Later passes and `emit.py` seed these prototypes before generating, so earlier callers declare the function as its definition needs. The record holds:
  - the signature a definition wanted when a caller had already declared it differently;
  - FLOW/CALLS definitions whose result a generated caller uses, recorded returning a pointer;
  - previously recorded definitions, so the record is stable across cycles.
- **Template prototypes win.** Recorded signatures that disagree with prototypes fixed templates require (family, text and vtable templates, their callees and globals) are dropped. Seeding them lost 457 template functions in a trial run.
- **Header symbols** (`fn_80066E1C`) are never recorded; a recorded `int` parameter overloaded the header declaration.
- **Definitions adopt existing parameter types.** A FLOW definition already declared with the same parameter count keeps those `int`/`void *` types. Seeding every definition's `int` parameters instead changed some callers' code through `(int)` casts (for example `fn_80281E80`, where the cast moved an `mr.`).
- **Forced pointer return.** A FLOW definition declared returning a pointer returns what is left in `r3` (normally a call result); this compiles the same as discarding it.
- **Result-use bookkeeping** is rolled back when a generation attempt fails, so failed callers do not upgrade callee signatures.

**Outcome.** 25 of the 47 functions (1,648 bytes) are recovered. The other 22 still fail:
- conflicts with prototypes that fixed templates require (template prototypes take precedence);
- arity conflicts;
- results of `void` definitions used by callers generated in other strategies.

20 previously generated functions (1,676 bytes) are lost, mostly to changed neighbouring prototypes. Each of the 20 is exact when generated alone (default profile), so all remain recoverable. They include:
- the `fn_8027B4C4` family, which passes a `double` result through `ceil`;
- `fn_80281E80` (parameter casts);
- `fn_801264B4` and `fn_80126CF0`.

## Floating point in FLOW

Functions whose first unsupported instruction was floating point made up about 450 KB of skipped code, but most of it is in loops or heavily branched functions. Straight-line and lightly branched functions without integer/float conversions made up about 145 KB.

FLOW now models FPRs (keys 32+n) in functions that contain floating-point instructions:

- `lfs`/`lfd` from fields, `@ha`/`@l` globals and small-data constants (`*reinterpret_cast<float *>(lbl)`, sized `extern char` declarations as before);
- `stfs`/`stfd` to fields, globals, local struct members and fixed hardware addresses;
- parameters in `f1`.., from FP registers read before written and from FP registers callers write specifically for the call (`fp_arity`);
- call arguments (trimmed by the prototype's float parameters or the callee's FP arity) and `float`/`double` call results;
- `float`/`double` returns: a value left in `f1` by a non-call instruction and not consumed by a statement;
- `fadds`/`fsubs`/`fmuls`/`fdivs`, fused multiply-add forms, double forms, `fneg`, `fabs`, `fnabs`, `frsp`, `fmr`;
- `fcmpu`/`fcmpo` conditions;
- FPR save and restore (`stfd`/`lfd` of f14..f31 through r1, `psq_st`/`psq_l`).

Float field reads are read into variables at their original position; inline reads let the compiler reorder loads. Integer/float conversions (`xoris 0x8000`/`lis 0x4330` sequences) are not modeled: the compiler would emit its own conversion constant instead of the original's `.sdata2` label.

Functions without FP instructions keep the integer-only model, where FP values pass through calls implicitly. Modeling FP there broke previously exact functions such as `fn_8027B4C4` (`ceil` on a call result).

## Local structs

An address-taken stack local with stores or reads at further offsets (below the frame's saves) becomes a struct with members of the accessed widths (`int`, `short`, `unsigned char`, `float`, `double`), padded between members. This covers locals initialized member by member before their address is passed, typically float vectors built from constants.

## Struct copies

A run of word stores whose values are consecutive single-use reads (fields of one base or one global) stored to consecutive offsets of one base becomes one assignment:

- two words with the high word stored last: `long long` (for example `fn_800C4BD0`);
- otherwise a word block, `UnknownGenBlock<N>` (`struct { int w[N]; }`, declared in `unknownGen.h`).

A copy is formed only when the original loads ahead of storing (two reads pending at some store). Alternating read/store pairs are member assignments; converting them lost `fn_8021ECFC` and `fn_8021ED40`. The 16-byte copy in `fn_803D14DC` interleaves one load later than MWCC's block copy; no tried source form (int/char arrays, member-wise assignment, mixed members, speed profile) reproduces it.

## Other changes

- **Fixed hardware addresses:** stores through a `lis` constant base become `*reinterpret_cast<volatile T *>(0xCC008000)=...` (GX FIFO writes). Two-value writes still load in a different order (`fn_80102670`).
- **Gap parameters:** a function reading a higher argument register without the lower ones is retried with all of them as parameters (for example `fn_80102594`, which writes `r4` to the FIFO).
- **Call-free functions** are generated when they store or return something. A word left in `r3` that a statement consumes is scratch in such functions.

## Not addressed

- Integer/float conversions; `mfcr`-based comparison results (`fn_8012388C`).
- Loops and heavily branched functions (about 52% of all code), as projected in round 4.

## Verification

- The full `cycle.sh` run reproduces every unit. Its first build failed the checksum: emit merged `fn_80094880` (no original exception entry) into an exception-enabled unit with `fn_800948F4`. The compiler gave `fn_80094880` an extra entry, which shifted every later `extab` address, including `.rodata` references to exception tables. `emit.py` now never mixes functions with and without original exception entries in one unit. Emission, verification and the build were then rerun.
- `verify_units.py` checked 914 changed units with their configured flags; none failed. In the first emission, 10 functions in 9 units failed in their emitted unit; they were added to `exclude.json`.
- An independent review clean-rebuilt the commit and compared all 3,507 generated units (14,463 functions, 939,584 bytes) against the original objects and DOL with its own comparator. It also confirmed map provenance, unchanged non-generated splits, the gained/lost counts, byte-identical regeneration of every unit from the committed `signatures.json`, and that no unit mixes functions with and without exception entries. A rerun of the signature pass to confirm that the record is stable did not finish and is unverified.
- The normal build matches `build.sha1` (`./build/GDJEB2/main.dol: OK`).
- The report was regenerated with `ninja all_source progress build/GDJEB2/report.json`.
