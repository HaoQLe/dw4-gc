// beCriSfpData: Alchemy class registration (0x802DEA94..0x802DEB14). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beCriSfpData)

extern "C" {
extern char beCriSfpData_fieldNames[];
extern char beCriSfpData_fieldOffsets[];
extern char beCriSfpData_fieldStorage[];
extern char beCriSfpData_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void beCriSfpData_fieldInit()
{
    Meta::igMetaObject *meta = beCriSfpData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beCriSfpData_fieldTypes, 0x4);
    meta_setupFields(meta, beCriSfpData_fieldNames, beCriSfpData_fieldStorage, beCriSfpData_fieldOffsets, base);
}

}
#pragma pop
