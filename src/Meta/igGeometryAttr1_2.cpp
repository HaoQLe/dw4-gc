// igGeometryAttr1_5: Alchemy class registration (0x800B6BA8..0x800B6C28). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igGeometryAttr1_5)

extern "C" {
void *fn_800D06E0();
extern char igGeometryAttr1_5_fieldNames[4];
extern char igGeometryAttr1_5_fieldOffsets[4];
extern char igGeometryAttr1_5_fieldStorage[4];
extern char igGeometryAttr1_5_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igGeometryAttr1_5_fieldInit()
{
    Meta::igMetaObject *meta = igGeometryAttr1_5_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGeometryAttr1_5_fieldTypes, 1);
    Meta::igObjectRefMetaField *stripLengthsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800D06E0();
    stripLengthsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igGeometryAttr1_5_fieldNames, igGeometryAttr1_5_fieldStorage, igGeometryAttr1_5_fieldOffsets, base);
}

}
#pragma pop
