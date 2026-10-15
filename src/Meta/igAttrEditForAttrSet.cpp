// igAttrEditForAttrSet: Alchemy class registration (0x80152E20..0x80153030). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAttrEditForAttrSet)
META_DECLARE(igAttrEditForNode)

extern "C" {
void fn_8012FC48();
void *fn_80152CDC();
void fn_80153030();
extern char igAttrEditForAttrSet_dependencies[8];
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

struct igAttrEditForAttrSetInstance : Instance_804A88A4 {
    char unknown28[8];
    inline ~igAttrEditForAttrSetInstance() { __vtable = igAttrEditForAttrSet_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttrEditForAttrSet)

void *igAttrEditForAttrSet_vtableRead()
{
    igAttrEditForAttrSetInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804AA614;
    object.__vtable = lbl_804A8808;
    object._container._value = 0;
    object._attr._value = 0;
    object.__vtable = lbl_804A88A4;
    object.__vtable = igAttrEditForAttrSet_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAttrEditForAttrSet)

void igAttrEditForAttrSet_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igAttrEditForAttrSet_meta, igAttrEditForNode_register,
                       fn_80152CDC, igAttrEditForAttrSet_getMetaCall,
                       igAttrEditForAttrSet_className, 0x28,
                       igAttrEditForAttrSet_vtableRead, fn_80153030, 0, igAttrEditForAttrSet_dependencies);
}

META_GET_META_CALL(igAttrEditForAttrSet)

}
#pragma pop
