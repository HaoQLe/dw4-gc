// igNormalizeNormalsStateAttr: Alchemy class registration (0x800B30C8..0x800B327C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igNormalizeNormalsStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igNormalizeNormalsStateAttr_fieldNames[4];
extern char igNormalizeNormalsStateAttr_fieldOffsets[4];
extern char igNormalizeNormalsStateAttr_fieldStorage[4];
extern char igNormalizeNormalsStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B3104_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNormalizeNormalsStateAttr)

void *igNormalizeNormalsStateAttr_vtableRead()
{
    Instance_800B3104_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igNormalizeNormalsStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNormalizeNormalsStateAttr)

void igNormalizeNormalsStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igNormalizeNormalsStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igNormalizeNormalsStateAttr_getMetaCall,
                       igNormalizeNormalsStateAttr_className, 0x10,
                       igNormalizeNormalsStateAttr_vtableRead, igNormalizeNormalsStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igNormalizeNormalsStateAttr)

void igNormalizeNormalsStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igNormalizeNormalsStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igNormalizeNormalsStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igNormalizeNormalsStateAttr_fieldNames, igNormalizeNormalsStateAttr_fieldStorage, igNormalizeNormalsStateAttr_fieldOffsets, base);
}

}
#pragma pop
