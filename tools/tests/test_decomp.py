import contextlib
import io
import json
import struct
import tempfile
import unittest
from pathlib import Path

from tools.decomp import (
    UserInputError,
    VerificationError,
    private_compile_command,
    rank_candidates,
    resolve_unit,
    main,
    scratch_unit,
    verify_objects,
)


def make_elf(
    path,
    text=b"\x60\x00\x00\x00",
    text_flags=6,
    target_name="target",
    extra_function=False,
    reverse_functions=False,
):
    section_names = b"\0.text\0.rela.text\0.symtab\0.strtab\0.shstrtab\0"
    names = ["func"]
    if extra_function:
        names.append("func2")
    names.append(target_name)
    strings = ("\0" + "\0".join(names) + "\0").encode()

    def align(value, amount):
        return (value + amount - 1) & ~(amount - 1)

    chunks = []
    cursor = 52

    def add(data, alignment=1):
        nonlocal cursor
        offset = align(cursor, alignment)
        chunks.append((offset, data))
        cursor = offset + len(data)
        return offset

    text_offset = add(text, 4)
    strtab_offset = add(strings)
    function_symbols = [(1, 0, len(text))]
    if extra_function:
        function_symbols = [(1, 0, 2), (6, 2, 2)]
    if reverse_functions:
        function_symbols.reverse()
    symbol_parts = [b"\0" * 16]
    symbol_parts.extend(
        struct.pack(">IIIBBH", name, value, size, 0x12, 0, 1)
        for name, value, size in function_symbols
    )
    target_name_offset = strings.index(target_name.encode())
    symbol_parts.append(struct.pack(">IIIBBH", target_name_offset, 0, 0, 0x10, 0, 0))
    symbols = b"".join(symbol_parts)
    symtab_offset = add(symbols, 4)
    target_symbol_index = len(function_symbols) + 1
    relocations = struct.pack(">IIi", 0, (target_symbol_index << 8) | 10, 4)
    rela_offset = add(relocations, 4)
    shstr_offset = add(section_names)
    section_offset = align(cursor, 4)

    def name_offset(name):
        return section_names.index(name.encode())

    sections = [
        (0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
        (name_offset(".text"), 1, text_flags, 0, text_offset, len(text), 0, 0, 4, 0),
        (name_offset(".rela.text"), 4, 0, 0, rela_offset, 12, 3, 1, 4, 12),
        (name_offset(".symtab"), 2, 0, 0, symtab_offset, len(symbols), 4, 1, 4, 16),
        (name_offset(".strtab"), 3, 0, 0, strtab_offset, len(strings), 0, 0, 1, 0),
        (
            name_offset(".shstrtab"),
            3,
            0,
            0,
            shstr_offset,
            len(section_names),
            0,
            0,
            1,
            0,
        ),
    ]
    header = struct.pack(
        ">16sHHIIIIIHHHHHH",
        b"\x7fELF\x01\x02\x01" + b"\0" * 9,
        1,
        20,
        1,
        0,
        0,
        section_offset,
        0,
        52,
        0,
        0,
        40,
        len(sections),
        5,
    )
    output = bytearray(section_offset + 40 * len(sections))
    output[:52] = header
    for offset, data in chunks:
        output[offset : offset + len(data)] = data
    for index, section in enumerate(sections):
        struct.pack_into(">10I", output, section_offset + index * 40, *section)
    path.write_bytes(output)


class VerifyObjectsTests(unittest.TestCase):
    def setUp(self):
        self.tempdir = tempfile.TemporaryDirectory()
        self.root = Path(self.tempdir.name)
        self.target = self.root / "target.o"
        self.candidate = self.root / "candidate.o"

    def tearDown(self):
        self.tempdir.cleanup()

    def test_identical_objects_report_verified_contents(self):
        make_elf(self.target)
        make_elf(self.candidate)

        summary = verify_objects(self.target, self.candidate)

        self.assertEqual(summary.allocated_sections, 1)
        self.assertEqual(summary.allocated_bytes, 4)
        self.assertEqual(summary.functions, 1)
        self.assertEqual(summary.relocations, 1)

    def test_changed_allocated_bytes_fail(self):
        make_elf(self.target)
        make_elf(self.candidate, text=b"\x60\x00\x00\x01")

        with self.assertRaisesRegex(VerificationError, r"\.text bytes differ"):
            verify_objects(self.target, self.candidate)

    def test_changed_allocated_metadata_fails(self):
        make_elf(self.target)
        make_elf(self.candidate, text_flags=2)

        with self.assertRaisesRegex(VerificationError, r"\.text metadata differs"):
            verify_objects(self.target, self.candidate)

    def test_changed_relocation_target_fails(self):
        make_elf(self.target)
        make_elf(self.candidate, target_name="other")

        with self.assertRaisesRegex(VerificationError, "relocation records differ"):
            verify_objects(self.target, self.candidate)

    def test_function_symbol_table_order_does_not_affect_verification(self):
        make_elf(self.target, extra_function=True)
        make_elf(self.candidate, extra_function=True, reverse_functions=True)

        summary = verify_objects(self.target, self.candidate)

        self.assertEqual(summary.functions, 2)


class UnitSelectionTests(unittest.TestCase):
    def setUp(self):
        self.units = [
            {
                "name": "main/lib/foo",
                "target_path": "build/G/obj/lib/foo.o",
                "base_path": "build/G/src/lib/foo.o",
                "metadata": {"source_path": "src/lib/foo.cpp"},
            },
            {
                "name": "main/other/foo",
                "target_path": "build/G/obj/other/foo.o",
                "base_path": "build/G/src/other/foo.o",
                "metadata": {"source_path": "src/other/foo.cpp"},
            },
        ]

    def test_resolves_exact_name_path_and_unique_suffix(self):
        self.assertEqual(resolve_unit(self.units, "main/lib/foo"), self.units[0])
        self.assertEqual(resolve_unit(self.units, "src/lib/foo.cpp"), self.units[0])
        self.assertEqual(resolve_unit(self.units, "lib/foo"), self.units[0])

    def test_rejects_ambiguous_suffix(self):
        with self.assertRaisesRegex(UserInputError, "ambiguous"):
            resolve_unit(self.units, "foo")

    def test_rejects_unit_without_source_object(self):
        unit = {"name": "main/auto", "target_path": "target.o", "metadata": {}}
        with self.assertRaisesRegex(UserInputError, "has no configured source"):
            resolve_unit([unit], "main/auto", require_source=True)

    def test_private_command_rewrites_only_mutable_paths(self):
        command = (
            'wibo mwcc -O4 -c src/lib/foo.cpp -o build/G/src/lib '
            '&& python tools/transform_dep.py build/G/src/lib/foo.d '
            'build/G/src/lib/foo.d'
        )

        rewritten = private_compile_command(
            command,
            self.units[0],
            Path("/tmp/private/foo.cpp"),
            Path("/tmp/private"),
        )

        self.assertIn("wibo mwcc -O4", rewritten)
        self.assertIn("-c /tmp/private/foo.cpp", rewritten)
        self.assertIn("-o /tmp/private", rewritten)
        self.assertEqual(rewritten.count("/tmp/private/foo.d"), 2)
        self.assertNotIn("build/G/src/lib", rewritten)


class RankingTests(unittest.TestCase):
    def setUp(self):
        self.report = {
            "units": [
                {
                    "name": "main/partial",
                    "measures": {
                        "total_code": "100",
                        "matched_code": "60",
                        "fuzzy_match_percent": 91.5,
                        "total_functions": 2,
                        "matched_functions": 1,
                    },
                    "metadata": {"progress_categories": ["sdk"]},
                },
                {
                    "name": "main/missing",
                    "measures": {"total_code": "300", "total_functions": 3},
                    "metadata": {"progress_categories": ["game"]},
                },
                {
                    "name": "main/single",
                    "measures": {"total_code": "80", "total_functions": 1},
                    "metadata": {"progress_categories": ["game"]},
                },
                {
                    "name": "main/unlinked",
                    "measures": {
                        "total_code": "200",
                        "matched_code": "200",
                        "complete_code": "0",
                        "matched_functions": 4,
                        "total_functions": 4,
                    },
                    "metadata": {"progress_categories": ["sdk"]},
                },
                {
                    "name": "main/complete",
                    "measures": {
                        "total_code": "50",
                        "matched_code": "50",
                        "complete_code": "50",
                    },
                    "metadata": {"progress_categories": ["sdk"]},
                },
            ]
        }
        self.units = [
            {"name": "main/partial", "base_path": "partial.o"},
            {"name": "main/missing"},
            {"name": "main/single"},
            {"name": "main/unlinked", "base_path": "unlinked.o"},
            {"name": "main/complete", "base_path": "complete.o"},
        ]

    def test_ranks_each_actionable_bucket_and_excludes_complete_units(self):
        rows = rank_candidates(self.report, self.units)

        self.assertEqual(
            [row.kind for row in rows],
            ["partial", "missing", "missing", "unlinked"],
        )
        self.assertEqual(rows[0].unmatched_code, 40)
        self.assertEqual(rows[1].name, "main/single")
        self.assertEqual(rows[2].total_code, 300)
        self.assertEqual(rows[3].matched_code, 200)

    def test_filters_by_kind_category_and_limit(self):
        rows = rank_candidates(
            self.report,
            self.units,
            kind="unlinked",
            category="sdk",
            limit=1,
        )

        self.assertEqual([row.name for row in rows], ["main/unlinked"])


class CommandTests(unittest.TestCase):
    def setUp(self):
        self.tempdir = tempfile.TemporaryDirectory()
        self.root = Path(self.tempdir.name)

    def tearDown(self):
        self.tempdir.cleanup()

    def test_verify_command_returns_nonzero_for_a_real_mismatch(self):
        target = self.root / "target.o"
        candidate = self.root / "candidate.o"
        make_elf(target)
        make_elf(candidate, text=b"\x60\x00\x00\x01")
        errors = io.StringIO()

        with contextlib.redirect_stderr(errors):
            status = main(["verify", str(target), str(candidate)])

        self.assertEqual(status, 1)
        self.assertIn(".text bytes differ", errors.getvalue())

    def test_rank_command_emits_stable_json(self):
        report = self.root / "report.json"
        config = self.root / "objdiff.json"
        report.write_text(
            json.dumps(
                {
                    "units": [
                        {
                            "name": "main/missing",
                            "measures": {"total_code": "12"},
                            "metadata": {},
                        }
                    ]
                }
            )
        )
        config.write_text(json.dumps({"units": [{"name": "main/missing"}]}))
        output = io.StringIO()

        with contextlib.redirect_stdout(output):
            status = main(
                [
                    "rank",
                    "--report",
                    str(report),
                    "--config",
                    str(config),
                    "--json",
                ]
            )

        self.assertEqual(status, 0)
        self.assertEqual(json.loads(output.getvalue())[0]["unmatched_code"], 12)

    def test_scratch_uses_private_outputs_end_to_end(self):
        source = self.root / "src/foo.cpp"
        worker_source = self.root / "worker/foo.cpp"
        target = self.root / "build/G/obj/foo.o"
        source.parent.mkdir(parents=True)
        worker_source.parent.mkdir(parents=True)
        target.parent.mkdir(parents=True)
        make_elf(source, text=b"\x60\x00\x00\x01")
        make_elf(worker_source)
        make_elf(target)
        (source.parent / "local.h").write_text("baseline")
        (worker_source.parent / "local.h").write_text("worker")
        (self.root / "tools").mkdir()
        (self.root / "tools/fake_compile.py").write_text(
            "from pathlib import Path\n"
            "import shutil, sys\n"
            "source, output = map(Path, sys.argv[1:])\n"
            "if not (source.parent / 'local.h').is_file():\n"
            "    raise SystemExit(3)\n"
            "shutil.copyfile(source, output)\n"
        )
        (self.root / "build/tools").mkdir(parents=True)
        objdiff = self.root / "build/tools/objdiff-cli"
        objdiff.write_text(
            "#!/usr/bin/env python3\n"
            "import json, sys\n"
            "out = sys.argv[sys.argv.index('-o') + 1]\n"
            "json.dump({'left': {'sections': [{'name': '.text', "
            "'kind': 'SECTION_CODE', 'match_percent': 100}, "
            "{'name': '.symtab'}], 'symbols': [{'name': 'func', "
            "'match_percent': 100}]}}, open(out, 'w'))\n"
        )
        objdiff.chmod(0o755)
        (self.root / "build.ninja").write_text(
            "rule cc\n"
            "  command = python3 tools/fake_compile.py $in $out\n"
            "build build/G/src/foo.o: cc src/foo.cpp\n"
        )
        unit = {
            "name": "main/foo",
            "target_path": "build/G/obj/foo.o",
            "base_path": "build/G/src/foo.o",
            "metadata": {"source_path": "src/foo.cpp"},
        }
        (self.root / "objdiff.json").write_text(json.dumps({"units": [unit]}))

        result = scratch_unit(self.root, unit, source_override=worker_source)

        self.assertEqual(result.verification.allocated_bytes, 4)
        self.assertEqual(result.section_matches, ((".text", 100),))
        self.assertFalse((self.root / "build/G/src/foo.o").exists())

        output = io.StringIO()
        errors = io.StringIO()
        with contextlib.redirect_stdout(output), contextlib.redirect_stderr(errors):
            status = main(["scratch", "main/foo", "--root", str(self.root)])

        self.assertEqual(status, 1)
        self.assertIn("section .text", output.getvalue())
        self.assertIn(".text bytes differ", errors.getvalue())


if __name__ == "__main__":
    unittest.main()
