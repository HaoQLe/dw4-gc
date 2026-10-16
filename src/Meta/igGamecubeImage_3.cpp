// igGamecubeImage: Alchemy class registration (0x800D89FC..0x800D8A90). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igStructMetaField.h>

META_DECLARE(igGamecubeImage)
META_DECLARE(igImage)

extern "C" {
extern char igGamecubeImage_fieldNames[4];
extern char igGamecubeImage_fieldOffsets[4];
extern char igGamecubeImage_fieldStorage[4];
extern char igGamecubeImage_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igGamecubeImage_fieldInit()
{
    Meta::igMetaObject *meta = igGamecubeImage_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGamecubeImage_fieldTypes, 1);
    Meta::igStructMetaField *ddsHeaderField = static_cast<Meta::igStructMetaField *>(meta_field(meta, base));
    ddsHeaderField->_size = 124;
    ddsHeaderField->_persistent = false;
    meta_setupFields(meta, igGamecubeImage_fieldNames, igGamecubeImage_fieldStorage, igGamecubeImage_fieldOffsets, base);
    igGamecubeImage_meta->_writeProxy = reinterpret_cast<void *>(igImage_getMetaCall);
}

}
#pragma pop
