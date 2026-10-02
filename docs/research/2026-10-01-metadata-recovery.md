# Alchemy metadata construction and access recovery

Date: 2026-10-01. Baseline `work`: `ce41066`. Selected scope is six functions /
932 original code bytes at `0x80041020..0x800413C4`. All six match and source-link;
no remainder, owned data/BSS or compiler artifacts. Functional commit: `bca74d7`. Independent fresh-compile review found no blocking
issues; its strict and exact ELF checks, provenance, checksum and delta checks pass.
The batch is integrated into `work`; normal configure, all-source/report build,
strict and independent exact checks, provenance, checksums and deltas pass again
after integration.

## Selection and recovered behavior

The SDK reverb remainder offers 1,148 bytes with a 97.84% strict function match,
but has a separate floating-point register allocation problem. Nearby creation
and lookup wrappers introduce additional virtual slots and allocation behavior.
This metadata group reuses the verified object-reference mask, pooled-string
release, storage offsets and existing size optimization profile. Factory and
registry helper bodies confirm pointer returns, signed counts, recursive indexing
and the allocation-context accessor. It therefore offers a coherent dependency
group with useful compiler evidence from previous recovery.

| Function | Original bytes | Observed behavior |
| --- | --- | --- |
| `fn_80041020` | 4 | Empty hook |
| `fn_80041024` | 8 | Returns one |
| `fn_8004102C` | 628 | Lazily builds the receiver's storage from indexed registry entries |
| `fn_800412A0` | 8 | Returns the original external global pointer |
| `fn_800412A8` | 80 | Builds missing storage; returns null for a count below one |
| `fn_800412F8` | 204 | Searches pooled names and returns the matching entry's pointer |

The builder retains a factory result, releases the old receiver field, assigns
the result and drops its temporary reference. It calls receiver slot `0x58`,
looks up the original external registry key, stores recursive count minus one,
reserves when count reaches capacity, and resizes through the original helpers.
Its signed loop creates entries, assigns their metadata pointer, interns the
name at `+0x1C`, releases the old pooled name, clears entry word `+0x10`, and
assigns each storage element through the original retain/release and bounds
sequence. The low 23 bits of the reference word determine release. Original
null assumptions, reloads, signed comparisons and unusual release ordering are
preserved. Synthetic views name offsets; class and field meanings remain unknown.

The lookup keeps an unsigned byte search flag, compares names with `strcmp`,
and preserves the original short-circuit loop and null returns. Globals, registry
key and helper code remain external and original. The source split is a justified
recovery partition, not a claim about the original translation-unit boundary.

## Compiler findings

The first candidate matched four functions and almost all builder instructions.
Using the established pooled-string `isPooled`/`getId` release view reproduced
the original subtraction before loading/decrementing the pool reference count;
a direct scalar helper folded the subtraction into loads and emitted four fewer
bytes. Template retain/release helpers delayed builder emission until the end of
the object. Plain pointer helpers preserve exact behavior and original function
offsets without template instantiation.

Lookup declaration order reproduces the original saved-register allocation.
Reading a candidate's name before assigning its pointer to the retained local
reproduces `lwzx r5`, name load and `mr r28,r5`; immediate assignment coalesced
the registers and removed four original bytes. The final normal build uses the
existing `-O4,s` profile, explicit inline helpers and scoped `auto_inline off`.
Compiler/tool pins and other objects' settings remain unchanged.

## Verification and progress

Commands run from the repository root:

```sh
/opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
/opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json
/opt/homebrew/bin/python3 tools/decomp.py verify \
  build/GDJEB2/obj/Alchemy/src/igCore/unknown80041020.o \
  build/GDJEB2/src/Alchemy/src/igCore/unknown80041020.o
/opt/homebrew/bin/python3 build/GDJEB2/analysis/metadata-recovery/verify.py
```

Strict objdiff uses `functionRelocDiffs=data_value`. Independent ELF parsing
checks all 932 text bytes, section type/flags/alignment, six function offsets,
sizes/binding/visibility and all 31 full relocation records with target metadata.
The complete allocated section and function lists agree; there is no extra
emitted code/data/BSS or discarded relocation. Target SHA-256 is unchanged.
Map and Ninja provenance identify the source object for every selected function.
Both original and source-linked DOL SHA-1 equal the repository-pinned
`e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. All configured source compiles.

| Metric | Before → after | Exact gain |
| --- | --- | --- |
| Matched code | 375,236 → 376,168 / 4,141,552 | +932 bytes; +0.022503641 pp |
| Fully linked code | 361,148 → 362,080 / 4,141,552 | +932 bytes; +0.022503641 pp |
| Matched data | 165,586 → 165,586 / 1,503,795 | 0 bytes; 0 pp |
| Matched functions | 1,287 → 1,293 / 23,334 | +6 |
| Completed units | 199 → 200 | +1 |
| Unit denominator | 5,160 → 5,161 | +1 from isolating the original prefix |

Code/data/function denominators are unchanged. Configured engine totals become
17,200 code bytes, 354 data bytes, 109 functions and 28 completed units. Earlier
UNUSED destructor artifacts remain excluded from recovered bytes.

Ignored evidence, baseline/final reports, original prefix assembly, exact target
hash, strict report and independent verifier are under
`build/GDJEB2/analysis/metadata-recovery/`.

Next proposed candidate: five creation/lookup hooks at
`0x800413C4..0x8004155C`, 408 original bytes. Inspect virtual slots `0x70/0x74`,
the metadata-driven creation helper and storage lookup before selecting it;
compare the SDK reverb remainder. This proposal does not start another batch.
