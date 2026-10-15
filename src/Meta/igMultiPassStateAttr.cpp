// igMultiPassStateAttr: Alchemy class registration (0x800B327C..0x800B3430). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMultiPassStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igMultiPassStateAttr_fieldNames[4];
extern char igMultiPassStateAttr_fieldOffsets[4];
extern char igMultiPassStateAttr_fieldStorage[4];
extern char igMultiPassStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B32B8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMultiPassStateAttr)

void *igMultiPassStateAttr_vtableRead()
{
    Instance_800B32B8_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igMultiPassStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMultiPassStateAttr)

void igMultiPassStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igMultiPassStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igMultiPassStateAttr_getMetaCall,
                       igMultiPassStateAttr_className, 0x10,
                       igMultiPassStateAttr_vtableRead, igMultiPassStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igMultiPassStateAttr)

void igMultiPassStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igMultiPassStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMultiPassStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igMultiPassStateAttr_fieldNames, igMultiPassStateAttr_fieldStorage, igMultiPassStateAttr_fieldOffsets, base);
}

}
#pragma pop
