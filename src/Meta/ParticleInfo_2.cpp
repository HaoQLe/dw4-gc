// ParticleInfo: Alchemy class registration (0x802E86C4..0x802E88C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igEnumMetaField.h>
#include <meta/igFloatArrayMetaField.h>
#include <meta/igFloatMetaField.h>
#include <meta/igIntArrayMetaField.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(ParticleInfo)

extern "C" {
extern char ParticleInfo_fieldNames[];
extern char ParticleInfo_fieldOffsets[];
extern char ParticleInfo_fieldStorage[];
extern char ParticleInfo_fieldTypes[];
void fn_80046E58(void *,void *);
void fn_8004D4BC(void *,float);
void fn_80053650(void *,int);
void *fn_800D2414();
void *fn_801C010C();
void fn_802E81A4();
void fn_802E8204();
void fn_802E8264();
void fn_802E82C4();
extern char lbl_8041E6AC[];
extern char lbl_8042149C[];
extern char lbl_804D3484[];
extern char lbl_804D3488[];
extern char lbl_804D348C[];
extern char lbl_804D3490[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void ParticleInfo_fieldInit()
{
    Meta::igMetaObject *meta = ParticleInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, ParticleInfo_fieldTypes, 18);
    Meta::igFloatArrayMetaField *pointsField = static_cast<Meta::igFloatArrayMetaField *>(meta_field(meta, base));
    *reinterpret_cast<void **>(reinterpret_cast<char *>(pointsField) + 0x34) = (void *)192;
    pointsField->_resetMethod = 3;
    Meta::igIntArrayMetaField *numControlsField = static_cast<Meta::igIntArrayMetaField *>(meta_field(meta, base + 1));
    *reinterpret_cast<void **>(reinterpret_cast<char *>(numControlsField) + 0x34) = (void *)32;
    numControlsField->_resetMethod = 3;
    Meta::igFloatMetaField *lifetimeField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 2));
    fn_8004D4BC(lifetimeField, *reinterpret_cast<float *>(lbl_8042149C + 0));
    Meta::igIntMetaField *countField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 3));
    fn_80053650(countField, 10);
    Meta::igObjectRefMetaField *textureField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_value7 = fn_800D2414();
    textureField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value7);
    Meta::igEnumMetaField *alphaTypeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 5));
    fn_80046E58(alphaTypeField, lbl_804D3484);
    alphaTypeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_802E8264);
    Meta::igEnumMetaField *alphaFunctionField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 6));
    fn_80046E58(alphaFunctionField, lbl_804D3488);
    alphaFunctionField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_802E8204);
    Meta::igEnumMetaField *timeTypeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 9));
    fn_80046E58(timeTypeField, lbl_804D348C);
    timeTypeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_802E81A4);
    Meta::igEnumMetaField *shapeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 11));
    fn_80046E58(shapeField, lbl_804D3490);
    shapeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_802E82C4);
    Meta::igIntMetaField *xImageCountField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 13));
    fn_80053650(xImageCountField, 1);
    Meta::igIntMetaField *yImageCountField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 14));
    fn_80053650(yImageCountField, 1);
    Meta::igFloatMetaField *startOffsetField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 16));
    fn_8004D4BC(startOffsetField, *reinterpret_cast<float *>(lbl_8041E6AC + 0));
    Meta::igObjectRefMetaField *geometryField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 17));
    void *value_value16 = fn_801C010C();
    geometryField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value16);
    meta_setupFields(meta, ParticleInfo_fieldNames, ParticleInfo_fieldStorage, ParticleInfo_fieldOffsets, base);
}

}
#pragma pop
