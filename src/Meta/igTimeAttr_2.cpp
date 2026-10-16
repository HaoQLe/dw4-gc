// igTimeAttr: Alchemy class registration (0x800AD804..0x800AD9D0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igLongMetaField.h>

META_DECLARE(igTimeAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80054BC8(void *, long long);
void fn_800ABC8C();
void *fn_800AC294();
extern char igTimeAttr_fieldNames[4];
extern char igTimeAttr_fieldOffsets[4];
extern char igTimeAttr_fieldStorage[4];
extern char igTimeAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTimeAttr)

void *igTimeAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTimeAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTimeAttr)

void igTimeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTimeAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTimeAttr_getMetaCall,
                       igTimeAttr_className, 0x18,
                       igTimeAttr_vtableRead, igTimeAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igTimeAttr)

void igTimeAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTimeAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTimeAttr_fieldTypes, 1);
    Meta::igLongMetaField *timeField = static_cast<Meta::igLongMetaField *>(meta_field(meta, base));
    fn_80054BC8(timeField, 0);
    meta_setupFields(meta, igTimeAttr_fieldNames, igTimeAttr_fieldStorage, igTimeAttr_fieldOffsets, base);
}

}
#pragma pop
