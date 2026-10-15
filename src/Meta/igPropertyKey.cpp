// igPropertyKey: Alchemy class registration (0x801B4510..0x801B45F8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igPropertyKey)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_801AA6DC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPropertyKey)

META_ARK_REGISTER(igPropertyKey)

void igPropertyKey_register()
{
    fn_801AA6DC();
    meta_registerClass(1, &igPropertyKey_meta, igObject_register,
                       fn_800237D0, igPropertyKey_getMetaCall,
                       igPropertyKey_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igPropertyKey)

}
#pragma pop
