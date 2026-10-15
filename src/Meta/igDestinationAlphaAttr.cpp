// igDestinationAlphaAttr: Alchemy class registration (0x800B7EF0..0x800B80B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igUnsignedCharMetaField.h>

META_DECLARE(igDestinationAlphaAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80075874(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
extern char igDestinationAlphaAttr_fieldNames[8];
extern char igDestinationAlphaAttr_fieldOffsets[8];
extern char igDestinationAlphaAttr_fieldStorage[8];
extern char igDestinationAlphaAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B7F2C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDestinationAlphaAttr)

void *igDestinationAlphaAttr_vtableRead()
{
    Instance_800B7F2C_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igDestinationAlphaAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDestinationAlphaAttr)

void igDestinationAlphaAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDestinationAlphaAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igDestinationAlphaAttr_getMetaCall,
                       igDestinationAlphaAttr_className, 0x10,
                       igDestinationAlphaAttr_vtableRead, igDestinationAlphaAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igDestinationAlphaAttr)

void igDestinationAlphaAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDestinationAlphaAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDestinationAlphaAttr_fieldTypes, 2);
    Meta::igUnsignedCharMetaField *alphaField = static_cast<Meta::igUnsignedCharMetaField *>(meta_field(meta, base + 1));
    fn_80075874(alphaField, 255);
    meta_setupFields(meta, igDestinationAlphaAttr_fieldNames, igDestinationAlphaAttr_fieldStorage, igDestinationAlphaAttr_fieldOffsets, base);
}

}
#pragma pop
