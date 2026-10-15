// igStringValue: Alchemy class registration (0x801AE09C..0x801AE104). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igStringValue)

extern "C" {
extern char igStringValue_fieldNames[4];
extern char igStringValue_fieldOffsets[4];
extern char igStringValue_fieldStorage[4];
extern char igStringValue_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igStringValue_fieldInit()
{
    Meta::igMetaObject *meta = igStringValue_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igStringValue_fieldTypes, 1);
    meta_setupFields(meta, igStringValue_fieldNames, igStringValue_fieldStorage, igStringValue_fieldOffsets, base);
}

}
#pragma pop
