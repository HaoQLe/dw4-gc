// igSimpleChildHolderModel: Alchemy class registration (0x8010D6A8..0x8010D728). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igSimpleChildHolderModel)

extern "C" {
void *fn_80111CD4();
extern char igSimpleChildHolderModel_fieldNames[8];
extern char igSimpleChildHolderModel_fieldOffsets[8];
extern char igSimpleChildHolderModel_fieldStorage[8];
extern char igSimpleChildHolderModel_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igSimpleChildHolderModel_fieldInit()
{
    Meta::igMetaObject *meta = igSimpleChildHolderModel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igSimpleChildHolderModel_fieldTypes, 2);
    Meta::igObjectRefMetaField *childField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80111CD4();
    childField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igSimpleChildHolderModel_fieldNames, igSimpleChildHolderModel_fieldStorage, igSimpleChildHolderModel_fieldOffsets, base);
}

}
#pragma pop
