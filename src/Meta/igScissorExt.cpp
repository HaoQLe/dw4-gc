// igScissorExt: Alchemy class registration (0x800D0360..0x800D0450). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igScissorExt)
META_DECLARE(igContextExt)

extern "C" {
void fn_800CE2F8();
void *fn_800D031C();
void fn_800D0450();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igScissorExt)

META_ARK_REGISTER(igScissorExt)

void igScissorExt_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igScissorExt_meta, igContextExt_register,
                       fn_800D031C, igScissorExt_getMetaCall,
                       igScissorExt_className, 0x14,
                       0, fn_800D0450, 0, 0);
}

META_GET_META_CALL(igScissorExt)

}
#pragma pop
