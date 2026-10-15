// igAttrEditForLightStateSet: Alchemy class registration (0x80152AC8..0x80152CDC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAttrEditForLightStateSet)
META_DECLARE(igAttrEditForNode)

extern "C" {
void fn_8012FC48();
void *fn_80152CDC();
void fn_80152CE4();
extern char igAttrEditForLightStateSet_dependencies[12];
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

struct igAttrEditForLightStateSetInstance : Instance_804A88A4 {
    char unknown28[8];
    inline ~igAttrEditForLightStateSetInstance() { __vtable = igAttrEditForLightStateSet_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttrEditForLightStateSet)

void *igAttrEditForLightStateSet_vtableRead()
{
    igAttrEditForLightStateSetInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804AA614;
    object.__vtable = lbl_804A8808;
    object._container._value = 0;
    object._attr._value = 0;
    object.__vtable = lbl_804A88A4;
    object.__vtable = igAttrEditForLightStateSet_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAttrEditForLightStateSet)

void igAttrEditForLightStateSet_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igAttrEditForLightStateSet_meta, igAttrEditForNode_register,
                       fn_80152CDC, igAttrEditForLightStateSet_getMetaCall,
                       igAttrEditForLightStateSet_className, 0x28,
                       igAttrEditForLightStateSet_vtableRead, fn_80152CE4, 0, igAttrEditForLightStateSet_dependencies);
}

META_GET_META_CALL(igAttrEditForLightStateSet)

}
#pragma pop
