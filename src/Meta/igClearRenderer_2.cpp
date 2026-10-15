// igClearRenderer: Alchemy class registration (0x8010DF94..0x8010DFFC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igClearRenderer)

extern "C" {
extern char igClearRenderer_fieldNames[4];
extern char igClearRenderer_fieldOffsets[4];
extern char igClearRenderer_fieldStorage[4];
extern char igClearRenderer_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igClearRenderer_fieldInit()
{
    Meta::igMetaObject *meta = igClearRenderer_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igClearRenderer_fieldTypes, 1);
    meta_setupFields(meta, igClearRenderer_fieldNames, igClearRenderer_fieldStorage, igClearRenderer_fieldOffsets, base);
}

}
#pragma pop
