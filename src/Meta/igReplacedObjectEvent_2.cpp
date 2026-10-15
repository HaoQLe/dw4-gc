// igReplacedObjectEvent: Alchemy class registration (0x80134684..0x80134714). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igReplacedObjectEvent)
META_DECLARE(igObject)

extern "C" {
extern char igReplacedObjectEvent_fieldNames[8];
extern char igReplacedObjectEvent_fieldOffsets[8];
extern char igReplacedObjectEvent_fieldStorage[8];
extern char igReplacedObjectEvent_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igReplacedObjectEvent_fieldInit()
{
    Meta::igMetaObject *meta = igReplacedObjectEvent_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igReplacedObjectEvent_fieldTypes, 2);
    Meta::igObjectRefMetaField *oldObjectField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    oldObjectField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igObject_meta);
    Meta::igObjectRefMetaField *newObjectField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    newObjectField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igObject_meta);
    meta_setupFields(meta, igReplacedObjectEvent_fieldNames, igReplacedObjectEvent_fieldStorage, igReplacedObjectEvent_fieldOffsets, base);
}

}
#pragma pop
