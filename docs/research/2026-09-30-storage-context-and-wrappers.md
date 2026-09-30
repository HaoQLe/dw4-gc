# Storage context investigation and verified wrapper recovery

User-authorized session from `a27bf54`, 2026-09-30. Investigate the storage
lookup/hash context (584 bytes), then use the proposed three wrappers
(568 bytes) as the fallback if the storage investigation stalls. Maximum
recovery scope was 1,152 original bytes. **Three fallback functions / 568
bytes are exact and source-linked**, functional commit `a0f5ca0`, integrated
into `work`. Lookup/hash remain original; the earlier local experiment
`task/igarkcore-storage-continuation` at `fe8ce09` is unchanged.

## Shared context investigation

Refreshed the normal baseline before source edits and inspected the previous
[continuation investigation](2026-09-30-storage-continuation.md) to exclude
already-tested variants. Inspected the original table installer `fn_800383B0`,
base construction `fn_8006665C`, storage allocation/resize dependencies
`fn_8004155C` and `fn_80041660`, and recovered storage/reference helper forms.
The temporary object's two pointer fields are released through address-based
reference operations, supporting an owning-reference view; this does not
establish the original source declaration or class name.

New evidence: original `fn_8004270C` reloads storage `+0x10` inside a search
loop without calls or writes. This justified testing an inline element
accessor for lookup's analogous reload. Value-return, reference-return and
`operator[]` forms still hoist the lookup pointer and do not match. Count
getters and null-safe count access through a four-byte reference view did
not resolve hash's register assignment. Direct member definitions were also
tested, unlike the previous inlined member plus free wrapper. Their emitted
instructions preserve the same register swaps. Declaration permutations
from the previous session were not repeated.

No new exact storage recovery resulted. Closest candidates remain lookup
480/480 bytes at 99.708336%, with seven `r6/r8` argument differences, and hash
104/104 at 98.26923%, with eight `r3/r6` differences. The synthetic volatile
pointer read is still a reconstruction device, not evidence that the original
field was volatile. No missing tool/input or external dependency was found
to explain these two stalls. Further retries require new compiler evidence.
The original branch preserves them NonMatching; new contextual probes remain
ignored under `build/GDJEB2/analysis/storage-context/`.

## Fallback ABI and exact recovery

| Function | Original bytes | Verified behavior |
| --- | ---: | --- |
| `fn_8003F620` | 80 | Tests core field `+0x50` and provider slot `0x5C`; returns the observed boolean |
| `fn_8003F670` | 180 | Calls receiver slots `0x6C` then `0x70` with two stack buffers and counts; returns the first call's four-byte result |
| `fn_8003F724` | 308 | Calls the core provider when ready; preserves its success/count path and hexadecimal fallback with the observed output clearing |

Original tables `lbl_80473164` and `lbl_804705F8` place these wrapper bodies
in their observed slots. The receiver's slot `0x6C` has **seven explicit
arguments**, while the core provider's slot at the same offset has **eight**.
Separate opaque class views are necessary: the provider call passes two local
output words, then the caller's additional pointer, length and output-count
arguments. Reusing one slot signature loses an argument and shifts the stack
calling convention. Neither view owns or replaces an original vtable.

A nontrivial, inline four-byte result copy constructor gives hidden-result
ABI without emitted copy calls or code artifacts. `fn_8003F670` retains the
first call's result across the second virtual call, then copies its word to
its caller's result storage. Meanings of unused slots and uncertain arguments
remain unnamed.

The fallback format is original external `.sdata` symbol
`lbl_8055D7B8`, seven bytes including terminator, containing `0x%08x`.
Declaring its exact known extent preserves the small-data relocation.
The reconstruction uses a 16-byte local formatting buffer, enough for the
11-byte maximum output including terminator; this yields the original
`0x60` stack frame. A 32-byte trial yielded `0x70`. The original array length
is **not proven** by this match. Original `strncpy` behavior and the separate
one-byte optional output clearing are preserved without added termination
or validation.

The synthetic source partition `unknown8003F620.cpp` covers
`0x8003F620..0x8003F858`; it does not prove an original translation unit.
All shared globals, format storage, provider objects and subsequent parser
remain original. No header/symbol renaming or compiler-pin changes are needed.

## Verification and review

Strict objdiff with `functionRelocDiffs=data_value` gives 100% for all three
functions and the whole text section. Independent big-endian ELF comparison
verifies **568 original text bytes**, all three full function definitions,
text flags 6/alignment 4, and **12 full relocation records**, including
locations, types, addends and complete target metadata. Only relocation
instruction bits are masked. There are no extra functions or owned data/BSS.

All configured source compiles, and the normal source-linked DOL matches
original SHA-1 `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. Map and generated
Ninja link inputs establish that all three functions come from the configured
source object, not the same-basename original object. The four continuation
stalls remain in original `auto_03_8003F0D8_text.o`. Earlier 116-byte string
and 116-byte reference-view destructors remain UNUSED and excluded from
original progress; this partition emits no new artifacts.

Independent review recompiled with generated Ninja flags and obtained an
identical source object, independently reproduced strict 100% matches, and
checked source/ABI, verifier assumptions, full relocations, source provenance,
checksums, artifact exclusion and exact report deltas. No blocking findings.
The ignored verifier's initial link-rule selector omitted the map output;
that selector was corrected and its complete linked check passes.

After fast-forward integration into `work`, configuration, all-source build,
strict comparison, independent ELF/map/provenance checks, report deltas and
both DOL hashes were repeated and pass.

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
/opt/homebrew/bin/python3 build/GDJEB2/analysis/storage-context/verify.py --linked
shasum orig/GDJEB2/sys/main.dol build/GDJEB2/main.dol
git diff --check
```

## Progress and next candidate

| Metric | Before → after | Percentage-point delta | Exact byte gain |
| --- | --- | ---: | ---: |
| Matched code | 8.849629318% → 8.863343983% | +0.013714665 | +568 |
| Fully linked code | 8.509466982% → 8.523181648% | +0.013714665 | +568 |
| Matched data | 11.011208310% → 11.011208310% | 0 | 0 |

Matched code: 366,512 → 367,080; linked code: 352,424 → 352,992.
Matched functions: 1,231 → 1,234; completed units: 181 → 182.
**Unit denominator changes 5,146 → 5,148** from the new source partition
and an additional original remainder. Code/data/function denominators remain
4,141,552 / 1,503,795 / 23,334. The configured engine category now contains
8,112 source-linked code bytes and 354 data bytes across ten configured units;
its 100% is not whole-engine recovery.

Next proposed candidate: `fn_8003F858`, `0x8003F858..0x8003FD38`, 1,248
original bytes. Its observed hidden-result and eight-argument ABI is now
supported by the recovered caller; its bounded string/escape expansion,
optional inputs and output-count behavior still need detailed validation.
Do not silently fold it into this completed session or retry storage without
new evidence. Original parser and game inputs remain ignored/unpublished.
