// igObjectPropertyForAttrSet: Alchemy class registration (0x8013F8EC..0x8013FAB0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectPropertyForAttrSet)
META_DECLARE(igObjectPropertyForNode)

extern "C" {
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013FAB0();
extern char igObjectPropertyForAttrSet_dependencies[8];
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

struct igObjectPropertyForAttrSetInstance : igObjectPropertyForNodeInstance {
    char unknown24[12];
    inline ~igObjectPropertyForAttrSetInstance() { __vtable = igObjectPropertyForAttrSet_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectPropertyForAttrSet)

void *igObjectPropertyForAttrSet_vtableRead()
{
    igObjectPropertyForAttrSetInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A5C7C;
    object._object._value = 0;
    object.__vtable = igObjectPropertyForNode_vtable;
    object.__vtable = igObjectPropertyForAttrSet_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectPropertyForAttrSet)

void igObjectPropertyForAttrSet_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igObjectPropertyForAttrSet_meta, igObjectPropertyForNode_register,
                       fn_8013BF68, igObjectPropertyForAttrSet_getMetaCall,
                       igObjectPropertyForAttrSet_className, 0x2C,
                       igObjectPropertyForAttrSet_vtableRead, fn_8013FAB0, 0, igObjectPropertyForAttrSet_dependencies);
}

META_GET_META_CALL(igObjectPropertyForAttrSet)

}
#pragma pop
