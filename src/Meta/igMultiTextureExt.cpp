// igMultiTextureExt: Alchemy class registration (0x800D17A0..0x800D1890). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMultiTextureExt)
META_DECLARE(igContextExt)

extern "C" {
void fn_800CE2F8();
void *fn_800D031C();
void fn_800D1890();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMultiTextureExt)

META_ARK_REGISTER(igMultiTextureExt)

void igMultiTextureExt_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igMultiTextureExt_meta, igContextExt_register,
                       fn_800D031C, igMultiTextureExt_getMetaCall,
                       igMultiTextureExt_className, 0x14,
                       0, fn_800D1890, 0, 0);
}

META_GET_META_CALL(igMultiTextureExt)

}
#pragma pop
