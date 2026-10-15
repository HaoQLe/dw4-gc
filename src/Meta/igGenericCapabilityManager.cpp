// igGenericCapabilityManager: Alchemy class registration (0x800D4764..0x800D48D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGenericCapabilityManager)
META_DECLARE(igCapabilityManager)

extern "C" {
void fn_800CE2F8();
void *fn_800CE528();
extern char lbl_80492AD0[];
}

struct Instance_800D47D8_0 {
    void *__vtable;
    char unknown04[4];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igGenericCapabilityManager)

META_GET_META(igGenericCapabilityManager)

void *igGenericCapabilityManager_vtableRead()
{
    Instance_800D47D8_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_80492AD0;
    object.__vtable = igGenericCapabilityManager_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGenericCapabilityManager)

void igGenericCapabilityManager_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igGenericCapabilityManager_meta, igCapabilityManager_register,
                       fn_800CE528, igGenericCapabilityManager_getMetaCall,
                       igGenericCapabilityManager_className, 0x8,
                       igGenericCapabilityManager_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igGenericCapabilityManager)

}
#pragma pop
