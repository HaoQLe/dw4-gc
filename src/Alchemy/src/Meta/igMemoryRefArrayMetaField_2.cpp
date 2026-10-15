// igMemoryRefArrayMetaField: Alchemy class registration (0x8002B444..0x8002B4C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMemoryRefArrayMetaField)

extern "C" {
void fn_80053650(void *,int);
extern char igMemoryRefArrayMetaField_fieldNames[4];
extern char igMemoryRefArrayMetaField_fieldOffsets[4];
extern char igMemoryRefArrayMetaField_fieldStorage[4];
extern char igMemoryRefArrayMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igMemoryRefArrayMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igMemoryRefArrayMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMemoryRefArrayMetaField_fieldTypes, 1);
    fn_80053650(meta_field(meta, base), 1);
    meta_setupFields(meta, igMemoryRefArrayMetaField_fieldNames, igMemoryRefArrayMetaField_fieldStorage, igMemoryRefArrayMetaField_fieldOffsets, base);
}

}
#pragma pop
