"""Record hashes and native shader locations after ctrtool extraction."""
import hashlib
import json
import sys
from pathlib import Path

source, output = map(Path, sys.argv[1:3])
romfs = output / "romfs"
records = []
for path in sorted(romfs.rglob("*")):
    if path.is_file():
        records.append({"path": path.relative_to(romfs).as_posix(),
                        "size": path.stat().st_size,
                        "sha256": hashlib.sha256(path.read_bytes()).hexdigest()})
with source.open("rb") as stream:
    source_hash = hashlib.file_digest(stream, "sha256").hexdigest()
(output / "manifest.json").write_text(json.dumps({
    "source": source.name, "source_sha256": source_hash, "files": records
}, indent=2) + "\n")
(output / "shaders.json").write_text(json.dumps([
    r for r in records if Path(r["path"]).suffix in {".shbin", ".bcsdr"}
], indent=2) + "\n")
print(f"Inventoried {len(records)} native files")
