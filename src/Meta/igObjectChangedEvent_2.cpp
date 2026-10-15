// igObjectChangedEvent: Alchemy class registration (0x80140C44..0x80140CC0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igObjectChangedEvent)
META_DECLARE(igObject)

extern "C" {
extern char igObjectChangedEvent_fieldNames[4];
extern char igObjectChangedEvent_fieldOffsets[4];
extern char igObjectChangedEvent_fieldStorage[4];
extern char igObjectChangedEvent_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igObjectChangedEvent_fieldInit()
{
    Meta::igMetaObject *meta = igObjectChangedEvent_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igObjectChangedEvent_fieldTypes, 1);
    Meta::igObjectRefMetaField *objectField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    objectField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igObject_meta);
    meta_setupFields(meta, igObjectChangedEvent_fieldNames, igObjectChangedEvent_fieldStorage, igObjectChangedEvent_fieldOffsets, base);
}

}
#pragma pop
