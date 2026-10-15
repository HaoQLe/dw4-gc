// igShortArrayMetaField: Alchemy class registration (0x80025ED4..0x80025F50). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igShortArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igShortArrayMetaField_fieldNames[4];
extern char igShortArrayMetaField_fieldOffsets[4];
extern char igShortArrayMetaField_fieldStorage[4];
extern char igShortArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igShortArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igShortArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igShortArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igShortArrayMetaField_fieldNames, igShortArrayMetaField_fieldStorage, igShortArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
