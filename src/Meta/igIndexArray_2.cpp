// igIndexArray: Alchemy class registration (0x800D1AA4..0x800D1B98). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIndexArray)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_800CE2F8();
void fn_800D1B98();
extern char igIndexArray_dependencies[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igIndexArray)

META_ARK_REGISTER(igIndexArray)

void igIndexArray_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igIndexArray_meta, igObject_register,
                       fn_800237D0, igIndexArray_getMetaCall,
                       igIndexArray_className, 0x1C,
                       0, fn_800D1B98, 0, igIndexArray_dependencies);
}

META_GET_META_CALL(igIndexArray)

}
#pragma pop
