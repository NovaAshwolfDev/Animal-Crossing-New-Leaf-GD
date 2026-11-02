"""Print the four PRE-REJECTION terrain candidates for a global RNG state.

This does not simulate placement/rejection or produce a complete accepted town.
Usage: python3 preview_terrain.py 0x12345678
"""
import json
import sys
from rng import GameRng, GlobalFloatRng, prepare_candidate_seeds
from terrain import generate_terrain

global_rng=GlobalFloatRng(int(sys.argv[1],0))
setup=prepare_candidate_seeds(global_rng)
output=[]
for seed,side in zip(setup['seeds'],setup['ocean_sides']):
    rng=GameRng(seed)
    grass,cliff=rng.bounded(3),rng.bounded(3)
    output.append({'seed':seed,'side':side,'grass_type':grass,'cliff_type':cliff,
                   **generate_terrain('right' if side else 'left',rng),
                   'rng_state_after_terrain':rng.state})
print(json.dumps({'scope':'pre-rejection terrain only; not complete towns',
                  'candidates':output,'global_rng_state_after_setup':global_rng.state},indent=2))
