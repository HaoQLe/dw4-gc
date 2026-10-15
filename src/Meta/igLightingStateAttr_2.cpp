// igLightingStateAttr: Alchemy class registration (0x800B5238..0x800B53EC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLightingStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igLightingStateAttr_fieldNames[4];
extern char igLightingStateAttr_fieldOffsets[4];
extern char igLightingStateAttr_fieldStorage[4];
extern char igLightingStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B5274_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLightingStateAttr)

void *igLightingStateAttr_vtableRead()
{
    Instance_800B5274_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igLightingStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLightingStateAttr)

void igLightingStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igLightingStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igLightingStateAttr_getMetaCall,
                       igLightingStateAttr_className, 0x10,
                       igLightingStateAttr_vtableRead, igLightingStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igLightingStateAttr)

void igLightingStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igLightingStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igLightingStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igLightingStateAttr_fieldNames, igLightingStateAttr_fieldStorage, igLightingStateAttr_fieldOffsets, base);
}

}
#pragma pop
