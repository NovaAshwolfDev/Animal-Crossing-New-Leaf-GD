"""Verified fixed acre-object/structure record decoder (0x230a40, 0x1e9800)."""
import struct


def read_records(data, record_size, acre_id, capacity):
    count = struct.unpack_from('<H', data)[0]
    if not 0 <= acre_id < count:
        raise ValueError('acre_id outside the resource count table')
    counts = data[2:2 + count]
    size = counts[acre_id] * record_size
    if size > capacity:
        return 0, b''
    offset = 2 + count + sum(counts[:acre_id]) * record_size
    return counts[acre_id], data[offset:offset + size]
