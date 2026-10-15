// igObjectPropertyForNode: Alchemy class registration (0x80140544..0x801406F8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectPropertyForNode)
META_DECLARE(igObjectProperty)

extern "C" {
void fn_8012FC48();
extern char igObjectPropertyForNode_dependencies[8];
void *igObjectPropertyForNode_parentMeta();
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
    char unknown24[12];
    inline ~igObjectPropertyForNodeInstance() { __vtable = igObjectPropertyForNode_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectPropertyForNode)

void *igObjectPropertyForNode_vtableRead()
{
    igObjectPropertyForNodeInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A5C7C;
    object._object._value = 0;
    object.__vtable = igObjectPropertyForNode_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectPropertyForNode)

void igObjectPropertyForNode_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igObjectPropertyForNode_meta, igObjectProperty_register,
                       igObjectPropertyForNode_parentMeta, igObjectPropertyForNode_getMetaCall,
                       igObjectPropertyForNode_className, 0x2C,
                       igObjectPropertyForNode_vtableRead, igObjectPropertyForNode_fieldInit, 0, igObjectPropertyForNode_dependencies);
}

META_GET_META_CALL(igObjectPropertyForNode)

}
#pragma pop
