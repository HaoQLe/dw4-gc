// beNDMWMcSlot: Alchemy class registration (0x80340150..0x803402D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMcSlot)
META_DECLARE(igObject)

extern "C" {
extern char beNDMWMcSlot_fieldNames[];
extern char beNDMWMcSlot_fieldOffsets[];
extern char beNDMWMcSlot_fieldStorage[];
extern char beNDMWMcSlot_fieldTypes[];
void *fn_800237D0();
void fn_803250AC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNDMWMcSlot)

META_ARK_REGISTER(beNDMWMcSlot)

void beNDMWMcSlot_register()
{
    fn_803250AC();
    meta_registerClass(1, &beNDMWMcSlot_meta, igObject_register,
                       fn_800237D0, beNDMWMcSlot_getMetaCall,
                       beNDMWMcSlot_className, 0x18,
                       0, beNDMWMcSlot_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWMcSlot)

void beNDMWMcSlot_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWMcSlot_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWMcSlot_fieldTypes, 0x5);
    meta_setupFields(meta, beNDMWMcSlot_fieldNames, beNDMWMcSlot_fieldStorage, beNDMWMcSlot_fieldOffsets, base);
}

}
#pragma pop
