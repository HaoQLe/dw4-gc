// igClippingStateAttr: Alchemy class registration (0x800B95CC..0x800B9794). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igClippingStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8003EC68(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
extern char igClippingStateAttr_fieldNames[4];
extern char igClippingStateAttr_fieldOffsets[4];
extern char igClippingStateAttr_fieldStorage[4];
extern char igClippingStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igClippingStateAttr)

void *igClippingStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igClippingStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igClippingStateAttr)

void igClippingStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igClippingStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igClippingStateAttr_getMetaCall,
                       igClippingStateAttr_className, 0x10,
                       igClippingStateAttr_vtableRead, igClippingStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igClippingStateAttr)

void igClippingStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igClippingStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igClippingStateAttr_fieldTypes, 1);
    fn_8003EC68(meta_field(meta, base), 1);
    meta_setupFields(meta, igClippingStateAttr_fieldNames, igClippingStateAttr_fieldStorage, igClippingStateAttr_fieldOffsets, base);
}

}
#pragma pop
