// igOptBase: Alchemy class registration (0x8013B918..0x8013BA10). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igOptBase)
META_DECLARE(igBase)

extern "C" {
void fn_8012FC48();
void *fn_8013BA10();
extern char igOptBase_dependencies[12];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igOptBase)

META_ARK_REGISTER(igOptBase)

void igOptBase_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igOptBase_meta, igBase_register,
                       fn_8013BA10, igOptBase_getMetaCall,
                       igOptBase_className, 0x28,
                       0, igOptBase_fieldInit, 0, igOptBase_dependencies);
}

META_GET_META_CALL(igOptBase)

}
#pragma pop
