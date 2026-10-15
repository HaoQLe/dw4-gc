// igFogStateAttr: Alchemy class registration (0x800B7020..0x800B71D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFogStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igFogStateAttr_fieldNames[4];
extern char igFogStateAttr_fieldOffsets[4];
extern char igFogStateAttr_fieldStorage[4];
extern char igFogStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFogStateAttr)

void *igFogStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igFogStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFogStateAttr)

void igFogStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igFogStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igFogStateAttr_getMetaCall,
                       igFogStateAttr_className, 0x10,
                       igFogStateAttr_vtableRead, igFogStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igFogStateAttr)

void igFogStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igFogStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFogStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igFogStateAttr_fieldNames, igFogStateAttr_fieldStorage, igFogStateAttr_fieldOffsets, base);
}

}
#pragma pop
