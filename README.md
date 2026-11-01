# Animal Crossing: New Leaf assets for Godot

Extracted locally from the uploaded `main.cxi` (title ID `0004000000086300`,
product `CTR-P-EGDE`). The original CXI is unchanged. Extracted assets and conversion tools are included
in this repository.

| Location | Contents |
| --- | --- |
| `assets/native/romfs/` | Complete extracted filesystem: 12,950 files, including 8,629 CGFX/BCRES resources |
| `assets/converted/` | 8,119 mesh COLLADA models, 48 node-only COLLADA scenes, 19,130 PNG textures, 13,695 material JSON records |
| `assets/native/romfs/Shader/` | Original compiled shader resources |
| `assets/native/romfs/CFL/CflShader.shbin` | Additional original compiled shader |
| `assets/native/shaders.json` | Index of all 10 `.shbin` and 2 `.bcsdr` files |
| `assets/native/manifest.json` | Per-file size and SHA-256 inventory, plus source CXI hash |
| `tools/asset-exporter/` | Converter source, pinned dependency build script, validation tools, and reproduction instructions |

Original directory and resource names are retained. A converted source such as
`Npc/Normal/Model/chn09.bcres` becomes the directory
`assets/converted/Npc/Normal/Model/chn09/`, with model, textures, and material
records together. COLLADA files include standard materials and texture paths.
The JSON records retain the original material fields, including PICA texture
environments, blending, shader parameters, and sampler state; they are reference
data, not Godot `.tres` materials.

## Using the assets

Copy a model's whole converted directory into a Godot project to keep its relative
PNG paths intact, then let Godot import its `.dae`. The repository does not yet
contain a game project. Native files are excluded from Godot scanning with
`assets/native/.gdignore`.

For example, `assets/converted/Bg/Indoor/Models/idr_accessory/idr_accessory.dae`
imports as a scene with 12 mesh surfaces, 11 of which have an albedo texture.
Character models include skeleton/skin data where present; animation export was
not part of this pass.

## Validation and limits

`assets/converted/validation.json` records successful structural checks of every
PNG, material JSON, COLLADA document, and local COLLADA image reference. The 48
node-only exports were checked against source models containing zero meshes and
zero shapes, rather than counted as missing geometry.

`assets/converted/godot-smoke.txt` records successful Godot 4.5.1 imports and
instantiation of an interior, furniture trophy, fish, accessory, and villager.
This is a representative engine check; the entire collection has not been
visually compared against the game.

All 8,629 BCRES resources were attempted. Three legacy shadow resources remain
unconverted because SPICA cannot parse their older structure:

- `Strc/Shadows/bench2x1_shadow.bcres`
- `Strc/Shadows/lamp_shadow.bcres`
- `Strc/Shadows/my_home_shadow.bcres`

Their original bytes are preserved in the native tree. See
`assets/converted/conversion-status.json` for each resource's latest outcome,
`summary.json` for counts, and `conversion.jsonl` for conversion attempt history.

The compiled 3DS shaders are extracted, **not translated into Godot shaders**.
The imported COLLADA materials use standard shading fallbacks. Per-model
`.warnings.txt` files record shader differences and references to shared textures
not embedded in that particular BCRES. Shared source textures remain in the
extracted collection; binding them and reproducing the original lighting,
combiners, procedural effects, and transparency behavior requires additional
material/shader work. PNG exports contain the base mip level; original mipmaps
and all other native data remain in BCRES files. Embedded archives and other
non-CGFX containers are retained as extracted and have not been recursively
converted.

The CXI SHA-256 matches its Git LFS object. ctrtool verified the RomFS and ExeFS
header hashes and content hash trees. The supplied unencrypted image's NCCH
header signature fails verification; no claim of an authentic signed game image
is made. Detailed output is in `assets/native/container-verification.txt`.

For repeatable commands, see [the exporter instructions](tools/asset-exporter/README.md).
