// igUnsignedCharArrayMetaField: Alchemy class registration (0x8002355C..0x800235D8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedCharArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igUnsignedCharArrayMetaField_fieldNames[4];
extern char igUnsignedCharArrayMetaField_fieldOffsets[4];
extern char igUnsignedCharArrayMetaField_fieldStorage[4];
extern char igUnsignedCharArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igUnsignedCharArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igUnsignedCharArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igUnsignedCharArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igUnsignedCharArrayMetaField_fieldNames, igUnsignedCharArrayMetaField_fieldStorage, igUnsignedCharArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
