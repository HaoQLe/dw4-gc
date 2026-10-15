// igEnumArrayMetaField: Alchemy class registration (0x80031928..0x800319A4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igEnumArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igEnumArrayMetaField_fieldNames[4];
extern char igEnumArrayMetaField_fieldOffsets[4];
extern char igEnumArrayMetaField_fieldStorage[4];
extern char igEnumArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igEnumArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igEnumArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igEnumArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igEnumArrayMetaField_fieldNames, igEnumArrayMetaField_fieldStorage, igEnumArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
