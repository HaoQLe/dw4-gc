// igObjectPropertyForGroup: Alchemy class registration (0x80140054..0x80140218). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectPropertyForGroup)
META_DECLARE(igObjectPropertyForNode)

extern "C" {
void fn_8012FC48();
void *fn_8013BF68();
void fn_80140218();
extern char igObjectPropertyForGroup_dependencies[8];
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

struct igObjectPropertyForGroupInstance : igObjectPropertyForNodeInstance {
    char unknown24[12];
    inline ~igObjectPropertyForGroupInstance() { __vtable = igObjectPropertyForGroup_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectPropertyForGroup)

void *igObjectPropertyForGroup_vtableRead()
{
    igObjectPropertyForGroupInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A5C7C;
    object._object._value = 0;
    object.__vtable = igObjectPropertyForNode_vtable;
    object.__vtable = igObjectPropertyForGroup_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectPropertyForGroup)

void igObjectPropertyForGroup_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igObjectPropertyForGroup_meta, igObjectPropertyForNode_register,
                       fn_8013BF68, igObjectPropertyForGroup_getMetaCall,
                       igObjectPropertyForGroup_className, 0x2C,
                       igObjectPropertyForGroup_vtableRead, fn_80140218, 0, igObjectPropertyForGroup_dependencies);
}

META_GET_META_CALL(igObjectPropertyForGroup)

}
#pragma pop
