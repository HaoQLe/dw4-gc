// igUnsignedIntArrayMetaField: Alchemy class registration (0x80022FF8..0x80023074). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedIntArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igUnsignedIntArrayMetaField_fieldNames[4];
extern char igUnsignedIntArrayMetaField_fieldOffsets[4];
extern char igUnsignedIntArrayMetaField_fieldStorage[4];
extern char igUnsignedIntArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igUnsignedIntArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igUnsignedIntArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igUnsignedIntArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igUnsignedIntArrayMetaField_fieldNames, igUnsignedIntArrayMetaField_fieldStorage, igUnsignedIntArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
