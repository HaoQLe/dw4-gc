#!/usr/bin/env python3
"""Fast, exact local workflows for matching decompilation."""

import argparse
from dataclasses import dataclass
from dataclasses import asdict
import json
from pathlib import Path
import shlex
import struct
import subprocess
import sys
import tempfile


class VerificationError(RuntimeError):
    """An object failed an exact comparison."""


class UserInputError(RuntimeError):
    """A selector or generated project input is unusable."""


@dataclass(frozen=True)
class VerificationSummary:
    allocated_sections: int
    allocated_bytes: int
    functions: int
    relocations: int


@dataclass(frozen=True)
class Candidate:
    kind: str
    name: str
    categories: tuple
    total_code: int
    matched_code: int
    unmatched_code: int
    fuzzy_percent: float
    total_functions: int
    matched_functions: int


@dataclass(frozen=True)
class ScratchResult:
    section_matches: tuple
    function_matches: tuple
    verification: VerificationSummary = None
    verification_error: str = None
    scratch_path: str = None


@dataclass(frozen=True)
class _ElfObject:
    sections: tuple
    functions: tuple
    relocations: tuple


def _read_elf(path):
    data = Path(path).read_bytes()
    if data[:7] != b"\x7fELF\x01\x02\x01":
        raise VerificationError("%s is not a 32-bit big-endian ELF object" % path)
    try:
        header = struct.unpack_from(">16sHHIIIIIHHHHHH", data)
    except struct.error as error:
        raise VerificationError("%s has a truncated ELF header" % path) from error

    if header[1:4] != (1, 20, 1):
        raise VerificationError("%s is not a relocatable PowerPC ELF object" % path)
    if header[8] != 52 or header[11] != 40 or not header[12]:
        raise VerificationError("%s has an invalid ELF header layout" % path)
    section_table_end = header[6] + header[11] * header[12]
    if header[6] < header[8] or section_table_end > len(data):
        raise VerificationError("%s has a truncated section table" % path)
    if header[13] >= header[12]:
        raise VerificationError("%s has an invalid section-name table index" % path)
    raw_sections = tuple(
        struct.unpack_from(">10I", data, header[6] + index * header[11])
        for index in range(header[12])
    )

    def section_data(section, name):
        if section[1] != 8 and section[4] + section[5] > len(data):
            raise VerificationError("section %s extends past end of %s" % (name, path))
        return data[section[4] : section[4] + section[5]]

    def read_string(table, offset):
        try:
            return table[offset : table.index(b"\0", offset)].decode()
        except (ValueError, UnicodeDecodeError) as error:
            raise VerificationError("%s has an invalid ELF string table" % path) from error

    raw_name_table = raw_sections[header[13]]
    if raw_name_table[1] != 3:
        raise VerificationError("%s has an invalid section-name table" % path)
    section_names = section_data(raw_name_table, ".shstrtab")
    names = tuple(read_string(section_names, section[0]) for section in raw_sections)

    for index, section in enumerate(raw_sections):
        name = names[index] or "<null>"
        section_data(section, name)
        if section[1] == 2:
            if section[9] != 16 or section[5] % 16:
                raise VerificationError("%s symbol table entry size is invalid" % name)
            if section[6] >= len(raw_sections) or raw_sections[section[6]][1] != 3:
                raise VerificationError("%s has an invalid string-table link" % name)
        elif section[1] == 4:
            if section[9] != 12 or section[5] % 12:
                raise VerificationError("%s relocation entry size is invalid" % name)
            if section[6] >= len(raw_sections) or raw_sections[section[6]][1] != 2:
                raise VerificationError("%s has an invalid symbol-table link" % name)
            if section[7] >= len(raw_sections):
                raise VerificationError("%s has an invalid target-section index" % name)

    sections = []
    for index, section in enumerate(raw_sections):
        sections.append(
            {
                "name": names[index],
                "type": section[1],
                "flags": section[2],
                "size": section[5],
                "align": section[8],
                "data": b"" if section[1] == 8 else section_data(section, names[index]),
            }
        )

    symbol_tables = {}
    for section_index, section in enumerate(raw_sections):
        if section[1] != 2:
            continue
        strings = section_data(raw_sections[section[6]], names[section[6]])
        symbols = []
        for offset in range(section[4], section[4] + section[5], section[9]):
            name, value, size, info, other, index = struct.unpack_from(
                ">IIIBBH", data, offset
            )
            if len(sections) <= index < 0xFF00:
                raise VerificationError("%s has an invalid symbol section index" % path)
            symbols.append(
                (
                    read_string(strings, name),
                    value,
                    size,
                    info >> 4,
                    info & 15,
                    other,
                    sections[index]["name"] if 0 < index < len(sections) else index,
                )
            )
        symbol_tables[section_index] = symbols

    relocations = []
    for section in raw_sections:
        if section[1] != 4:
            continue
        for offset in range(section[4], section[4] + section[5], section[9]):
            address, info, addend = struct.unpack_from(">IIi", data, offset)
            symbol_index = info >> 8
            if symbol_index >= len(symbol_tables[section[6]]):
                raise VerificationError("%s has an invalid relocation symbol index" % path)
            relocations.append(
                (
                    sections[section[7]]["name"],
                    address,
                    info & 255,
                    addend,
                    symbol_tables[section[6]][symbol_index],
                )
            )

    allocated_names = {section["name"] for section in sections if section["flags"] & 2}
    allocated = tuple(
        (
            section["name"],
            section["type"],
            section["flags"],
            section["size"],
            section["align"],
            section["data"],
        )
        for section in sections
        if section["flags"] & 2
    )
    functions = tuple(
        sorted(
            symbol
            for table in symbol_tables.values()
            for symbol in table
            if symbol[4] == 2 and symbol[6] in allocated_names
        )
    )
    return _ElfObject(allocated, functions, tuple(sorted(relocations)))


def verify_objects(target_path, candidate_path):
    """Require exact allocated sections, functions, and relocation records."""
    target = _read_elf(target_path)
    candidate = _read_elf(candidate_path)

    if len(target.sections) != len(candidate.sections):
        raise VerificationError("allocated section lists differ")
    for left, right in zip(target.sections, candidate.sections):
        if left[:5] != right[:5]:
            name = left[0] if left else right[0]
            raise VerificationError("allocated section %s metadata differs" % name)
        if left[5] != right[5]:
            raise VerificationError("allocated section %s bytes differ" % left[0])
    if target.functions != candidate.functions:
        for left, right in zip(target.functions, candidate.functions):
            if left != right:
                raise VerificationError(
                    "function symbols differ: target %r; candidate %r" % (left, right)
                )
        if len(target.functions) < len(candidate.functions):
            raise VerificationError(
                "function symbol %s is extra" % candidate.functions[len(target.functions)][0]
            )
        raise VerificationError(
            "function symbol %s is missing" % target.functions[len(candidate.functions)][0]
        )
    if target.relocations != candidate.relocations:
        for left, right in zip(target.relocations, candidate.relocations):
            if left != right:
                section, offset = left[:2]
                raise VerificationError(
                    "relocation %s+0x%X differs: target %r; candidate %r"
                    % (section, offset, left, right)
                )
        if len(target.relocations) < len(candidate.relocations):
            section, offset = candidate.relocations[len(target.relocations)][:2]
            raise VerificationError("relocation %s+0x%X is extra" % (section, offset))
        section, offset = target.relocations[len(candidate.relocations)][:2]
        raise VerificationError("relocation %s+0x%X is missing" % (section, offset))

    return VerificationSummary(
        allocated_sections=len(target.sections),
        allocated_bytes=sum(section[3] for section in target.sections),
        functions=len(target.functions),
        relocations=len(target.relocations),
    )


def resolve_unit(units, selector, require_source=False):
    """Resolve an objdiff unit using exact keys first, then a unique suffix."""
    def keys(unit):
        metadata = unit.get("metadata", {})
        return tuple(
            value
            for value in (
                unit.get("name"),
                unit.get("target_path"),
                unit.get("base_path"),
                metadata.get("source_path"),
            )
            if value
        )

    exact = [unit for unit in units if selector in keys(unit)]
    matches = exact or [
        unit
        for unit in units
        if any(key == selector or key.endswith("/" + selector) for key in keys(unit))
    ]
    if not matches:
        raise UserInputError("no unit matches %r" % selector)
    if len(matches) > 1:
        names = ", ".join(unit["name"] for unit in matches[:5])
        raise UserInputError("unit selector %r is ambiguous: %s" % (selector, names))
    unit = matches[0]
    if require_source and (
        not unit.get("base_path") or not unit.get("metadata", {}).get("source_path")
    ):
        raise UserInputError("unit %s has no configured source" % unit["name"])
    return unit


def private_compile_command(command, unit, scratch_source, scratch_dir):
    """Rewrite one expanded Ninja compile command to use private outputs."""
    source = unit.get("metadata", {}).get("source_path")
    base_path = unit.get("base_path")
    if not source or not base_path:
        raise UserInputError("unit %s has no configured source" % unit.get("name"))
    base = str(Path(base_path).with_suffix(""))
    basedir = str(Path(base_path).parent)
    scratch_source = str(scratch_source)
    scratch_dir = str(scratch_dir)
    if Path(scratch_source).stem != Path(base_path).stem:
        raise UserInputError("scratch source name must match the configured object name")

    scratch_base = str(Path(scratch_dir) / Path(base).name)
    rewritten = command
    for suffix in (".o", ".d"):
        rewritten = rewritten.replace(base + suffix, shlex.quote(scratch_base + suffix))
    rewritten = rewritten.replace(base, shlex.quote(scratch_base))
    rewritten = rewritten.replace(source, shlex.quote(scratch_source))
    rewritten = rewritten.replace(basedir, shlex.quote(scratch_dir))
    if rewritten == command:
        raise UserInputError("compile command did not contain configured source paths")
    return rewritten


def rank_candidates(report, units, kind=None, category=None, limit=None):
    """Return explainable candidates using only objdiff report facts."""
    configured = {unit["name"]: unit for unit in units}
    rows = []
    for report_unit in report.get("units", []):
        measures = report_unit.get("measures", {})
        total = int(measures.get("total_code", 0))
        if not total:
            continue
        matched = int(measures.get("matched_code", 0))
        complete = int(measures.get("complete_code", 0))
        has_source = bool(configured.get(report_unit["name"], {}).get("base_path"))
        if matched < total:
            row_kind = "partial" if has_source else "missing"
        elif complete < total:
            row_kind = "unlinked"
        else:
            continue
        categories = tuple(report_unit.get("metadata", {}).get("progress_categories", []))
        if kind and row_kind != kind:
            continue
        if category and category not in categories:
            continue
        rows.append(
            Candidate(
                kind=row_kind,
                name=report_unit["name"],
                categories=categories,
                total_code=total,
                matched_code=matched,
                unmatched_code=total - matched,
                fuzzy_percent=float(measures.get("fuzzy_match_percent", 0.0)),
                total_functions=int(measures.get("total_functions", 0)),
                matched_functions=int(measures.get("matched_functions", 0)),
            )
        )

    kind_order = {"partial": 0, "missing": 1, "unlinked": 2}

    def sort_key(row):
        opportunity = row.matched_code if row.kind == "unlinked" else row.unmatched_code
        remainder_rank = 0 if row.kind != "missing" or row.total_functions == 1 else 1
        return kind_order[row.kind], remainder_rank, -opportunity, row.name

    rows.sort(key=sort_key)
    return rows[:limit] if limit is not None else rows


def _expanded_compile_command(root, base_path):
    result = subprocess.run(
        ["ninja", "-f", "build.ninja", "-t", "commands", base_path],
        cwd=root,
        check=True,
        capture_output=True,
        text=True,
    )
    lines = [line for line in result.stdout.splitlines() if line.strip()]
    if not lines:
        raise UserInputError("Ninja emitted no compile command for %s" % base_path)
    return lines[-1]


def _run_scratch_in(root, unit, scratch_path, keep, source_override):
    source_path = (
        Path(source_override).resolve()
        if source_override
        else root / unit["metadata"]["source_path"]
    )
    if not source_path.is_file():
        raise UserInputError("source file does not exist: %s" % source_path)
    if source_path.name != Path(unit["metadata"]["source_path"]).name:
        raise UserInputError("source override must keep the configured file name")
    command = _expanded_compile_command(root, unit["base_path"])
    command = private_compile_command(command, unit, source_path, scratch_path)
    subprocess.run(["/bin/sh", "-c", command], cwd=root, check=True)
    candidate = scratch_path / Path(unit["base_path"]).name
    if not candidate.is_file():
        raise UserInputError("private compile did not produce %s" % candidate)

    diff_path = scratch_path / "objdiff.json"
    subprocess.run(
        [
            str(root / "build/tools/objdiff-cli"),
            "diff",
            "-1",
            str(root / unit["target_path"]),
            "-2",
            str(candidate),
            "-c",
            "functionRelocDiffs=data_value",
            "-o",
            str(diff_path),
        ],
        cwd=root,
        check=True,
        capture_output=True,
    )
    diff = json.loads(diff_path.read_text())
    left = diff.get("left", {})
    sections = tuple(
        (section.get("name", ""), section.get("match_percent", 0))
        for section in left.get("sections", [])
        if section.get("kind")
    )
    functions = tuple(
        (symbol.get("name", ""), symbol.get("match_percent", 0))
        for symbol in left.get("symbols", [])
        if symbol.get("name")
    )
    try:
        verification = verify_objects(root / unit["target_path"], candidate)
        verification_error = None
    except VerificationError as error:
        verification = None
        verification_error = str(error)
    return ScratchResult(
        section_matches=sections,
        function_matches=functions,
        verification=verification,
        verification_error=verification_error,
        scratch_path=str(scratch_path) if keep else None,
    )


def scratch_unit(root, unit, keep=False, source_override=None):
    """Compile and compare one configured unit without shared build outputs."""
    root = Path(root).resolve()
    if not unit.get("base_path") or not unit.get("metadata", {}).get("source_path"):
        raise UserInputError("unit %s has no configured source" % unit.get("name"))
    if keep:
        scratch_path = Path(tempfile.mkdtemp(prefix="dw4-decomp-"))
        return _run_scratch_in(root, unit, scratch_path, True, source_override)
    with tempfile.TemporaryDirectory(prefix="dw4-decomp-") as directory:
        return _run_scratch_in(root, unit, Path(directory), False, source_override)


def _load_json(path):
    try:
        return json.loads(Path(path).read_text())
    except (OSError, json.JSONDecodeError) as error:
        raise UserInputError("cannot read %s: %s" % (path, error)) from error


def _print_rank_table(rows):
    print("KIND\tTOTAL\tMATCHED\tUNMATCHED\tFUZZY\tFUNCTIONS\tUNIT")
    for row in rows:
        print(
            "%s\t%d\t%d\t%d\t%.2f\t%d/%d\t%s"
            % (
                row.kind,
                row.total_code,
                row.matched_code,
                row.unmatched_code,
                row.fuzzy_percent,
                row.matched_functions,
                row.total_functions,
                row.name,
            )
        )


def _parser():
    parser = argparse.ArgumentParser(
        description="Private compile, exact verification, and target ranking"
    )
    commands = parser.add_subparsers(dest="command", required=True)

    scratch = commands.add_parser("scratch", help="privately compile and compare a unit")
    scratch.add_argument("unit", help="unit name, source/object path, or unique suffix")
    scratch.add_argument("--root", default=".", help="repository root (default: .)")
    scratch.add_argument("--config", default="objdiff.json")
    scratch.add_argument(
        "--source", help="compile this same-named source file from another worktree"
    )
    scratch.add_argument("--keep", action="store_true", help="retain the temporary directory")

    verify = commands.add_parser("verify", help="compare two relocatable objects exactly")
    verify.add_argument("target")
    verify.add_argument("candidate")

    rank = commands.add_parser("rank", help="rank actionable units from a report")
    rank.add_argument("--report", default="build/GDJEB2/report.json")
    rank.add_argument("--config", default="objdiff.json")
    rank.add_argument("--kind", choices=("partial", "missing", "unlinked"))
    rank.add_argument("--category")
    rank.add_argument("--limit", type=int)
    rank.add_argument("--json", action="store_true", dest="as_json")
    return parser


def main(argv=None):
    args = _parser().parse_args(argv)
    try:
        if args.command == "verify":
            result = verify_objects(args.target, args.candidate)
            print(
                "exact: %d allocated bytes in %d sections; %d functions; %d relocations"
                % (
                    result.allocated_bytes,
                    result.allocated_sections,
                    result.functions,
                    result.relocations,
                )
            )
        elif args.command == "scratch":
            root = Path(args.root).resolve()
            config_path = root / args.config
            unit = resolve_unit(_load_json(config_path)["units"], args.unit, True)
            result = scratch_unit(root, unit, args.keep, args.source)
            for name, percent in result.section_matches:
                print("section %s: %s%%" % (name, percent))
            for name, percent in result.function_matches:
                print("function %s: %s%%" % (name, percent))
            if result.verification_error:
                print("error: %s" % result.verification_error, file=sys.stderr)
                if result.scratch_path:
                    print("retained: %s" % result.scratch_path)
                return 1
            print(
                "exact: %d allocated bytes; %d functions; %d relocations"
                % (
                    result.verification.allocated_bytes,
                    result.verification.functions,
                    result.verification.relocations,
                )
            )
            if result.scratch_path:
                print("retained: %s" % result.scratch_path)
        else:
            rows = rank_candidates(
                _load_json(args.report),
                _load_json(args.config)["units"],
                kind=args.kind,
                category=args.category,
                limit=args.limit,
            )
            if args.as_json:
                print(json.dumps([asdict(row) for row in rows], indent=2))
            else:
                _print_rank_table(rows)
    except subprocess.CalledProcessError as error:
        print("error: %s" % error, file=sys.stderr)
        detail = error.stderr or error.stdout
        if isinstance(detail, bytes):
            detail = detail.decode(errors="replace")
        if detail and detail.strip():
            print(detail.strip(), file=sys.stderr)
        return 1
    except (UserInputError, VerificationError, OSError) as error:
        print("error: %s" % error, file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())
