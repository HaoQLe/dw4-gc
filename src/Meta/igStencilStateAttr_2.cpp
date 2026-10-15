// igStencilStateAttr: Alchemy class registration (0x800B0268..0x800B041C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igStencilStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igStencilStateAttr_fieldNames[4];
extern char igStencilStateAttr_fieldOffsets[4];
extern char igStencilStateAttr_fieldStorage[4];
extern char igStencilStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igStencilStateAttr)

void *igStencilStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igStencilStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igStencilStateAttr)

void igStencilStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igStencilStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igStencilStateAttr_getMetaCall,
                       igStencilStateAttr_className, 0x10,
                       igStencilStateAttr_vtableRead, igStencilStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igStencilStateAttr)

void igStencilStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igStencilStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igStencilStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igStencilStateAttr_fieldNames, igStencilStateAttr_fieldStorage, igStencilStateAttr_fieldOffsets, base);
}

}
#pragma pop
