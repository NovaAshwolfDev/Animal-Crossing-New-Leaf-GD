"""Verified building blocks, not a complete town generator."""
import json
from pathlib import Path
TABLES = json.loads((Path(__file__).resolve().parents[1] / 'data/tables.json').read_text())


def template_categories(side, index):
    """0x231f90: expand 20 template words into the 42-byte category grid."""
    result = TABLES['border_categories'][side].copy()
    words = iter(TABLES['templates'][side]['records'][index])
    for cell, category in enumerate(result):
        if category == 0x75:
            result[cell] = next(words) & 0xFF
    return result


def choose_acre_variant(category, rng):
    """0x231f0c: scan 356 IDs, retain at most seven matches, consume one draw.

    Even a category with zero matches consumes RNG and returns zero. Matching
    IDs beyond the first seven are ignored, as in the original machine code.
    """
    matches = [index for index, value in enumerate(TABLES['acre_categories'])
               if value == category][:7]
    index = rng.bounded(len(matches))
    return matches[index] if matches else 0
