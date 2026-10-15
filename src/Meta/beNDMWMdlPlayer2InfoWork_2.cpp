// beNDMWMdlPlayer2InfoWork: Alchemy class registration (0x80338A30..0x80338AB0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMdlPlayer2InfoWork)

extern "C" {
extern char beNDMWMdlPlayer2InfoWork_fieldNames[];
extern char beNDMWMdlPlayer2InfoWork_fieldOffsets[];
extern char beNDMWMdlPlayer2InfoWork_fieldStorage[];
extern char beNDMWMdlPlayer2InfoWork_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void beNDMWMdlPlayer2InfoWork_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWMdlPlayer2InfoWork_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWMdlPlayer2InfoWork_fieldTypes, 0x4);
    meta_setupFields(meta, beNDMWMdlPlayer2InfoWork_fieldNames, beNDMWMdlPlayer2InfoWork_fieldStorage, beNDMWMdlPlayer2InfoWork_fieldOffsets, base);
}

}
#pragma pop
