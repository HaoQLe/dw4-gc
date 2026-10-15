// igRemoveCenterOfRotation: Alchemy class registration (0x801361D4..0x801363B0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igRemoveCenterOfRotation)
META_DECLARE(igOptBase)

extern "C" {
void fn_8012FC48();
void *fn_801308D0();
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_804A4A04 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _registry;
    igObjectRefMember _configuration;
    inline ~Instance_804A4A04() { __vtable = lbl_804A4A04; }
};

struct igRemoveCenterOfRotationInstance : Instance_804A4A04 {
    char unknown28[8];
    inline ~igRemoveCenterOfRotationInstance() { __vtable = igRemoveCenterOfRotation_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRemoveCenterOfRotation)

void *igRemoveCenterOfRotation_vtableRead()
{
    igRemoveCenterOfRotationInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = igRemoveCenterOfRotation_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRemoveCenterOfRotation)

void igRemoveCenterOfRotation_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igRemoveCenterOfRotation_meta, igOptBase_register,
                       fn_801308D0, igRemoveCenterOfRotation_getMetaCall,
                       igRemoveCenterOfRotation_className, 0x28,
                       igRemoveCenterOfRotation_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igRemoveCenterOfRotation)

}
#pragma pop
