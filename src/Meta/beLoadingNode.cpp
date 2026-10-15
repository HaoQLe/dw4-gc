// beLoadingNode: Alchemy class registration (0x802C4464..0x802C44E4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beLoadingNode)

extern "C" {
extern char beLoadingNode_fieldNames[];
extern char beLoadingNode_fieldOffsets[];
extern char beLoadingNode_fieldStorage[];
extern char beLoadingNode_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void beLoadingNode_fieldInit()
{
    Meta::igMetaObject *meta = beLoadingNode_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beLoadingNode_fieldTypes, 0x2);
    meta_setupFields(meta, beLoadingNode_fieldNames, beLoadingNode_fieldStorage, beLoadingNode_fieldOffsets, base);
}

}
#pragma pop
