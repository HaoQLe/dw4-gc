// igStringArrayMetaField: Alchemy class registration (0x80025894..0x80025910). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igStringArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igStringArrayMetaField_fieldNames[4];
extern char igStringArrayMetaField_fieldOffsets[4];
extern char igStringArrayMetaField_fieldStorage[4];
extern char igStringArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igStringArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igStringArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igStringArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igStringArrayMetaField_fieldNames, igStringArrayMetaField_fieldStorage, igStringArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
