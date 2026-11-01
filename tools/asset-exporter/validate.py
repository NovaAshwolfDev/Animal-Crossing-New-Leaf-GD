"""Validate every exported PNG, COLLADA document, and local image reference."""
import json
import sys
import xml.etree.ElementTree as ET
from collections import Counter
from pathlib import Path
from PIL import Image

root = Path(sys.argv[1])
counts = Counter()
errors = []
ns = {"c": "http://www.collada.org/2005/11/COLLADASchema"}
for path in sorted(root.rglob("*")):
    if not path.is_file():
        continue
    try:
        if path.suffix == ".png":
            with Image.open(path) as image:
                image.verify()
            counts["png"] += 1
        elif path.suffix == ".dae":
            doc = ET.parse(path)
            for node in doc.findall("c:library_images/c:image/c:init_from", ns):
                if not (path.parent / node.text).is_file():
                    raise ValueError(f"Missing image: {node.text}")
            if not doc.findall("c:library_geometries/c:geometry", ns):
                inventory = json.loads((path.parent / "source-models.json").read_text())
                def safe(name):
                    return "".join(c if c.isalnum() or c in "_- ." else "_" for c in name)
                original = next(m for m in inventory if safe(m["name"]) == path.stem)
                if original["meshes"] or original["shapes"]:
                    raise ValueError("Source geometry missing from export")
                if not doc.findall("c:library_visual_scenes/c:visual_scene/c:node", ns):
                    raise ValueError("Node-only source has no exported scene node")
                counts["node_only_dae"] += 1
            else:
                counts["mesh_dae"] += 1
            counts["dae"] += 1
        elif path.name.endswith(".material.json"):
            json.loads(path.read_text())
            counts["material_json"] += 1
    except Exception as exc:
        errors.append({"path": str(path.relative_to(root)), "error": str(exc)})
report = {"counts": dict(counts), "errors": errors}
(root / "validation.json").write_text(json.dumps(report, indent=2) + "\n")
print(json.dumps(report, indent=2))
sys.exit(bool(errors))
