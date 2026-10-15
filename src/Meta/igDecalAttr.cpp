// igDecalAttr: Alchemy class registration (0x800B8694..0x800B8848). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDecalAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igDecalAttr_fieldNames[4];
extern char igDecalAttr_fieldOffsets[4];
extern char igDecalAttr_fieldStorage[4];
extern char igDecalAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B86D0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDecalAttr)

void *igDecalAttr_vtableRead()
{
    Instance_800B86D0_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igDecalAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDecalAttr)

void igDecalAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDecalAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igDecalAttr_getMetaCall,
                       igDecalAttr_className, 0x10,
                       igDecalAttr_vtableRead, igDecalAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igDecalAttr)

void igDecalAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDecalAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDecalAttr_fieldTypes, 1);
    meta_setupFields(meta, igDecalAttr_fieldNames, igDecalAttr_fieldStorage, igDecalAttr_fieldOffsets, base);
}

}
#pragma pop
