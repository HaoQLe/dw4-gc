// igBitmapFont: Alchemy class registration (0x80114CA4..0x80114D4C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igBitmapFont)

extern "C" {
void *fn_800AF168();
void *fn_80114D4C();
extern char igBitmapFont_fieldNames[8];
extern char igBitmapFont_fieldOffsets[8];
extern char igBitmapFont_fieldStorage[8];
extern char igBitmapFont_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igBitmapFont_fieldInit()
{
    Meta::igMetaObject *meta = igBitmapFont_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBitmapFont_fieldTypes, 2);
    Meta::igObjectRefMetaField *charMetricsListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80114D4C();
    charMetricsListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    charMetricsListField->_construct = true;
    Meta::igObjectRefMetaField *textureBindField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_800AF168();
    textureBindField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    textureBindField->_construct = true;
    meta_setupFields(meta, igBitmapFont_fieldNames, igBitmapFont_fieldStorage, igBitmapFont_fieldOffsets, base);
}

}
#pragma pop
