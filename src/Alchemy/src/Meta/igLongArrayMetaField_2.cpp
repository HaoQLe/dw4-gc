// igLongArrayMetaField: Alchemy class registration (0x8002D2C0..0x8002D33C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLongArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igLongArrayMetaField_fieldNames[4];
extern char igLongArrayMetaField_fieldOffsets[4];
extern char igLongArrayMetaField_fieldStorage[4];
extern char igLongArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igLongArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igLongArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igLongArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igLongArrayMetaField_fieldNames, igLongArrayMetaField_fieldStorage, igLongArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
