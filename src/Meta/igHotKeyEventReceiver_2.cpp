// igHotKeyEventReceiver: Alchemy class registration (0x8010F504..0x8010F58C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igHotKeyEventReceiver)

extern "C" {
void *fn_8010F58C();
extern char igHotKeyEventReceiver_fieldNames[4];
extern char igHotKeyEventReceiver_fieldOffsets[4];
extern char igHotKeyEventReceiver_fieldStorage[4];
extern char igHotKeyEventReceiver_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igHotKeyEventReceiver_fieldInit()
{
    Meta::igMetaObject *meta = igHotKeyEventReceiver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igHotKeyEventReceiver_fieldTypes, 1);
    Meta::igObjectRefMetaField *hotKeyListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8010F58C();
    hotKeyListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    hotKeyListField->_construct = true;
    meta_setupFields(meta, igHotKeyEventReceiver_fieldNames, igHotKeyEventReceiver_fieldStorage, igHotKeyEventReceiver_fieldOffsets, base);
}

}
#pragma pop
