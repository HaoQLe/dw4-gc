# igGamecubeVisualContext as readable source (2026-11-08)

Batch chosen for throughput (user request: at least 30% of the batch verified). Alchemy's GameCube render-state
context (`igGamecubeVisualContext`, size 0x6E8) had 122 unmatched functions (23,952 code bytes) that use no shared
string pool, so they can be recovered as small synthetic units. The generator had failed on them for shape reasons;
hand-written code with typed structures matched most on the first or second try.

## Result

- 95 of 122 functions exact and linked from source (9,816 bytes, 41% of the batch), in 45 units under
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

## Remaining (27 functions, 14,136 bytes)

- Readable NonMatching drafts (1,888 bytes):
  - `virtualB8` (372): the descriptor loads are scheduled above the free-count store;
  - `virtual13C` (368): light and count registers swapped;
  - `virtual2C0` (352): the compiler shares one `color != 0` between the two GX calls;
  - `virtual2C4` (244): `or` operand order of the packed colour;
  - `virtual118` (20): the original keeps the default-construct store before the assignment;
  - `virtual32C` (532): the original reloads the stack count after the empty test.
- Blocked in a synthetic unit (1,448 bytes): `virtual2E4`, `10C`, `70`, `310` convert integers to float through
  the file's shared magic constants (`lbl_805668E0`, `lbl_805668E8`); `70` also owns function-local statics. They
  need one unit owning that `.sdata2` pool, as for the model controller's int-to-float cases.
- Use rodata tables (1,828 bytes): `virtual80` (`lbl_80414970`), `448`/`44C` (`lbl_80414A88`); not yet examined
  for ownership.
- Not started (8,972 bytes): `vtableRead`, `41C`, `428`, `438`, `43C` (igStringRef locals), `7C`, `2B0`, `24`,
  `28`, `11C`, `128`, `408`, `40C`, `214`.
