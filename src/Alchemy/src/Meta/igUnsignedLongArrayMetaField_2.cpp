// igUnsignedLongArrayMetaField: Alchemy class registration (0x8002297C..0x800229F8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedLongArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igUnsignedLongArrayMetaField_fieldNames[4];
extern char igUnsignedLongArrayMetaField_fieldOffsets[4];
extern char igUnsignedLongArrayMetaField_fieldStorage[4];
extern char igUnsignedLongArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igUnsignedLongArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igUnsignedLongArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igUnsignedLongArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igUnsignedLongArrayMetaField_fieldNames, igUnsignedLongArrayMetaField_fieldStorage, igUnsignedLongArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
