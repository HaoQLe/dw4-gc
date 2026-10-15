// igAdxAfsFile: Alchemy class registration (0x802AAD5C..0x802AADDC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAdxAfsFile)

extern "C" {
extern char igAdxAfsFile_fieldNames[];
extern char igAdxAfsFile_fieldOffsets[];
extern char igAdxAfsFile_fieldStorage[];
extern char igAdxAfsFile_fieldTypes[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igAdxAfsFile_fieldInit()
{
    Meta::igMetaObject *meta = igAdxAfsFile_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAdxAfsFile_fieldTypes, 0x2);
    meta_setupFields(meta, igAdxAfsFile_fieldNames, igAdxAfsFile_fieldStorage, igAdxAfsFile_fieldOffsets, base);
}

}
#pragma pop
