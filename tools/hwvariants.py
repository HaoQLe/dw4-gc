"""Score source variants of a hand-written file on chosen functions.

VARIANTS is a JSON list of [name, [[old, new], ...]]: each variant applies its replacements (first
occurrence each) to SOURCE. Prints the differing-line count per function for the base and each variant.

usage: /opt/homebrew/bin/python3 tools/hwvariants.py SOURCE VARIANTS.json function[,function...] [-p]"""
import difflib,json,subprocess,sys,tempfile
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parent))
import hwdiff

# When set (the -p flag), equal-length functions are scored by the number of differing instructions at
# the same position, which still ranks variants whose registers are all shifted.
POSITIONAL='-p' in sys.argv

def score(src,fns,orig):
    d=Path(tempfile.mkdtemp());c=d/'a.cpp';c.write_text(src);o=d/'a.o'
    r=subprocess.run(hwdiff.game_command()+['-c',str(c),'-o',str(o)],capture_output=True,text=True)
    if r.returncode: return 'compile error: '+r.stdout.strip().splitlines()[-1][:120]
    out={}
    for f in fns:
        a=hwdiff.disassemble(o,f) or [];b=hwdiff.disassemble(orig[f],f)
        if POSITIONAL and len(a)==len(b): out[f]=sum(x!=y for x,y in zip(a,b))
        else: out[f]=len([x for x in difflib.unified_diff(b,a,lineterm='',n=0) if x[:1] in '+-' and x[:3] not in ('+++','---')])
    return out

def main():
    args=[a for a in sys.argv[1:] if a!='-p']
    src=Path(args[0]).read_text();variants=json.load(open(args[1]));fns=args[2].split(',')
    orig=hwdiff.original_objects()
    print('base',score(src,fns,orig))
    for name,pairs in variants:
        s=src;ok=True
        for a,b in pairs:
            if a not in s: ok=False;break
            s=s.replace(a,b,1)
        print(name,score(s,fns,orig) if ok else 'replacement not found')

if __name__=='__main__':
    main()
