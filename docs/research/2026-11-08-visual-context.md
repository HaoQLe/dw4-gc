# igGamecubeVisualContext as readable source (2026-11-08)

Batch chosen for throughput (user request: at least 30% of the batch verified). Alchemy's GameCube render-state
context (`igGamecubeVisualContext`, size 0x6E8) had 122 unmatched functions (23,952 code bytes) that use no shared
string pool, so they can be recovered as small synthetic units. The generator had failed on them for shape reasons;
hand-written code with typed structures matched most on the first or second try.

## Result

- 97 of 122 functions exact and linked from source (10,440 bytes, 43.6% of the batch), in 47 units under
  `src/Alchemy/src/igGfx/`, named by start address. Shared layout and helpers:
  `igGamecubeVisualContext.h` and `igGamecubeVisualContextMatrix.h`.
- Covered: lights (pool, enable list, colours, direction, position), material colours, clear colour and depth,
  frame swap and frame-rate hook, matrix stacks (push, pop, top, multiply, reserve), the 0x144 texture-like records
  (buffers, copy from the frame, format selection, binding, freeing with memory accounting), the 0x3F0 and 0x44C
  record pools, custom-state removal, per-slot byte settings.

## Layout established

- `GcPool<T>` (u16 count, free capacity, free count; u16 free list at 0x0C; records at 0x10) holds lights (0x4F0,
  0xA8-byte records), 0x144 records (0xA4), 0x3F0 records (0x2C) and the 0x44C lists. Its inline helpers
  `grow`, `take`, `freeIndex`, `reserveFree`, `isAllocated` reproduce the original code exactly.
- Dirty bits at 0x520 (`GC_DIRTY_*`): 0x100 lights, 0x200 material, 0x400 matrix mode 1, 0x40 modes 2..9,
  0x800 records. Matrix stacks: 0x458 (mode 0, refreshed through `fn_800F8118`), 0x45C (mode 1), 0x460 (modes 2..9).
- Frame statistics at `lbl_804F6180`; the 64-bit record-memory counter at `lbl_80563560` (symbol merged to 8 bytes).

## Compiler shapes that matched

- Vector getters load in reverse into temporaries (`float w = v.w, z = v.z, ...`) through a reference to a vector
  struct; a named record pointer prevents folding the member offset into the index.
- Pool growth matches only as an inline taking the growth count as a parameter (`grow(pool, 4)`); with a literal
  count the loop's offset register is initialised separately.
- Register colouring of list loops follows member-function inlines (`push`) or caller-local list variables
  (`removeAll` in `virtual434`); `mode - 2` held in a local reproduces the `subi/slwi/lwzx` index.
- Float literals the original reads at each use are `extern volatile const float` with a local where one block
  reuses it (`virtual1FC`, `virtual2C4`).
- `GXColor` passed by value must be a local of the calling function (`GC_SEND_COPY_CLEAR` macro), not an inline's
  result.
- `bool result = false; switch ... result = true;` for compare-tree predicates (`virtual404`).

- A local counted reference (`GcRef<T>`) with an inline destructor reproduces the original's release on every
  return (`virtual41C`); the compiler also emits a weak out-of-line destructor, which the linker strips (UNUSED in
  the map). `unit.sh` therefore exits 1 for `igGamecubeVisualContext800D9538` while the function is exact and the
  checksum passes, as with the Game RAM `Ref<>` copies.
- Loops over the custom lists start with a `count > 0` guard in the original (`virtual438`, `43C`).

## Checkpoint 4 (2026-11-08)

- `virtual214` (`800FF20C`): sets a 0x144 record's image for one level through a counted local reference. It
  matched once the table index was its own local (`int entry = fn_800FC2E4(...)`) and the memory-pool result
  used a variable declared at the top of the function.
- `virtual40C` (`800FBE7C`): one statistic of the last interval, mostly divided by the frames it took. The long
  long counters convert through `__cvt_sll_dbl` with no `frsp` before `fdivs`; no C expression gives that, so
  the unit declares the helper as returning `float`. `lbl_80563478` and `lbl_80563480` are 64-bit counters
  (`addc`/`adde` in `800E05A4`), merged into 8-byte symbols.
- Compiler findings:
  - MWCC builds a jump table only when a switch has at least four case ranges. A run of consecutive labels on
    the default body becomes one range, so `virtual2B0`'s original needs at least two separate labels there;
    which values they were is unknown (`case 2: case 4:` is a placeholder).
  - A pool built with `new` whose name is an `igStringRef` member (a class with a constructor) keeps the
    allocation result and `this` in separate registers (`cmplwi r3; beq; mr r30, r3`). A plain pointer, an
    inline `init`, or a `new` of a POD with a constructor gives `mr. rN, r3`. The same shape is in
    `fn_800EADD8` and `fn_800F6200`.
  - Objects the unit defines are addressed from one base register, with struct-copy pointers made from it
    (`addi r8, r31, 0xC74`). `virtual408` matched this only after its unit defined the whole `.bss` block
    `0x804F5870..0x804F6520` (13 objects, every size kept); externs and an overlay struct fold every field
    offset into the displacement.
  - The string pool container `lbl_80562140` is small data in the engine's units; `game/StringPool.h` declares it
    as an array, which is not, so the engine units use a local scalar declaration.

## Remaining (25 functions, 13,512 bytes) at checkpoint 3

- Readable NonMatching drafts (4,200 bytes):
  - `virtualB8` (372): the descriptor loads are scheduled above the free-count store;
  - `virtual13C` (368): light and count registers swapped;
  - `virtual2C0` (352): the compiler shares one `color != 0` between the two GX calls;
  - `virtual2C4` (244): `or` operand order of the packed colour;
  - `virtual118` (20): the original keeps the default-construct store before the assignment;
  - `virtual32C` (532): the original reloads the stack count after the empty test;
  - `virtual438` (432): index strength-reduced and an extra saved register;
  - `virtual43C` (536): self and loop registers permuted;
  - `virtual448` (296): the flag argument is loaded before the other arguments of slots 0x460/0x470;
  - `virtual7C` (356): list and count registers around the inline append;
  - `virtual28` (652): 99.2%, the arena flags' first bit goes through a temporary.
- Blocked in a synthetic unit (2,652 bytes): `virtual2E4`, `10C`, `70`, `310`, `11C`, `128` convert integers to
  float through the file's shared magic constants (`lbl_805668E0`, `lbl_805668E8`); `70` also owns function-local
  statics. They need one unit owning that `.sdata2` pool, as for the model controller's int-to-float cases.
- Not started (6,660 bytes): `vtableRead` (constructor and destructor chain), `428`, `24`, `2B0`, `214`, `80`
  (rodata `lbl_80414970`), `408`/`40C` (function-local statics in `.sbss`).

## Checkpoint 5 (2026-11-15): the three not-started functions

All three are readable NonMatching drafts; nothing new links. Baseline `baseline-cp5`, gate `vc5-cp1` (checksum
OK). Matched data +100 bytes (the render-mode table below matches but does not link).

- `vtableRead` (`800D61F0`, 252 bytes, 91.7%): builds a temporary context through the igContext (vtable
  `lbl_80473000`), igVisualContext (`lbl_80491D8C`) and igGamecubeVisualContext inline constructors, reads its
  vtable, then calls the out-of-line destructor `fn_800D62EC(&object, -1)`. The original keeps `&object` in r31
  for the igVisualContext level, the member constructions and the destructor call, and uses r1 offsets for
  the other levels' stores. Explicit calls give r1 everywhere. Real C++ members (out-of-line `igMatrix44f`
  constructor, an element class with constructor and destructor for `_vertexArray2`, which MWCC builds with
  `__construct_array`) give r31 everywhere and need C++ names for `fn_801285A0`, `fn_800A33B8`
  (`__construct_array`), `fn_800D6734`, `fn_800B6694` and `fn_800D62EC`, used by about 40 files. Rejected:
  inline matrix member, reference members with inline constructors (array form becomes `__construct_array`).
- `virtual428` (`800D9778`, 1,324 bytes, 99.3%): adds a custom state collection named after `fn_800D965C(name)`
  (flags 1 when the name starts with `"light."`, `lbl_8055EE38`) holding the given objects, in the first null
  slot of the 0x130 list or appended. It then adds a custom field `"<name>.<field>"` to the 0x134 list for each
  vector or matrix field of the objects' class. Returns the collection's index. Shapes that matched:
  - a null search that stores its null value on the stack and reloads the list afterwards: a member function
    `list->find(GcObjectPtr(0))`, where `GcObjectPtr` has a constructor that adds a reference (folded for
    null) and no destructor. A destructor emits code; without the constructor body the value is optimised
    out; a free function keeps the list in a saved register;
  - `set(index, object)` as a member function of the list, too;
  - a type test whose metaobject is read before the virtual call: `isA(field, meta)` inline (`meta ==
    metaOf(object)`);
  - the custom field in a register local next to its owning holder; the name set through
    `setName(named, string)` taking the string object; the field name as a temporary passed to `append`;
  - `"light."` declared with its size (`[7]`) so it is small data.
  Remaining: register colouring (the first search's index and the returned value) and the stack slots of the
  field-name reference and the first search's null pointer, which are swapped. Every declaration and
  temporary form tried moves one slot or the other.
- `virtual80` (`800EC86C`, 1,200 bytes, 96.6%): opens the display: picks a drawable 0x3F0 record (types 0..2),
  sets its formats, allocates 64 KB for GX, `VIInit`, selects one of 25 SDK render modes from the local table
  (`.rodata` `lbl_80414970`, owned by the unit and exact) by `tvFormat` (0x509: 0 NTSC, 1 PAL, 4 MPAL, 5
  EURGB60, 6 progressive) and the flags at 0x500/0x504/0x508, then allocates and clears the two frame buffers
  and sets the copy state. Everything after the record search is exact. Findings:
  - `t == 0 || t == 1 || t == 2` folds the last two into a range check (`subi; cmplwi`); separate `if`
    statements, as the original has, keep three `cmpwi/beq`. In a loop condition `||` did not fold;
  - the record pointer goes through a temporary (`candidate`) before `record`;
  - the search loop with an early exit becomes a `ctr` loop; the original re-reads the pool counts each pass.
    This is the open pattern of the file list and sound batches; a `while`, a `goto`-written loop and a
    `goto` exit do the same.
