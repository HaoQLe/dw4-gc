// igParameterNonNull: Alchemy class registration (0x8013979C..0x80139804). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igParameterNonNull)

extern "C" {
extern char igParameterNonNull_fieldNames[4];
extern char igParameterNonNull_fieldOffsets[4];
extern char igParameterNonNull_fieldStorage[4];
extern char igParameterNonNull_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igParameterNonNull_fieldInit()
{
    Meta::igMetaObject *meta = igParameterNonNull_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igParameterNonNull_fieldTypes, 1);
    meta_setupFields(meta, igParameterNonNull_fieldNames, igParameterNonNull_fieldStorage, igParameterNonNull_fieldOffsets, base);
}

}
#pragma pop
