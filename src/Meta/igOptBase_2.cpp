// igOptBase: Alchemy class registration (0x8013BA18..0x8013BAB0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igOptBase)

extern "C" {
void *fn_80026B14();
void *fn_8013B7B0();
extern char igOptBase_fieldNames[8];
extern char igOptBase_fieldOffsets[8];
extern char igOptBase_fieldStorage[8];
extern char igOptBase_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igOptBase_fieldInit()
{
    Meta::igMetaObject *meta = igOptBase_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igOptBase_fieldTypes, 2);
    Meta::igObjectRefMetaField *registryField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80026B14();
    registryField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *configurationField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_8013B7B0();
    configurationField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    meta_setupFields(meta, igOptBase_fieldNames, igOptBase_fieldStorage, igOptBase_fieldOffsets, base);
}

}
#pragma pop
