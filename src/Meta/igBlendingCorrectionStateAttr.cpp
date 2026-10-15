// igBlendingCorrectionStateAttr: Alchemy class registration (0x800B9A30..0x800B9BE4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBlendingCorrectionStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igBlendingCorrectionStateAttr_fieldNames[4];
extern char igBlendingCorrectionStateAttr_fieldOffsets[4];
extern char igBlendingCorrectionStateAttr_fieldStorage[4];
extern char igBlendingCorrectionStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBlendingCorrectionStateAttr)

void *igBlendingCorrectionStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igBlendingCorrectionStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBlendingCorrectionStateAttr)

void igBlendingCorrectionStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igBlendingCorrectionStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igBlendingCorrectionStateAttr_getMetaCall,
                       igBlendingCorrectionStateAttr_className, 0x10,
                       igBlendingCorrectionStateAttr_vtableRead, igBlendingCorrectionStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igBlendingCorrectionStateAttr)

void igBlendingCorrectionStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igBlendingCorrectionStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBlendingCorrectionStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igBlendingCorrectionStateAttr_fieldNames, igBlendingCorrectionStateAttr_fieldStorage, igBlendingCorrectionStateAttr_fieldOffsets, base);
}

}
#pragma pop
