// igScissorTypeAttr: Alchemy class registration (0x800B0E44..0x800B101C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igEnumMetaField.h>

META_DECLARE(igScissorTypeAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800CDB9C();
extern char igScissorTypeAttr_fieldNames[4];
extern char igScissorTypeAttr_fieldOffsets[4];
extern char igScissorTypeAttr_fieldStorage[4];
extern char igScissorTypeAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E1AC[4];
}

struct Instance_800B0E80_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igScissorTypeAttr)

void *igScissorTypeAttr_vtableRead()
{
    Instance_800B0E80_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igScissorTypeAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igScissorTypeAttr)

void igScissorTypeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igScissorTypeAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igScissorTypeAttr_getMetaCall,
                       igScissorTypeAttr_className, 0x10,
                       igScissorTypeAttr_vtableRead, igScissorTypeAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igScissorTypeAttr)

void igScissorTypeAttr_fieldInit()
{
    Meta::igMetaObject *meta = igScissorTypeAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igScissorTypeAttr_fieldTypes, 1);
    Meta::igEnumMetaField *typeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(typeField, lbl_8055E1AC);
    typeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CDB9C);
    meta_setupFields(meta, igScissorTypeAttr_fieldNames, igScissorTypeAttr_fieldStorage, igScissorTypeAttr_fieldOffsets, base);
}

}
#pragma pop
