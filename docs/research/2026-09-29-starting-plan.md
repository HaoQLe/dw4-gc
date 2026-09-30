# Starting Digimon World 4 GameCube decompilation

Research date: 2026-09-29. Proposed work, not a completed build or decompilation. Companion: [additional resources](2026-09-29-resources.md).

## Recommendation and scope

Start from [ivanno4317/dw4-gc](https://github.com/ivanno4317/dw4-gc), reproduce its verified build, and contribute small matching C/C++ objects. Use its supported USA revision 1, `GDJEB2`. The initial outcome is recovered source that rebuilds the original GameCube executable. A native PC port is a subsequent objective with additional runtime and platform work.

Assumptions: we want to build on the existing project, use this Mac for development, and have access to the supported game image. Availability and revision of a local image have not been established. Existing `/Users/haole/dev/digimon-world-4-recomp` contains earlier PC-recompilation planning; keep a future `dw4-gc` checkout separate so the two objectives remain clear. No checkout, dependency installation, game-image search, binary analysis, or game build was performed for this report.

## Verified project baseline

The inspected upstream head is [`41c27d8756e298558ca9be61c1c89afeee336c01`](https://github.com/ivanno4317/dw4-gc/commit/41c27d8756e298558ca9be61c1c89afeee336c01), dated September 16, 2026. Its [latest build workflow](https://github.com/ivanno4317/dw4-gc/actions/runs/35115154515) succeeded. This establishes upstream build evidence, not evidence that it builds on our machine.

The [live dashboard JSON](https://decomp.dev/ivanno4317/dw4-gc/GDJEB2.json) identifies that same commit and reports:

| Metric | Current snapshot | Meaning for planning |
| --- | --- | --- |
| Code matched | 358,000 / 4,141,552 bytes, **8.64%** | Most executable code remains to recover. |
| Code fully linked | 343,696 bytes, **8.30%** | Matching functions can exist in objects that are not yet safe to link. |
| Functions matched | 1,180 / 23,334 | Function count and byte progress measure different things. |
| SDK code matched | 99.38% of the configured SDK category | A short training contribution is possible, but SDK recovery is already advanced. |
| MSL code matched | 98.36% of the configured MSL category | A few runtime/library gaps remain. |
| zlib and libpng | 100% matched and linked in their categories | No reason to start by reconstructing these libraries. |
| Configured engine category | 524 code bytes, three functions, zero exactly matched | Only two Alchemy source units are categorized so far; this is not the total engine size. |
| Configured game category | Zero bytes and functions | Its displayed 100% is an empty-category result, not completed gameplay code. |

The project uses `orig/GDJEB2/sys/main.dol` with existing symbols and section splits. Its expected rebuilt DOL SHA-1 is `e409a88a7379ed1a536f93b0a303a0ce7cd5d877`. This is an executable checksum, not an ISO/RVZ checksum. [Input configuration](https://github.com/ivanno4317/dw4-gc/blob/main/config/GDJEB2/config.yml), [build checksum](https://github.com/ivanno4317/dw4-gc/blob/main/config/GDJEB2/build.sha1).

## Toolchain to preserve

The project's [configure.py](https://github.com/ivanno4317/dw4-gc/blob/main/configure.py) pins decomp-toolkit `v1.8.3`, objdiff CLI `v3.6.1`, wibo `1.0.3`, binutils `2.42-2`, compiler bundle `20251118`, and sjiswrap `v1.2.2`. Reproduce these pins before considering upgrades.

Compiler versions differ by library: Dolphin SDK uses `GC/1.2.5n`, zlib `GC/1.3`, libpng and the linker `GC/1.3.2`, and MSL/Alchemy `GC/2.6`. Preserve each object's flags too: floating-point contraction, optimization, inline settings, language, and include paths affect emitted code. The engine is explicitly compiled as C++. A generic GameCube compiler preset is insufficient. [Compiler and library configuration](https://github.com/ivanno4317/dw4-gc/blob/main/configure.py).

This machine is Apple Silicon (`arm64`) and has Python 3, Ninja and Homebrew on PATH. DW4's [project.py](https://github.com/ivanno4317/dw4-gc/blob/main/tools/project.py) selects wibo automatically on Darwin/arm64; its [download helper](https://github.com/ivanno4317/dw4-gc/blob/main/tools/download_tool.py) requests `wibo-macos`, which exists in [wibo 1.0.3](https://github.com/decompals/wibo/releases/tag/1.0.3). Upstream [wibo documentation](https://github.com/decompals/wibo) describes the macOS build as experimental x86_64 with Rosetta 2 support. Verify a compiler invocation on this host; native ARM execution should not be assumed. A host issue should be resolved before changing game code.

The project's [CI workflow](https://github.com/ivanno4317/dw4-gc/blob/main/.github/workflows/build.yml) uses a private build container containing original inputs and compiler tools. Our first reliable validation route is local. A fork cannot be assumed to inherit access to that container.

## Plan with acceptance gates

### 1. Reproduce the untouched build

Clone the existing project locally, record the upstream commit, then create a contribution branch. Provide the supported image under `orig/GDJEB2/` as the [project README](https://github.com/ivanno4317/dw4-gc#building) describes. Check the game's region/revision rather than relying on the filename; compare extracted `sys/main.dol` against the executable hash above. Record the image's own hash separately.

Suggested commands for the future setup session:

```sh
cd /Users/haole/dev
git clone https://github.com/ivanno4317/dw4-gc.git
cd dw4-gc
git rev-parse HEAD
git switch -c decomp/first-matching-unit
# Place the supported game image in orig/GDJEB2/ before configuring/building.
python3 configure.py --version GDJEB2 --map
ninja
ninja all_source progress build/GDJEB2/report.json
shasum build/GDJEB2/main.dol
```

These commands have not been executed. `--map` is supported and useful for analysis. Avoid `--debug` or `--non-matching` for baseline verification. The README contains a template clone URL; use the actual DW4 URL above. [Build options](https://github.com/ivanno4317/dw4-gc/blob/main/configure.py).

**Verify:** configuration and dependency downloads work; the normal Ninja build passes its checksum check; all configured source compiles; `objdiff.json` and a progress report exist; the rebuilt DOL has the expected SHA-1. Retain baseline report and build logs outside committed game-input directories. The generated progress target depends on the whole-build hash check. [Generated build rules](https://github.com/ivanno4317/dw4-gc/blob/main/tools/project.py).

A partial matching project can rebuild an identical game by retaining original code for unfinished units. A successful boot therefore verifies the build pipeline, not complete source recovery. [decomp-toolkit's incremental matching model](https://github.com/encounter/decomp-toolkit#background).

### 2. Establish analysis and the matching loop

Open the generated configuration in [objdiff](https://github.com/encounter/objdiff). Import the extracted DOL into [Ghidra with the GameCube Loader](https://github.com/Cuyler36/Ghidra-GameCube-Loader), using project symbols and the generated map where compatible. Reuse the project's section layout and splits. Make a small [decomp.me](https://decomp.me/) scratch only when a function needs isolated experimentation; carry its exact compiler, flags and header context into the scratch.

For each function: read original PowerPC assembly, identify inputs/calls/field offsets, draft C/C++, compile with the configured toolchain, compare code and data, and revise. Ghidra pseudocode or [m2c](https://github.com/matt-kempster/m2c) output is a starting hypothesis. Record uncertain types explicitly and validate recovered structures against loads, stores, call sites and ABI behavior.

**Verify:** editing one existing source unit rebuilds its object automatically, and objdiff shows target/current differences. We can explain one short function's control flow and identify its actual mismatch without changing global flags.

### 3. Complete one small contribution

The [per-unit progress report](https://decomp.dev/ivanno4317/dw4-gc/GDJEB2.json?mode=report), [symbols](https://github.com/ivanno4317/dw4-gc/blob/main/config/GDJEB2/symbols.txt) and [splits](https://github.com/ivanno4317/dw4-gc/blob/main/config/GDJEB2/splits.txt) provide concrete candidate work:

| Candidate | Verified status | Recommended use |
| --- | --- | --- |
| `uart_console_io_gcn.c`: `fn_8009F35C` at `0x8009F35C` | Eight-byte target absent from the current source object; the other two functions match and data matches | First inspect this tiny gap and the object's ordering. A plausible introductory recovery task; its behavior still needs binary inspection. |
| `igGap.cpp`: `igRefAlchemy` at `0x8003CFC0`, `igReleaseAlchemy` at `0x8003D06C` | Two small engine functions, 99.94% fuzzy similarity across the unit, neither an exact match | Next engine target. Inspect relocations, class declarations and small-data layout; near-100% similarity does not establish an easy fix. |
| `igArkCore.cpp`: `checkAlchemyVersion` at `0x8003D1C8` | 108 bytes, 86.56% fuzzy similarity | Follow after investigating its report-handler dependencies and class layout. |
| `AXARTLfo`, `OSAlloc.c`, `odenotstub.c` | Report says 100% code/data matched, but units are not linked | Link/layout investigations, not fresh decompilation targets. |

**First target recommendation:** inspect the UART gap, then pursue a small Alchemy unit. If the gap proves to be a split or linkage problem rather than a source recovery task, choose a short unmatched engine function with understood dependencies. Recheck the current report and upstream activity before starting.

The existing [odenotstub issue](https://github.com/ivanno4317/dw4-gc/issues/1) explicitly reports a whole-DOL SHA mismatch despite matching functions/data. The [9.25% checkpoint PR](https://github.com/ivanno4317/dw4-gc/pull/2) is closed and unmerged; its [workflow run failed](https://github.com/ivanno4317/dw4-gc/actions/runs/34673984884). Treat that branch as material to inspect, not a validated improvement to import wholesale.

**Verify:** recovered function and object match, including data and relevant relocations; when enabling the object's matching flag, the entire rebuilt DOL still passes SHA verification. Compile all source and regenerate progress. Keep the patch limited to the unit, necessary headers, and necessary configuration/split/symbol changes. A reviewable patch should explain the recovered behavior and validation evidence; publication is a separate action.

### 4. Recover engine types from Alchemy metadata

There is unusually relevant prior work: [mateon1's Alchemy IGB parser](https://gist.github.com/mateon1/b123a53d824305767989ebc2ba3e5814). Its source explicitly sets `r13` for `GDJEB2`, reads runtime object/class metadata and field offsets, and includes game database/drop-table helpers. The author limits tested IGB support to format version 6. This is community reverse-engineering evidence; no compatibility run has been performed here.

After the baseline, inventory extracted assets and capture a supported-version RAM dump after engine initialization. Validate the parser's address assumptions against our executable and live registers. Try one representative IGB and one known runtime object before scaling up. Its hardcoded Linux Dolphin dump location will need an explicit local-path adaptation on this Mac if we use it. Do not infer layout from asset field slots alone; corroborate with runtime metadata and assembly.

**Verify:** recover the name, size, parent and several field offsets for one class; confirm those offsets against code accesses and runtime observations. Keep a small evidence table containing class/field, offset, source address or asset, and confidence. Promote only confirmed declarations into shared headers. This could reduce the uncertainty around Alchemy classes before tackling large game functions.

### 5. Decompile one bounded gameplay path

Once the matching workflow and a few core types are established, select one observable event, such as a controller button changing a menu selection or one stat getter. Trace it in [Dolphin's debugger](https://github.com/dolphin-emu/dolphin/tree/master/Source/Core/DolphinQt/Debugger), correlate it with Ghidra callers and metadata, and recover a small related cluster. `main` is already named at `0x80020400`; use it for startup navigation without assuming it is the best first source target. [DW4 symbols](https://github.com/ivanno4317/dw4-gc/blob/main/config/GDJEB2/symbols.txt).

**Verify:** identify the path's entry point, affected state and key callees; document one repeatable in-game observation; match at least one actual game function; preserve the whole-DOL hash when linking the completed unit. A function match inside an unfinished unit can be retained as partial progress while the unit continues using original code.

## Priority and limits

The first work session should aim for: **supported input confirmed → clean checksum-passing build → working objdiff feedback → one bounded candidate investigated**. The next milestone is one validated contribution, followed by metadata-backed engine types and one gameplay cluster. These are acceptance gates, not calendar estimates.

The complementary resource note contains tool guides, PowerPC learning material, related Digimon projects and source links. Prioritize the project configuration, objdiff, the Melee beginner workflow, and the DW4-specific IGB parser. PS1 Digimon projects supply process/domain examples; their MIPS code and compiler settings do not establish DW4 implementation details.

Open inputs for implementation are the supported game image's location/revision and the availability of a working compiler wrapper on this Mac. We can prepare the checkout and inspect public source independently; binary recovery and build verification require the game input. No maintainers were contacted, GitHub writes made, or existing project files changed during this research.
