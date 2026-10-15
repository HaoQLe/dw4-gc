// ParticleArray: Alchemy class registration (0x802E7B4C..0x802E7CAC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igFloatMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(ParticleArray)

extern "C" {
extern char ParticleArray_fieldNames[];
extern char ParticleArray_fieldOffsets[];
extern char ParticleArray_fieldStorage[];
extern char ParticleArray_fieldTypes[];
void fn_8003EC68(void *,int);
void fn_8004D4BC(void *,float);
void *fn_800D0068();
extern char lbl_8041D5B0[];
extern char lbl_8041E6AC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

void ParticleArray_fieldInit()
{
    Meta::igMetaObject *meta = ParticleArray_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, ParticleArray_fieldTypes, 11);
    Meta::igFloatMetaField *xImageCountField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base));
    fn_8004D4BC(xImageCountField, *reinterpret_cast<float *>(lbl_8041D5B0 + 0));
    Meta::igFloatMetaField *yImageCountField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 1));
    fn_8004D4BC(yImageCountField, *reinterpret_cast<float *>(lbl_8041D5B0 + 0));
    Meta::igBoolMetaField *loopTimeField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 2));
    fn_8003EC68(loopTimeField, 1);
    Meta::igFloatMetaField *startOffsetField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 4));
    fn_8004D4BC(startOffsetField, *reinterpret_cast<float *>(lbl_8041E6AC + 0));
    Meta::igObjectRefMetaField *vertexArray1Field = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    void *value_value7 = fn_800D0068();
    vertexArray1Field->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value7);
    vertexArray1Field->_persistent = false;
    Meta::igObjectRefMetaField *vertexArray2Field = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_value9 = fn_800D0068();
    vertexArray2Field->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value9);
    vertexArray2Field->_persistent = false;
    Meta::igBoolMetaField *whichVertexArrayField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 8));
    whichVertexArrayField->_persistent = false;
    Meta::igBoolMetaField *setConstant1Field = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 9));
    setConstant1Field->_persistent = false;
    Meta::igBoolMetaField *setConstant2Field = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 10));
    setConstant2Field->_persistent = false;
    meta_setupFields(meta, ParticleArray_fieldNames, ParticleArray_fieldStorage, ParticleArray_fieldOffsets, base);
}

}
#pragma pop
