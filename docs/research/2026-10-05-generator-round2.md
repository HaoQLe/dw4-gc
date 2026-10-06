# Generator round 2 (2026-10-05)

## Result

Round 2 recovered 3,580 exact functions totalling 155,008 bytes. All are source-linked, and the DOL SHA-1 is unchanged (`e409a88a…`).

| Metric | Before (`162166c`) | After | Gain |
| --- | --- | --- | --- |
| Matched code | 859,720 (20.758402%) | 1,014,728 (24.501154%) | +155,008 bytes (+3.742752 pp) |
| Fully linked code | 858,248 (20.722860%) | 1,013,256 (24.465612%) | +155,008 bytes (+3.742752 pp) |
| Matched data | 196,902 (13.093673%) | 222,582 (14.801353%) | +25,680 bytes (+1.707680 pp) |

The matched-data gain is the extab/extabindex entries of the new exception-enabled units. Matched functions rose from 9,597 to 13,177 and completed units from 2,342 to 4,816. The unit denominator rose from 7,401 to 8,777 because each new run partitions an original remainder.

## Generator changes

The generator is now a repository tool, `tools/unknowngen/` (see its README). It reproduced all 2,102 previously committed units byte-for-byte before any round-2 changes.

| Change | Yield |
| --- | --- |
| No-small-data profile: units built with `-sdata 0 -sdata2 0`, flagged `nosdata`. These address every global with `lis`/`addi` and are mostly in game-side ranges. Each template representative is compiled in this profile to classify members. | +37,372 bytes |
| Position-independent symbol selection: no-small-data forms have two relocations per global, which moved positional symbols. | +61,696 bytes |
| Reference-holder destructor family, 200 `dtor_` functions. | +23,200 bytes |
| Two-instruction leaf functions (constant, field load/store/address, empty body): 1,337 functions. | +8,920 bytes |
| Immediate-parameterized templates (lazy factories, reference setters, field registration with variable offsets/counts): 221 functions. | +22,524 bytes |
| Constant-return call-only functions. | +376 bytes |

Wrappers now copy their target's recovered signature, so wrappers of `void` or `int` leaves keep their exact form.

## Link hang

A unit ending exactly at the hand-placed label `__OSSystemCallVectorStart` (`fn_80260F24`, 8 bytes) made `mwldeppc` run indefinitely: more than 5 hours, against about 25 seconds normally.

Bisection over the 908 changed units found it. The search swapped units for their original objects, which showed the cause was the split boundary, not the compiled code.

Fix: the generator now leaves any function that starts at, ends at or contains a `.text` label in its original object. It also excludes functions whose exception-table entry is referenced from other data (`@etb_80007FFC` is referenced from `.rodata`) and `.ctors` initializers.

## Verification

Independent review of `3317193` passed all seven checks:
- clean rebuilds of the branch and its base;
- identical DOL SHA-1, with a link time of 34 seconds (no hang);
- report totals exact, and the 242 hand-written units unchanged;
- a separate checker found all 11,640 functions in 4,576 generated units exact, along with extab/extabindex for 1,594 `eh` units, and confirmed the `nosdata`/`eh` flags in `build.ninja`;
- link-map provenance, with the only UNUSED entries being 41 compiler-emitted inline destructors, which are excluded;
- non-generated splits and symbols unchanged;
- byte-identical regeneration by the README pipeline.

Follow-up `f63c8ec` removes an unused template and keys the profile cache on template content. Its pipeline rerun produced no diff.

## Remaining and retained

| Remaining | Status |
| --- | --- |
| `fn_80021E10` factory family (17 functions, about 2.8 KB) | Retained at 99.76%. Every tested spelling (12 variants, including explicit vtable function-pointer forms) loads the vtable into `r4`, where the original uses `r12` before copying `this`. Needs a new hypothesis (permuter or compiler tracing), not more spellings. |
| 9 call-only candidates | Not exact; not yet investigated individually. |
| Repeated code overall | 10,000+ unrecovered functions (about 3.1 MB). Imm-masked families with three or more members total about 358 KB across about 415 families, a long tail. |

The largest remaining families:
- 19 × 512 bytes: a vtable-read temporary with seven reference members;
- 19 × 336 and 29 × 204 bytes: vtable-read variants with reference members;
- several 160–272-byte game-side families.

## Can we reach 30%?

30% is 1,242,466 bytes, so it needs about +228,000 bytes beyond the current 1,014,728.

- **Generator ceiling.** Recovering the whole remaining repeated mass would add at most about 358 KB, but late round-2 templates yielded only 5–23 KB each.
- **Realistic generator target.** The top 25 families total about 100 KB and the top 50 about 160 KB. A full third round on the top 50 might reach about 27–28%.
- **What 30% needs.** Beyond that ceiling, the remaining distance needs manual decompilation of unique functions (the single largest is 27 KB) or deeper template work: vtable-read temporaries with several reference members, and factory variants.
