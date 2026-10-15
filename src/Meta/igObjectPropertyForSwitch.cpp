// igObjectPropertyForSwitch: Alchemy class registration (0x8013FDDC..0x8013FFA0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectPropertyForSwitch)
META_DECLARE(igObjectPropertyForNode)

extern "C" {
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013FFA0();
extern char igObjectPropertyForSwitch_dependencies[8];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_804A5C7C : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _object;
    inline ~Instance_804A5C7C() { __vtable = lbl_804A5C7C; }
};

struct igObjectPropertyForNodeInstance : Instance_804A5C7C {
    inline ~igObjectPropertyForNodeInstance() { __vtable = igObjectPropertyForNode_vtable; }
};

struct igObjectPropertyForSwitchInstance : igObjectPropertyForNodeInstance {
    char unknown24[12];
    inline ~igObjectPropertyForSwitchInstance() { __vtable = igObjectPropertyForSwitch_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectPropertyForSwitch)

void *igObjectPropertyForSwitch_vtableRead()
{
    igObjectPropertyForSwitchInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A5C7C;
    object._object._value = 0;
    object.__vtable = igObjectPropertyForNode_vtable;
    object.__vtable = igObjectPropertyForSwitch_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectPropertyForSwitch)

void igObjectPropertyForSwitch_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igObjectPropertyForSwitch_meta, igObjectPropertyForNode_register,
                       fn_8013BF68, igObjectPropertyForSwitch_getMetaCall,
                       igObjectPropertyForSwitch_className, 0x2C,
                       igObjectPropertyForSwitch_vtableRead, fn_8013FFA0, 0, igObjectPropertyForSwitch_dependencies);
}

META_GET_META_CALL(igObjectPropertyForSwitch)

}
#pragma pop
