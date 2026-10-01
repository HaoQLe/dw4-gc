# Decompilation workflow acceleration design

## Goal

Shorten the edit/compile/compare loop and make parallel recovery safe without
weakening the repository's exact-match publication gates. This adopts the
repeatable practices identified in
[the peer-decomp research](../../research/2026-10-01-peer-decomp-acceleration.md):
private per-unit compilation, shared verification, deterministic target
ranking, compact matching guidance, and isolated ownership for parallel work.

This first increment does not add an unattended agent loop, a daemon, a lease
database, automatic commits, or a new `NonMatching` source scaffold. Those are
follow-on options after the local workflow has evidence of regular use.

## Interface and seam

The external seam is one command:

```sh
/opt/homebrew/bin/python3 tools/decomp.py <command> [options]
```

It exposes three commands:

- `scratch <unit>` reads the unit's current source in place, compiles it with
  the exact generated Ninja rule into a private temporary directory, compares it to
  the target object with strict objdiff settings, and retains the temporary
  directory only when requested.
- `verify <target.o> <candidate.o>` compares allocated ELF sections, function
  symbols, and full relocation records. It exits nonzero and prints the first
  actionable mismatch when the objects differ.
- `rank` reads the generated report and prints deterministic recovery
  candidates. Filters distinguish missing units, partial matches, and the gap
  between exact matching and fully linked source.

The Python module is deliberately deep: callers supply paths and filters while
Ninja parsing, shell expansion, temporary output rewriting, ELF parsing, exact
comparison, and report normalization remain implementation details. There is
no adapter seam for alternative build systems because the repository currently
has only Ninja-generated Metrowerks commands.

## Scratch compile flow

1. Resolve a unit by exact objdiff name, source path, target path, or a unique
   suffix. Ambiguous and missing selectors fail before compilation.
2. Read the unit's `target_path` and `base_path` from `objdiff.json` and locate
   the generated source-object edge in `build.ninja`.
3. Expand that edge's rule using its effective variables. Keep the source path
   in its checkout so quoted includes resolve beside the translation unit.
4. Rewrite only the input, object output, depfile, `basedir`, and `basefile` to
   private paths. Run the otherwise unchanged compiler/wrapper/post-processing
   command from the repository root.
5. Run strict objdiff against the configured target object. Print the scratch
   paths, command outcome, section percentages, and function percentages.

The command never overwrites a configured source object, target object,
dependency file, source file, or generated configuration. A worker may edit a
file in its own worktree and invoke `scratch` repeatedly without contending on
shared outputs. `--source` may select the same-named translation unit from a
worker worktree while using the coordinator checkout's immutable generated
configuration, toolchain and headers.

## Exact verifier

`verify` independently parses 32-bit big-endian relocatable ELF objects. It
compares:

- every allocated section's name, type, flags, size, alignment, and bytes;
- every function symbol in an allocated section, including name, value, size,
  binding, type, visibility, and defining section;
- every RELA record, including source section, offset, relocation type,
  addend, and complete target-symbol metadata.

This consolidates the invariant checks duplicated by ignored batch scripts.
Batch-specific expectations—known function counts, progress deltas, link-map
provenance, and the pinned DOL checksum—remain publication checks because they
need batch context that a generic object verifier cannot infer safely.

## Candidate ranking

Ranking uses only generated report facts and therefore remains explainable.
The default order is:

1. partial units, by exact unmatched code bytes descending, then name;
2. single-function missing units, by total code bytes descending, then name;
3. multi-function missing remainder regions, by total code bytes descending,
   then name;
4. exact-but-unlinked units, by matched code bytes descending, then name.

Rows show category, unit, total code bytes, exact matched bytes, fuzzy percent,
and function counts. `--kind`, `--category`, and `--limit` narrow the output;
`--json` provides stable machine-readable results. The tool does not invent a
confidence score for dependency reuse or compiler difficulty. Preferring
single-function entries keeps very large generated remainder partitions from
obscuring actionable targets. Humans combine the ranked facts with assembly
and domain evidence when selecting a batch.

## Agent workflow

`AGENTS.md` gains one short trigger pointer to
`docs/decomp/parallel-workflow.md`. The detailed document owns the procedure:

- a coordinator records disjoint translation-unit ownership and baseline
  revision;
- each worker uses a task worktree and private scratch outputs;
- workers avoid shared headers and generated project configuration unless the
  coordinator assigns that dependency explicitly;
- workers return focused commits plus unit-level evidence;
- only the coordinator integrates commits and runs the all-source build,
  strict contextual checks, source-link provenance, report deltas, and DOL
  checksum.

`docs/decomp/matching-playbook.md` records compact, evidence-backed tactics for
compiler-shape investigation. It is advisory; exact verification remains the
completion criterion.

## Testing and completion

Standard-library `unittest` exercises the command through its public Python
interface with temporary Ninja, objdiff, report, source, and ELF fixtures.
Tests cover ambiguous selection, private command rewriting, allocated-section
and relocation mismatches, ranking buckets/order/filters, and CLI exit status.
Each behavior test is written and observed failing before its implementation.

Completion requires:

1. all new tests pass on the repository's supported Homebrew Python;
2. `scratch` compiles a real configured unit without changing its configured
   object or dependency files;
3. `verify` accepts that real exact object pair and rejects a controlled
   mismatch fixture;
4. `rank` agrees with hand-checked rows from the current report;
5. help text and both workflow documents describe the shipped interface;
6. repository status confirms no generated or game-input artifacts are staged.
