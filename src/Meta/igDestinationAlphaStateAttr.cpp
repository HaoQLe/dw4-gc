// igDestinationAlphaStateAttr: Alchemy class registration (0x800B7B60..0x800B7D28). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDestinationAlphaStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8003EC68(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
extern char igDestinationAlphaStateAttr_fieldNames[4];
extern char igDestinationAlphaStateAttr_fieldOffsets[4];
extern char igDestinationAlphaStateAttr_fieldStorage[4];
extern char igDestinationAlphaStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B7B9C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDestinationAlphaStateAttr)

void *igDestinationAlphaStateAttr_vtableRead()
{
    Instance_800B7B9C_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igDestinationAlphaStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDestinationAlphaStateAttr)

void igDestinationAlphaStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDestinationAlphaStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igDestinationAlphaStateAttr_getMetaCall,
                       igDestinationAlphaStateAttr_className, 0x10,
                       igDestinationAlphaStateAttr_vtableRead, igDestinationAlphaStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igDestinationAlphaStateAttr)

void igDestinationAlphaStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDestinationAlphaStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDestinationAlphaStateAttr_fieldTypes, 1);
    fn_8003EC68(meta_field(meta, base), 1);
    meta_setupFields(meta, igDestinationAlphaStateAttr_fieldNames, igDestinationAlphaStateAttr_fieldStorage, igDestinationAlphaStateAttr_fieldOffsets, base);
}

}
#pragma pop
