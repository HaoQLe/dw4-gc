// igGamecubeControllerManager: Alchemy class registration (0x800CBF58..0x800CC0C8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeControllerManager)
META_DECLARE(igControllerManager)

extern "C" {
void fn_800CAEE0();
void *igGamecubeControllerManager_parentMeta();
extern char lbl_80480590[];
extern char lbl_80480E60[];
}

struct Instance_80480590 : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _controllers;
    inline ~Instance_80480590() { __vtable = lbl_80480590; }
};

struct igGamecubeControllerManagerInstance : Instance_80480590 {
    char unknown0C[4];
    inline ~igGamecubeControllerManagerInstance() { __vtable = igGamecubeControllerManager_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubeControllerManager)

void *igGamecubeControllerManager_vtableRead()
{
    igGamecubeControllerManagerInstance object;
    object.__vtable = lbl_80480E60;
    object.__vtable = lbl_80480590;
    object._controllers._value = 0;
    object.__vtable = igGamecubeControllerManager_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeControllerManager)

void igGamecubeControllerManager_register()
{
    fn_800CAEE0();
    meta_registerClass(0, &igGamecubeControllerManager_meta, igControllerManager_register,
                       igGamecubeControllerManager_parentMeta, igGamecubeControllerManager_getMetaCall,
                       igGamecubeControllerManager_className, 0xC,
                       igGamecubeControllerManager_vtableRead, 0, 0, 0);
}

}
#pragma pop
