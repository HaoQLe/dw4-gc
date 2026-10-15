// igMaterialModeAttr: Alchemy class registration (0x800B49C4..0x800B4B9C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igEnumMetaField.h>

META_DECLARE(igMaterialModeAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CE17C();
extern char igMaterialModeAttr_fieldNames[4];
extern char igMaterialModeAttr_fieldOffsets[4];
extern char igMaterialModeAttr_fieldStorage[4];
extern char igMaterialModeAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E3C8[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMaterialModeAttr)

void *igMaterialModeAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igMaterialModeAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMaterialModeAttr)

void igMaterialModeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igMaterialModeAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igMaterialModeAttr_getMetaCall,
                       igMaterialModeAttr_className, 0x10,
                       igMaterialModeAttr_vtableRead, igMaterialModeAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igMaterialModeAttr)

void igMaterialModeAttr_fieldInit()
{
    Meta::igMetaObject *meta = igMaterialModeAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMaterialModeAttr_fieldTypes, 1);
    Meta::igEnumMetaField *modeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(modeField, lbl_8055E3C8);
    modeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CE17C);
    meta_setupFields(meta, igMaterialModeAttr_fieldNames, igMaterialModeAttr_fieldStorage, igMaterialModeAttr_fieldOffsets, base);
}

}
#pragma pop
