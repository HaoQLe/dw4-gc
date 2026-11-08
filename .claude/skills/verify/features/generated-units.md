# Generated-unit verification

`src/unknownGen/` units are machine-generated and listed in
`config/GDJEB2/generated_units.txt`. `verify_units.py` compiles them with
their configured flags and checks every defined function exactly. This is
the gate after changing a generator, shared header or split that generated
code depends on.

## Sub-features

- `changed`: default; only units whose source differs from HEAD or is untracked.
- `all`: `--all`, every generated unit.

## How to get to it (user POV)

- `/opt/homebrew/bin/python3 tools/unknowngen/verify_units.py [--all]`.

## Driving it with shell

Preconditions: baseline from the README; no other ninja in this checkout.

- **Changed units:** run without flags → `checked N failing 0`, exit 0. On a
  clean tree it prints `checked 0 failing 0`.
- **Whole set (publication):** `--all` → `checked <count> failing 0`. PROGRESS.md
  records the last count (e.g. 3,272/3,272). A drop in `checked` means units
  were promoted out of generation and should be explained.
- **Failure:** failing units are listed, exit 1.

## Gotchas

- "Changed" is computed from `git status` on `src/`. A header-only change
  checks nothing by default. Use `--all` after editing shared headers.
- `--all` is slow. Run it in the background and keep it for publication.
