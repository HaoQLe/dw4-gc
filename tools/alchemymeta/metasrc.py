"""Write readable class-registration source: one src/Meta/<Class>.cpp per class.

A class's registration functions (see include/meta/register.h) are consecutive in the executable. Where all
of them are currently built from generated units (config/GDJEB2/generated_units.txt), this tool:
1. translates each function's generated source into the readable form: the macros of include/meta/register.h,
   typed field setup and named temporary-instance structs;
2. compiles the class's file and compares every function with the original split objects (instructions and
   relocation targets), its exception-table entry count, and that it emits no data;
3. with --apply, replaces the class's range in the generated units: the class file is listed in
   config/GDJEB2/meta_units.txt, the generated units it overlapped keep their other functions (their
   source reduced to those functions), and splits.txt gets the new ranges, with each unit's exception-table
   ranges computed from the executable's exception index.

A class whose functions do not all translate, or whose file does not compile to the original, is left as
it is and reported. Run after a normal build, funcindex.py and regnames.py.

usage: /opt/homebrew/bin/python3 tools/alchemymeta/metasrc.py [--apply] [--only Class,...] [--limit N] [-j N]"""
import bisect,collections,json,re,subprocess,sys,tempfile
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
HERE=Path(__file__).resolve().parent
sys.path.insert(0,str(HERE));sys.path.insert(0,str(HERE.parent/'unknowngen'));sys.path.insert(0,str(HERE.parent))
from paths import CONFIG
import asmlift,compiler,dol,elf,hwdiff

ROLES=('create','metaObject','getMeta','vtableRead','arkRegister','register','getMetaCall','fieldInit')

# ---------------------------------------------------------------- inputs

def load_symbols():
    funcs=[];data={};byaddr={}
    for l in open(CONFIG/'symbols.txt'):
        m=re.match(r'(\S+) = (\.?\w+):0x([0-9A-F]+); // type:(\w+)(?: size:0x([0-9A-F]+))?',l)
        if not m: continue
        name,sec,a,kind,size=m[1],m[2],int(m[3],16),m[4],int(m[5] or '0',16)
        if kind=='function' and sec=='.text': funcs.append((a,size,name))
        else: data[name]=(sec,a,size)
        byaddr.setdefault(a,name)
    funcs.sort()
    return funcs,data,byaddr

def load_units():
    units=[]
    for l in open(CONFIG/'generated_units.txt'):
        p=l.rstrip('\n').split('\t')
        if len(p)>=3: units.append([p[0],int(p[1],16),int(p[2],16),p[3] if len(p)>3 else '-'])
    units.sort(key=lambda u:u[1])
    return units

FN_START=re.compile(r'^(?!extern|struct|class|#|\}|template|inline|typedef|namespace)([\w][\w\s\*&:<>,]*?)\b(\w+)\(([^()]*)\)\s*\{(.*)$')

def parse_unit(text):
    """Splits a generated unit into declarations, struct definitions and function definitions."""
    lines=text.split('\n');decls=[];structs=collections.OrderedDict();fns=collections.OrderedDict()
    i=0;depth_extern=False
    while i<len(lines):
        l=lines[i]
        if l.startswith('struct ') or l.startswith('class '):
            name=re.match(r'(?:struct|class) (\w+)',l)[1];j=i
            while not lines[j].startswith('};'): j+=1
            structs[name]='\n'.join(lines[i:j+1]);i=j+1;continue
        m=FN_START.match(l)
        if m:
            name=m[2];rest=m[4]
            if rest.endswith('}') and rest.count('{')+1==rest.count('}'):
                fns[name]=l;i+=1;continue
            j=i+1
            while lines[j]!='}': j+=1
            fns[name]='\n'.join(lines[i:j+1]);i=j+1;continue
        if l.endswith(';') and not l.startswith(' '): decls.append(l)
        i+=1
    return decls,structs,fns

# ---------------------------------------------------------------- translation

class Untranslatable(Exception): pass

def ident_of(name,classes):
    for r in sorted(ROLES+('meta','className','vtable'),key=len,reverse=True):
        if name.endswith('_'+r) and name[:-len(r)-1] in classes: return name[:-len(r)-1],r
    return None,None

def tr_simple(c,role,text):
    t=re.sub(r'\s+','',text)
    pats={
     'getMeta':r'void\*%s_getMeta\(\)\{if\(!%s_meta\|\|!\(reinterpret_cast<unsignedint\*>\(%s_meta\)\[0x24/4\]&4\)\)%s_arkRegister\(\);return%s_meta;\}'%((c,)*5),
     'getMetaCall':r'void\*%s_getMetaCall\(\)\{return%s_getMeta\(\);\}'%(c,c),
     'arkRegister':r'void%s_arkRegister\(\)\{meta_registerNow\(\(int\)%s_register\);\}'%(c,c),
     'metaObject':r'void\*%s_metaObject\(\)\{if\(!%s_meta\)%s_meta=meta_newMetaObject\(fn_800607F4\(lbl_805621F4\)\);return%s_meta;\}'%((c,)*4),
     'create':r'void\*%s_create\(void\*object\)\{%s_arkRegister\(\);returnmeta_createInstance\(%s_meta,object\);\}'%((c,)*3),
    }
    if not re.fullmatch(pats[role],t): raise Untranslatable(role)
    macro={'getMeta':'META_GET_META','getMetaCall':'META_GET_META_CALL','arkRegister':'META_ARK_REGISTER',
           'metaObject':'META_METAOBJECT','create':'META_CREATE'}[role]
    return '%s(%s)'%(macro,c)

def tr_register(c,text,refs,forced):
    m=re.fullmatch(r'void %s_register\(\)\{\n(?: (\w+)\(\);\n)? meta_registerClass\((.*)\);\n\}'%c,text)
    if not m: raise Untranslatable('register')
    pre,args=m[1],[a.strip() for a in m[2].split(',')]
    if len(args)!=11: raise Untranslatable('register args')
    def ptr(a,what):
        if a=='0': return '0'
        mm=re.fullmatch(r'\(int\)&?(\w+)',a)
        if not mm: raise Untranslatable('register arg '+a)
        refs.add(mm[1])
        # Declared with the type the parameter takes.
        if what: forced[mm[1]]=what if what=='DATA' else what%mm[1]
        return mm[1]
    out=[]
    if not re.fullmatch(r'-?\d+',args[0]) or not re.fullmatch(r'-?\d+',args[6]):
        raise Untranslatable('register ints')
    meta=ptr(args[1],'')
    if meta!=c+'_meta': raise Untranslatable('register meta '+meta)
    vals=[args[0],'&'+meta,ptr(args[2],'void %s();'),ptr(args[3],'void *%s();'),ptr(args[4],'Meta::igMetaObject *%s();'),ptr(args[5],''),
          '0x%X'%int(args[6]),ptr(args[7],'void *%s();'),ptr(args[8],'void %s();'),ptr(args[9],'void %s();'),ptr(args[10],'DATA')]
    if pre: refs.add(pre)
    body=('void %s_register()\n{\n%s    meta_registerClass(%s, %s, %s,\n'
          '                       %s, %s,\n'
          '                       %s, %s,\n'
          '                       %s, %s, %s, %s);\n}')%((c,'    %s();\n'%pre if pre else '')+tuple(vals))
    return body

def member_name(cls,off,layouts):
    seen=set()
    while cls and cls in layouts and cls not in seen:
        seen.add(cls)
        mm=layouts[cls]['members'].get(str(off))
        if mm: return mm[0],mm[1]
        cls=layouts[cls].get('parent')
    return None,None

def tr_vtableread(c,text,structs,layouts,refs):
    """Temporary-instance structs named after the class each level's destructor restores the vtable of."""
    body=text.split('\n')
    m=re.match(r'void \*%s_vtableRead\(\)\{$'%c,body[0])
    if not m: raise Untranslatable('vtableRead head')
    decl=re.fullmatch(r' (UnknownGen\w+) object;',body[1])
    if not decl: raise Untranslatable('vtableRead object')
    top=decl[1]
    # The struct chain, most-derived last.
    chain=[];name=top
    while True:
        if name not in structs: raise Untranslatable('struct '+name)
        s=structs[name];chain.insert(0,(name,s))
        mm=re.match(r'struct \w+ : (\w+) \{',s)
        if not mm: break
        name=mm[1]
    newname={};defs=[];levelclass={}
    for name,s in chain:
        if re.search(r'UnknownGenRoot',name):
            mm=re.fullmatch(r'struct %s \{\n void \*unknown00;\n inline void operator delete\(void \*\)\{\}\n inline %s\(\)\{(\w+)\(this\);\}\n\};'%(name,name),s)
            if not mm: raise Untranslatable('root '+name)
            if mm[1]=='igObject_construct': newname[name]='igObjectInstance';continue
            refs.add(mm[1])
            newname[name]='BaseInstance'
            defs.append('// The base, built by its out-of-line constructor (%s).\nstruct BaseInstance {\n    void *__vtable;\n    inline void operator delete(void *) {}\n    inline BaseInstance() { %s(this); }\n};'%(mm[1],mm[1]))
            continue
        dt=re.search(r'inline ~%s\(\)\{unknown00=(\w+);\}'%name,s)
        k=None
        if dt:
            refs.add(dt[1])
            cls,role=ident_of(dt[1],layouts)
            k=cls if role=='vtable' else None
            nn=(k+'Instance') if k else 'Instance_'+dt[1].replace('lbl_','')
        else: nn='Instance_'+name.replace('UnknownGenObject','')
        if nn in newname.values(): nn+='_%d'%len(newname)
        newname[name]=nn;levelclass[nn]=k
    members={};ctors=[]
    for name,s in chain:
        if newname[name] in ('igObjectInstance','BaseInstance'): continue
        nn=newname[name];k=levelclass[nn]
        lines=s.split('\n');out=[];ctor=[]
        head=re.match(r'struct (\w+)(?: : (\w+))? \{',lines[0])
        if not head: raise Untranslatable('struct head')
        if head[2] and head[2] not in newname: raise Untranslatable('base')
        out.append('struct %s%s {'%(nn,' : '+newname[head[2]] if head[2] else ''))
        for l in lines[1:-1]:
            mm=re.fullmatch(r' (char|UnknownGenString|UnknownGenStringCall|UnknownGenRefMember|void \*|int|unsigned int|float|short|unsigned char) ?(unknown([0-9A-F]+))(\[\d+\])?;',l)
            if mm:
                typ,old,off,arr=mm[1],mm[2],int(mm[3],16),mm[4] or ''
                fname=None
                if typ in ('UnknownGenString','UnknownGenStringCall','UnknownGenRefMember'):
                    fname,_=member_name(c,off,layouts)
                if old=='unknown00' and typ=='void *': fname='__vtable'
                if fname in members.values(): fname=None   # one name per member across the chain
                fname=fname or old
                members[old]=fname
                typ={'UnknownGenString':'igStringMember','UnknownGenStringCall':'igStringMemberLookup',
                     'UnknownGenRefMember':'igObjectRefMember'}.get(typ,typ)
                out.append('    %s %s%s;'%(typ.rstrip(),fname,arr) if not typ.endswith('*') else '    %s%s%s;'%(typ,fname,arr))
                continue
            mm=re.fullmatch(r' inline ~%s\(\)\{unknown00=(\w+);\}'%name,l)
            if mm: out.append('    inline ~%s() { __vtable = %s; }'%(nn,mm[1]));continue
            mm=re.fullmatch(r' inline %s\(\)\{(.*)\}'%name,l)
            if mm:
                ctor.append((len(out),nn,mm[1]));out.append(None);continue
            raise Untranslatable('struct line '+l)
        out.append('};')
        ctors.append((len(defs),out,ctor));defs.append(None)
    members['unknown00']='__vtable'
    # Constructors, written once every member has its name.
    for di,out,ctor in ctors:
        for pos,nn,cbody in ctor:
            st=[]
            for x in re.findall(r'[^;]+;',cbody):
                mm=re.fullmatch(r'(unknown[0-9A-F]+)(\.value)?=(\w+|-?\d+);',x)
                if mm:
                    if mm[1] not in members: raise Untranslatable('ctor member '+mm[1])
                    if not re.fullmatch(r'-?\d+',mm[3]): refs.add(mm[3])
                    st.append('%s%s = %s;'%(members[mm[1]],'._value' if mm[2] else '',mm[3]));continue
                mm=re.fullmatch(r'(\w+)\(&(unknown[0-9A-F]+)\);',x)
                if mm and mm[2] in members: refs.add(mm[1]);st.append('%s(&%s);'%(mm[1],members[mm[2]]));continue
                raise Untranslatable('ctor '+x)
            out[pos]='    inline %s()\n    {\n%s\n    }'%(nn,'\n'.join('        '+x for x in st))
        defs[di]='\n'.join(out)
    lines=[]
    for l in body[2:-1]:
        if l==' igObject_construct(&object);': lines.append('    igObject_construct(&object);');continue
        mm=re.fullmatch(r' (\w+)\(&object\.(unknown[0-9A-F]+)\);',l)
        if mm:
            # A member set up by an out-of-line function (for example fn_801285A0, a 4x4 identity matrix).
            if mm[2] not in members: raise Untranslatable('member '+mm[2])
            refs.add(mm[1]);lines.append('    %s(&object.%s);'%(mm[1],members[mm[2]]));continue
        mm=re.fullmatch(r' object\.(unknown[0-9A-F]+)(\.value)?=(\w+|-?\d+);',l)
        if mm:
            if mm[1] not in members: raise Untranslatable('member '+mm[1])
            v=mm[3]
            if not re.fullmatch(r'-?\d+',v): refs.add(v)
            lines.append('    object.%s%s = %s;'%(members[mm[1]],'._value' if mm[2] else '',v));continue
        if re.fullmatch(r' return \*reinterpret_cast<void \*\*>\(reinterpret_cast<char \*>\(&object\)\+reinterpret_cast<int \*>\(Gap::Core::_arkCore\)\[0x394/4\]\);',l):
            lines.append('    return meta_vtableOf(&object);');continue
        if re.fullmatch(r' void \*result=\*reinterpret_cast<void \*\*>\(reinterpret_cast<char \*>\(&object\)\+reinterpret_cast<int \*>\(Gap::Core::_arkCore\)\[0x394/4\]\);',l):
            lines.append('    void *result = meta_vtableOf(&object);');continue
        if l==' return result;': lines.append('    return result;');continue
        mm=re.fullmatch(r' (\w+)\(&object,-1\);',l)
        if mm: refs.add(mm[1]);lines.append('    %s(&object, -1);   // the class\'s destructor'%mm[1]);continue
        raise Untranslatable('vtableRead line '+l)
    fn='void *%s_vtableRead()\n{\n    %s object;\n%s\n}'%(c,newname[top],'\n'.join(lines))
    return defs,fn

def tr_vtableread_pod(c,text,structs,refs,layouts):
    body=text.split('\n')
    if not re.match(r'void \*%s_vtableRead\(\)\{$'%c,body[0]): raise Untranslatable('pod head')
    decl=re.fullmatch(r' (UnknownGen\w+) object;',body[1])
    if not decl or decl[1] not in structs: raise Untranslatable('pod object')
    s=structs[decl[1]].split('\n')
    if s[0]!='struct %s {'%decl[1]: raise Untranslatable('pod struct')
    mem=[]
    for l in s[1:-1]:
        mm=re.fullmatch(r' (void \*|char|int|unsigned int|float|short|unsigned char) ?(unknown[0-9A-F]+)(\[\d+\])?;',l)
        if not mm: raise Untranslatable('pod member '+l)
        mem.append((mm[1],mm[2],mm[3] or ''))
    if not mem or mem[0][1]!='unknown00': raise Untranslatable('pod first')
    names={}
    for typ,n,arr in mem:
        if n=='unknown00': names[n]='__vtable';continue
        fn_,ft=member_name(c,int(n[7:],16),layouts)
        ok=fn_ and not arr and ((typ=='void *' and ft.endswith('*')) or (typ==ft) or (typ=='int' and ft not in ('float','bool') and '*' not in ft and 'short' not in ft and 'char' not in ft and 'long' not in ft))
        names[n]=fn_ if ok and fn_ not in names.values() else n
    out=['    struct {']
    for typ,n,arr in mem:
        out.append('        %s%s%s%s;'%(typ,'' if typ.endswith('*') else ' ',names[n],arr))
    out.append('    } object;')
    for l in body[2:-1]:
        if l==' igObject_construct(&object);': out.append('    igObject_construct(&object);');continue
        mm=re.fullmatch(r' object\.(unknown[0-9A-F]+)=(\w+|-?\d+);',l)
        if mm:
            if mm[1] not in names: raise Untranslatable('pod store')
            if not re.fullmatch(r'-?\d+',mm[2]): refs.add(mm[2])
            out.append('    object.%s = %s;'%(names[mm[1]],mm[2]));continue
        if re.fullmatch(r' return \*reinterpret_cast<void \*\*>\(reinterpret_cast<char \*>\(&object\)\+reinterpret_cast<int \*>\(Gap::Core::_arkCore\)\[0x394/4\]\);',l):
            out.append('    return meta_vtableOf(&object);');continue
        if re.fullmatch(r' void \*result=\*reinterpret_cast<void \*\*>\(reinterpret_cast<char \*>\(&object\)\+reinterpret_cast<int \*>\(Gap::Core::_arkCore\)\[0x394/4\]\);',l):
            out.append('    void *result = meta_vtableOf(&object);');continue
        mm=re.fullmatch(r' (\w+)\(&object,-1\);',l)
        if mm: refs.add(mm[1]);out.append('    %s(&object, -1);   // the class\'s destructor'%mm[1]);continue
        if l==' return result;': out.append('    return result;');continue
        raise Untranslatable('pod line '+l)
    return 'void *%s_vtableRead()\n{\n%s\n}'%(c,'\n'.join(out))

def tr_fieldinit(c,text,classes,layouts,refs,headers,fn_name=None):
    """fn_name: the function's name when it is not C_fieldInit (a separate function replacing inherited fields)."""
    fn_name=fn_name or c+'_fieldInit'
    body=text.split('\n')
    if body[0]!='void %s(){'%fn_name: raise Untranslatable('fieldInit head')
    fields=classes[c].get('fields') or []
    var={};out=[];vtype={}
    def V(x):
        if x in var: return var[x]
        raise Untranslatable('var '+x)
    def expr(x):
        x=x.strip()
        if x in var: return var[x]
        mm=re.fullmatch(r'\(reinterpret_cast<char \*>\((\w+)\)\+(\d+)\)',x)
        if mm and var.get(mm[1])=='base': return 'base + %s'%mm[2]
        mm=re.fullmatch(r'\*reinterpret_cast<void \*\*>\(reinterpret_cast<char \*>\((\w+)\)\+40\)',x)
        if mm and var.get(mm[1])=='meta': return 'meta->_metaFields'
        mm=re.fullmatch(r'\(void \*\)(-?\d+|\w+)',x)
        if mm:
            if not re.fullmatch(r'-?\d+',mm[1]): refs.add(mm[1])
            return '(void *)%s'%mm[1]
        if re.fullmatch(r'-?(0x[0-9A-Fa-f]+|\d+)(LL)?',x): return x
        mm=re.fullmatch(r'\*reinterpret_cast<float \*>\(\((\w+)\+(\d+)\)\)',x)
        if mm: refs.add(mm[1]);return '*reinterpret_cast<float *>(%s + %s)'%(mm[1],mm[2])
        if re.fullmatch(r'&local0',x): return '&local0'
        mm=re.fullmatch(r'(\w+)\(\)',x)
        if mm: refs.add(mm[1]);return x
        if re.fullmatch(r'&local\[\d+\]',x): return x
        if re.fullmatch(r'\(void \*\)"(?:[^"\\]|\\.)*"',x): return x     # a string literal the unit defines
        mm=re.fullmatch(r'\*reinterpret_cast<(?:const )?float \*>\((\w+)\)',x)
        if mm: refs.add(mm[1]);return x
        mm=re.fullmatch(r'meta_field\((\w+),(.*)\)',x)
        if mm and var.get(mm[1])=='meta': return 'meta_field(meta, %s)'%expr(mm[2])
        if re.fullmatch(r'\w+',x): refs.add(x);return x
        raise Untranslatable('expr '+x)
    def split_args(a):
        out=[];d=0;cur=''
        for ch in a:
            if ch=='(' : d+=1
            if ch==')': d-=1
            if ch==',' and d==0: out.append(cur);cur=''
            else: cur+=ch
        if cur.strip(): out.append(cur)
        return out
    def inherited_field(sym):
        # the field a name string names, among the class's and its ancestors' fields
        if sym not in SYMDATA: return None,None
        name=dol.cstr(SYMDATA[sym][1]);k=c;seen=set()
        while k in classes and k not in seen:
            seen.add(k)
            for f in classes[k].get('fields') or []:
                if f['name']==name: return name,f['type']
            k=classes[k].get('parent')
        return name,None
    for l in body[1:-1]:
        if l.startswith(' @@'):
            # written as is by the lifter (a local value); its variables get their readable names
            x=l[3:]
            for k,v in sorted(var.items(),key=lambda kv:-len(kv[0])): x=re.sub(r'\b%s\b'%re.escape(k),v,x)
            for s in re.findall(r'\b(lbl_[0-9A-F]{8}|fn_[0-9A-F]{8})\b',x): refs.add(s)
            out.append(x);continue
        # Replacing an inherited field by a modified copy: found by name (fn_800658F8 searches _metaFields),
        # its index (fn_80053998), a copy (virtual 0x54), and the copy put at that index (fn_8006588C).
        mm=re.fullmatch(r' void \*(\w+)=fn_800658F8\((\w+),(\w+)\);',l)
        if mm and V(mm[2])=='meta':
            refs.add('fn_800658F8');refs.add(mm[3])
            fname,ft=inherited_field(mm[3])
            stem=re.sub(r'^_+','',fname or '') or 'inherited'
            stem=stem[0].lower()+stem[1:]
            if not re.fullmatch(r'[A-Za-z_]\w*',stem): stem='inherited'
            n=stem+'Field'
            while n in var.values(): n+='_'
            var[mm[1]]=n;vtype[n]=ft
            if ft in layouts: headers.add(layouts[ft]['header'])
            typ='Meta::%s *'%ft if ft in layouts else 'void *'
            cast='static_cast<%s>(%%s)'%typ if ft in layouts else '%s'
            out.append('    %s%s = %s;   // %s'%(typ,n,cast%('fn_800658F8(meta, %s)'%mm[3]),'"%s"'%fname if fname else 'by name'))
            continue
        mm=re.fullmatch(r' int (\w+)=fn_80053998\(\*reinterpret_cast<void \*\*>\(reinterpret_cast<char \*>\((\w+)\)\+40\),(\w+)\);',l)
        if mm and V(mm[2])=='meta':
            refs.add('fn_80053998');src=V(mm[3])
            n=re.sub(r'Field_*$','Index',src) if re.search(r'Field_*$',src) else 'index'
            while n in var.values(): n+='_'
            var[mm[1]]=n
            out.append('    int %s = fn_80053998(meta->_metaFields, %s);'%(n,src));continue
        mm=re.fullmatch(r' (\w+)=reinterpret_cast<igMetaFieldVirtuals \*>\(\1\)->virtual54\((.*)\);',l)
        if mm:
            # the field's variable now holds its copy
            src=V(mm[1]);ft=vtype.get(src)
            call='reinterpret_cast<igMetaFieldVirtuals *>(%s)->virtual54(%s)'%(src,', '.join(expr(x) for x in split_args(mm[2])))
            out.append('    %s = %s;   // a copy of it'%(src,'static_cast<Meta::%s *>(%s)'%(ft,call) if ft in layouts else call));continue
        mm=re.fullmatch(r' void \*(\w+)=reinterpret_cast<igMetaFieldVirtuals \*>\((\w+)\)->virtual54\((.*)\);',l)
        if mm:
            src=V(mm[2]);ft=vtype.get(src)
            n=re.sub(r'Field_*$','Copy',src) if re.search(r'Field_*$',src) else 'copy'
            while n in var.values(): n+='_'
            var[mm[1]]=n;vtype[n]=ft
            call='reinterpret_cast<igMetaFieldVirtuals *>(%s)->virtual54(%s)'%(src,', '.join(expr(x) for x in split_args(mm[3])))
            if ft in layouts: out.append('    Meta::%s *%s = static_cast<Meta::%s *>(%s);'%(ft,n,ft,call))
            else: out.append('    void *%s = %s;'%(n,call))
            continue
        mm=re.fullmatch(r' void \*(\w+)=(\w+)\((.+)\);',l)
        if mm and mm[2]!='meta_field' and mm[2]!='meta_fieldCount':
            refs.add(mm[2]);n='value_'+mm[1]
            var[mm[1]]=n
            out.append('    void *%s = %s(%s);'%(n,mm[2],', '.join(expr(x) for x in split_args(mm[3]))));continue
        mm=re.fullmatch(r' void \*(\w+)=%s_meta;'%c,l)
        if mm: var[mm[1]]='meta';out.append('    Meta::igMetaObject *meta = %s_meta;'%c);continue
        mm=re.fullmatch(r' void \*(\w+)=meta_fieldCount\((\w+)\);',l)
        if mm and V(mm[2])=='meta': var[mm[1]]='base';out.append('    int base = meta_fieldCount(meta);');continue
        mm=re.fullmatch(r' void \*(\w+)=meta_field\((\w+),(.*)\);',l)
        if mm and V(mm[2])=='meta':
            ix=expr(mm[3]);k=0 if ix=='base' else int(ix.split('+')[1]) if ix.startswith('base + ') else None
            if k is None or k>=len(fields): raise Untranslatable('field index')
            ft=fields[k]['type']
            n=re.sub(r'^_+','',fields[k]['name']) or 'field%d'%k
            n=n[0].lower()+n[1:]+'Field'
            if not re.fullmatch(r'[A-Za-z_]\w*',n): n='field%d'%k
            if n in var.values(): n+='_%s'%mm[1]
            var[mm[1]]=n;vtype[n]=ft
            if ft in layouts: headers.add(layouts[ft]['header'])
            else: raise Untranslatable('field type '+ft)
            note='' if n.endswith('Field') else '   // %s'%fields[k]['name']
            out.append('    Meta::%s *%s = static_cast<Meta::%s *>(meta_field(meta, %s));%s'%(ft,n,ft,ix,note));continue
        mm=re.fullmatch(r' void \*(\w+)=(\w+)\(\);',l)
        if mm:
            refs.add(mm[2]);cls,role=ident_of(mm[2],classes)
            n=(cls+'Meta') if role in ('metaObject','getMeta') else 'value_'+mm[1]
            n=n[0].lower()+n[1:]
            while n in var.values(): n+='_'
            var[mm[1]]=n
            out.append('    %s%s = %s();'%('Meta::igMetaObject *' if role in ('metaObject','getMeta') else 'void *',n,mm[2]));continue
        mm=re.fullmatch(r' \*reinterpret_cast<(void \* \*|unsigned char \*|short \*|int \*|float \*)>\(reinterpret_cast<char \*>\((\w+)\)\+(\d+)\)=(.*);',l)
        if mm:
            if mm[2]==c+'_meta' and mm[2] not in var:
                tgt=mm[2];vtype[tgt]='igMetaObject'   # a store into the metaobject itself
            else: tgt=V(mm[2])
            off=int(mm[3]);val=expr(mm[4]) if mm[4].strip() not in var else var[mm[4].strip()]
            mn,mt=member_name(vtype.get(tgt),off,layouts) if tgt in vtype else (None,None)
            width={'void * *':'ptr','unsigned char *':'byte','short *':'half','int *':'word','float *':'float'}[mm[1]]
            kind=None
            if mt:
                kind=('ptr' if mt.endswith('*') else 'byte' if mt in ('bool','unsigned char','signed char','char')
                      else 'half' if 'short' in mt else 'float' if mt=='float' else 'word')
            if mn and kind==width:
                if mt=='bool': val={'0':'false','1':'true'}.get(val,val)
                elif mt.endswith('*') and val!='0' and not val.endswith('Meta'): val='reinterpret_cast<%s>(%s)'%(mt,val)
                out.append('    %s->%s = %s;'%(tgt,mn,val));continue
            # No reflected member of this width here: the store as the code does it.
            out.append('    *reinterpret_cast<%s>(reinterpret_cast<char *>(%s) + 0x%X) = %s;'%(mm[1].replace(' * *',' **'),tgt,off,val));continue
        mm=re.fullmatch(r' (meta_appendFields|meta_setupFields)\((.*)\);',l)
        if mm:
            a=[expr(x) for x in split_args(mm[2])]
            out.append('    %s(%s);'%(mm[1],', '.join(a)));continue
        mm=re.fullmatch(r' (\w+)\((.*)\);',l)
        if mm:
            refs.add(mm[1]);a=[expr(x) for x in split_args(mm[2])]
            out.append('    %s(%s);'%(mm[1],', '.join(a)));continue
        raise Untranslatable('fieldInit line '+l)
    # A metaobject fetched only to be stored in the next line is written in the store.
    folded=[];i=0
    while i<len(out):
        mm=re.fullmatch(r'    Meta::igMetaObject \*(\w+) = (\w+\(\));',out[i])
        if mm and i+1<len(out):
            m2=re.fullmatch(r'    (\w+)->(\w+) = %s;'%mm[1],out[i+1])
            if m2 and sum(len(re.findall(r'\b%s\b'%mm[1],l)) for l in out)==2:
                folded.append('    %s->%s = %s;'%(m2[1],m2[2],mm[2]));i+=2;continue
        folded.append(out[i]);i+=1
    return 'void %s()\n{\n%s\n}'%(fn_name,'\n'.join(folded))

# ---------------------------------------------------------------- per-class file

def class_file(c,block,fnsrc,structs_by_fn,decls_by_fn,classes,layouts,data,tags_by_fn):
    refs=set();headers=set();defs=[];bodies=[];forced={}
    for a,size,name,role in block:
        text=fnsrc[name]
        if role in ('getMeta','getMetaCall','arkRegister','metaObject','create'): bodies.append(tr_simple(c,role,text))
        elif role=='register': bodies.append(tr_register(c,text,refs,forced))
        elif role=='vtableRead':
            st=structs_by_fn[name]
            if any('UnknownGenRoot' in k for k in st):
                d,f=tr_vtableread(c,text,st,layouts,refs);defs+=d;bodies.append(f)
            else: bodies.append(tr_vtableread_pod(c,text,st,refs,layouts))
        elif role=='fieldInit': bodies.append(tr_fieldinit(c,text,classes,layouts,refs,headers,name))
        else: raise Untranslatable(role)
    own={n for a,s,n,r in block}
    declared=set();uses=set([c])
    for r in refs:
        k,role=ident_of(r,classes)
        if k: uses.add(k)
    other=[]
    known={'meta_registerNow','meta_registerClass','meta_newMetaObject','meta_createInstance','fn_800607F4','meta_release',
           'lbl_805621F4','meta_fieldCount','meta_field','meta_appendFields','meta_setupFields','igObject_construct','fn_80066E1C'}
    for r in sorted(refs):
        k,role=ident_of(r,classes)
        if k or r in known or r in own: continue
        if r in forced and forced[r]!='DATA': other.append(forced[r]);continue
        if r in forced and r in data:
            # Declared with its size, so small objects get the same small-data addressing.
            other.append('extern char %s[%d];'%(r,data[r][2]) if data[r][2] else 'extern char %s[];'%r);continue
        d=None
        for n in decls_by_fn:
            for l in decls_by_fn[n]:
                if re.search(r'\b%s\b'%re.escape(r),l) and (l.startswith('extern ') or re.match(r'[\w\s\*]+\b%s\('%re.escape(r),l)): d=l;break
            if d: break
        if not d:
            if r in data: d='extern %schar %s[%d];'%('const ' if data[r][0]=='.sdata2' else '',r,data[r][2]) if data[r][2] else 'extern char %s[];'%r
            else: raise Untranslatable('no declaration for '+r)
        other.append(d)
    head=['// %s: Alchemy class registration (0x%08X..0x%08X). Written by tools/alchemymeta/metasrc.py.'%(c,block[0][0],block[-1][0]+block[-1][1]),
          '#include <meta/register.h>']
    head+=['#include <meta/%s.h>'%h for h in sorted(headers)]
    head.append('')
    head+=['META_DECLARE(%s)'%u for u in [c]+sorted(uses-{c})]
    if other: head+=['','extern "C" {']+other+['}']
    text='\n'.join(head)+'\n\n'
    if defs: text+='\n\n'.join(defs)+'\n\n'
    # Optimization for speed and stmw/lmw saves follow the majority of the functions; the others say so.
    names=[n for a,s,n,r in block]
    speed=sum('speed' in tags_by_fn[n] for n in names)*2>len(names)
    lmw=sum('lmw' in tags_by_fn[n] for n in names)*2>len(names)
    wrapped=[]
    for n,b in zip(names,bodies):
        pr=[]
        if ('speed' in tags_by_fn[n])!=speed: pr.append('#pragma optimize_for_size %s'%('off' if not speed else 'on'))
        if ('lmw' in tags_by_fn[n])!=lmw: pr.append('#pragma use_lmw_stmw %s'%('on' if not lmw else 'off'))
        wrapped.append('#pragma push\n%s\n%s\n#pragma pop'%('\n'.join(pr),b) if pr else b)
    text+='#pragma push\n#pragma auto_inline off\nextern "C" {\n\n'+'\n\n'.join(wrapped)+'\n\n}\n#pragma pop\n'
    filetags=set()
    for n in names: filetags|=tags_by_fn[n]&{'eh','nosdata'}
    if speed: filetags.add('speed')
    if lmw: filetags.add('lmw')
    return text,filetags

# ---------------------------------------------------------------- verification

ORIG=None
DEBUG=False
LIFT=False
SYMDATA={}
# The identified Alchemy core range (tools/unknowngen/cycle.sh emits its units under Alchemy/).
ALCHEMY_LO,ALCHEMY_HI=0x80020400,0x800A0000
def verify(text,flags,names,expect_eti):
    global ORIG
    d=Path(tempfile.mkdtemp());c=d/'a.cpp';c.write_text(text);o=d/'a.o'
    cmd=compiler.command('eh' in flags,'nosdata' in flags,'speed' in flags,'lmw' in flags)
    r=subprocess.run(cmd+['-c',str(c),'-o',str(o)],capture_output=True,text=True)
    if r.returncode:
        if DEBUG: print(r.stdout[-1500:])
        return 'compile: '+' / '.join(l.strip() for l in r.stdout.splitlines() if 'Error' in l or '^' in l or re.match(r'#\s+\d+:',l))[:300]
    secs,rels,syms=elf.parse(o)
    order=[s['name'] for s in sorted(syms,key=lambda s:s['value']) if s['type']==2 and s['section']=='.text' and s['binding']!=2]
    real=[n for n in order if n in names]
    if real!=names: return 'order %s'%real
    for n in ('.data','.rodata','.bss','.sdata','.sbss','.sdata2','.sbss2'):
        if n in secs and secs[n]['size']: return 'emits %s'%n
    # Entries for this file's functions (weak copies of inline destructors have their own, which the linker
    # discards with the copies).
    # Exception actions that name a weak copy (an inline destructor called during cleanup) keep it in the
    # executable, which the original does not have.
    weak={s['name'] for s in syms if s['type']==2 and s['binding']==2}
    kept=sorted({r['symbol']['name'] for r in rels if r['section']=='extab' and r['symbol']['name'] in weak})
    if kept: return 'extab keeps %s'%kept[0]
    neti=sum(1 for r in rels if r['section']=='extabindex' and r['offset']%12==0 and r['symbol']['name'] in names)
    if neti!=expect_eti: return 'extabindex %d, expected %d'%(neti,expect_eti)
    for n in names:
        a=hwdiff.disassemble(o,n);b=hwdiff.disassemble(ORIG[n],n)
        if a!=b:
            if DEBUG:
                import difflib
                print('--- %s (%s)'%(n,sorted(flags)));print('\n'.join(difflib.unified_diff(b,a,'orig','mine',lineterm='',n=1)))
            return 'differs '+n
    return None

def main():
    global ORIG,DEBUG
    apply='--apply' in sys.argv
    DEBUG='--debug' in sys.argv
    global LIFT
    LIFT='--lift' in sys.argv
    only=None;limit=None;jobs=8
    for i,a in enumerate(sys.argv):
        if a=='--only': only=set(sys.argv[i+1].split(','))
        if a=='--limit': limit=int(sys.argv[i+1])
        if a=='-j': jobs=int(sys.argv[i+1])
    funcs,data,byaddr=load_symbols()
    global SYMDATA
    SYMDATA=data
    layouts=json.load(open(HERE/'layouts.json'))
    rawc=json.load(open('build/GDJEB2/analysis/meta/classes.json'))
    classes={}
    for k,v in rawc.items():
        i=re.sub(r'@lbl_([0-9A-F]{8})$',r'_\1',k);classes[i]=v
    units=load_units();ustart=[u[1] for u in units]
    def unit_of(a):
        i=bisect.bisect_right(ustart,a)-1
        return units[i] if i>=0 and units[i][1]<=a<units[i][2] else None
    mu=[(int(r[1],16),int(r[2],16)) for r in (l.split('\t') for l in open(CONFIG/'meta_units.txt')) ] if (CONFIG/'meta_units.txt').exists() else []
    mu.sort();mstart=[s for s,e in mu]
    def meta_of(a):
        i=bisect.bisect_right(mstart,a)-1
        return i>=0 and mu[i][0]<=a<mu[i][1]
    parsed={}
    def unit_parse(u):
        if u[0] not in parsed: parsed[u[0]]=parse_unit(Path('src',u[0]).read_text())
        return parsed[u[0]]
    # blocks of consecutive role functions of one class
    blocks=[];cur=None
    for a,size,name in funcs:
        k,role=ident_of(name,classes)
        if k and role in ROLES:
            if cur is None or cur[0]!=k: cur=[k,[]];blocks.append(cur)
            cur[1].append((a,size,name,role))
        else: cur=None
    fidx={a:i for i,(a,s,n) in enumerate(funcs)}
    ORIG=hwdiff.original_objects()
    eti=eti_entries(data);eti_fns={f for f,x in eti}
    if LIFT: allfns=json.load(open('build/GDJEB2/analysis/reg/allfns.json'))
    alts={}   # other store orders of lifted functions, tried at verification
    chain_decls={}
    vt_sizes={k+'_vtable':v.get('size') for k,v in classes.items() if v.get('size')}
    def lift(c,n,role,classes):
        insns=allfns[n]
        if role=='register': return asmlift.lift_register(c,insns),{},[]
        if role=='getMeta': return asmlift.lift_getmeta(c,insns),{},[]
        if role=='vtableRead':
            try:
                if any(x.startswith(('beq','bne')) for x in insns): raise asmlift.Unliftable('branches')
                asmlift.lift_vtableread(c,insns,classes.get(c,{}).get('size',0))
                chain=False
            except asmlift.Unliftable: chain=True
            if chain:
                forms=[]
                for mode in (False,True,'stores first','asm order','top'):
                    try: forms.append(asmlift.lift_vtableread_chain(c,insns,classes.get(c,{}).get('size',0),vt_sizes,ctors=mode))
                    except asmlift.Unliftable as e: err=e
                if not forms: raise err
                alts[n]=[]
                for alt in forms[1:]:
                    if (alt[0],alt[1]) not in alts[n]: alts[n].append((alt[0],alt[1]))
                return forms[0]
            fn,st=asmlift.lift_vtableread(c,insns,classes.get(c,{}).get('size',0))
            alt,_=asmlift.lift_vtableread(c,insns,classes.get(c,{}).get('size',0),vt_sizes)
            alts[n]=[alt] if alt!=fn else []
            for mode in (True,'stores first','asm order','top'):
                try:
                    ch=asmlift.lift_vtableread_chain(c,insns,classes.get(c,{}).get('size',0),vt_sizes,ctors=mode)
                    if (ch[0],ch[1]) not in alts[n]: alts[n].append((ch[0],ch[1]))
                    chain_decls[n]=ch[2]
                except asmlift.Unliftable: pass
            dt=re.findall(r'\n (\w+)\(&object,-1\);',fn)
            return fn,st,['void %s(void *, int);'%d for d in dt]+chain_decls.get(n,[])
        if role=='fieldInit':
            fn,decls=asmlift.lift_fieldinit(c,insns)
            return fn,{},decls
        raise asmlift.Unliftable(role)
    jobs_=[];skipped=collections.Counter()
    for c,block in blocks:
        if only and c not in only: continue
        us=[unit_of(a) for a,s,n,r in block]
        if any(meta_of(a) for a,s,n,r in block):
            # functions after the class file that are still original assembly form their own block
            k=max(i for i,(a,s,n,r) in enumerate(block) if meta_of(a))+1
            if not LIFT or k==len(block) or any(meta_of(a) or unit_of(a) for a,s,n,r in block[k:]):
                skipped['converted']+=1;continue
            block=block[k:];us=us[k:]
        if any(u is None for u in us) and not LIFT: skipped['not generated']+=1;continue
        fnsrc={};structs_by_fn={};decls_by_fn={};tags_by_fn={};lifted=[]
        try:
            for j,((a,s,n,r),u) in enumerate(zip(block,us)):
                if u is None:
                    try: fnsrc[n],structs_by_fn[n],decls_by_fn[n]=lift(c,n,r,classes)
                    except asmlift.Unliftable:
                        # The class file can end before a function that does not lift (it stays as it is)
                        # when the functions before it include lifted ones.
                        if not lifted: raise
                        skipped['truncated before '+r]+=1
                        block=block[:j];us=us[:j];break
                    # Exceptions on where the function has an exception-index entry; speed and stmw/lmw are
                    # tried at verification.
                    tags_by_fn[n]={'eh'} if a in eti_fns else set()
                    lifted.append(n);continue
                decls,structs,fns=unit_parse(u)
                if n not in fns: raise Untranslatable('not parsed '+n)
                fnsrc[n]=fns[n];structs_by_fn[n]=structs;decls_by_fn[n]=decls
                tags_by_fn[n]=set(t for t in u[3].split(',') if t!='-')
            text,tags=class_file(c,block,fnsrc,structs_by_fn,decls_by_fn,classes,layouts,data,tags_by_fn)
        except Untranslatable as e:
            skipped['untranslatable: '+str(e).split(' ')[0]]+=1;continue
        except asmlift.Unliftable as e:
            skipped['unliftable: '+str(e).split(' ')[0]]+=1;continue
        start=block[0][0];last=fidx[block[-1][0]]
        end=funcs[last+1][0] if last+1<len(funcs) else block[-1][0]+block[-1][1]
        jobs_.append((c,block,text,tags,start,end,us,(fnsrc,structs_by_fn,decls_by_fn,tags_by_fn,lifted)))
        if limit and len(jobs_)>=limit: break
    print('blocks',len(blocks),'candidates',len(jobs_),'skipped',dict(skipped))
    def run(job):
        c,block,text,tags,start,end,us,src=job
        names=[n for a,s,n,r in block]
        expect=sum(1 for f,x in eti if start<=f<end)
        key=(c,start)
        fnsrc,structs_by_fn,decls_by_fn,tags_by_fn,lifted=src
        # Lifted functions' speed and stmw/lmw settings are not known: each combination is tried.
        variants=[(text,tags)]
        if lifted:
            variants=[]
            texts=[(fnsrc,structs_by_fn)]
            for n in lifted:
                for a in alts.get(n,[]):
                    if isinstance(a,tuple): texts.append((dict(fnsrc,**{n:a[0]}),dict(structs_by_fn,**{n:a[1]})))
                    else: texts.append((dict(fnsrc,**{n:a}),structs_by_fn))
            for fs,sb in texts:
                for extra in ((),('speed',),('lmw',),('speed','lmw')):
                    tb={n:(v|set(extra) if n in lifted else v) for n,v in tags_by_fn.items()}
                    try: variants.append(class_file(c,block,fs,sb,decls_by_fn,classes,layouts,data,tb))
                    except Untranslatable as e:
                        if DEBUG: print('variant of %s: %s'%(c,e))
        err=None
        for text,tags in variants:
            err=verify(text,tags,names,expect)
            if not err: return key,text,tags,None
            if 'nosdata' not in tags and not verify(text,tags|{'nosdata'},names,expect): return key,text,tags|{'nosdata'},None
        return key,text,None,err
    ok=[];bad=collections.Counter();badex={}
    with ThreadPoolExecutor(jobs) as ex:
        for c,text,fl,err in ex.map(run,jobs_):
            if err:
                k=err.split(' ')[0];bad[k]+=1;badex.setdefault(k,(c[0],err))
                if DEBUG: print('FAILED %s: %s'%(c[0],err))
            else: ok.append((c,text,fl))
    print('exact',len(ok),'failed',dict(bad))
    for k,(c,e) in badex.items(): print('  e.g.',c,e)
    out=Path('build/GDJEB2/analysis/reg/metasrc');out.mkdir(parents=True,exist_ok=True)
    for (c,st),text,fl in ok: (out/('%s_%08X.cpp'%(c,st))).write_text(text)
    json.dump({'%s_%08X'%k:sorted(fl) for k,t,fl in ok},open(out/'flags.json','w'),indent=0)
    good={k for k,t,f in ok}
    if apply: apply_changes([j for j in jobs_ if (j[0],j[4]) in good],{k:(t,f) for k,t,f in ok},units,funcs,data,eti)

def eti_entries(data):
    """(function address, extab entry address) for every exception-index entry."""
    out=[]
    for n,(sec,a,size) in data.items():
        if n.startswith('@eti_') and sec=='extabindex': out.append((dol.word(a),dol.word(a+8),a))
    out.sort()
    return [(f,x) for f,x,a in out]

def eh_ranges(start,end,data):
    eti=[];etb={}
    for n,(sec,a,size) in data.items():
        if sec=='extabindex' and n.startswith('@eti_'):
            f=dol.word(a)
            if start<=f<end: eti.append((a,dol.word(a+8)))
        if sec=='extab' and n.startswith('@etb_'): etb[a]=size
    if not eti: return None
    eti.sort()
    ia=(eti[0][0],eti[-1][0]+12)
    xs=sorted(x for a,x in eti)
    xa=(xs[0],xs[-1]+etb[xs[-1]])
    return xa,ia

def write_remnant(u,keep,src_dir='src'):
    """The source of generated unit u reduced to the functions in keep."""
    text=Path(src_dir,u[0]).read_text()
    decls,structs,fns=parse_unit(text)
    for n,body in fns.items():
        if n not in keep: text=text.replace(body+'\n','',1)
    return text

def apply_changes(jobs,results,units,funcs,data,eti):
    fstart=[f[0] for f in funcs]
    newunits=[];removed=set();meta_units=[]
    affected=collections.defaultdict(list)
    used_names={l.split('\t')[0].lower() for l in open(CONFIG/'meta_units.txt')} if (CONFIG/'meta_units.txt').exists() else set()
    for c,block,text,tags,start,end,us,src in jobs:
        us=[u for u in us if u]
        for u in us: affected[u[0]].append((start,end))
        # Classes in the identified Alchemy core range (whose generated units are under Alchemy/) are engine
        # code; the others stay unclassified, as their generated units were.
        core=all(u[0].startswith('Alchemy/') for u in us) if us else ALCHEMY_LO<=start<ALCHEMY_HI
        rel=('Alchemy/src/Meta/%s.cpp' if core else 'Meta/%s.cpp')%c
        # Names differing only in case get a numeric suffix (the file system may ignore case).
        k=2
        while rel.lower() in used_names: rel=re.sub(r'(_\d+)?\.cpp$','_%d.cpp'%k,rel);k+=1
        used_names.add(rel.lower())
        meta_units.append((rel,start,end,sorted(results[(c,start)][1])))
        Path('src',rel).parent.mkdir(parents=True,exist_ok=True)
        Path('src',rel).write_text(results[(c,start)][0])
    keepunits=[]
    for u in units:
        if u[0] not in affected: keepunits.append(u);continue
        cut=sorted(affected[u[0]])
        # pieces of u outside the class ranges
        pieces=[];pos=u[1]
        for s,e in cut:
            s2,e2=max(s,u[1]),min(e,u[2])
            if s2>pos: pieces.append((pos,s2))
            pos=max(pos,e2)
        if pos<u[2]: pieces.append((pos,u[2]))
        decls,structs,fns=parse_unit(Path('src',u[0]).read_text())
        for s,e in pieces:
            keep=[n for a,sz,n in funcs if s<=a<e]
            name='%s/unknown%08X.cpp'%(u[0].rsplit('/',1)[0],s)
            text=write_remnant(u,set(keep))
            keepunits.append([name,s,e,u[3],text])
        removed.add(u[0])
    for n in removed: Path('src',n).unlink()
    for u in keepunits:
        if len(u)==5: Path('src',u[0]).write_text(u[4])
    keepunits.sort(key=lambda u:u[1])
    Path(CONFIG/'generated_units.txt').write_text(''.join('%s\t%08X\t%08X\t%s\n'%(u[0],u[1],u[2],u[3]) for u in keepunits))
    old=[]
    p=CONFIG/'meta_units.txt'
    if p.exists(): old=[l.rstrip('\n').split('\t') for l in open(p) if l.strip()]
    rows={r[0]:r for r in old}
    for n,s,e,fl in meta_units: rows[n]=[n,'%08X'%s,'%08X'%e,','.join(fl) or '-']
    p.write_text(''.join('\t'.join(r)+'\n' for r in sorted(rows.values(),key=lambda r:r[1])))
    # splits.txt: each removed unit's entry is replaced, in place, by the new units starting in its range.
    sp=CONFIG/'splits.txt';blocks=sp.read_text().rstrip('\n').split('\n\n')
    def unit_block(name,s,e):
        out=[name+':']
        r=eh_ranges(s,e,data)
        if r:
            (xa,xb),(ia,ib)=r
            out.append('\textab       start:0x%08X end:0x%08X'%(xa,xb))
            out.append('\textabindex  start:0x%08X end:0x%08X'%(ia,ib))
        out.append('\t.text       start:0x%08X end:0x%08X'%(s,e))
        return '\n'.join(out)
    new=[(u[1],unit_block(u[0],u[1],u[2])) for u in keepunits if len(u)==5]+[(s,unit_block(n,s,e)) for n,s,e,fl in meta_units]
    new.sort()
    ranges={u[0]:(u[1],u[2]) for u in units if u[0] in removed}
    placed=set();out=[]
    for b in blocks:
        name=b.split('\n')[0][:-1]
        if name not in removed: out.append(b);continue
        lo,hi=ranges[name]
        for i,(st,nb) in enumerate(new):
            if lo<=st<hi and i not in placed: out.append(nb);placed.add(i)
    # Units over code no unit held before (original assembly) go before the first unit after them.
    def text_start(b):
        m=re.search(r'\.text\s+start:0x([0-9A-F]+)',b)
        return int(m[1],16) if m else None
    for i,(st,nb) in enumerate(new):
        if i in placed: continue
        k=next((j for j,b in enumerate(out) if text_start(b) is not None and text_start(b)>st),len(out))
        out.insert(k,nb);placed.add(i)
    sp.write_text('\n\n'.join(out)+'\n')
    print('applied: %d class files, %d generated units removed, %d remnants'%(len(meta_units),len(removed),sum(1 for u in keepunits if len(u)==5)))

if __name__=='__main__':
    main()
