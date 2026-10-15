// igCapabilityManager: Alchemy class registration (0x800D58A4..0x800D598C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCapabilityManager)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_800CE2F8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCapabilityManager)

META_ARK_REGISTER(igCapabilityManager)

void igCapabilityManager_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igCapabilityManager_meta, igObject_register,
                       fn_800237D0, igCapabilityManager_getMetaCall,
                       igCapabilityManager_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igCapabilityManager)

}
#pragma pop
