# Next-session prompt: Alchemy igGap recovery

Copy the prompt below into the next work session. Status at preparation: source task not started; UART recovery is complete. Current baseline and policy live in `PROGRESS.md` and `AGENTS.md` rather than in this prompt.

```text
Continue Digimon World 4 matching decompilation in /Users/haole/dev/dw4-gc.

First read AGENTS.md and PROGRESS.md, inspect Git status, remotes and recent
commits, and preserve existing changes. Work in HaoQLe/dw4-gc from work (or a
focused task/ig-gap branch). Commit and publish verified results to origin/work.
Upstream PRs or updates require my explicit request; do not wait on upstream.

The next authorized task is to investigate and recover the two existing
functions in src/Alchemy/src/igGap.cpp:
  Gap::igRefAlchemy(int), 0x8003CFC0, 172 bytes
  Gap::igReleaseAlchemy(), 0x8003D06C, 244 bytes
Report unit: main/Alchemy/src/igGap. The preparation report has 416 code bytes,
464 .sbss bytes, near-100% fuzzy code similarity but neither function exactly
matched, and the unit remains NonMatching. Recheck rather than assume this
snapshot still applies. Do not repeat the completed UART recovery.

State the recovery assumptions and completion checks before editing. Refresh
the baseline using /opt/homebrew/bin/python3 configure.py --version GDJEB2 --map
and /opt/homebrew/bin/ninja all_source progress build/GDJEB2/report.json.
Record aggregate percentages and byte counts before source changes.

Inspect original assembly and strict objdiff output, including relocations,
headers/class declarations and small-data layout. Use the pinned compiler and
flags; make surgical, evidence-backed changes. Do not infer semantic names or
change unrelated units/global toolchain settings to hide a mismatch.

Completion requires matching code/data and relevant relocations, all configured
source compiling, and normal whole-DOL SHA-1 verification against
config/GDJEB2/build.sha1. Enable Matching only if source linking preserves the
checksum. If only functions match, keep the unit NonMatching and record partial
progress. If blocked, preserve the investigation/evidence on its task branch
and state the remaining mismatch; do not label the unit complete.

Update PROGRESS.md with results, functional commit, checks, unfinished findings
and the next bounded target. In the completion response, show matched code,
fully linked code and matched data as before -> after percentages, percentage-
point deltas and exact byte gains, following the ledger's display convention.
Commit/push the handoff to the fork and stop after this bounded task.
```
