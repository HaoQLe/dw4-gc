// igAttrEditForLightSet: Alchemy class registration (0x801530E8..0x801532FC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAttrEditForLightSet)
META_DECLARE(igAttrEditForNode)

extern "C" {
void fn_8012FC48();
void *fn_80152CDC();
void fn_801532FC();
extern char igAttrEditForLightSet_dependencies[12];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A8808[];
extern char lbl_804A88A4[];
extern char lbl_804AA614[];
extern char lbl_804AAF48[];
}

struct Instance_804A8808 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _container;
    igObjectRefMember _attr;
    inline ~Instance_804A8808() { __vtable = lbl_804A8808; }
};

struct Instance_804A88A4 : Instance_804A8808 {
    inline ~Instance_804A88A4() { __vtable = lbl_804A88A4; }
};

struct igAttrEditForLightSetInstance : Instance_804A88A4 {
    char unknown28[8];
    inline ~igAttrEditForLightSetInstance() { __vtable = igAttrEditForLightSet_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttrEditForLightSet)

void *igAttrEditForLightSet_vtableRead()
{
    igAttrEditForLightSetInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804AA614;
    object.__vtable = lbl_804A8808;
    object._container._value = 0;
    object._attr._value = 0;
    object.__vtable = lbl_804A88A4;
    object.__vtable = igAttrEditForLightSet_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAttrEditForLightSet)

void igAttrEditForLightSet_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igAttrEditForLightSet_meta, igAttrEditForNode_register,
                       fn_80152CDC, igAttrEditForLightSet_getMetaCall,
                       igAttrEditForLightSet_className, 0x28,
                       igAttrEditForLightSet_vtableRead, fn_801532FC, 0, igAttrEditForLightSet_dependencies);
}

META_GET_META_CALL(igAttrEditForLightSet)

}
#pragma pop
