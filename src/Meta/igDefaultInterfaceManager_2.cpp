// igDefaultInterfaceManager: Alchemy class registration (0x800CB6D4..0x800CB840). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDefaultInterfaceManager)
META_DECLARE(igInterfaceManager)

extern "C" {
void fn_800CAEE0();
void *fn_800CB840();
extern char lbl_80480440[];
}

struct Instance_80480440 : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _devices;
    inline ~Instance_80480440() { __vtable = lbl_80480440; }
};

struct igDefaultInterfaceManagerInstance : Instance_80480440 {
    char unknown0C[68];
    inline ~igDefaultInterfaceManagerInstance() { __vtable = igDefaultInterfaceManager_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDefaultInterfaceManager)

void *igDefaultInterfaceManager_vtableRead()
{
    igDefaultInterfaceManagerInstance object;
    object.__vtable = lbl_80480440;
    object._devices._value = 0;
    object.__vtable = igDefaultInterfaceManager_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDefaultInterfaceManager)

void igDefaultInterfaceManager_register()
{
    fn_800CAEE0();
    meta_registerClass(0, &igDefaultInterfaceManager_meta, igInterfaceManager_register,
                       fn_800CB840, igDefaultInterfaceManager_getMetaCall,
                       igDefaultInterfaceManager_className, 0x4C,
                       igDefaultInterfaceManager_vtableRead, igDefaultInterfaceManager_fieldInit, 0, 0);
}

}
#pragma pop
