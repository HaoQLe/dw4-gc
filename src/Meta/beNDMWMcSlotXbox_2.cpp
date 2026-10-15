// beNDMWMcSlotXbox: Alchemy class registration (0x8033FD20..0x8033FDA0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMcSlotXbox)

extern "C" {
extern char beNDMWMcSlotXbox_fieldNames[];
extern char beNDMWMcSlotXbox_fieldOffsets[];
extern char beNDMWMcSlotXbox_fieldStorage[];
extern char beNDMWMcSlotXbox_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void beNDMWMcSlotXbox_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWMcSlotXbox_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWMcSlotXbox_fieldTypes, 0x1);
    meta_setupFields(meta, beNDMWMcSlotXbox_fieldNames, beNDMWMcSlotXbox_fieldStorage, beNDMWMcSlotXbox_fieldOffsets, base);
}

}
#pragma pop
