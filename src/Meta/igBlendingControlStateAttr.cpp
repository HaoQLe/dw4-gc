// igBlendingControlStateAttr: Alchemy class registration (0x800B9BE4..0x800B9D98). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBlendingControlStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igBlendingControlStateAttr_fieldNames[4];
extern char igBlendingControlStateAttr_fieldOffsets[4];
extern char igBlendingControlStateAttr_fieldStorage[4];
extern char igBlendingControlStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBlendingControlStateAttr)

void *igBlendingControlStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igBlendingControlStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBlendingControlStateAttr)

void igBlendingControlStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igBlendingControlStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igBlendingControlStateAttr_getMetaCall,
                       igBlendingControlStateAttr_className, 0x10,
                       igBlendingControlStateAttr_vtableRead, igBlendingControlStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igBlendingControlStateAttr)

void igBlendingControlStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igBlendingControlStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBlendingControlStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igBlendingControlStateAttr_fieldNames, igBlendingControlStateAttr_fieldStorage, igBlendingControlStateAttr_fieldOffsets, base);
}

}
#pragma pop
