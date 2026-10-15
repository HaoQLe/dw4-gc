// igSerialFilterFun: Alchemy class registration (0x8014A7CC..0x8014A834). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSerialFilterFun)

extern "C" {
extern char igSerialFilterFun_fieldNames[4];
extern char igSerialFilterFun_fieldOffsets[4];
extern char igSerialFilterFun_fieldStorage[4];
extern char igSerialFilterFun_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igSerialFilterFun_fieldInit()
{
    Meta::igMetaObject *meta = igSerialFilterFun_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igSerialFilterFun_fieldTypes, 1);
    meta_setupFields(meta, igSerialFilterFun_fieldNames, igSerialFilterFun_fieldStorage, igSerialFilterFun_fieldOffsets, base);
}

}
#pragma pop
