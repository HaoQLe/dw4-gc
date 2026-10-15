// igInterpretedShaderData: Alchemy class registration (0x801BE324..0x801BE3C4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igInterpretedShaderData)

extern "C" {
void *fn_800284F4();
void *fn_801B103C();
extern char igInterpretedShaderData_fieldNames[8];
extern char igInterpretedShaderData_fieldOffsets[8];
extern char igInterpretedShaderData_fieldStorage[8];
extern char igInterpretedShaderData_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igInterpretedShaderData_fieldInit()
{
    Meta::igMetaObject *meta = igInterpretedShaderData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igInterpretedShaderData_fieldTypes, 2);
    Meta::igObjectRefMetaField *factoryField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801B103C();
    factoryField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *objectMappingsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_800284F4();
    objectMappingsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    objectMappingsField->_construct = true;
    meta_setupFields(meta, igInterpretedShaderData_fieldNames, igInterpretedShaderData_fieldStorage, igInterpretedShaderData_fieldOffsets, base);
}

}
#pragma pop
