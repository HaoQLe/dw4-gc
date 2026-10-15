// igIterateAttr: Alchemy class registration (0x80144B54..0x80144BFC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igIterateAttr)

extern "C" {
void *fn_800343B8();
void *fn_800BB61C();
extern char igIterateAttr_fieldNames[8];
extern char igIterateAttr_fieldOffsets[8];
extern char igIterateAttr_fieldStorage[8];
extern char igIterateAttr_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igIterateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igIterateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igIterateAttr_fieldTypes, 2);
    Meta::igObjectRefMetaField *typesField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800343B8();
    typesField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    typesField->_construct = true;
    Meta::igObjectRefMetaField *attributesField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_800BB61C();
    attributesField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    attributesField->_construct = true;
    meta_setupFields(meta, igIterateAttr_fieldNames, igIterateAttr_fieldStorage, igIterateAttr_fieldOffsets, base);
}

}
#pragma pop
