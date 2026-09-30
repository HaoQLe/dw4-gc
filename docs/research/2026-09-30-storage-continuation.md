# Storage continuation investigation

One bounded recovery session from published `work` revision `424e1af` on
2026-09-30 investigated `0x8003F0D8..0x8003F5B4`: four functions and
1,244 original code bytes. **No function reached exact match, and no new
source was promoted.** Published changes are research and ledger notes only.
Local-only `task/igarkcore-storage-continuation` at `fe8ce09` preserves the
four candidates in a NonMatching synthetic partition. Earlier experiment
branch tips remain unchanged.

## Selection and observed ABI

The normal baseline was refreshed before source edits. The storage
continuation reused both previously verified storage pointers and allocation
helpers. Original table `lbl_804731E0` confirms slots `0x74/0x78/0x7C`
target `fn_8003F2B8`, `fn_8003F320`, and `fn_8003F3FC`. Later helpers introduce
a separate receiver/result ABI; retained earlier mismatches had no new
evidence to justify repeating them. Investigation stayed inside the selected
four functions. The synthetic local partition does not establish an original
translation unit.

Assembly and dependency inspection support these observations:

- `fn_8003F0D8` chooses secondary-table probing when storage `+0x14` exists
  with nonzero signed size. Slot `0x74` supplies the starting index. Entries
  equal to `-1` terminate unsuccessfully; other entries index primary
  four-byte words. Sequence comparison stops at zero or the first unequal
  unsigned word, returning `1` for less, `-1` for greater, and `0` for equal.
  Probing wraps and tries the original table size. Without that table, it
  scans packed zero-terminated sequences in primary storage and returns a
  signed byte distance divided by four.
- `fn_8003F2B8` sums unsigned sequence words, returning the unsigned remainder
  modulo the secondary storage's signed size. Null input/storage or zero size
  returns zero. The original uses unsigned division and a signed zero test.
- `fn_8003F320` probes for `-1`, with an observed bound of signed size divided
  by two. On finding an empty entry, it checks the size and index before
  writing the supplied offset and returns true even if the guard prevents
  the write. Failed probing calls slot `0x7C` with doubled size and returns
  false; zero size returns true. This unusual success behavior is preserved.
- `fn_8003F3FC` stores the requested value through recovered `fn_8003ECAC`,
  allocates secondary storage when needed, fills it from original global
  `lbl_8055D7B0`, and reinserts primary sequences through slot `0x78`, whose
  result is tested as a byte. Zero requested value releases and clears the
  secondary pointer. Reference release decrements `+0x04`, reloads that word,
  and calls `fn_80066E1C` when its low 23 bits become zero.

Dependencies `fn_80068430` (reads receiver byte `+0x04`), `fn_800363B0`
(allocation/registration path), and `fn_80066E1C` (release path) were inspected
and remain original. No semantic class names or new global ownership are
claimed. Signed byte-distance `/4` reproduces original `srawi/addze`, but
ordinary signed count `/2` still emits a different compiler pattern.

## Retained candidates and concrete stalls

Strict objdiff uses `functionRelocDiffs=data_value`. These are similarity
measurements, **not recovered progress**.

| Function | Original bytes | Retained emitted bytes | Strict similarity | Remaining mismatch |
| --- | ---: | ---: | ---: | --- |
| `fn_8003F0D8` | 480 | 480 | 99.708336% | Seven instructions swap cached count `r6` and comparison word `r8` |
| `fn_8003F2B8` | 104 | 104 | 98.26923% | Eight instructions swap storage `r3` and count `r6` |
| `fn_8003F320` | 220 | 224 | 93.72727% | `srwi/add/srawi` replaces `srawi/addze`; table/index registers differ; backing pointer load is hoisted from the probe loop |
| `fn_8003F3FC` | 440 | 548 | 64.545456% | Individual GPR saves/restores replace `_savegpr_28/_restgpr_28`; fill loop unrolls by eight; element/end registers differ |

The first lookup candidate hoisted the secondary backing pointer load out
of the loop. A volatile read of that pointer field preserves the observed
per-iteration reload; declaration ordering then leaves only the count/word
register swap. Hash declaration ordering leaves only the storage/count swap.
Probe uses a signed cast for `-1` and a shared success label to preserve all
original guard outcomes. The retained rebuild caches the fill count, as the
original does, despite lower similarity than a rejected variant.

Bounded variants tested declaration permutations, initialization order,
inline count/sum/full-body helpers, inline member contexts, signed/unsigned
and long views, signed secondary entries, explicit pointer reload, local
comparison expansion, shared success control flow, fill-helper/argument
forms, countdown and byte-offset inductions, and volatile global loads.
No compiler settings changed. Experiments stopped when these produced no
new evidence or exact match.

Two diagnostic variants are explicitly rejected: `probe_break` falls through
to growth after finding an empty entry instead of returning true, and `fill2`
reloads storage size during every fill iteration rather than caching it.
Their higher percentages do not establish correct recovery. The earlier
`probe_signed_long` variant emits 228 bytes; the retained shared-label form
emits 224. Do not confuse those candidates.

Independent review separately recompiled the closest lookup/hash candidates
with the pinned compiler, reproduced their similarities, checked generated
Ninja flags against the runner, and tested ten additional const/register/type
variants without improvement. It found no concrete untried matching hypothesis
and confirmed notes-only publication is appropriate.

## Verification and publication boundary

Both the local experiment and restored `work` pass:

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
shasum orig/GDJEB2/sys/main.dol build/GDJEB2/main.dol
git diff --check
```

Both DOL hashes equal the pinned
`e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. In the experiment, generated
Ninja links the original object under `build/GDJEB2/obj/`, while the candidate
under `build/GDJEB2/src/` compiles only for analysis. The map uses the same
basename for both, so basename alone does not prove source provenance.
Restored `work` links all four from `auto_03_8003F0D8_text.o`.

Independent ELF parsing finds original `.text` of 1,244 bytes and 12 relocation
records versus candidate `.text` of 1,356 bytes and 18 records, with text flags
6 and alignment 4. Neither owns data/BSS. These objects are **not exact**;
there is no source-linked recovery claim. The candidate's extra bytes and
relocations remain local and contribute zero original recovered bytes.
Previously discarded 232-byte compiler artifacts remain excluded.

Ignored analysis storage `build/GDJEB2/analysis/storage-continuation/` retains
baseline/final reports, strict comparisons, source variants, ELF metadata,
runner scripts and independent-review experiments. No game input or generated
assembly is committed.

## Progress and next candidate

Published `work` retains 366,512 / 4,141,552 matched code bytes,
352,424 / 4,141,552 linked code bytes, and
165,586 / 1,503,795 matched data bytes.

| Metric | Before → after | Percentage-point delta | Byte gain |
| --- | --- | ---: | ---: |
| Matched code | 8.849629318% → 8.849629318% | 0 | 0 |
| Fully linked code | 8.509466982% → 8.509466982% | 0 | 0 |
| Matched data | 11.011208310% → 11.011208310% | 0 | 0 |

Matched functions remain 1,231 / 23,334 and completed units 181 / 5,146.
Published denominators do not change. The local experiment temporarily has
5,147 units because of its additional NonMatching partition; that configuration
is not integrated or published.

Next proposed candidate: parsing/dispatch wrappers `0x8003F620..0x8003F858`,
three functions / 568 original bytes. Inspected assembly shares core `+0x50`
and virtual slots `0x5C/0x6C/0x70`, with explicit hidden-result stack storage,
output pointers, and bounded string fallback. Verify signatures and stack
arguments before selecting it; the large parser beginning at `0x8003F858`
remains a dependency, outside that proposal. No further recovery starts in
this session. Retry the four retained stalls only with new compiler evidence.
