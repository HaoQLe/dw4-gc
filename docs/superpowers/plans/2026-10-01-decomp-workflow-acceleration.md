# Decompilation workflow acceleration implementation plan

**Goal:** Ship a tested private unit loop, generic exact-object verifier,
deterministic target ranking, and the documentation needed to use them safely
in parallel.

**Architecture:** A single deep Python module, `tools/decomp.py`, owns generated
configuration parsing and exposes the `scratch`, `verify`, and `rank` command
interface. Standard-library tests cross the same Python/CLI seam. Agent policy
is progressively disclosed from a short `AGENTS.md` pointer into dedicated
workflow and matching-playbook documents.

**Tech stack:** Python standard library, generated Ninja/objdiff JSON, the
pinned Metrowerks toolchain, objdiff-cli, and `unittest`.

---

## Task 1: Parse and compare relocatable ELF objects

**Files:**

- Create: `tools/decomp.py`
- Create: `tools/tests/test_decomp.py`

1. Add hand-built minimal ELF fixture helpers and failing tests proving that
   identical allocated sections, function symbols, and RELA records pass while
   changed bytes, metadata, and relocation targets fail with useful messages.
2. Run `/opt/homebrew/bin/python3 -m unittest tools.tests.test_decomp` and
   confirm failures are due to the absent interface.
3. Implement the smallest ELF parser and `verify_objects(target, candidate)`
   result needed by those tests.
4. Rerun the focused tests to green, then refactor only duplicated parsing.

## Task 2: Resolve units and build a private compile command

**Files:**

- Modify: `tools/decomp.py`
- Modify: `tools/tests/test_decomp.py`

1. Add failing fixture tests for exact/suffix/ambiguous unit selection and for
   expanding a multiline Ninja edge while rewriting source, output, depfile,
   `basedir`, and `basefile` into a temporary directory.
2. Run the focused tests and observe the intended selection/rewrite failures.
3. Implement objdiff unit normalization plus the minimal Ninja rule/edge
   parser and private-path rewrite.
4. Run the focused tests to green. Confirm the returned command retains the
   exact compiler version, flags, wrappers, and post-processing steps.

## Task 3: Expose `scratch` and `verify` commands

**Files:**

- Modify: `tools/decomp.py`
- Modify: `tools/tests/test_decomp.py`

1. Add failing CLI tests for argument errors, nonzero mismatch exit, and a
   scratch run driven by a tiny executable fixture command.
2. Implement `verify` output and `scratch` orchestration with
   `TemporaryDirectory`; add `--keep` as the only persistence option.
3. Run the CLI tests to green and check `tools/decomp.py --help` plus each
   subcommand's help.

## Task 4: Rank report candidates

**Files:**

- Modify: `tools/decomp.py`
- Modify: `tools/tests/test_decomp.py`

1. Add a literal report fixture and failing tests for partial, missing, and
   exact-but-unlinked buckets; verify byte counts, deterministic ordering,
   category filtering, limits, and JSON shape.
2. Implement `rank_candidates(report)` and the `rank` output adapter without a
   synthetic score.
3. Run tests to green and hand-check several rows against
   `build/GDJEB2/report.json`.

## Task 5: Document matching and parallel recovery

**Files:**

- Create: `docs/decomp/matching-playbook.md`
- Create: `docs/decomp/parallel-workflow.md`
- Modify: `AGENTS.md`
- Modify: `README.md`

1. Write a compact playbook from already verified repository evidence:
   establish an exact baseline, classify mismatch shape, vary one compiler
   hypothesis, preserve ABI uncertainty, and promote only through exact gates.
2. Write coordinator/worker steps with explicit completion criteria, isolated
   worktrees, disjoint unit ownership, private scratch builds, focused commits,
   and coordinator-only integration checks.
3. Add one trigger pointer to `AGENTS.md` and a human-facing tool entry in
   `README.md`; avoid duplicating the detailed procedure.
4. Inspect links and rendered Markdown structure.

## Task 6: Real-project validation and handoff

**Files:**

- Modify if needed: `tools/decomp.py`, `tools/tests/test_decomp.py`
- Modify: `PROGRESS.md`

1. Run the complete unit suite.
2. Record hashes/timestamps for a configured object and depfile, run `scratch`
   on an exact small unit, and confirm those configured artifacts did not
   change.
3. Run `verify` on a known exact target/source pair. Run `rank` in table and
   JSON modes and compare selected rows with the report.
4. Run normal repository checks affected by tooling (`configure.py`, build-file
   regeneration diff, and Python syntax/tests). A full game rebuild is not
   required unless generated configuration changes; if run, preserve the
   existing checksum gate.
5. Update `PROGRESS.md` with the adopted workflow, commands, validation, and
   unchanged recovery percentages. Inspect the complete diff and staged file
   list, then commit the focused implementation on the task branch.
6. Integrate the verified commit into `work`, rerun tests and the real-object
   smoke checks there, and report exact commands/results. Publishing to
   `origin/work` is in scope under the repository's fork-first policy.
