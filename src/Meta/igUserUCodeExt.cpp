// igUserUCodeExt: Alchemy class registration (0x800D0234..0x800D031C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUserUCodeExt)
META_DECLARE(igContextExt)

extern "C" {
void fn_800CE2F8();
void *fn_800D031C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igUserUCodeExt)

META_ARK_REGISTER(igUserUCodeExt)

void igUserUCodeExt_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igUserUCodeExt_meta, igContextExt_register,
                       fn_800D031C, igUserUCodeExt_getMetaCall,
                       igUserUCodeExt_className, 0x14,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igUserUCodeExt)

}
#pragma pop
