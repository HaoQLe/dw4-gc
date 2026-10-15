// igFloatArrayMetaField: Alchemy class registration (0x8002FE1C..0x8002FE98). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFloatArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igFloatArrayMetaField_fieldNames[4];
extern char igFloatArrayMetaField_fieldOffsets[4];
extern char igFloatArrayMetaField_fieldStorage[4];
extern char igFloatArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igFloatArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igFloatArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFloatArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igFloatArrayMetaField_fieldNames, igFloatArrayMetaField_fieldStorage, igFloatArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
