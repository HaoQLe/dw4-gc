// igStringMetaField: Alchemy class registration (0x8002549C..0x80025628). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igCharMetaField.h>

META_DECLARE(igStringMetaField)

extern "C" {
void fn_8003EC68(void *, int);
void fn_80040030(void *, int);
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
extern char igStringMetaField_fieldNames[4];
extern char igStringMetaField_fieldOffsets[4];
extern char igStringMetaField_fieldStorage[4];
extern char igStringMetaField_fieldTypes[4];
extern char lbl_80463690[19];
extern char lbl_804636A4[10];
extern char lbl_805615BC[4];
extern char lbl_805615C0[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igStringMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igStringMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igStringMetaField_fieldTypes, 1);
    Meta::igCharMetaField *shallowCopyMethodField = static_cast<Meta::igCharMetaField *>(fn_800658F8(meta, lbl_80463690));   // "_shallowCopyMethod"
    int shallowCopyMethodIndex = fn_80053998(meta->_metaFields, shallowCopyMethodField);
    shallowCopyMethodField = static_cast<Meta::igCharMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(shallowCopyMethodField)->virtual54(1));   // a copy of it
    fn_80040030(shallowCopyMethodField, 2);
    shallowCopyMethodField->_externalEnumStorage = reinterpret_cast<void *>(lbl_805615BC);
    fn_8006588C(meta, shallowCopyMethodIndex, shallowCopyMethodField);
    meta_release(shallowCopyMethodField);
    Meta::igBoolMetaField *destructField = static_cast<Meta::igBoolMetaField *>(fn_800658F8(meta, lbl_804636A4));   // "_destruct"
    int destructIndex = fn_80053998(meta->_metaFields, destructField);
    destructField = static_cast<Meta::igBoolMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(destructField)->virtual54(1));   // a copy of it
    fn_8003EC68(destructField, 1);
    destructField->_externalEnumStorage = reinterpret_cast<void *>(lbl_805615C0);
    fn_8006588C(meta, destructIndex, destructField);
    meta_release(destructField);
    Meta::igBoolMetaField *refCountedField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base));
    fn_8003EC68(refCountedField, 1);
    meta_setupFields(meta, igStringMetaField_fieldNames, igStringMetaField_fieldStorage, igStringMetaField_fieldOffsets, base);
}

}
#pragma pop
