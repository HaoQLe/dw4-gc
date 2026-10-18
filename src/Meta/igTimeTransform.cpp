// igTimeTransform: Alchemy class registration (0x801ACDE0..0x801ACF5C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igDoubleMetaField.h>

META_DECLARE(igTimeTransform)
META_DECLARE(igGroup)
META_DECLARE(igTimeTransform1_5)

extern "C" {
void fn_800440F4(void *, double);
void *fn_8011148C();
void fn_801AA6DC();
extern char igTimeTransform_fieldNames[8];
extern char igTimeTransform_fieldOffsets[8];
extern char igTimeTransform_fieldStorage[8];
extern char igTimeTransform_fieldTypes[8];
extern const char lbl_80566CA8[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTimeTransform)

META_ARK_REGISTER(igTimeTransform)

void igTimeTransform_register()
{
    fn_801AA6DC();
    meta_registerClass(1, &igTimeTransform_meta, igGroup_register,
                       fn_8011148C, igTimeTransform_getMetaCall,
                       igTimeTransform_className, 0x30,
                       0, igTimeTransform_fieldInit, 0, 0);
}

META_GET_META_CALL(igTimeTransform)

void igTimeTransform_fieldInit()
{
    Meta::igMetaObject *meta = igTimeTransform_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTimeTransform_fieldTypes, 2);
    Meta::igDoubleMetaField *scaleField = static_cast<Meta::igDoubleMetaField *>(meta_field(meta, base));
    fn_800440F4(scaleField, *reinterpret_cast<const double *>(lbl_80566CA8));
    meta_setupFields(meta, igTimeTransform_fieldNames, igTimeTransform_fieldStorage, igTimeTransform_fieldOffsets, base);
    igTimeTransform_meta->_abstractProxy = reinterpret_cast<void *>(igTimeTransform1_5_getMetaCall);
}

}
#pragma pop
