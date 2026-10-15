// igUnsignedShortArrayMetaField: Alchemy class registration (0x8002233C..0x800223B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedShortArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igUnsignedShortArrayMetaField_fieldNames[4];
extern char igUnsignedShortArrayMetaField_fieldOffsets[4];
extern char igUnsignedShortArrayMetaField_fieldStorage[4];
extern char igUnsignedShortArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igUnsignedShortArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igUnsignedShortArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igUnsignedShortArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igUnsignedShortArrayMetaField_fieldNames, igUnsignedShortArrayMetaField_fieldStorage, igUnsignedShortArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
