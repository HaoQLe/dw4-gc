// igDepthWriteStateAttr: Alchemy class registration (0x800B80F4..0x800B82BC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDepthWriteStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8003EC68(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
extern char igDepthWriteStateAttr_fieldNames[4];
extern char igDepthWriteStateAttr_fieldOffsets[4];
extern char igDepthWriteStateAttr_fieldStorage[4];
extern char igDepthWriteStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B8130_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDepthWriteStateAttr)

void *igDepthWriteStateAttr_vtableRead()
{
    Instance_800B8130_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igDepthWriteStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDepthWriteStateAttr)

void igDepthWriteStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDepthWriteStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igDepthWriteStateAttr_getMetaCall,
                       igDepthWriteStateAttr_className, 0x10,
                       igDepthWriteStateAttr_vtableRead, igDepthWriteStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igDepthWriteStateAttr)

void igDepthWriteStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDepthWriteStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDepthWriteStateAttr_fieldTypes, 1);
    fn_8003EC68(meta_field(meta, base), 1);
    meta_setupFields(meta, igDepthWriteStateAttr_fieldNames, igDepthWriteStateAttr_fieldStorage, igDepthWriteStateAttr_fieldOffsets, base);
}

}
#pragma pop
