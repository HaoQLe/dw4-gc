// igBasicColorChanger: Alchemy class registration (0x80113BDC..0x80113C58). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igVec4fArrayMetaField.h>

META_DECLARE(igBasicColorChanger)

extern "C" {
extern char igBasicColorChanger_fieldNames[8];
extern char igBasicColorChanger_fieldOffsets[8];
extern char igBasicColorChanger_fieldStorage[8];
extern char igBasicColorChanger_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igBasicColorChanger_fieldInit()
{
    Meta::igMetaObject *meta = igBasicColorChanger_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBasicColorChanger_fieldTypes, 2);
    Meta::igVec4fArrayMetaField *colorsField = static_cast<Meta::igVec4fArrayMetaField *>(meta_field(meta, base));
    *reinterpret_cast<void **>(reinterpret_cast<char *>(colorsField) + 0x34) = (void *)4;
    meta_setupFields(meta, igBasicColorChanger_fieldNames, igBasicColorChanger_fieldStorage, igBasicColorChanger_fieldOffsets, base);
}

}
#pragma pop
