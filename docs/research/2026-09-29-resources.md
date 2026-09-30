# Digimon World 4 GameCube: complementary decompilation resources

Research date: 2026-09-29. This note supplements the project-specific inspection of [ivanno4317/dw4-gc](https://github.com/ivanno4317/dw4-gc) and its [decomp.dev dashboard](https://decomp.dev/ivanno4317/dw4-gc). Links below are tool maintainers' documentation/source or projects' own documentation. Tool installation, compiler compatibility and rebuilt-game behavior have not been tested during this research.

## What success means

A matching decompilation recovers C/C++ that compiles to the original binary. decomp-toolkit documents the incremental approach: split the original executable into relocatable objects, replace individual objects with compiled source, and verify that linking still produces an identical executable. This supports contributing to an existing project long before all its code is recovered. [decomp-toolkit background](https://github.com/encounter/decomp-toolkit#background)

Recommendation: first reproduce the target project's normal verified build, then match one small game function with its existing compiler and flags. A PC port, modern engine remake and static recompilation are separate objectives; none is established merely by compiling Ghidra's pseudocode. The matching target above is the appropriate initial milestone for this project.

## Core tools and references

| Resource | Verified capability | How it helps this project |
| --- | --- | --- |
| [decomp-toolkit](https://github.com/encounter/decomp-toolkit) | GameCube/Wii analysis, DOL splitting, relocatable-object generation, CodeWarrior linker scripts and SDK/runtime signatures. Includes disc extraction and SHA-1 verification commands. | Understand and troubleshoot the infrastructure DW4 already uses. Use the project's pinned version; do not regenerate existing symbols or splits casually. |
| [objdiff](https://github.com/encounter/objdiff) | Compares relocatable objects, functions and data; supports PowerPC, CodeWarrior demangling, automatic rebuilds and progress reports used by decomp.dev. | Primary local feedback loop. Open the generated `objdiff.json`, select a file, inspect its target and current assembly, edit, rebuild and compare. |
| [decomp.me](https://github.com/decompme/decomp.me) and [compiler definitions](https://github.com/decompme/decomp.me/blob/main/backend/coreapp/compilers.py) | Collaborative decompilation site with a GameCube/Wii CodeWarrior compiler family in its backend. | Small shareable experiments using the exact DW4 compiler version, options, target assembly and preprocessed header context. Do not substitute another game's preset. |
| [m2c](https://github.com/matt-kempster/m2c) | Converts big-endian PowerPC assembly into C with partial C++ support and CodeWarrior heuristics; accepts a header context. | Obtain a first draft with a target such as `ppc-mwcc-c++`, then correct types/control flow and verify against the original. Output is a hypothesis, not proof of matching source. |
| [decomp-permuter](https://github.com/simonlindholm/decomp-permuter) | Tests source variants to improve binary similarity; supports PowerPC. Its author recommends it mainly toward the end, when register allocation remains. | Optional later aid after understanding the function. Inspect resulting changes and require the normal project checks, because its scoring can ignore stack positions by default. |
| [dtk-template getting started](https://github.com/encounter/dtk-template/blob/main/docs/getting_started.md) | Documents disc input, configuration, build checksums and importing map/ELF information. | Reference for interpreting DW4's template-derived layout. DW4's own configuration remains authoritative; following new-project initialization would duplicate existing work. |

The decomp-toolkit command examples useful for inspecting one's own input are `dtk disc info`, `dtk disc extract`, `dtk dol info` and `dtk shasum`. Full command behavior is documented in the [tool README](https://github.com/encounter/decomp-toolkit#commands). These are examples for the current upstream tool, not evidence that every command exists in the version pinned by DW4.

## Learning PowerPC and compiler matching

The [Melee beginner guide](https://github.com/doldecomp/melee/blob/master/docs/getting_started.md) provides a worked PowerPC example, shows how to create a decomp.me scratch and explains header context. It recommends a short, unmatched function that nobody else is working on. Its workflow transfers well; its compiler preset, game headers and addresses do not transfer to DW4.

[Decomp Training](https://github.com/doldecomp/decomp-training) builds small CodeWarrior DOL executables specifically for loading into analysis software. It explicitly does not target playing on console. This is useful for controlled experiments with C/C++ constructs and compiler output, after aligning the experiment's compiler and flags with DW4.

[Decomp Academy](https://github.com/JackPriceBurns/decomp-academy-fe) offers browser lessons in byte-matching GameCube PowerPC using CodeWarrior GC/2.0. It is an optional structured introduction; its README's description and compiler choice were checked, but the hosted lesson service was not exercised. Learn instruction patterns there, then validate them with DW4's own toolchain.

[Super Mario Sunshine's matching tips](https://github.com/doldecomp/sms/blob/main/docs/AGENT_MATCHING_TIPS.md) discuss type reconstruction, source ordering, inlining and register/stack differences. The document explicitly concerns GC/1.2.5 and includes broad empirical assertions. Treat it as ideas to test, not universal compiler behavior or binding instructions for DW4.

## Static analysis and runtime evidence

[Ghidra GameCube Loader](https://github.com/Cuyler36/Ghidra-GameCube-Loader) imports DOL executables, REL modules, apploaders and RAM dumps. It includes optional symbol-map import, namespaces and demangling. This is the useful GameCube-specific addition to Ghidra, rather than importing `main.dol` as an arbitrary raw binary. Select an extension build compatible with the installed Ghidra release; the current README specifies JDK 21 when building the extension.

Dolphin's current debugger implementation includes an assembly/code view, symbol navigation, callstack, callers/callees and stepping. Its breakpoint panel supports execution and memory breakpoints, read/write selection, logging and conditions. These capabilities are directly visible in [CodeWidget.cpp](https://github.com/dolphin-emu/dolphin/blob/master/Source/Core/DolphinQt/Debugger/CodeWidget.cpp) and [BreakpointWidget.cpp](https://github.com/dolphin-emu/dolphin/blob/master/Source/Core/DolphinQt/Debugger/BreakpointWidget.cpp).

Recommended later workflow: load project symbols into the analysis tools, create a reproducible in-game event, observe its candidate functions or memory writes in Dolphin, and compare the observed values with Ghidra's inferred types. Keep the original address, callers, accessed offsets and confidence level in notes. Runtime observation helps explain behavior; the rebuilt binary comparison determines matching.

## macOS hosting caveat

At inspected DW4 revision `41c27d8756e298558ca9be61c1c89afeee336c01`, `configure.py` pins wibo `1.0.3`; `ProjectConfig.use_wibo()` selects it automatically for Darwin including `arm64`, when no wrapper override is supplied. `wibo_url()` maps Darwin to the release asset `wibo-macos`. This is existing DW4 behavior, not a proposed migration. [DW4 configuration](https://github.com/ivanno4317/dw4-gc/blob/41c27d8756e298558ca9be61c1c89afeee336c01/configure.py), [wrapper selection](https://github.com/ivanno4317/dw4-gc/blob/41c27d8756e298558ca9be61c1c89afeee336c01/tools/project.py), [download selection](https://github.com/ivanno4317/dw4-gc/blob/41c27d8756e298558ca9be61c1c89afeee336c01/tools/download_tool.py)

[wibo](https://github.com/decompals/wibo) runs simple 32-bit Windows command-line programs, including compiler use cases; its macOS release is x86_64, experimental and supports Rosetta 2. It is not described as a native ARM64 build. The [current template dependency guide](https://github.com/encounter/dtk-template/blob/main/docs/dependencies.md) likewise documents automatic wibo downloading. Verify the unmodified DW4 build on this Mac before changing wrapper versions; no local compiler execution was tested during research.

## Alchemy assets and reflection: a directly relevant DW4 lead

[mateon1's `igbparse.py`](https://gist.github.com/mateon1/b123a53d824305767989ebc2ba3e5814) is community-authored parsing/reverse-engineering code for Intrinsic Alchemy 3.2 IGB files. Its source explicitly sets `r13 = 0x80564f00` from `GDJEB2` (Digimon World 4) for raw-memory object metadata resolution. `read_metaobj`, `read_metafield` and `read_obj` inspect object names, parents, field offsets/types and values; its helpers also inspect databases, item drops and Mersenne Twister state. The author labels file-format version 6 supported, with versions 5/7 untested; the parser detects endianness, includes exploratory assertions and hardcoded memory assumptions. It was inspected but not executed on DW4 data.

Recommendation/inference: after the build and first small match, investigate one IGB and one reproducible Dolphin RAM dump to see whether these reflection records can establish DW4 struct fields. Cross-check runtime offsets against PowerPC loads/stores before adding types. This is a much stronger DW4 lead than assuming that modern Alchemy mod tools accept the game.

Two broader community tools are useful comparisons, with substantial compatibility limits:

- [igArchiveExtractor](https://github.com/NefariousTechSupport/igArchiveExtractor) extracts/rebuilds Alchemy `.arc`, `.bld` and `.pak` archives and provides source for archive/texture investigation. Its README says it is discontinued and documents a Windows .NET/Visual Studio setup. It does not establish DW4 support; treat its formats as hypotheses to compare with actual DW4 files.
- [igRewrite8 / igCauldron](https://github.com/NefariousTechSupport/igRewrite8) has an `igLibrary` for Alchemy file interaction, reflection-related code and tests. Its README explicitly supports only Skylanders Superchargers 1.6.x and Imaginators 1.1.0; legacy Alchemy support is listed as future restructuring. It is a conceptual/reference resource, not a verified DW4 converter or matching decompilation.

No proprietary Alchemy SDK, leaked engine source or SDK download is required by these recommendations.

## Related Digimon projects

- [jype0/dw_decomp](https://github.com/jype0/dw_decomp) is a PS1 Digimon World decompilation with original-vs-rebuilt comparisons and objdiff support. It credits SydMontague's reverse engineering. Useful precedent for contributor workflow, not a PowerPC toolchain or source of verified DW4 types.
- [juandav/dw3_decomp](https://github.com/juandav/dw3_decomp) is a PS1 Digimon World 3 matching project. It documents separate game/SDK compiler settings, overlays and whole-build comparison requirements. Useful example of preserving a complete verification baseline when recovering individual functions; its GCC/MIPS specifics do not transfer.
- [markisha64/ddw3](https://github.com/markisha64/ddw3) documents PS1 Digimon World 2003 executables, data formats, stats, evolutions and maps. Its README describes much executable work as disassembly, and explicitly distinguishes file checks from reconstructing a byte-identical final disc. Do not equate its data/documentation completion with recovered DW4 game code.
- [DW1-SydPatches](https://github.com/SydMontague/DW1-SydPatches) reimplements and patches DW1 for bug fixes/modding. Its README links a Digimon Modding Community. It is complementary community/domain knowledge, not a matching DW4 project. [DW1-Code](https://github.com/SydMontague/DW1-Code) describes itself as heavily outdated and points to the patches project.

No additional independently verified DW4 matching repository or reusable BEC GameCube engine decompilation emerged from these searches. This is a limit of the search, not proof none exists. Common publisher/franchise names alone do not establish shared executable code, compiler options, engine structures or asset formats.

## Suggested gates for the starting plan

1. Record the upstream revision, game version, input checksum, compiler version/options and pinned tool versions. Verify the normal build before edits.
2. Run the project's progress/diff tools and pick one small, unmatched game function with limited dependencies. Check existing source and shared scratches to avoid duplicating work.
3. Extract its assembly/context, draft C/C++, and iterate with the exact compiler. Require a matching object/function and the project's normal whole-build verification.
4. Document only evidence-backed names and types, with uncertain fields left explicit. Build a small cluster of related matches before choosing a large gameplay subsystem.
5. Add Ghidra/Dolphin investigation when behavior or structure cannot be established from assembly alone. Defer PC-port or engine-remake work until it is separately scoped.

These are recommendations synthesized from the matching workflow and tool capabilities above; they are not a claim that any local build, function or game has already been verified.
