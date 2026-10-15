// igDisableExt: Alchemy class registration (0x800D4B7C..0x800D4C64). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDisableExt)
META_DECLARE(igContextExt)

extern "C" {
void fn_800CE2F8();
void *fn_800D031C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDisableExt)

META_ARK_REGISTER(igDisableExt)

void igDisableExt_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igDisableExt_meta, igContextExt_register,
                       fn_800D031C, igDisableExt_getMetaCall,
                       igDisableExt_className, 0x14,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igDisableExt)

}
#pragma pop
