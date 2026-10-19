"""Compare a hand-written source file's functions with the original objects.

Compiles SOURCE with the Game library's flags from configure.py (cflags_game), then disassembles every function the original split objects also define and prints, per
function, EXACT or the number of differing lines. Section-symbol names (for example a string or constant
pool) are normalized, since they differ until the unit is linked.

usage (repository root, after a normal build):
  /opt/homebrew/bin/python3 tools/hwdiff.py SOURCE [-v] [-vv] [function ...]
  -v  show the first 80 differing lines of each listed (or differing) function; -vv shows all"""
import difflib,json,re,subprocess,sys,tempfile
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parent/'unknowngen'))
import compiler,elf


def game_command():
    """compiler.command with the Game library's flags (cflags_game in configure.py)."""
    cmd=compiler.command(True,False,True,False)
    cmd=[('reuse,readonly' if x=='reuse' else x) for x in cmd]
    # cflags_base's SDK include paths (the generated-unit command leaves them out)
    return cmd+['-i','include/dolsdk2004','-i','include/dolsdk2004/libc','-use_lmw_stmw','on','-sdata2','2']

def original_objects():
    """Function name -> original split object, from objdiff.json's target objects."""
    out={}
    for u in json.load(open('objdiff.json'))['units']:
        p=u.get('target_path')
        if not p or not Path(p).exists(): continue
        try: secs,rels,syms=elf.parse(p)
        except Exception: continue
        for s in syms:
            if s['type']==2 and s['section']=='.text': out[s['name']]=p
    return out

def disassemble(obj,fn,cache={}):
    if obj not in cache:
        d=Path(tempfile.mkdtemp())/'o.s'
        subprocess.run(['build/tools/dtk','elf','disasm',str(obj),str(d)],capture_output=True)
        cache[obj]=d.read_text()
    m=re.search(r'\.fn "?%s"?,.*?\n(.*?)\.endfn'%re.escape(fn),cache[obj],re.S)
    if not m: return None
    out=[]
    for l in m[1].splitlines():
        l=re.sub(r'/\*.*?\*/','',l).strip()
        if not l or l.startswith('.'): continue
        l=re.sub(r'\.L_\w+','L',l)
        l=re.sub(r'(lbl_[0-9A-F]{8}|"@\d+"|\.\.\.\w+\.\d+|"@stringBase\d+")(?=@)','POOL',l)
        out.append(l)
    return out

def main():
    args=[a for a in sys.argv[1:] if not a.startswith('-')]
    verbose='-v' in sys.argv or '-vv' in sys.argv
    src,wanted=args[0],args[1:]
    obj=Path(tempfile.mkdtemp())/'a.o'
    r=subprocess.run(game_command()+['-c',src,'-o',str(obj)],capture_output=True,text=True)
    if r.returncode: print(r.stdout[-3000:]);sys.exit(1)
    secs,rels,syms=elf.parse(obj)
    mine=[s['name'] for s in sorted(syms,key=lambda s:s['value']) if s['type']==2 and s['section']=='.text']
    orig=original_objects()
    for fn in wanted or mine:
        if fn not in orig: print('%-36s (no original object)'%fn);continue
        a=disassemble(obj,fn);b=disassemble(orig[fn],fn)
        if a is None: print('%-36s MISSING'%fn);continue
        d=[x for x in difflib.unified_diff(b,a,'orig','mine',n=1,lineterm='')]
        n=len([x for x in d if x[:1] in '+-' and x[:3] not in ('+++','---')])
        print('%-36s %s  orig %d mine %d'%(fn,'EXACT' if not n else 'diff %d'%n,len(b),len(a)))
        if verbose and n: print('\n'.join(d if '-vv' in sys.argv else d[:80]))

if __name__=='__main__':
    main()
