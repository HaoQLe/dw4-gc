// igLightSet: Alchemy class registration (0x801BBBF8..0x801BBC90). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igLightSet)

extern "C" {
void *fn_800B58C8();
extern char igLightSet_fieldNames[4];
extern char igLightSet_fieldOffsets[4];
extern char igLightSet_fieldStorage[4];
extern char igLightSet_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igLightSet_fieldInit()
{
    Meta::igMetaObject *meta = igLightSet_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igLightSet_fieldTypes, 1);
    Meta::igObjectRefMetaField *lightsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800B58C8();
    lightsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    lightsField->_construct = true;
    lightsField->_deepCopyMethod = 0;
    lightsField->_shallowCopyMethod = 2;
    meta_setupFields(meta, igLightSet_fieldNames, igLightSet_fieldStorage, igLightSet_fieldOffsets, base);
}

}
#pragma pop
