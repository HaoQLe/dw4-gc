// igVec4fArrayMetaField: Alchemy class registration (0x8011E5CC..0x8011E648). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVec4fArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igVec4fArrayMetaField_fieldNames[4];
extern char igVec4fArrayMetaField_fieldOffsets[4];
extern char igVec4fArrayMetaField_fieldStorage[4];
extern char igVec4fArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVec4fArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igVec4fArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVec4fArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igVec4fArrayMetaField_fieldNames, igVec4fArrayMetaField_fieldStorage, igVec4fArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
