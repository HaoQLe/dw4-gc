# Small game classes: beTimer, and the register-allocation stalls (2026-10-09)

## Result

`src/Game/Bec/beTimer.cpp` (`0x8031B60C..0x8031B864`) is readable and exact. The DOL SHA-1 is unchanged.

- **Functions:**
  - setup (find the system, pad manager and Lua);
  - clearing every timer (`virtual70`, newly matched);
  - `beTimer_anyPadInput` (pads 0..3, stick direction or buttons; was `fn_8031B7EC`);
  - the trivial `virtual5C`/`60`/`68`/`6C`.
- **Shared helpers:** `include/game/List.h` holds `item<T>`, `setCount` and `removeAll`, as matched in the weapon and timer code.
- **Totals:** matched code 1,531,216 → 1,531,564 bytes (36.972034% → 36.980434%), linked 1,529,744 → 1,530,092 (36.936493% → 36.944893%), matched data +20 bytes, 16,996 functions.
- **Generated units:** three were replaced, and `unknown8031B5FC.cpp` was shrunk to `beNumberCtrl_virtual58` alone (its `beTimer` functions now come from `beTimer.cpp`).

### What beTimer does

Timers are `beTimerData` objects:
- `_startTime` and `_downTimer` are 64-bit world-time values;
- `_resetCondition`;
- `_callLuaFile`.

Each frame while the system runs (`beSystem::_isActive && !_isFirstTime`), `virtual74` subtracts the elapsed `igInsightCore::_worldTime` from every timer. A timer whose condition is `"NOPADDATA"` restarts while a pad is in use, so it measures idle time. An expired timer runs its Lua file (`fn_80301FA4`) and is removed.

## Register-allocation stalls

Three readable drafts compile to the original instructions, with identical opcodes, immediates, branches and stack layout, but some values get different registers:

| Function | Size | Differing lines | Draft |
| --- | --- | --- | --- |
| `beWeapon_virtual8C` (message handler) | 1,440 | about 280 | `task/beweapon-8c-wip` |
| `beTimer_virtual74` (per-frame update) | 392 | 10 (one value: the list during removal gets `r24`, original `r29`) | `task/small-classes-wip` |
| `beSeCtl_virtual90` (play an action's sound) | 340 | 63 at best | `task/small-classes-wip` |

**What `beSeCtl_virtual90` does:** it finds the `beSeInfoData` named by the request, then each of its `beSeData` actions named by the request. For each match it sends `MODELCTRL`, the sound name, the delay (a `short` converted through `long long` to `double` by `fn_800A3FDC`, the runtime's 64-bit-to-double conversion) and `SETSOUND`.

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

## Also identified

- **`beCameraMode`:** `virtual7C` copies the camera's field of view, near plane (near = far / 1000 when zero) and far plane into the view's model (`igView::_model`). Each change is followed by a `{2, 0, field}` event sent to the model's listeners (`fn_8011BFA4`). `virtual78` advances the camera-path time, with the per-frame step capped at 50,000,000 time units, and evaluates the path into the view matrix. These are not written yet: they need the model and matrix classes.
- **`beSeCtl_virtual7C`:** broadcasts `"ACTION_BROADCAST"`.
