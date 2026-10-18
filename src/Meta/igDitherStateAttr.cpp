// igDitherStateAttr: Alchemy class registration (0x800B7704..0x800B78D8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igUnsignedLongMetaField.h>

META_DECLARE(igDitherStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80075D1C(void *, long long);
void fn_800ABC8C();
void *fn_800AC294();
extern char igDitherStateAttr_fieldNames[8];
extern char igDitherStateAttr_fieldOffsets[8];
extern char igDitherStateAttr_fieldStorage[8];
extern char igDitherStateAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDitherStateAttr)

void *igDitherStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igDitherStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDitherStateAttr)

void igDitherStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDitherStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igDitherStateAttr_getMetaCall,
                       igDitherStateAttr_className, 0x18,
                       igDitherStateAttr_vtableRead, igDitherStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igDitherStateAttr)

void igDitherStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDitherStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDitherStateAttr_fieldTypes, 2);
    Meta::igUnsignedLongMetaField *matrixField = static_cast<Meta::igUnsignedLongMetaField *>(meta_field(meta, base + 1));
    fn_80075D1C(matrixField, 0x4071263571603524LL);
    meta_setupFields(meta, igDitherStateAttr_fieldNames, igDitherStateAttr_fieldStorage, igDitherStateAttr_fieldOffsets, base);
}

}
#pragma pop
