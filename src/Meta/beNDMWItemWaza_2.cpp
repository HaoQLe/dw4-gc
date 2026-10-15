// beNDMWItemWaza: Alchemy class registration (0x803425CC..0x8034264C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWItemWaza)

extern "C" {
extern char beNDMWItemWaza_fieldNames[];
extern char beNDMWItemWaza_fieldOffsets[];
extern char beNDMWItemWaza_fieldStorage[];
extern char beNDMWItemWaza_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void beNDMWItemWaza_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWItemWaza_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWItemWaza_fieldTypes, 0x1);
    meta_setupFields(meta, beNDMWItemWaza_fieldNames, beNDMWItemWaza_fieldStorage, beNDMWItemWaza_fieldOffsets, base);
}

}
#pragma pop
