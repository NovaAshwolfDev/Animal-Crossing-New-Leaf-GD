# Asset exporter

Requires .NET 8, Git, a C/C++ toolchain, Make, Python 3.11+, and Pillow (for validation).
The prepared cloud instance has .NET at `/workspace/tools/dotnet/dotnet`, ctrtool at
`/workspace/tools/ctrtool`, and the converter at
`/workspace/tools/spica-export/bin/Release/net8.0/Exporter.dll`.
No graphical application or game keys were required for this unencrypted CXI.

From the repository root, retrieve the LFS object with `git lfs install --local`
and `git lfs pull`. Its SHA-256 must be
`f3a907d8395ce2c6744cacfe9283267197d6edb72263f72057d685c39b211b08`.

Build the converter:

```bash
bash tools/asset-exporter/build.sh
```

`DOTNET_BIN` and `ASSET_TOOL_CACHE` override the default paths. The build script
fetches SPICA commit `82acbd63695e4ef8b95a92ce884f25ec1044788f` and compiles its
core together with `Program.cs`. SPICA's MIT license is included here.
System.Drawing.Common is a compile dependency; image export uses managed PNG
encoding and does not call the platform-specific Bitmap API.

ctrtool was built from Project_CTR commit
`d52c2b0e788c2d085763d7c5dcc4b2edd9ffb7d8`:

```bash
git clone https://github.com/3DSGuy/Project_CTR.git /workspace/tools/Project_CTR
git -C /workspace/tools/Project_CTR checkout --detach d52c2b0e788c2d085763d7c5dcc4b2edd9ffb7d8
make -C /workspace/tools/Project_CTR/ctrtool deps -j2
make -C /workspace/tools/Project_CTR/ctrtool -j2
cp /workspace/tools/Project_CTR/ctrtool/bin/ctrtool /workspace/tools/ctrtool
```

Extract to a new directory if preserving an existing extraction:

```bash
/workspace/tools/ctrtool --romfsdir=assets/native/romfs main.cxi
python3 tools/asset-exporter/inventory.py main.cxi assets/native
DOTNET_GCHeapHardLimit=0x80000000 /workspace/tools/dotnet/dotnet \
  /workspace/tools/spica-export/bin/Release/net8.0/Exporter.dll \
  assets/native/romfs assets/converted
python3 tools/asset-exporter/validate.py assets/converted
```

The converter resumes successful resources using `conversion.jsonl`; failed
resources are retried. Use a fresh destination after changing conversion behavior
or input data, as successful entries are otherwise retained. It writes model
DAEs with skeletons, base-level PNG textures (all six faces for cubemaps), and
native material fields as JSON. Standard COLLADA materials are embedded in DAEs.
Names remain scoped by their source resource to avoid cross-resource collisions.
It does not export animations, mipmaps, or implement 3DS shader emulation.

`summary.json` counts the most recent completed conversion, and
`conversion.jsonl` records attempts; the latest entry for each source is its
current outcome. Validation checks every PNG, material JSON, COLLADA document,
and referenced image. A separate Godot headless check is needed to establish
engine import compatibility; XML validation alone does not prove that.
