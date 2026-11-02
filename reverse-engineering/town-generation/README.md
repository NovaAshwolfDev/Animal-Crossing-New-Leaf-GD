# Original town-generation research

The seed-selection and complete terrain/acre-ID phase have been reconstructed
and compared against the original ARM executable. **The complete new-town
algorithm has not yet been reconstructed or verified end to end.** Building,
collision, population, vegetation, and save-initialization routines are present
as provisional decompiler output, not a finished Godot implementation.

This analysis uses the uploaded **CTR-P-EGDE, title 0004000000086300, remaster 3**
CXI. Addresses refer to that exact build. They must not be substituted with
Welcome Amiibo addresses or IDs. Hashes, memory layout, and tool versions are in
[evidence/provenance.json](evidence/provenance.json).

## What is available

| Location | Contents and confidence |
| --- | --- |
| `reconstruction/rng.py` | Both RNGs and four-candidate seed/coast setup; compared with ARM/VFP execution |
| `reconstruction/terrain.py` | Full `0x593474` terrain phase, including exact RNG draw order; compared with original execution |
| `reconstruction/acres.py` | Template expansion and bounded acre-variant selection; compared with original execution |
| `reconstruction/placement_checker.py` | One structure-0x5c position checker; tested with original ARM code and a stub allocator |
| `reconstruction/field_templates.py` | Fixed item/structure record readers; compared with original execution |
| `data/tables.json` | Both sets of 56 templates, border categories, and 356 acre-category entries |
| `data/fixed-placement-records.json` | 2,079 fixed item records and 69 fixed structure records, indexed by acre |
| `original/decompiled/` | Ghidra pseudocode for 1,093 statically reachable functions, including SDK/runtime dependencies |
| `original/assembly/` | Matching disassembly for checking decompiler output |
| `original/static-callgraph.tsv` | Direct-call graph rooted at four town-initialization wrappers and generation/seed routines |
| `original/computed-flow-sites.tsv` | 270 indirect call/jump sites needing review; this includes jump tables and runtime dispatch |
| `evidence/` | Executed checks, samples, source hashes, string cross-references, and analysis warnings |

The C files are **pseudocode**, not recovered original source or compile-ready
portable C. Types, argument counts, function boundaries, floating-point returns,
and virtual calls can be inferred incorrectly. Some listings contain uninitialized
placeholder variables. A successful Ghidra export does not establish semantic
correctness. The assembly and original-code differential tests take precedence.
The optional callback-root export adds conservative first-slot function-pointer
candidates and their direct dependencies. Their presence does not prove every
virtual target has been resolved. One such target (`0x5893d4`) was confirmed
against its dispatch site and differential-tested.
Only the explicitly tested Python routines have been reconstructed and validated.

## Verified terrain algorithm

See [ALGORITHM.md](ALGORITHM.md) for addresses and the outer state machine.
The terrain phase executes this sequence:

1. Draw an index into the selected coastline's 56 templates using the high word
   of a 32×32-bit product. Each record contains twenty little-endian `u16`s.
2. Expand the record into the twenty interior cells of a 7×6 category grid using
   the side-specific border. Force category 4 at linear cell 10.
3. Replace three separately selected category-0 cells with categories 1, 2, and
   3. Each selection consumes a random draw even if no cell matches.
4. Shuffle eligible positions and promote one category from 8–19. Then perform
   another promotion among 34, 35, 39, followed by a coastline-specific promotion.
   The descending Fisher–Yates shuffles consume all required draws, even though
   only the first shuffled position is used.
5. Fix neighbors of categories 32 and 33, in row-major order.
6. For each of 42 category cells, scan the 356-entry acre-category table, retain
   at most the first seven matching acre IDs, and choose a variant with another
   multiply-high draw. A category with no matches consumes a draw and returns 0.

The caller draws grass and cliff values *before* this phase. The outer generator
can reject a candidate, obtain a new seed from a separate global RNG, and restart.
Consequently, a terrain-phase seed is not enough to describe the final accepted
new town without the later stages.

## Executed checks

All included differential suites passed against the supplied executable:

| Check | Cases |
| --- | --- |
| Primary xorshift RNG | 512 seeds, 32,768 outputs, all state words compared |
| Global float RNG | 16,384 outputs, exact float return bits and state compared |
| Entire candidate seed/coast setup routine | 512 initial global RNG states |
| Template expansion | All 112 templates |
| Acre variant selection | 1,024 category/seed combinations, including empty and truncated match lists |
| Entire terrain phase | 524 maps, covering all 56 templates on both coastline sides; all 42 acre IDs and final RNG words compared |
| Structure-0x5c candidate checker | 3,888 synthetic positions; bounds, callback return, coordinate output, and list updates compared |
| Fixed-record readers | 1,686 cases, including insufficient output capacity and untouched output bytes |

These are original-machine-code comparisons using Unicorn, not a second copy of
the Python implementation. Terrain execution initializes the game's static
rectangle to `[0,0,6,5]` and marks its initialization guard complete, avoiding
platform synchronization. It does not hook or replace generation calls. The
separate checker test initializes 16×16 bounds and replaces only its allocator
with a valid fixed allocation; that is an isolated callback test, not a live
collision/placement test. The
float checks enable VFP with FPSCR round-to-nearest. None of these tests runs the
whole game or validates the outer placement/rejection pipeline.

## Reproduce

The prepared instance has ctrtool at `/workspace/tools/ctrtool`, Ghidra at
`/workspace/tools/ghidra_11.4.2_PUBLIC`, and Temurin JDK at `/workspace/tools/jdk21`.
The persistent analysis project and extracted executable are outside the Git
checkout under `/workspace/research/acnl/`.

Extract the original executable (do not substitute a compressed code image):

```bash
/workspace/tools/ctrtool --exefsdir=/workspace/research/acnl/exefs main.cxi
sha256sum /workspace/research/acnl/exefs/code.bin
```

Expected code hash:
`1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04`.
The verification tools reject any other executable.

```bash
python3 -m pip install --target /workspace/tools/acnl-python \
  -r reverse-engineering/town-generation/tools/requirements.txt
PYTHONPATH=/workspace/tools/acnl-python python3 \
  reverse-engineering/town-generation/tools/run_verification.py \
  /workspace/research/acnl/exefs/code.bin
```

To print four pre-rejection terrain candidates from a global RNG state:

```bash
python3 reverse-engineering/town-generation/reconstruction/preview_terrain.py 0x12345678
```

This demonstration is explicitly **not** a full town generator and does not
predict which candidate seeds survive placement rejection.

To recreate the static analysis, use a new Ghidra project name rather than
reimporting over an existing project. Configure Ghidra's `JAVA_HOME_OVERRIDE` to
the JDK path and use a writable Java user directory. From the repository root:

```bash
mkdir -p /workspace/research/acnl/ghidra-project /workspace/research/acnl/java-home
JAVA_TOOL_OPTIONS=-Duser.home=/workspace/research/acnl/java-home \
  /workspace/tools/ghidra_11.4.2_PUBLIC/support/analyzeHeadless \
  /workspace/research/acnl/ghidra-project ACNL_new \
  -import /workspace/research/acnl/exefs/code.bin \
  -loader BinaryLoader -loader-baseAddr 0x100000 \
  -processor ARM:LE:32:v6 -cspec default -max-cpu 4 \
  -scriptPath "$PWD/reverse-engineering/town-generation/tools" \
  -preScript PrepareACNL.java \
  -postScript InspectTown.java /workspace/research/acnl/ghidra-output
```

Then run the closure exporter on that project with `-process code.bin -noanalysis
-postScript ExportTownClosure.java <output-directory> <callback-candidate-file>`. It applies the explicitly
verified prototypes and exports direct-call closure, pseudocode, assembly, and
computed flow sites. Use `evidence/callback-root-candidates.txt` as the optional
callback-candidate file. Analysis warnings are retained in `evidence/analysis-warnings.txt`.
The full analysis reported 30,078 functions and took about nine minutes on this
instance; exporting the selected closure was much shorter.

## What remains for a complete reconstruction

The next work is to resolve placement/collision callbacks and reconstruct their
live engine inputs, then translate and validate the placement/rejection stages,
initial population and vegetation, and final save initialization. The generated
listings identify these routines but are not proof that they have been correctly
ported. A full original-runtime trace or emulator state at town generation would
help validate that work; the included terrain samples cannot replace it.
