// igGeometry: Alchemy class registration (0x801C0454..0x801C0564). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igGeometry)

extern "C" {
void fn_8003EC68(void *, int);
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void *fn_800B13DC();
extern char igGeometry_fieldNames[4];
extern char igGeometry_fieldOffsets[4];
extern char igGeometry_fieldStorage[4];
extern char igGeometry_fieldTypes[4];
extern char lbl_804AF584[9];
extern char lbl_80564EF4[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igGeometry_fieldInit()
{
    Meta::igMetaObject *meta = igGeometry_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGeometry_fieldTypes, 1);
    Meta::igBoolMetaField *triggerField = static_cast<Meta::igBoolMetaField *>(fn_800658F8(meta, lbl_804AF584));   // "_trigger"
    int triggerIndex = fn_80053998(meta->_metaFields, triggerField);
    triggerField = static_cast<Meta::igBoolMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(triggerField)->virtual54(1));   // a copy of it
    fn_8003EC68(triggerField, 1);
    triggerField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80564EF4);
    fn_8006588C(meta, triggerIndex, triggerField);
    meta_release(triggerField);
    Meta::igObjectRefMetaField *renderListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v4 = fn_800B13DC();
    renderListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    renderListField->_persistent = false;
    meta_setupFields(meta, igGeometry_fieldNames, igGeometry_fieldStorage, igGeometry_fieldOffsets, base);
}

}
#pragma pop
