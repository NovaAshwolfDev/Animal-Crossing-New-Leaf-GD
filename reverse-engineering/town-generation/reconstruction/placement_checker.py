"""0x5893d4: candidate-position predicate used while placing structure 0x5c.

This is one callback, not the complete placement pipeline. Input is a 16x16
acre's tile-code grid. Classes are read from the exact executable's byte table.
"""
from acres import TABLES


def accepts_position(tile_codes, x, y):
    if not (2 <= x <= 14 and 0 <= y <= 14):
        return False
    if any(tile_codes[y][column] != 0x36 for column in range(x - 2, x + 2)):
        return False
    classes = TABLES['tile_classes']
    return all(classes[code if code <= 0xFC else 0] == 2
               for code in tile_codes[y + 1][x - 2:x + 2])


def candidate_positions(tile_codes):
    return [(x, y) for y in range(16) for x in range(16)
            if accepts_position(tile_codes, x, y)]
