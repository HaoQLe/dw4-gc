// igTimeTransform1_5: Alchemy class registration (0x801ACD28..0x801ACDA4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igFloatMetaField.h>

META_DECLARE(igTimeTransform1_5)

extern "C" {
void fn_8004D4BC(void *,float);
extern char igTimeTransform1_5_fieldNames[8];
extern char igTimeTransform1_5_fieldOffsets[8];
extern char igTimeTransform1_5_fieldStorage[8];
extern char igTimeTransform1_5_fieldTypes[8];
extern char lbl_80566CA4[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igTimeTransform1_5_fieldInit()
{
    Meta::igMetaObject *meta = igTimeTransform1_5_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTimeTransform1_5_fieldTypes, 2);
    Meta::igFloatMetaField *scaleFloatField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base));
    fn_8004D4BC(scaleFloatField, *reinterpret_cast<float *>(lbl_80566CA4 + 0));
    meta_setupFields(meta, igTimeTransform1_5_fieldNames, igTimeTransform1_5_fieldStorage, igTimeTransform1_5_fieldOffsets, base);
}

}
#pragma pop
