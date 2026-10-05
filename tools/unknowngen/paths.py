"""Shared locations for the boilerplate generator. Run every tool from the repository root."""
from pathlib import Path

VERSION = "GDJEB2"
CONFIG = Path("config") / VERSION
DOL = Path("orig") / VERSION / "sys" / "main.dol"
BUILD = Path("build") / VERSION
ANALYSIS = BUILD / "analysis" / "unknowngen"
RELINDEX = ANALYSIS / "relindex.json"
REPORT = BUILD / "report.json"
UNITS = CONFIG / "generated_units.txt"
HERE = Path(__file__).resolve().parent
EXCLUDE = HERE / "exclude.json"
