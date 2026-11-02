"""Run all binary differential checks, preserving each process's exit status."""
import json
import subprocess
import sys
from pathlib import Path
root=Path(__file__).resolve().parents[1]
code=Path(sys.argv[1]).resolve()
scripts=['verify_rng.py','verify_seed_setup.py','verify_acres.py','verify_terrain.py','verify_field_templates.py','verify_placement_checker.py']
for name in scripts:
    print(f'Checking {name}',flush=True)
    result=subprocess.run([sys.executable,str(root/'tools'/name),str(code)])
    if result.returncode:
        raise SystemExit(result.returncode)
reports={p.name:json.loads(p.read_text()) for p in sorted((root/'evidence').glob('*verification.json'))}
(root/'evidence/verification-summary.json').write_text(json.dumps({'status':'all included differential suites passed',
    'scope':'RNGs, seed setup, template/variant selection, full terrain phase, fixed record readers, one candidate-position checker; not full town generation',
    'reports':reports},indent=2)+'\n')
