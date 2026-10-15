// igGamecubeController: Alchemy class registration (0x800CC0D0..0x800CC280). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeController)
META_DECLARE(igController)

extern "C" {
void fn_800CAEE0();
extern char igGamecubeController_dependencies[8];
void *igGamecubeController_parentMeta();
extern char lbl_804805F8[];
extern char lbl_80480E60[];
}

struct igGamecubeControllerInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _attachedWindow;
    char unknown2C[20];
    inline ~igGamecubeControllerInstance() { __vtable = igGamecubeController_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igGamecubeController)

META_GET_META(igGamecubeController)

void *igGamecubeController_vtableRead()
{
    igGamecubeControllerInstance object;
    object.__vtable = lbl_80480E60;
    object.__vtable = lbl_804805F8;
    object.__vtable = igGamecubeController_vtable;
    object._attachedWindow._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeController)

void igGamecubeController_register()
{
    fn_800CAEE0();
    meta_registerClass(0, &igGamecubeController_meta, igController_register,
                       igGamecubeController_parentMeta, igGamecubeController_getMetaCall,
                       igGamecubeController_className, 0x34,
                       igGamecubeController_vtableRead, igGamecubeController_fieldInit, 0, igGamecubeController_dependencies);
}

}
#pragma pop
