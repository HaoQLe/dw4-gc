// igImageUtils: Alchemy class registration (0x800D1F08..0x800D1FF0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igImageUtils)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_800CE2F8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igImageUtils)

META_ARK_REGISTER(igImageUtils)

void igImageUtils_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igImageUtils_meta, igObject_register,
                       fn_800237D0, igImageUtils_getMetaCall,
                       igImageUtils_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igImageUtils)

}
#pragma pop
