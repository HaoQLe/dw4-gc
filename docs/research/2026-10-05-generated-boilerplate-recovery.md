# Generated boilerplate recovery (2026-10-05)

## Result

Commit `f814ea4` on `work` adds 2,102 synthetic source units containing 8,060 exact functions (434,448 code bytes). All are source-linked; the rebuilt DOL keeps SHA-1 `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`.

| Metric | Before (`1075b6f`) | After (`f814ea4`) | Gain |
| --- | --- | --- | --- |
| Matched code | 425,272 (10.268421%) | 859,720 (20.758402%) | +434,448 bytes (+10.489981 pp) |
| Fully linked code | 423,800 (10.232880%) | 858,248 (20.722860%) | +434,448 bytes (+10.489980 pp) |
| Matched data | 167,162 (11.116010%) | 196,902 (13.093673%) | +29,740 bytes (+1.977663 pp) |

The matched-data gain is the extab/extabindex entries owned by the generated exception-enabled units. Matched functions rose from 1,537 to 9,597 and completed units from 240 to 2,342. The unit denominator rose from 5,202 to 7,401 because each generated run partitions an original remainder.

## Why templates

Most of the unnamed code is per-class boilerplate repeated hundreds of times with only relocation targets changed. Clustering functions by relocation-masked instruction bytes found the families; for example, 151 copies of one 60-byte metaobject getter and 277 copies of an 8-byte global accessor.

The generator (`build/GDJEB2/analysis/batch-20pct/gen/`, ignored) writes C++ for these shapes:

| Template | Shape |
| --- | --- |
| F1 | Return a small-data global. |
| F2 | Tail wrapper around another accessor. |
| F3 | Return a cached metaobject; first re-register it if it is null or flag bit 2 at `+0x24` is clear. |
| F6 | Ensure registration, then create an instance from a metaobject. |
| F7 | Lazily create a cached object from the allocator global. |
| F8 | Lazily create, attach, release and commit a registered type object. |
| CALLS | Straight-line functions whose calls take only constants, addresses or small-data addresses; argument values are recovered by emulating the original instructions. |
| VT | Build a temporary instance (out-of-line base constructor, then inline vtable stores), read the word at `_arkCore+0x394`, then run the inline destructor stores. Some variants also release a pooled-string member. |
| TEXT | Hand-written forms for field registration and an 188-byte field-factory function, reused for every byte-identical member. |

Each source is emitted only for functions whose bytes (relocation fields masked) equal the DOL and whose relocations (type, offset, target, addend) equal the original split object. One unit is emitted per contiguous run of exact functions, never across an existing split boundary.

## Configuration

- `config/GDJEB2/generated_units.txt` lists each unit's path, start, end and an `eh` flag.
- `configure.py` reads that list into two GC/2.6 `-O4,s` libraries:
  - Runs inside `0x80020400..0x800A0000` go to `Alchemy/src/unknownGen/` (category engine).
  - Everything else goes to `unknownGen/` (new category "unclassified"). Ownership of that code, engine or game, is unproven.
- Units whose original functions own exception-table entries (516 units, 1,487 functions, 94,832 bytes) build with `-Cpp_exceptions on`; dtk assigns their extab and extabindex ranges.

## Verification

Independent review of `f814ea4` passed:
- clean `git archive` rebuilds of the commit and its parent;
- the same DOL SHA-1, and the DOL identical to the original;
- every generated unit complete;
- a separate ELF comparison of all 8,060 functions (bytes, sizes, relocations) plus extab/extabindex for all 516 `eh` units;
- link-map placement, and unchanged parent splits and symbols.

The compiler also emits 41 unused out-of-line destructors for temporary-object types in 39 non-`eh` units. They are UNUSED in the map, stripped from the DOL and not counted as recovered bytes. The 2,199-unit denominator increase includes 97 auto gap units split by generated runs.

Non-blocking review notes kept for later type recovery:
- registration arguments are typed `int`;
- labels are typed by size;
- one label (`lbl_80564EFC`) is declared both `char[8]` and `void *`;
- fields are read by raw offset;
- the header's `UnknownGenVirtual` is unused;
- the exception switch relies on the exact `-Cpp_exceptions off` flag text.

Unit boundaries are synthetic runs, not proven translation units.

## Exclusions and retained mismatches

- **Three `.ctors` static initializers** (`fn_802EB7CC`, `fn_8031C974`, `fn_8040A208`) are excluded. As plain functions they drop out of the `.ctors` table and break the checksum.
- **133 generated candidates outside the core** are not exact. They stay original.
- **The 164-byte factory family** (`fn_80021E10` and members) is about 99.76% at best. The original loads the vtable before copying `this` and keeps it in `r12`; every tested spelling either reorders those two instructions or allocates `r4`. It stays original.
- **Chunk-1 near misses, `fn_8004291C` and `ReverbSTDCreate`** stay as recorded in the checkpoint entry.
