// igAlphaStateAttr: Alchemy class registration (0x800BBA10..0x800BBBC4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAlphaStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igAlphaStateAttr_fieldNames[4];
extern char igAlphaStateAttr_fieldOffsets[4];
extern char igAlphaStateAttr_fieldStorage[4];
extern char igAlphaStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAlphaStateAttr)

void *igAlphaStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igAlphaStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAlphaStateAttr)

void igAlphaStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igAlphaStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igAlphaStateAttr_getMetaCall,
                       igAlphaStateAttr_className, 0x10,
                       igAlphaStateAttr_vtableRead, igAlphaStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igAlphaStateAttr)

void igAlphaStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igAlphaStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAlphaStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igAlphaStateAttr_fieldNames, igAlphaStateAttr_fieldStorage, igAlphaStateAttr_fieldOffsets, base);
}

}
#pragma pop
