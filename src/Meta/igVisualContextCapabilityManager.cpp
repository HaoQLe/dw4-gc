// igVisualContextCapabilityManager: Alchemy class registration (0x800CE364..0x800CE528). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVisualContextCapabilityManager)
META_DECLARE(igCapabilityManager)

extern "C" {
void fn_800CE2F8();
void *fn_800CE528();
extern char igVisualContextCapabilityManager_dependencies[8];
extern char lbl_80492AD0[];
}

struct igVisualContextCapabilityManagerInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _visualContext;
    char unknown0C[4];
    inline ~igVisualContextCapabilityManagerInstance() { __vtable = igVisualContextCapabilityManager_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVisualContextCapabilityManager)

META_GET_META(igVisualContextCapabilityManager)

void *igVisualContextCapabilityManager_vtableRead()
{
    igVisualContextCapabilityManagerInstance object;
    object.__vtable = lbl_80492AD0;
    object.__vtable = igVisualContextCapabilityManager_vtable;
    object._visualContext._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVisualContextCapabilityManager)

void igVisualContextCapabilityManager_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igVisualContextCapabilityManager_meta, igCapabilityManager_register,
                       fn_800CE528, igVisualContextCapabilityManager_getMetaCall,
                       igVisualContextCapabilityManager_className, 0xC,
                       igVisualContextCapabilityManager_vtableRead, igVisualContextCapabilityManager_fieldInit, 0, igVisualContextCapabilityManager_dependencies);
}

META_GET_META_CALL(igVisualContextCapabilityManager)

}
#pragma pop
