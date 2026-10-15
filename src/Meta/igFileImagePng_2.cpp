// igFileImagePng: Alchemy class registration (0x800D6058..0x800D60D8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igFileImagePng)

extern "C" {
void *fn_80030000();
extern char igFileImagePng_fieldNames[4];
extern char igFileImagePng_fieldOffsets[4];
extern char igFileImagePng_fieldStorage[4];
extern char igFileImagePng_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igFileImagePng_fieldInit()
{
    Meta::igMetaObject *meta = igFileImagePng_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFileImagePng_fieldTypes, 1);
    Meta::igObjectRefMetaField *fileField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80030000();
    fileField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igFileImagePng_fieldNames, igFileImagePng_fieldStorage, igFileImagePng_fieldOffsets, base);
}

}
#pragma pop
