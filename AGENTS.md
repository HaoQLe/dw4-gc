# Digimon World 4 personal-fork workflow

## Objective and references

Recover matching C/C++ for the supported GameCube version using the existing project toolchain. A native PC port is a separate task. Read `README.md` for setup, `configure.py` for current tool/compiler settings, and `config/GDJEB2/` for symbols, splits and the expected executable checksum.

At the start of every session, read [PROGRESS.md](PROGRESS.md), inspect the working tree and recent commits, and identify completed work before selecting a target. The ledger is the durable handoff across sessions; chat history is supplementary.

For initial setup or target selection, read [the starting plan](docs/research/2026-09-29-starting-plan.md). For analysis tools, compiler learning or Alchemy metadata investigation, read [the resource guide](docs/research/2026-09-29-resources.md). Their progress numbers are dated snapshots; inspect current configuration and regenerate reports before using them as current facts.

## Repository and branches

- `origin`: our fork, `https://github.com/HaoQLe/dw4-gc.git`.
- `upstream`: original project, `https://github.com/ivanno4317/dw4-gc.git`.
- `main`: reference branch tracking upstream history; keep fork-specific work on other branches.
- `work`: our continuing development branch and the fork's default branch, published to `origin/work`. Locally verified work is accepted here independently of upstream.
- `task/<topic>`: focused development branch created from `work` when isolation is useful.
- `contrib/<topic>`: optional delivery branch used only when the user explicitly requests an upstream contribution.

Confirm the current branch, remotes, working tree and recent commits before editing. Preserve existing user changes. Push our branches explicitly to `origin`; the checkout's default push remote should be `origin`.

## Fork-first policy

Default to implementing, verifying, committing and publishing work in `HaoQLe/dw4-gc`. Create or update a PR in `ivanno4317/dw4-gc` only when the user explicitly requests that action; earlier upstream-contribution instructions are superseded by this policy. Existing PRs are historical records, not standing authorization for upstream writes.

Once a task passes applicable local checks, commit it and integrate it into `work`; continue with the next authorized task without waiting for upstream acceptance. Publishing to our fork does not require an upstream PR or a PR within our fork.

Keep matching contributions separate from experiments. Unverified code, proposed type layouts and compiler experiments belong on a task/experiment branch until their required checks pass. Documentation and setup work can proceed while a missing game image blocks binary verification; report the missing verification explicitly. Never label unbuilt code as matching.

Fork-specific workflow documentation, including this file, stays on our development branches and is excluded from unrelated upstream PRs.

## Recovery throughput

The user prefers faster aggregate recovery and larger pieces of work when evidence supports them. Select coherent batches by expected verified bytes per unit of effort, dependency reuse and confidence in the calling convention; function size alone is insufficient. Single-function tasks remain useful for new compiler patterns or uncertain layouts, but are not the default once those uncertainties have been resolved.

Before selecting a batch, inspect several candidates in symbols, original assembly and the current report. Record its functions/ranges, exact potential code bytes, shared dependencies and principal unknowns in `PROGRESS.md`. Favor clusters that reuse recovered offsets, reference-count patterns, allocation conventions or virtual slots. Treat address adjacency as a candidate region, not proof of an original translation-unit boundary. Reconsider the next scope after each verified batch using what the recovery established.

During an authorized recovery task, keep the target batch active and continue automatically until every target is verified or each remaining target has an evidenced hard blocker. Publishing an exact subset is a checkpoint; continue recovering the remaining targets without another user prompt or per-function approval. Respect explicit user limits and stop conditions; proposing a larger next batch does not start it. Keep unknown meanings unnamed, and expand shared declarations only when supported by evidence.

Use targeted object compilation and strict objdiff for the inner matching loop. Reuse byte/relocation comparison tools when their assumptions still apply. Run all configured source compilation, exact code/data/relevant relocation checks and source-linked DOL checksum verification at batch publication and after integration. Repeat broad checks during iteration only when a change or failure warrants them. Accuracy gates and compiler pins remain unchanged.

For target ranking, private per-unit compilation and compiler-shape tactics, read [the matching playbook](docs/decomp/matching-playbook.md). Before starting an explicitly authorized multi-worker batch, read and follow [the parallel workflow](docs/decomp/parallel-workflow.md).

Preserve independently verified subsets while continuing the batch. Keep unfinished code NonMatching on the task/experiment branch, and split only along justified boundaries so verified source can link independently. Bound individual experiments, not the target batch: when attempts stop improving, record concrete differences and rejected variants, investigate fresh evidence or a distinct hypothesis, and rotate among unrecovered targets before returning. Repeated misses, high similarity, elapsed effort and having no current hypothesis are investigation stalls, not hard blockers.

Defer a target only when evidence shows progress requires an unavailable input, access or permission, an external dependency, or a demonstrated tool/technical limitation that cannot be resolved within authorized scope. Attempt available remedies first; continue independent work on other targets. Record the blocker, supporting diagnostics, attempted remedies and the specific input or change needed to resume. At execution/context boundaries, preserve the batch as active with its next concrete investigation; an interruption does not complete or defer it. Close the batch only when all targets are verified or all remaining targets meet this blocker criterion, unless the user explicitly stops or limits work.

Report exact matched and linked byte gains for the batch. Track investigation time and persistent blockers when useful for improving subsequent selection; a larger byte target is a planning estimate, not a completion claim. Keep handoff notes focused on reusable findings and unresolved constraints, with one aggregate progress update per batch.

## Per-task execution

1. State the intended behavior or recovery target, assumptions and completion checks. Inspect `PROGRESS.md`, current source, symbols, splits and the report to avoid repeating completed work. For source recovery, regenerate the normal report and record its aggregate percentages and byte counts before editing as the comparison baseline. Consult upstream history when relevant; maintainer coordination is not a prerequisite for local development.
2. Start from `work` or create `task/<topic>` from it. Make the smallest change that solves the task, matching surrounding style. Include only necessary header, symbol, split and configuration changes. Preserve uncertain field names/offsets as explicit hypotheses until supported by assembly or runtime evidence.
3. Run checks appropriate to the change. For matching source, use the exact configured compiler and flags, inspect object code/data and relevant relocations in objdiff, and run whole-executable verification. For documentation-only changes, inspect the diff and links; a game build is not required.
4. Commit the focused result with validation evidence. If using a task branch, integrate the verified result into `work` and rerun affected checks after integration. Push the relevant branches to `origin` when publishing is within the task's authorized scope.
5. Update `PROGRESS.md` before handoff: completed unit/function and functional commit, checks and results, current task/branch, unresolved findings and a concrete next target. Refresh its numeric snapshot after code changes using the generated report, and follow its progress-display convention in the user-facing completion summary. Commit and publish the ledger update with the task when authorized; record local-only commits explicitly if publishing is unavailable.

Provide copy-paste next-session prompts in chat only. Save or commit a prompt file only when the user explicitly requests it; the committed progress ledger remains the durable project record.

Use `complete` only for work that passed its required checks; distinguish partial matches, research and experiments. Link detailed notes from the ledger rather than duplicating investigations there. A proposed next target is not automatic authorization to start it.

## Matching-build verification

Provide the supported game image under `orig/GDJEB2/`, then establish an untouched baseline before modifying game source:

```sh
python3 configure.py --version GDJEB2 --map
ninja
ninja all_source progress build/GDJEB2/report.json
```

On the current Mac, the login shell selects Python 3.7, which fails importing `TypedDict`; use `/opt/homebrew/bin/python3` explicitly until shell resolution is corrected. The host's matching-build baseline is recorded in `PROGRESS.md`.

Use the normal matching configuration. Treat the compiler/tool pins in `configure.py` as authoritative; change them only for an explicit toolchain task. Verify macOS wibo/compiler execution before diagnosing compiler-host failures as game-code bugs.

Completion of a matching unit requires matching code/data plus the normal build's checksum check against `config/GDJEB2/build.sha1`. Enable its `Matching` status only after linking it preserves that checksum. Per-function similarity or a successful boot alone does not establish completion: unfinished units can still use original code. If a function matches inside an unfinished unit, report partial progress and retain the unit's existing link status.

The inherited GitHub workflow uses a private upstream build container. Fork CI access is not assumed; local build evidence is the verification baseline when that container is unavailable. If an image, tool or dependency is missing, identify the missing input and continue independent authorized work.

## Explicitly requested upstream delivery

Apply this section only after the user explicitly requests an upstream contribution. It is not part of the default completion workflow.

Fetch `upstream` and inspect changes before preparing a PR. For an independent contribution, create `contrib/<topic>` from `upstream/main` and cherry-pick only the relevant functional commits from our development history. Inspect the entire diff against `upstream/main`, then run the applicable checks on that branch. Exclude fork-only setup, unrelated work and original game inputs.

For a contribution depending on an unmerged PR, continue developing and validating on `work`. Either prepare a draft PR that clearly lists the prerequisite commits/PRs or defer only its upstream submission until the dependency lands. Neither choice pauses local work. When prerequisites land upstream, reconcile the delivery branch so its diff shows the remaining contribution; preserve published history unless rewriting it is explicitly authorized.

Push the delivery branch to `origin` and target `ivanno4317/dw4-gc:main`. Describe the recovered behavior or concrete problem, changed functions/units, local match results, whole-build verification, and material limitations. A PR prepared without required binary checks must be draft and state which checks remain. Keep subsequent PR fixes focused and incorporate verified fixes into `work` too.

Record any explicitly requested delivery branch/PR and dependencies in `PROGRESS.md`. Existing upstream review status does not determine whether our local task is complete.

## Synchronization and data boundaries

Fetch upstream periodically or before delivery. With a clean working tree, advance the reference `main` by fast-forward when possible and merge reviewed upstream changes into `work`; verify the integrated result. If upstream contains our contribution through a squash or rewrite, inspect the diff and resolve overlapping history deliberately. Preserve published branches and user edits; do not force-push, reset or delete branches without clear authorization.

Keep game images, extracted assets, original executables, generated assembly and RAM dumps out of commits and PRs. Store original inputs under the ignored `orig/` paths and generated artifacts under ignored build/analysis paths. Inspect staged filenames before committing; report checks actually run and any remaining input requirements at handoff.
