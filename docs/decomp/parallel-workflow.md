# Parallel decompilation workflow

Use this workflow only for an explicitly authorized parallel batch with two or
more translation units that can be owned independently. One coordinator owns
integration; workers own disjoint source files.

## Coordinator: prepare an immutable baseline

1. Start from clean `work`. Record the commit, generated report totals, target
   object paths, source paths, exact byte potential, and shared dependencies.
2. Assign each translation unit to exactly one worker. Keep a table of unit,
   source file, branch/worktree, dependencies, and status.
3. Remain the single writer for `configure.py`, splits, symbols, shared
   headers, `AGENTS.md`, and `PROGRESS.md`. If a worker requires one of these,
   either expand its ownership deliberately or resolve the dependency before
   parallel work resumes.
4. For an original-only target, first prepare a coordinator-owned NonMatching
   source partition and regenerate `objdiff.json`/`build.ninja`. This supplies
   an exact compiler command; the private tool does not guess compiler flags or
   source boundaries for auto-generated original units.
5. Create task worktrees from the same prepared revision, for example:

   ```sh
   git worktree add ../dw4-worker-a -b task/<batch>-a work
   git worktree add ../dw4-worker-b -b task/<batch>-b work
   ```

The configured coordinator checkout remains the read-only build root during
worker iteration. Its original objects, generated headers, toolchain, and
baseline headers must not change until worker commits return.

## Worker: iterate on one owned source file

Read `AGENTS.md`, this document, and the matching playbook. Confirm the assigned
unit and source path before editing. Compile the worktree's file against the
coordinator baseline:

```sh
/opt/homebrew/bin/python3 /path/to/coordinator/tools/decomp.py scratch \
  <unit-or-unique-suffix> \
  --root /path/to/coordinator \
  --source "$PWD/src/path/to/unit.cpp"
```

`--source` requires the configured filename but may point into another
worktree. The compiler reads that file in place so quoted includes retain their
normal search directory; object, dependency and diff outputs remain private.
Configured include paths still come from the coordinator baseline, which is
why shared-header work is coordinator-owned.

A worker completion contains:

- one focused commit touching only the assigned source and its directly owned
  notes/tests;
- the exact target/candidate paths and `scratch` result;
- remaining mismatches or emitted artifacts;
- any dependency request that prevented exactness.

Similarity alone is not a completion result. A worker may return an exact
object or a bounded investigation with concrete residuals; it does not modify
the coordinator build, configuration, ledger, or another worker's unit.

## Coordinator: integrate and publish

1. Inspect every worker diff and evidence before integrating it. Reject scope
   overlap, unsupported semantic names, compiler-setting changes, and generated
   artifacts.
2. Integrate one focused commit at a time. Regenerate configuration when the
   prepared NonMatching partition or source status changes.
3. After each integration, run the generic exact object check for the affected
   unit and confirm existing exact units remain intact where shared declarations
   could matter.
4. After all accepted commits, run the normal all-source build, contextual ELF
   and relocation checks, link-map provenance, report generation/deltas, and
   pinned DOL checksum.
5. Update `PROGRESS.md` once with aggregate exact matched/linked gains, worker
   results, unresolved evidence, and the next target. Commit and publish the
   verified batch under the fork-first policy.

If workers converge on a shared dependency, stop parallel edits at that seam.
The coordinator resolves or assigns it explicitly, refreshes the immutable
baseline, and restarts only the affected private loops.
