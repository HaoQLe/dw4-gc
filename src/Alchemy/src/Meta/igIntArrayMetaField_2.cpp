// igIntArrayMetaField: Alchemy class registration (0x8002E6D8..0x8002E754). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIntArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igIntArrayMetaField_fieldNames[4];
extern char igIntArrayMetaField_fieldOffsets[4];
extern char igIntArrayMetaField_fieldStorage[4];
extern char igIntArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igIntArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igIntArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igIntArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igIntArrayMetaField_fieldNames, igIntArrayMetaField_fieldStorage, igIntArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
