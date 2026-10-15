// igDepthFunctionAttr: Alchemy class registration (0x800B84BC..0x800B8694). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igEnumMetaField.h>

META_DECLARE(igDepthFunctionAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CDD14();
extern char igDepthFunctionAttr_fieldNames[4];
extern char igDepthFunctionAttr_fieldOffsets[4];
extern char igDepthFunctionAttr_fieldStorage[4];
extern char igDepthFunctionAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E568[4];
}

struct Instance_800B84F8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDepthFunctionAttr)

void *igDepthFunctionAttr_vtableRead()
{
    Instance_800B84F8_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igDepthFunctionAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDepthFunctionAttr)

void igDepthFunctionAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDepthFunctionAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igDepthFunctionAttr_getMetaCall,
                       igDepthFunctionAttr_className, 0x10,
                       igDepthFunctionAttr_vtableRead, igDepthFunctionAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igDepthFunctionAttr)

void igDepthFunctionAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDepthFunctionAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDepthFunctionAttr_fieldTypes, 1);
    Meta::igEnumMetaField *funcField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(funcField, lbl_8055E568);
    funcField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CDD14);
    meta_setupFields(meta, igDepthFunctionAttr_fieldNames, igDepthFunctionAttr_fieldStorage, igDepthFunctionAttr_fieldOffsets, base);
}

}
#pragma pop
