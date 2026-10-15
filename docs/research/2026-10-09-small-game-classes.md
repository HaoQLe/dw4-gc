# Small game classes: beTimer, and the register-allocation stalls (2026-10-09)

## Result

`src/Game/Bec/beTimer.cpp` (`0x8031B60C..0x8031B9FC`, with the `"NOPADDATA"` string at `.rodata 0x804528E8`) is readable and exact: the whole class, including the per-frame update (`virtual74`, matched on 2026-10-15) and `virtual58`. The DOL SHA-1 is unchanged.

- **Functions:**
  - setup (find the system, pad manager and Lua);
  - clearing every timer (`virtual70`, newly matched);
  - the per-frame update (`virtual74`, newly matched);
  - `beTimer_anyPadInput` (pads 0..3, stick direction or buttons; was `fn_8031B7EC`);
  - the trivial `virtual5C`/`60`/`68`/`6C`.
- **Shared helpers:** `include/game/List.h` holds `item<T>`, `setCount` and `removeAll`, as matched in the timer code (the weapon handler draft uses them too).
- **Totals:** matched code 1,531,216 → 1,531,956 bytes (36.972034% → 36.989901%), linked 1,529,744 → 1,530,484 (36.936493% → 36.954357%), matched data 234,074 → 234,126 (+52 bytes), 16,995 → 16,997 functions. The first checkpoint (without `virtual74`) gave +348 code bytes.
- **Generated units:** four were replaced (`unknown8031B9EC.cpp` held `virtual58`), and `unknown8031B5FC.cpp` was shrunk to `beNumberCtrl_virtual58` alone (its `beTimer` functions now come from `beTimer.cpp`).

### What beTimer does

Timers are `beTimerData` objects:
- `_startTime` and `_downTimer` are 64-bit world-time values;
- `_resetCondition`;
- `_callLuaFile`.

Each frame while the system runs (`beSystem::_isActive && !_isFirstTime`), `virtual74` subtracts the elapsed `igInsightCore::_worldTime` from every timer. A timer whose condition is `"NOPADDATA"` restarts while a pad is in use, so it measures idle time. An expired timer runs its Lua file (`fn_80301FA4`) and is removed.

## Register-allocation stalls

Three readable drafts compiled to the original instructions, with identical opcodes, immediates, branches and stack layout, but some values got different registers. `beTimer_virtual74` is now solved (below); two remain:

| Function | Size | Differing lines | Draft |
| --- | --- | --- | --- |
| `beWeapon_virtual8C` (message handler) | 1,440 | 122 instructions, structure exact (2026-10-15) | `task/beweapon-8c-wip` |
| `beTimer_virtual74` (per-frame update) | 392 | **matched** | `src/Game/Bec/beTimer.cpp` |
| `beSeCtl_virtual90` (play an action's sound) | 340 | 49 at best | `task/small-classes-wip` |

**What `beSeCtl_virtual90` does:** it finds the `beSeInfoData` named by the request, then each of its `beSeData` actions named by the request. For each match it sends `MODELCTRL`, the sound name, the delay (a `short` converted through `long long` to `double` by `__cvt_sll_dbl`, formerly `fn_800A3FDC`: MWCC emits a call to `__cvt_sll_dbl` for this conversion at that address's call site) and `SETSOUND`.

**Tried without effect on these:**
- declaration order (random search);
- scopes;
- sharing or splitting loop variables;
- inline helpers for conditions, searches and removal;
- local copies;
- explicit flag variables.

**Observed MWCC 2.6 behaviour (small tests and the matches so far):**
- locals take registers downward from `r31` in declaration order, then parameters in ascending order;
- values from inline helpers can be numbered after locals;
- a `#pragma dont_inline` region changed inlining for other functions in the file too (MWCC appears to decide inlining at the end of the file).

**Next investigation:** a dedicated study of the allocator's priority order. Build small functions that reproduce each stalled pattern (a value dead after a call, a list reloaded in a loop, two loops with search results) and vary one source property at a time. A C-only permuter does not apply to this C++.

## How `beTimer_virtual74` matched

The remaining 10-line difference was the list pointer during removal (`r24` instead of `r29`). Two changes fixed it:
- the removal's list variable is declared at the top of the function and only assigned in the loop;
- the pad condition is a nested `if` (`if (strcmp(...) == 0) { if (beTimer_anyPadInput(self)) reset = true; }`) rather than one `&&`.

A search over seven independent source choices (`build/GDJEB2/analysis/hw/combo74.py`, run through `tools/hwvariants.py`) found every exact combination needs both. Outcomes were 0, 10, 36 or 50 differing lines.

`beTimer_anyPadInput` must also stay out of line. Without a pragma, MWCC inlines it into `virtual74` (42 lines). `#pragma dont_inline on` within a push/pop broke `virtual70` (an inline helper there was outlined). `#pragma auto_inline off` around `beTimer_anyPadInput` keeps all functions exact.

**`beSeCtl_virtual90` now:** a search over nine choices reached 49 lines (counted after the `__cvt_sll_dbl` rename), best with `found` and `actions` declared at the top. Remaining differences:
- `self` is in `r27`, but the original uses `r26`;
- the two loops' index, offset and list registers are permuted;
- the original loads the delay through `r0` and copies it to `r22` (`lha r0; mr r22, r0`), one instruction more.

`short`, `int` and `long long` intermediates for the delay did not reproduce the copy, and inline helpers for the four messenger calls (taking the delay as `long long`, `short` or the whole `beSeData`) made it worse (80–93 lines).

## `beWeapon_virtual8C` (2026-10-15)

The draft was ported to `Ref<T>`, `List.h` and `Pool.h` (`task/beweapon-8c-wip`, `941bd9f5`). In this form the instruction sequence and its length (360) match the original. Two source choices are required:
- the `info` pointer is loaded once, before the `switch`;
- each loop declares its own variables (`for (int i = 0; ...)`, `int count = ...`).

Shared loop variables at the top initialise the second loop's offset with `mr` from the counter. The original uses two `li` instructions.

**Remaining difference: register colouring only, 122 of 360 instructions.** The original puts `self` in `r31`, `ram` in `r28`, `info` in `r27` and `message` in `r21`. The draft has `ram` in `r31` and `self` in `r30`.

**No effect on the colouring:**
- eight declaration choices, 256 combinations (`id`, the lists, the attachment, the bone index and the sequence entry hoisted to the top; `info` first or last; the action in a local; a named pointer for the new bone selection);
- a member-function form (`this` instead of `self`);
- an inline remove helper (one more differing instruction).

Moving the generate case into an inline helper changes the structure.

**Allocator observation:** in a reduced test with the same shape, parameters get the lowest saved registers (`self` `r26`, `ram` `r27`). In the original, `self` gets `r31`, so the original's parameters are not coloured as plain parameters in this function. What causes that is unknown.

## `beCameraMode` (2026-10-15)

**Published:** `src/Game/Bec/beCameraMode.cpp` covers `0x802F4114..0x802F4268`. Both functions in it are exact, `virtual7C` newly matched:
- **matched code** +284 bytes, to 1,532,240 (36.996758%);
- **linked** 1,530,768 (36.961216%);
- **matched data** +20 bytes, 16,998 functions;
- `build.sha1` OK and 4,481 generated units verify.

What the functions do:
- **`virtual80`** calls the camera's vtable slot `0x90`.
- **`virtual7C`** calls the camera's slot `0x8C`, then copies the camera's values into the view's model (an `igViewModel`):
  - `_hfov`, then `_farPlane`, then `_nearPlane`;
  - a zero near plane becomes far / 1000;
  - after each store it sends a change event `{2, 0, field}` through `fn_8011BFA4`.

  The field identifiers are `.bss` globals: `lbl_8055CA84` (`_hfov`), `lbl_8055CA8C` (`_farPlane`), `lbl_8055CA88` (`_nearPlane`) and `lbl_8055CA7C` (`_viewMatrix`). The names are inferred from which field each one follows.
- **Matching details:**
  - the field globals must be arrays, because the original uses `lis`/`addi`, not small-data addressing;
  - the event occupies 16 bytes on the stack (a fourth word is never set);
  - the two float constants (`lbl_80425320` = 1000, `lbl_80425324` = 0) are referenced as externs, because the unlinked `virtual78` refers to them by name;
  - with the extern, the comparison must be written `lbl_80425324 == nearPlane` to keep the `fcmpu` operand order (with a literal it was `nearPlane == 0.0f`).

**Not linked: `virtual78` (per-frame update)**, a draft at `task/small-classes-wip` `049e8629`. The control flow:
- frozen: it only records the world time;
- otherwise, unless ended: `step = now - _svWorldTimeL` (0 on the first frame), capped at 50,000,000; `_nowTimeL += step`, clamped to `_timeLength`, which sets `_isEnd`;
- then the path is evaluated at `_nowTimeL` into an identity matrix (`fn_801EAAAC`);
- three values are read from the matrix (`fn_8012947C`) and its rotation rebuilt from them (`fn_80129134`), keeping the translation;
- `fn_8012A860` writes the rigid inverse into `_viewMatrix`; it returns an `igResult` through a hidden pointer, which needs a user-defined copy constructor;
- a `_viewMatrix` event is sent.

**Matching state:**
- the instruction sequence is exact;
- 13 instructions differ, all scratch registers in the time-step block: the original keeps `_svWorldTimeL`'s low word in `r8` and `now` in `r6`/`r7`; the draft has `r6` and `r7`/`r8`.
- Required shapes: `step + _nowTimeL` (not `+=`), and the three values declared and zeroed just before `fn_8012947C`.
- Tried without effect: about 25 forms of the step computation (ternaries, inline helpers, declaration order, a local for the last time, block forms, reversed comparisons).

## Tools

- `tools/hwdiff.py SOURCE [-v] [function ...]` compiles a hand-written file with the game flags and reports each function as EXACT or the number of differing lines against the original split objects.
- `tools/hwvariants.py SOURCE VARIANTS.json functions [-p]` scores text-replacement variants of the file the same way. With `-p`, functions of equal length are scored by the number of instructions that differ at the same position. This still ranks variants whose registers are all shifted.

## Also identified

- **`beCameraMode`:** see the section below (2026-10-15).
- **`beSeCtl_virtual7C`:** broadcasts `"ACTION_BROADCAST"`.
