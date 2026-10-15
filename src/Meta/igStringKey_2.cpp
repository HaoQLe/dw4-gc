// igStringKey: Alchemy class registration (0x801AE2CC..0x801AE334). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igStringKey)

extern "C" {
extern char igStringKey_fieldNames[4];
extern char igStringKey_fieldOffsets[4];
extern char igStringKey_fieldStorage[4];
extern char igStringKey_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igStringKey_fieldInit()
{
    Meta::igMetaObject *meta = igStringKey_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igStringKey_fieldTypes, 1);
    meta_setupFields(meta, igStringKey_fieldNames, igStringKey_fieldStorage, igStringKey_fieldOffsets, base);
}

}
#pragma pop
