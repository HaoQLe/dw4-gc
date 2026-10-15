// igUpdatedFieldEvent: Alchemy class registration (0x8014B0E0..0x8014B160). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igUpdatedFieldEvent)

extern "C" {
void *fn_8002A638();
extern char igUpdatedFieldEvent_fieldNames[4];
extern char igUpdatedFieldEvent_fieldOffsets[4];
extern char igUpdatedFieldEvent_fieldStorage[4];
extern char igUpdatedFieldEvent_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igUpdatedFieldEvent_fieldInit()
{
    Meta::igMetaObject *meta = igUpdatedFieldEvent_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igUpdatedFieldEvent_fieldTypes, 1);
    Meta::igObjectRefMetaField *fieldField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8002A638();
    fieldField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igUpdatedFieldEvent_fieldNames, igUpdatedFieldEvent_fieldStorage, igUpdatedFieldEvent_fieldOffsets, base);
}

}
#pragma pop
