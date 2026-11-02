"""Exact unsigned arithmetic of CTR-P-EGDE remaster 3 RNG routines.

Seed: 0x005be4f0. Next: 0x005be58c. These routines are verified against ARM
execution; their existence does not establish the town generator's seed source.
"""
MASK = 0xFFFFFFFF


class GameRng:
    def __init__(self, seed):
        value = seed & MASK
        self.state = []
        for index in range(1, 5):
            value = (0x6C078965 * (value ^ (value >> 30)) + index) & MASK
            self.state.append(value)

    def next_u32(self):
        x, y, z, w = self.state
        t = (x ^ (x << 11)) & MASK
        result = (w ^ (w >> 19) ^ t ^ (t >> 8)) & MASK
        self.state[:] = [y, z, w, result]
        return result

    def bounded(self, count):
        """The UMULL high-word mapping used at 0x5934a8, not modulo."""
        if not 0 <= count <= MASK:
            raise ValueError("count must fit an unsigned 32-bit register")
        return (self.next_u32() * count) >> 32


def _f32(value):
    import struct
    return struct.unpack('<f', struct.pack('<f', value))[0]


class GlobalFloatRng:
    """0x1218f0 / 0x11df38: the separate global RNG used to prepare seeds.

    Input is the original global RNG state. Its process-start initialization is
    outside this class. Float32 rounding is part of the original behavior.
    """
    def __init__(self, state):
        self.state = state & MASK

    def next_float(self):
        product = self.state * 0x19660D
        added = (product & MASK) + 0x3C6EF35F
        self.state = ((added & MASK) + (product >> 32) + (added >> 32)) & MASK
        return (self.state >> 9) / (1 << 23)

    def bounded(self, signed_count):
        if not -(1 << 31) <= signed_count < (1 << 31):
            raise ValueError('count must fit an ARM signed int')
        return int(_f32(self.next_float() * _f32(signed_count)))


def prepare_candidate_seeds(global_rng):
    """0x2d87d8: four candidate seeds and alternating coastline choices.

    Side 0 is left, 1 is right. The comparison is <= 50, not < 50.
    """
    seeds = [global_rng.bounded(0x7FFFFFFF) for _ in range(4)]
    first = int(global_rng.bounded(100) <= 50)
    return {'seeds': seeds, 'ocean_sides': [first, 1 - first, first, 1 - first]}
