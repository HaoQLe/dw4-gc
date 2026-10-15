// igRawRefArrayMetaField: Alchemy class registration (0x800279F8..0x80027A74). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igRawRefArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igRawRefArrayMetaField_fieldNames[4];
extern char igRawRefArrayMetaField_fieldOffsets[4];
extern char igRawRefArrayMetaField_fieldStorage[4];
extern char igRawRefArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igRawRefArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igRawRefArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRawRefArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igRawRefArrayMetaField_fieldNames, igRawRefArrayMetaField_fieldStorage, igRawRefArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
