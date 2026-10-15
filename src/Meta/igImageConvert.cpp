// igImageConvert: Alchemy class registration (0x800D1DAC..0x800D1ED4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igImageConvert)
META_DECLARE(igImageUtils)

extern "C" {
void fn_800CE2F8();
void *fn_800D1DA4();
void fn_800D1ED4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igImageConvert)

META_GET_META(igImageConvert)

META_ARK_REGISTER(igImageConvert)

void igImageConvert_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igImageConvert_meta, igImageUtils_register,
                       fn_800D1DA4, igImageConvert_getMetaCall,
                       igImageConvert_className, 0x8,
                       0, fn_800D1ED4, 0, 0);
}

META_GET_META_CALL(igImageConvert)

}
#pragma pop
