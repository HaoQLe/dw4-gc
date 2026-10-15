// igBoolArrayMetaField: Alchemy class registration (0x80038B48..0x80038BC4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBoolArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igBoolArrayMetaField_fieldNames[4];
extern char igBoolArrayMetaField_fieldOffsets[4];
extern char igBoolArrayMetaField_fieldStorage[4];
extern char igBoolArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igBoolArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igBoolArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBoolArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igBoolArrayMetaField_fieldNames, igBoolArrayMetaField_fieldStorage, igBoolArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
