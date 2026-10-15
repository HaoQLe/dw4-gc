// igObjectRefArrayMetaField: Alchemy class registration (0x80028E38..0x80028EB4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectRefArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igObjectRefArrayMetaField_fieldNames[4];
extern char igObjectRefArrayMetaField_fieldOffsets[4];
extern char igObjectRefArrayMetaField_fieldStorage[4];
extern char igObjectRefArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igObjectRefArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igObjectRefArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igObjectRefArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igObjectRefArrayMetaField_fieldNames, igObjectRefArrayMetaField_fieldStorage, igObjectRefArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
