// igObjectPropertyForLightSet: Alchemy class registration (0x8013F3FC..0x8013F5C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectPropertyForLightSet)
META_DECLARE(igObjectPropertyForNode)

extern "C" {
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013F5C0();
extern char igObjectPropertyForLightSet_dependencies[8];
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

struct igObjectPropertyForLightSetInstance : igObjectPropertyForNodeInstance {
    char unknown24[12];
    inline ~igObjectPropertyForLightSetInstance() { __vtable = igObjectPropertyForLightSet_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectPropertyForLightSet)

void *igObjectPropertyForLightSet_vtableRead()
{
    igObjectPropertyForLightSetInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A5C7C;
    object._object._value = 0;
    object.__vtable = igObjectPropertyForNode_vtable;
    object.__vtable = igObjectPropertyForLightSet_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectPropertyForLightSet)

void igObjectPropertyForLightSet_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igObjectPropertyForLightSet_meta, igObjectPropertyForNode_register,
                       fn_8013BF68, igObjectPropertyForLightSet_getMetaCall,
                       igObjectPropertyForLightSet_className, 0x2C,
                       igObjectPropertyForLightSet_vtableRead, fn_8013F5C0, 0, igObjectPropertyForLightSet_dependencies);
}

META_GET_META_CALL(igObjectPropertyForLightSet)

}
#pragma pop
