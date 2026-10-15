// igOnOffValueObserver: Alchemy class registration (0x8010E6E4..0x8010E76C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igOnOffValueObserver)

extern "C" {
void *fn_8010E974();
extern char igOnOffValueObserver_fieldNames[4];
extern char igOnOffValueObserver_fieldOffsets[4];
extern char igOnOffValueObserver_fieldStorage[4];
extern char igOnOffValueObserver_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igOnOffValueObserver_fieldInit()
{
    Meta::igMetaObject *meta = igOnOffValueObserver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igOnOffValueObserver_fieldTypes, 1);
    Meta::igObjectRefMetaField *groupField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8010E974();
    groupField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    groupField->_refCounted = false;
    meta_setupFields(meta, igOnOffValueObserver_fieldNames, igOnOffValueObserver_fieldStorage, igOnOffValueObserver_fieldOffsets, base);
}

}
#pragma pop
