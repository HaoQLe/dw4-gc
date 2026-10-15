// igCharArrayMetaField: Alchemy class registration (0x80038048..0x800380C4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCharArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igCharArrayMetaField_fieldNames[4];
extern char igCharArrayMetaField_fieldOffsets[4];
extern char igCharArrayMetaField_fieldStorage[4];
extern char igCharArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igCharArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igCharArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCharArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igCharArrayMetaField_fieldNames, igCharArrayMetaField_fieldStorage, igCharArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
