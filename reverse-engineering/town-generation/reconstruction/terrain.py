"""Exact terrain/acre-ID phase at 0x00593474; not full town generation.

Inputs are an already initialized GameRng and the ocean side. The caller draws
both grass/cliff values before entering this phase. Keeping the RNG object lets
callers preserve the original draw order across phases.
"""
from acres import TABLES, template_categories, choose_acre_variant


def shuffle(values, rng):
    """0x5a6734: descending Fisher-Yates with multiply-high selection."""
    for remaining in range(len(values), 1, -1):
        index = rng.bounded(remaining)
        values[index], values[remaining - 1] = values[remaining - 1], values[index]


def replace_one(grid, old, new, rng):
    """0x232288 consumes one draw even if there are no matching cells."""
    candidates = [index for index, value in enumerate(grid) if value == old]
    selected = rng.bounded(len(candidates))
    if candidates:
        grid[candidates[selected]] = new


def promote_one(grid, eligible, replacements, rng):
    """0x232678/23299c/232c8c/232f7c: shuffle all matches, change first."""
    candidates = [index for index, value in enumerate(grid) if value in eligible]
    if candidates:
        shuffle(candidates, rng)
        cell = candidates[0]
        grid[cell] = replacements[grid[cell]]


def generate_terrain(side, rng):
    if side not in ('left', 'right'):
        raise ValueError('side must be left or right')
    template = rng.bounded(len(TABLES['templates'][side]['records']))
    grid = template_categories(side, template)
    grid[10] = 4
    for category in (1, 2, 3):
        replace_one(grid, 0, category, rng)
    promote_one(grid, range(8, 20), {n: n + 12 for n in range(8, 20)}, rng)
    promote_one(grid, (34, 35, 39), {34: 52, 35: 55, 39: 57}, rng)
    if side == 'left':
        promote_one(grid, (44, 42), {44: 54, 42: 58}, rng)
    else:
        promote_one(grid, (43, 38), {43: 53, 38: 56}, rng)
    # 0x2320ec iterates row-major and changes neighboring category cells.
    for index in range(42):
        if grid[index] == 33:
            grid[index + 1] = 60
        if grid[index] == 32:
            grid[index - 1] = 69
    acres = [choose_acre_variant(category, rng) for category in grid]
    return {'template_index': template, 'categories': grid, 'acres': acres}
