// beActionStarterData2: Alchemy class registration (0x802E4D64..0x802E4DE4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beActionStarterData2)

extern "C" {
extern char beActionStarterData2_fieldNames[];
extern char beActionStarterData2_fieldOffsets[];
extern char beActionStarterData2_fieldStorage[];
extern char beActionStarterData2_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void beActionStarterData2_fieldInit()
{
    Meta::igMetaObject *meta = beActionStarterData2_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beActionStarterData2_fieldTypes, 0x1);
    meta_setupFields(meta, beActionStarterData2_fieldNames, beActionStarterData2_fieldStorage, beActionStarterData2_fieldOffsets, base);
}

}
#pragma pop
