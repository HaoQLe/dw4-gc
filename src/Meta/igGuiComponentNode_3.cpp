// igGuiComponentNode: Alchemy class registration (0x80111494..0x8011151C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igGuiComponentNode)

extern "C" {
void *fn_80111CD4();
extern char igGuiComponentNode_fieldNames[4];
extern char igGuiComponentNode_fieldOffsets[4];
extern char igGuiComponentNode_fieldStorage[4];
extern char igGuiComponentNode_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igGuiComponentNode_fieldInit()
{
    Meta::igMetaObject *meta = igGuiComponentNode_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGuiComponentNode_fieldTypes, 1);
    Meta::igObjectRefMetaField *componentField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80111CD4();
    componentField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    componentField->_refCounted = false;
    meta_setupFields(meta, igGuiComponentNode_fieldNames, igGuiComponentNode_fieldStorage, igGuiComponentNode_fieldOffsets, base);
}

}
#pragma pop
