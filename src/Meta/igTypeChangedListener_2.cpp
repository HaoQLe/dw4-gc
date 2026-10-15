// igTypeChangedListener: Alchemy class registration (0x801301DC..0x8013025C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igTypeChangedListener)

extern "C" {
void *fn_80029F84();
extern char igTypeChangedListener_fieldNames[4];
extern char igTypeChangedListener_fieldOffsets[4];
extern char igTypeChangedListener_fieldStorage[4];
extern char igTypeChangedListener_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igTypeChangedListener_fieldInit()
{
    Meta::igMetaObject *meta = igTypeChangedListener_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTypeChangedListener_fieldTypes, 1);
    Meta::igObjectRefMetaField *objectTypeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80029F84();
    objectTypeField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igTypeChangedListener_fieldNames, igTypeChangedListener_fieldStorage, igTypeChangedListener_fieldOffsets, base);
}

}
#pragma pop
