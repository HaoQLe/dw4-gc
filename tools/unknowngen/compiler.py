"""Pinned compiler command for generated units (mirrors configure.py's cflags_engine_size)."""
from paths import BUILD, VERSION

# Units whose original code addresses every global without small-data relocations.
NO_SDATA = ["-sdata", "0", "-sdata2", "0"]

def command(exceptions=False, no_sdata=False, speed=False):
    return [
        "build/tools/wibo", "build/tools/sjiswrap.exe", "build/compilers/GC/2.6/mwcceppc.exe",
        "-nodefaults", "-proc", "gekko", "-align", "powerpc", "-enum", "int", "-fp", "hardware",
        "-Cpp_exceptions", "on" if exceptions else "off", "-O4,p" if speed else "-O4,s",
        "-pragma", "cats off", "-pragma", "warn_notinlined off", "-maxerrors", "1", "-nosyspath",
        "-RTTI", "off", "-fp_contract", "on", "-str", "reuse", "-multibyte",
        "-i", "include", "-i", str(BUILD / "include"), "-DBUILD_VERSION=0", "-DVERSION_" + VERSION,
        "-cwd", "source", "-DNDEBUG=1", "-inline", "auto", "-lang=c++",
        "-i", "src/Alchemy/include", "-i", "src/Alchemy/include/igCore",
    ] + (NO_SDATA if no_sdata else [])
