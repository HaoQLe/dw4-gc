import hashlib
import json
import struct
import subprocess

from pathlib import Path


def parse(path):
    data = Path(path).read_bytes()
    assert data[:6] == b"\x7fELF\x01\x02"
    header = struct.unpack_from(">16sHHIIIIIHHHHHH", data)
    raw = [struct.unpack_from(">10I", data, header[6] + index * header[11]) for index in range(header[12])]

    def section_data(section):
        return data[section[4] : section[4] + section[5]]

    def string(table, offset):
        return table[offset : table.index(b"\0", offset)].decode()

    names = section_data(raw[header[13]])
    sections = [
        dict(
            name=string(names, section[0]),
            type=section[1],
            flags=section[2],
            size=section[5],
            align=section[8],
            data=section_data(section) if section[1] != 8 else b"",
        )
        for section in raw
    ]
    symbol_tables = {}
    for section_index, section in enumerate(raw):
        if section[1] != 2:
            continue
        strings = section_data(raw[section[6]])
        symbol_tables[section_index] = []
        for offset in range(section[4], section[4] + section[5], section[9]):
            name, value, size, info, other, index = struct.unpack_from(">IIIBBH", data, offset)
            symbol_tables[section_index].append(
                dict(
                    name=string(strings, name),
                    value=value,
                    size=size,
                    binding=info >> 4,
                    type=info & 15,
                    visibility=other,
                    section=sections[index]["name"] if 0 < index < len(raw) else index,
                )
            )
    relocations = []
    for section in raw:
        if section[1] != 4:
            continue
        for offset in range(section[4], section[4] + section[5], section[9]):
            address, info, addend = struct.unpack_from(">IIi", data, offset)
            relocations.append(
                dict(
                    section=sections[section[7]]["name"],
                    offset=address,
                    type=info & 255,
                    addend=addend,
                    symbol=symbol_tables[section[6]][info >> 8],
                )
            )
    return {section["name"]: section for section in sections}, relocations, [
        symbol for table in symbol_tables.values() for symbol in table
    ]

