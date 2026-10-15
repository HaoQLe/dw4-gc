// beModelCtrlSCSound: Alchemy class registration (0x802C571C..0x802C579C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlSCSound)

extern "C" {
extern char beModelCtrlSCSound_fieldNames[];
extern char beModelCtrlSCSound_fieldOffsets[];
extern char beModelCtrlSCSound_fieldStorage[];
extern char beModelCtrlSCSound_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void beModelCtrlSCSound_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlSCSound_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlSCSound_fieldTypes, 0x2);
    meta_setupFields(meta, beModelCtrlSCSound_fieldNames, beModelCtrlSCSound_fieldStorage, beModelCtrlSCSound_fieldOffsets, base);
}

}
#pragma pop
