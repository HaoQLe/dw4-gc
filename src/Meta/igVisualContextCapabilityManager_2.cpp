// igVisualContextCapabilityManager: Alchemy class registration (0x800CE530..0x800CE5B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igVisualContextCapabilityManager)

extern "C" {
void *fn_800CE788();
extern char igVisualContextCapabilityManager_fieldNames[4];
extern char igVisualContextCapabilityManager_fieldOffsets[4];
extern char igVisualContextCapabilityManager_fieldStorage[4];
extern char igVisualContextCapabilityManager_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVisualContextCapabilityManager_fieldInit()
{
    Meta::igMetaObject *meta = igVisualContextCapabilityManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVisualContextCapabilityManager_fieldTypes, 1);
    Meta::igObjectRefMetaField *visualContextField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800CE788();
    visualContextField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    visualContextField->_persistent = false;
    meta_setupFields(meta, igVisualContextCapabilityManager_fieldNames, igVisualContextCapabilityManager_fieldStorage, igVisualContextCapabilityManager_fieldOffsets, base);
}

}
#pragma pop
