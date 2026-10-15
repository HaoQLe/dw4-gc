// igDepthStateAttr: Alchemy class registration (0x800B82BC..0x800B84BC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDepthStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8003EC68(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
extern char igDepthStateAttr_fieldNames[4];
extern char igDepthStateAttr_fieldOffsets[4];
extern char igDepthStateAttr_fieldStorage[4];
extern char igDepthStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B8330_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igDepthStateAttr)

META_GET_META(igDepthStateAttr)

void *igDepthStateAttr_vtableRead()
{
    Instance_800B8330_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igDepthStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDepthStateAttr)

void igDepthStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDepthStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igDepthStateAttr_getMetaCall,
                       igDepthStateAttr_className, 0x10,
                       igDepthStateAttr_vtableRead, igDepthStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igDepthStateAttr)

void igDepthStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDepthStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDepthStateAttr_fieldTypes, 1);
    fn_8003EC68(meta_field(meta, base), 1);
    meta_setupFields(meta, igDepthStateAttr_fieldNames, igDepthStateAttr_fieldStorage, igDepthStateAttr_fieldOffsets, base);
}

}
#pragma pop
