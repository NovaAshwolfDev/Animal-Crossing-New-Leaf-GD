"""Extract version-specific generation tables with source offsets and hashes."""
import hashlib
import json
import struct
import sys
from pathlib import Path

root = Path(__file__).resolve().parents[1]
repo = root.parents[1]
code = Path(sys.argv[1]).read_bytes()
sha = hashlib.sha256(code).hexdigest()
if sha != '1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04':
    raise SystemExit('Executable hash mismatch')

def read(address, size):
    return code[address - 0x100000:address - 0x100000 + size]

tables = {'executable_sha256': sha, 'acre_category_table_address': '0x009d8880',
          'acre_categories': list(read(0x9D8880, 356)),
          'tile_class_table_address': '0x009e9f6a',
          'tile_classes': list(read(0x9E9F6A, 253)),
          'border_categories': {'left': list(read(0x932134, 42)),
                                'right': list(read(0x93215E, 42))},
          'templates': {}}
for side in ['left', 'right']:
    path = repo / f'assets/native/romfs/TemplateData/village/sea_side_{side}.bin'
    data = path.read_bytes()
    if len(data) % 40:
        raise ValueError('Record alignment mismatch')
    tables['templates'][side] = {
        'source': str(path.relative_to(repo)), 'sha256': hashlib.sha256(data).hexdigest(),
        'record_size': 40,
        'records': [list(struct.unpack_from('<20H', data, n)) for n in range(0, len(data), 40)]}
(root / 'data/tables.json').write_text(json.dumps(tables, indent=2) + '\n')
print('Extracted two sets of 56 templates, two 42-byte borders, and 356 acre categories')
