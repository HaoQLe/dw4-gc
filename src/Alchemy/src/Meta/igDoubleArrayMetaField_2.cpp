// igDoubleArrayMetaField: Alchemy class registration (0x800323B8..0x80032434). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDoubleArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igDoubleArrayMetaField_fieldNames[4];
extern char igDoubleArrayMetaField_fieldOffsets[4];
extern char igDoubleArrayMetaField_fieldStorage[4];
extern char igDoubleArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igDoubleArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igDoubleArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDoubleArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igDoubleArrayMetaField_fieldNames, igDoubleArrayMetaField_fieldStorage, igDoubleArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
