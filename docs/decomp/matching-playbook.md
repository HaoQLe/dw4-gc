# Matching playbook

Use this playbook for compiler-shape investigation after the behavior, ABI,
and object range are supported by assembly evidence. Exact object and link
checks—not similarity—decide completion.

## Start from a measured target

Refresh the generated report, then inspect actionable candidates:

```sh
/opt/homebrew/bin/python3 tools/decomp.py rank --limit 30
/opt/homebrew/bin/python3 tools/decomp.py rank --kind partial
```

The default order puts partial units first, then single-function missing units,
multi-function remainder regions, and exact-but-unlinked units. Bytes and
function counts are facts, not a confidence score. Before choosing a batch,
inspect the original instructions, relocations, nearby calls, and reusable
dependencies. Record its exact byte potential and main unknowns in
`PROGRESS.md`.

For a configured source unit, use the private loop:

```sh
/opt/homebrew/bin/python3 tools/decomp.py scratch <unit-or-unique-suffix>
```

The command uses the generated compiler rule but writes the object, dependency
file, and strict objdiff report to a temporary directory. Add `--keep` only
when those artifacts are needed for inspection.

## Classify the residual before changing source

| Residual | First evidence to inspect | Productive hypotheses |
| --- | --- | --- |
| Different length or branches | instruction/control-flow diff | condition shape, early return, loop form, signedness |
| Same instructions, different registers | compiler AST/PCode and live ranges | declaration order, named temporary, aggregate local, assignment versus initializer |
| Different loads or stores | widths, offsets, aliasing and volatility | exact scalar type, const/reference binding, volatile access, captured pointer |
| Relocation mismatch | relocation type, addend and target metadata | declaration target, literal ownership, call form, linkage |
| Extra code/data | complete section and symbol list | implicit destructor, string/reference temporary, out-of-line helper |
| Prologue/epilogue mismatch | saved GPRs, frame and calls | live range across calls, inline decision, local lifetime |

Keep one concrete hypothesis per experiment. Preserve distinct candidates only
when their residuals teach something different; otherwise overwrite the
scratch source and continue.

## Use the smallest evidence-backed source-shape change

Patterns already demonstrated in this repository include:

- replacing a ternary with explicit branch assignment to preserve a named
  scalar;
- changing declaration and initialization order to reproduce live ranges;
- using a local aggregate to keep related state in the original registers;
- binding a volatile-loaded pointer value to a reference when the original
  reload and lifetime require it;
- assigning an index/offset at the read that must keep it live;
- spelling signed division or pointer distance so the configured compiler
  emits the observed PowerPC idiom;
- isolating exact subsets when unrelated functions emit compiler artifacts.

These are investigation prompts, not transformations to apply mechanically.
Retain address-based names and opaque layout fields until stronger evidence
supports semantics. Keep the configured compiler version and flags fixed
unless the task is explicitly a toolchain investigation.

When ordinary source experiments stop producing new residuals, inspect the
compiler's frontend AST, PCode, or register graph. Use that evidence to choose
the next source-shape hypothesis; publication still uses the normal pinned
Ninja command.

## Promote through exact gates

Run the generic object check when a candidate appears exact:

```sh
/opt/homebrew/bin/python3 tools/decomp.py verify \
  build/GDJEB2/obj/path/to/unit.o \
  build/GDJEB2/src/path/to/unit.o
```

Then perform the batch-specific gates described in `AGENTS.md`: expected
function/range coverage, emitted-artifact review, link-map source provenance,
all configured source compilation, report deltas, and the pinned DOL checksum.
Record exact matched and linked byte gains. A high fuzzy percentage, matching
behavior, or successful boot is investigation evidence only.
