// igMersenneTwisterRandomNumber: Alchemy class registration (0x802178DC..0x80217958). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igUnsignedIntArrayMetaField.h>

META_DECLARE(igMersenneTwisterRandomNumber)

extern "C" {
extern char igMersenneTwisterRandomNumber_fieldNames[8];
extern char igMersenneTwisterRandomNumber_fieldOffsets[8];
extern char igMersenneTwisterRandomNumber_fieldStorage[8];
extern char igMersenneTwisterRandomNumber_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igMersenneTwisterRandomNumber_fieldInit()
{
    Meta::igMetaObject *meta = igMersenneTwisterRandomNumber_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMersenneTwisterRandomNumber_fieldTypes, 2);
    Meta::igUnsignedIntArrayMetaField *mtField = static_cast<Meta::igUnsignedIntArrayMetaField *>(meta_field(meta, base + 1));
    *reinterpret_cast<void **>(reinterpret_cast<char *>(mtField) + 0x34) = (void *)624;
    meta_setupFields(meta, igMersenneTwisterRandomNumber_fieldNames, igMersenneTwisterRandomNumber_fieldStorage, igMersenneTwisterRandomNumber_fieldOffsets, base);
}

}
#pragma pop
