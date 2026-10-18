# Sound subsystem as readable C++ (2026-10-18)

The first batch of the "game subsystems" direction: `beCri` (the CRI audio wrapper), `beSound` (the sound manager answering `"SOUND"` messages) and `beSeCtl` (action sound effects), written by hand as typed C++ against `include/meta`.

## Result (checkpoint)

- **Totals** (from `work` at `4e0d51b6`):
  - matched code 1,637,208 → 1,641,252 bytes (39.531265% → 39.628910%, +4,044);
  - linked code 1,635,736 → 1,639,780 (39.495724% → 39.593370%, +4,044);
  - matched data 269,799 → 270,099 (17.941208% → 17.961159%, +300);
  - complete data 306,827 → 307,199;
  - matched functions 17,338 → 17,355 (+17).
- **Checks:** `build.sha1` OK; all sources compile; changed generated units verify.
- **Source:** every function of the three classes in the batch is readable source. The exact ones link (Matching units); the others are NonMatching units, scored by objdiff while the original code stays linked.

| File | Status | Functions |
| --- | --- | --- |
| `beCri.cpp` | Matching | `virtual5C/60/64/68/6C/70`, `fn_802F4F48` |
| `beCriPlay.cpp` | NonMatching | `virtual74` (32 lines), `fn_802F56B0` (108), `fn_802F5828` (69), `fn_802F5A04` (272) |
| `beCriStop.cpp` | Matching | `fn_802F5F98`, `fn_802F6038`, `fn_802F60FC` |
| `beCriResume.cpp` | NonMatching | `fn_802F61F8` (36) |
| `beCriVolume.cpp` | Matching | `fn_802F6334` … `fn_802F68D0` |
| `beCriTransfer.cpp` | NonMatching | `fn_802F69B8` (16), `fn_802F6AA8` (40), `fn_802F6BAC` (33), `fn_802F6DF8` (44) |
| `beCriReverb.cpp`, `beCriSoundFile.cpp` | Matching | `fn_802F6F10`; `fn_802F7244`, `fn_802F7294`, `virtual58` |
| `beCriReady.cpp` | NonMatching | `fn_802F6FB0` (90) |
| `beSound.cpp`, `beSoundInfoMeta.cpp`, `beSoundMeta.cpp` | Matching | `virtual88`; `virtual80`; `virtual58` |
| `beSoundSettings.cpp` | NonMatching | `virtual7C` (2) |
| `beSoundUpdate.cpp` | NonMatching | `virtual84` (124) |
| `beSoundMessage.cpp` | NonMatching | `virtual90`, the message handler (292 of 835) |
| `beSoundFind.cpp` | NonMatching | `fn_80315C94` (14) |
| `beSeCtl.cpp` | NonMatching | `virtual90` (55) |
| `bePlaySERef.cpp`, `beCriHandleRef.cpp` | Matching | `Ref<bePlaySE>`, `Ref<beCriHandle>` destructors |

Line counts are differing lines in `tools/hwdiff.py`. Every remaining difference is register assignment, except the two structural ones listed under "Open".

## Established

**Messenger protocol.** A message is a `beMessengerWork`: `_infoName` (`+0x0C`), `_ramNo` (`+0x10`) and `_message` (`+0x14`, the command). The messenger's `+0x10` is the current request's `beMessengerArgData`, one typed list per kind. The short accessors read and append those lists:

| Kind | Count | Read | Append |
| --- | --- | --- | --- |
| bool | | | `fn_80306964` |
| int | | `fn_80306B00` | `fn_80306A40` |
| float | `fn_80306B18` | `fn_80306BA0` | `fn_80306B28` (takes a `double`) |
| long (64-bit) | `fn_80306BB8` | `fn_80306C54` | `fn_80306BC8` |
| object | `fn_80306E1C` | `fn_80306FB4` | |
| string | `fn_80306FCC` | `fn_8030709C` | `fn_80306FDC` |

A request to another manager is opened with `fn_803065DC` / `fn_80305344` (target, info name, RAM number), filled with these appends, and sent with `fn_803061BC` / `fn_80305A28` (command). `fn_80304FD8(messenger, enum, command)` maps a command to an enum value.

**Destructor names from exception tables.** A handler's exception table names the out-of-line destructors of its locals, so they need their C++ names:

| Address | Name | Unit |
| --- | --- | --- |
| `0x800208AC` | `Gap::Core::igStringRef::~igStringRef` | original assembly, renamed |
| `0x80020CA0` | `Ref<igStringRefList>` | `Alchemy/src/igCore/igStringRefListRef.cpp`, cut out of a generated unit |
| `0x80315C20` | `Ref<bePlaySE>` | `bePlaySERef.cpp` |

A strong definition displaces a unit's weak copy, so the executable is unchanged. The map lists the discarded copy as an unreferenced duplicate, as it already did for `Ref<beCriHandle>`.

**`igStringRef`** (`src/Alchemy/include/igCore/igStringRef.h`) gains the inline members the handler needs:
- a constructor taking over a pooled string;
- a copy constructor that adds a reference (`igStringPoolItem::addRef`, `igAtomic::operator++`);
- `getString`.

String lists return elements by value (`fn_800218F4`) and append by value (`fn_8002080C`).

**Shapes that matched:**

| Original code | Source form |
| --- | --- |
| `self->_cri` loaded into a saved register before a nested call (`cri->f(g())` order) | a local `beCri *cri = self->_cri;` taken first; the beCri functions are `extern "C"` |
| A call's result moved through `r0` before being passed on | the result stored in a named local first |
| An unused float stored and its sign bit cleared through a byte (`stfs`, `lbz`, `rlwimi`, `stb`) | an inline absolute value that clears the sign through the argument's address: `reinterpret_cast<FloatBits *>(&value)->sign = 0`, result discarded; this also fixes the stack layout |
| Stack slots | later-declared objects get lower addresses; an inner scope ends their destructors before a following call |
| A signed 64-bit `> 0` test (`xoris`/`subfc`/`subfe`/`neg.`) | `id > 0`; `== 0` produces the `xor`/`or.` form |
| `(long long)short` passed to a float append | `__cvt_sll_dbl` with a `double` parameter; `float` produces `__cvt_sll_flt` |
| An empty-string fallback loaded through `lis`/`addi`/`lwz 0` | the other `strcmp` argument held in a local, then `if (!text) text = fallback` inline |

**Units.** Weak `Ref<T>` copies are emitted after the function that first needs them, as in `beSound` (`0x80315C20`, right after the handler). The leaf meta getters compile exact under the game flags, because unsized externs are not addressed as small data, so they replace their generated units.

## Open

- **Register assignment** in the 15 NonMatching functions. Ruled out on `fn_80315C94` (14 lines, the simplest case):
  - loop forms (count local, shared index, `while`, direct indexing, an element local);
  - an inline lookup helper;
  - `-opt` lifetimes and schedule variants (as for `beCri`).

  The original gives the list and count the highest registers and the strength-reduced offset the next. Mine gives the offset the highest.
- **The handler's effect loop:**
  - the original keeps an index and re-reads `_count` each pass, with the list hoisted;
  - mine becomes a `ctr` loop;
  - adding a call to the loop stops the `ctr` conversion but also reloads the list.
- **`beSound_virtual7C`:** the original loads `_sndfVolume` before reloading `self->_cri` for `fn_802F7244`. Locals, casts and an inline helper were tried.

**Next investigation:** register colouring on `fn_80315C94`, the smallest case:
- compare the order of virtual registers in MWCC's output for matched game loops of the same shape (`beCriVolume`, `beTimer`);
- try parameters copied into locals before the loop.
