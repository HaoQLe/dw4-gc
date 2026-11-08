# Exact object comparison

Compares two relocatable ELF objects with the repo's own verifier:
allocated bytes, section attributes, function symbols and full relocations
with target metadata. It is independent of objdiff's fuzzy scoring.

## Sub-features

- `normal-build-pair`: original split object vs the ninja-built source object.
- `arbitrary-pair`: any two `.o` files, e.g. a `--keep` scratch candidate.

## How to get to it (user POV)

- `/opt/homebrew/bin/python3 tools/decomp.py verify <target.o> <candidate.o>`.

## Driving it with shell

Preconditions: both objects exist. Original split objects live under
`build/GDJEB2/obj/<path>.o` and ninja-built source objects under
`build/GDJEB2/src/<path>.o`.

- **Verify a built unit:** `/opt/homebrew/bin/python3 tools/decomp.py verify build/GDJEB2/obj/Alchemy/src/Meta/igIntMetaField.o build/GDJEB2/src/Alchemy/src/Meta/igIntMetaField.o`
  → `exact: N allocated bytes in S sections; F functions; R relocations`, exit 0.
- **Failure:** `error: <what differs>` on stderr, exit 1.

## Gotchas

- `build/GDJEB2/src/*.o` reflects the last ninja run, not your working
  source. Rebuild (or use `unit.sh`) before trusting it.
- The same known metadata exceptions as unit-scratch apply (extab metadata,
  symbol binding). See [unit-scratch.md](unit-scratch.md).
