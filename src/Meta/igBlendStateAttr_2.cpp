// igBlendStateAttr: Alchemy class registration (0x800B9E0C..0x800B9FC0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBlendStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igBlendStateAttr_fieldNames[4];
extern char igBlendStateAttr_fieldOffsets[4];
extern char igBlendStateAttr_fieldStorage[4];
extern char igBlendStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBlendStateAttr)

void *igBlendStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igBlendStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBlendStateAttr)

void igBlendStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igBlendStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igBlendStateAttr_getMetaCall,
                       igBlendStateAttr_className, 0x10,
                       igBlendStateAttr_vtableRead, igBlendStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igBlendStateAttr)

void igBlendStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igBlendStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBlendStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igBlendStateAttr_fieldNames, igBlendStateAttr_fieldStorage, igBlendStateAttr_fieldOffsets, base);
}

}
#pragma pop
