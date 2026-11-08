# dw4-gc verification map

The maintained source for proving dw4-gc matching claims. Read this index,
then use the feature file that matches the claim as the recipe.

## Baseline preconditions

- Repo root is the current directory; `doctor.sh` passes.
- `orig/GDJEB2/` holds the extracted game (`sys/main.dol` present).
- The checkout is configured (`configure.py --version GDJEB2 --map`).
- No other ninja is running in this checkout.

## Driving conventions

- Harness = shell. Always `/opt/homebrew/bin/python3`, never bare `python3`.
- Name units by their full objdiff name (`main/Game/Bec/beNDMWMdlItem`);
  short suffixes are often ambiguous (`beNDMWMdlItem` matches `main/Meta/...`
  and `main/Game/Bec/...`).
- In zsh, `${PIPESTATUS[0]}` is empty. Read exit codes from the helper output
  (`exit=N`) or don't pipe.
- Never change compiler pins, flags or `build.sha1` to make a check pass.

## Proof and skip reporting

- Record the command, the HEAD it ran on, its output and its exit code. The
  helpers do this under `build/GDJEB2/analysis/verify/`.
- Unit proof = exact verifier verdict. Whole-build proof = DOL SHA-1 `OK`
  after a forced recheck.
- If a precondition is missing (no image, no tools), report it as a missing
  input. Don't call the check passed because a narrower one passed.

## Features

| ID | File | Proves |
|---|---|---|
| full-build-checksum | [full-build-checksum.md](full-build-checksum.md) | relinked `main.dol` is byte-identical to the original |
| unit-scratch | [unit-scratch.md](unit-scratch.md) | one source unit compiles to the original object |
| object-verify | [object-verify.md](object-verify.md) | two relocatable objects are exact (bytes, symbols, relocations) |
| generated-units | [generated-units.md](generated-units.md) | `unknownGen` generated units still compile exactly |
| progress-report | [progress-report.md](progress-report.md) | matched/linked byte totals and the ranked next targets |
