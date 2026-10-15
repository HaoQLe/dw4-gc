// igVisualContextAttrDefaultManager: Alchemy class registration (0x800ABF00..0x800ABF94). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igVisualContextAttrDefaultManager)

extern "C" {
void *fn_800CE788();
extern char igVisualContextAttrDefaultManager_fieldNames[4];
extern char igVisualContextAttrDefaultManager_fieldOffsets[4];
extern char igVisualContextAttrDefaultManager_fieldStorage[4];
extern char igVisualContextAttrDefaultManager_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVisualContextAttrDefaultManager_fieldInit()
{
    Meta::igMetaObject *meta = igVisualContextAttrDefaultManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVisualContextAttrDefaultManager_fieldTypes, 1);
    Meta::igObjectRefMetaField *visualContextField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800CE788();
    visualContextField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    visualContextField->_persistent = false;
    visualContextField->_deepCopyMethod = 1;
    visualContextField->_shallowCopyMethod = 1;
    meta_setupFields(meta, igVisualContextAttrDefaultManager_fieldNames, igVisualContextAttrDefaultManager_fieldStorage, igVisualContextAttrDefaultManager_fieldOffsets, base);
}

}
#pragma pop
