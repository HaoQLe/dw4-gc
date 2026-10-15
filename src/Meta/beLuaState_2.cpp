// beLuaState: Alchemy class registration (0x802D1850..0x802D18D0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beLuaState)

extern "C" {
extern char beLuaState_fieldNames[];
extern char beLuaState_fieldOffsets[];
extern char beLuaState_fieldStorage[];
extern char beLuaState_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void beLuaState_fieldInit()
{
    Meta::igMetaObject *meta = beLuaState_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beLuaState_fieldTypes, 0x1);
    meta_setupFields(meta, beLuaState_fieldNames, beLuaState_fieldStorage, beLuaState_fieldOffsets, base);
}

}
#pragma pop
