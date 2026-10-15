// igColorScalerStateAttr: Alchemy class registration (0x800B8EF4..0x800B90CC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igEnumMetaField.h>

META_DECLARE(igColorScalerStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8003D160();
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
extern char igColorScalerStateAttr_fieldNames[4];
extern char igColorScalerStateAttr_fieldOffsets[4];
extern char igColorScalerStateAttr_fieldStorage[4];
extern char igColorScalerStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E5D4[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igColorScalerStateAttr)

void *igColorScalerStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igColorScalerStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igColorScalerStateAttr)

void igColorScalerStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igColorScalerStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igColorScalerStateAttr_getMetaCall,
                       igColorScalerStateAttr_className, 0x10,
                       igColorScalerStateAttr_vtableRead, igColorScalerStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igColorScalerStateAttr)

void igColorScalerStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igColorScalerStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igColorScalerStateAttr_fieldTypes, 1);
    Meta::igEnumMetaField *stateField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(stateField, lbl_8055E5D4);
    stateField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_8003D160);
    meta_setupFields(meta, igColorScalerStateAttr_fieldNames, igColorScalerStateAttr_fieldStorage, igColorScalerStateAttr_fieldOffsets, base);
}

}
#pragma pop
