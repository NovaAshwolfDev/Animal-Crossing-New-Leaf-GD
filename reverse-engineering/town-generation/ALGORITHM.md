# Algorithm map and review status

All addresses below are virtual ARM addresses in the exact executable identified
in `evidence/provenance.json`. Names applied by this project are analytical names,
not symbols recovered from the original source.

## Entry points

| Address | Role | Review status |
| --- | --- | --- |
| `0x63918c`, `0x639344`, `0x639978`, `0x639fdc` | Town-initialization wrappers invoking generation and subsequent save/population initialization | Static pseudocode exported; not reconstructed end to end |
| `0x2d87d8` | Prepare four candidate seeds and alternating coastline bytes | ARM/VFP differential test passed |
| `0x2d79bc` | Load both template resources, call candidate step until success, release resources | Control flow reviewed against assembly; engine lifecycle not emulated |
| `0x2d7f88` | Candidate generation state machine | Static stages and rejection conditions reviewed; not fully emulated |
| `0x593474` | Generate full 42-acre terrain grid | Entire phase reconstructed and differential-tested |
| `0x5be4f0` / `0x5be58c` | Four-word RNG seed/next | Reconstructed and tested |
| `0x1218f0` / `0x11df38` | Separate global float RNG and bounded signed-int draw | Reconstructed and tested through seed setup |

## Candidate seed preparation (`0x2d87d8`)

Draw four bounded values with bound `0x7fffffff` using the global float RNG. These
are not four draws from the terrain xorshift RNG. Float32 rounding matters: the
bound rounds to `2^31` before multiplication. Draw another value with bound 100.
If that value is at most 50, set coastline bytes to `[1,0,1,0]`; otherwise use
`[0,1,0,1]`. Four candidate seed words are stored at `0xb3ff68`; the four coastline
bytes are at `0x9ea48c`. The global float RNG state is at `0x9ec510`.

## Candidate state machine (`0x2d7f88`)

This section is a control-flow reconstruction. The placement functions remain
provisional decompiler output. It must not be used as an executable full generator.

The phase word is at `0x9ea488`; the per-candidate xorshift state is at `0xb402cc`.
Candidate indices 0–3 use their own seed/coast entry; out-of-range indices fall
back to entry 0.

### Phase 0: reset, terrain, fixed data, mandatory structures

- Seed the four-word RNG from the selected candidate seed.
- Reset field and placement state (`0x285eb8`, `0x285804`, `0x3c25c4`), initialize
  the destination town map (`0x697944`), and reset associated save state.
- Draw two values in `[0,3)` and store them in bytes 1 and 2 of the map prefix.
  They correspond to grass/cliff variation fields; the terrain routine writes
  the coastline byte at offset 0.
- Call `terrain_generate` using the selected coastline's template resource.
- Copy the 7×6 acre grid to the field runtime, attach the twenty interior item
  grids, and load field resources (`0x7a14f4`).
- For each interior acre, read fixed six-byte item records through `0x78cff4`
  → `0x230a40`, then apply them through `0x797688`.
- For each interior acre, read fixed four-byte structure records through
  `0x1e9800`, convert local coordinates through `0x745ff8`, and place structure
  IDs through `0x2876dc`.
- Run the additional placement routine `0x1e6910`.
- Scan placed structures. Accept this phase only if each of the following counts
  is exactly one: IDs in `0x54..0x57` (`0x76994c`), IDs in `0x50..0x53`
  (`0x769928`), and IDs classified as category `0x0f` (`0x769904`, using the table
  read by `0x6361d8`). In this binary that last class comprises IDs `0x8e..0xa5`.
- On success, set phase to 1 and return "not finished". On failure, reset phase
  to 0, draw a new candidate seed with the *global float RNG*, and return "not
  finished". The outer loop retries without an arbitrary retry limit.

The first two ID ranges correspond to station/town-hall families in community
terminology, and the third to bridge variants. Numeric ranges are the authoritative
checks here; Welcome Amiibo's later ID list has shifted entries.

### Phase 1: additional placement and validation

- Call `0x2865a8` with count 5 and the candidate RNG. Its placement attempts use
  IDs 8–12 and include fallback placement routines.
- Call `0x1e93ac`, which searches candidate positions and attempts placement of
  structure ID `0x5c` using collision/checker callbacks.
- Compute a location with `0x7a1d28` and place ID `0x59` through `0x2876dc`.
- Require exactly five objects whose IDs are in `[8,17]` (the table used by
  `0x767cd4`) and exactly one object with ID `0x5c`.
- On success, set phase to 2 and return "not finished". On failure, reset phase
  to 0 and replace this candidate's seed using the global float RNG, as above.

IDs 8–17 are the ten villager-house slots in community terminology. This does not
mean the villager identities or all resident save data are initialized here.

### Phase 2: finalization

Find the field resource referenced by the stored grass-baldness resource handle,
call `0x7a0858` on the field runtime, and call `0x3c01a8` on the associated save
region using the candidate RNG. Reset phase to 0 and return success. Unexpected
phase values also reset and return success in the machine-code branch; they are
not evidence of a normal generation path.

The outer wrappers subsequently call further routines such as `0x745594`,
`0x287424`, and save/player initialization. Their direct-call closure is included
in `original/`, but their whole behavior has not been reconstructed or tested.

## Terrain phase (`0x593474`)

The Python implementation in `reconstruction/terrain.py` is the reviewed source
for this phase. Categories below are numeric byte codes, not final acre IDs.

| Operation | Original routine | Exact behavior |
| --- | --- | --- |
| Record selection/copy | `0x3d56c8` / `0x593474` | `index = high32(next_u32 * record_count)`; copy a 40-byte record |
| Interior expansion | `0x231f90` | Replace border marker `0x75` in row-major order with low bytes of twenty template words |
| Three special zero cells | `0x232288` | Draw among matching zeros; replace with 1, then 2, then 3; consume a draw even with zero candidates |
| Category promotion A | `0x232678` | Shuffle cells in categories 8–19; add 12 to the first selected category |
| Category promotion B | `0x232c8c` | Shuffle cells in 34,35,39; replace first with 52,55,57 respectively |
| Left-coast promotion | `0x232f7c` | Shuffle cells in 44,42; replace first with 54,58 respectively |
| Right-coast promotion | `0x23299c` | Shuffle cells in 43,38; replace first with 53,56 respectively |
| Neighbor fix | `0x2320ec` | Category 33 writes 60 to its right neighbor; 32 writes 69 to its left neighbor |
| Shuffle | `0x5a6734` | Descending Fisher–Yates; multiply-high bounded draws, not modulo |
| Final acre variant | `0x231f0c` | Scan 356 entries, retain at most seven matching IDs, draw once per acre; return zero if no matches |

Before the three zero-cell selections, cell 10 is forced to category 4. After
neighbor fixing, all 42 category cells are converted to `u16` acre IDs. Both the
resulting grid and the final RNG state were compared with the original routine
for 524 cases covering every template on each side.

## Fixed record formats

`FgData/field/field.bin` and `StrcData/strc.bin` start with a `u16` count-table
length, then one `u8` record count per acre ID, then concatenated records.

- Field: 356 count entries, 2,079 records of `u16 item_id, u16 flags, u8 x, u8 y`.
- Structures: 261 count entries, 69 records of `u16 structure_id, u8 x, u8 y`.

The original readers sum counts preceding the selected acre to locate its
payload. They return zero without copying if record bytes exceed caller capacity.
The decoder and all valid table entries were compared with ARM execution,
including capacity-boundary cases. They do not perform random placement.

## One confirmed placement callback (`0x5893d4`)

`0x1e93ac` constructs a checker whose first-slot function pointer is at
`0x92d59c`. The dispatcher at `0x74921c` invokes that first slot on every 16×16
acre position, establishing the callback target `0x5893d4`.

The reconstructed checker accepts a candidate `(x,y)` only when `2 <= x <= 14`
and `0 <= y <= 14`, the four codes at `(x-2..x+1,y)` are all `0x36`, and all four
codes immediately below map to class 2 through the byte table at `0x9e9f6a`.
It allocates an `(x,y)` pair and appends it to its output vector. Its callback
return value is zero, allowing the dispatcher to continue scanning.

This reconstruction passed 3,888 synthetic-coordinate comparisons, including
negative/out-of-acre coordinates, using the original callback with only its
allocator stubbed. It does not implement the containing acre-selection routine,
subsequent shuffle, field resource loading, or all other placement callbacks.
