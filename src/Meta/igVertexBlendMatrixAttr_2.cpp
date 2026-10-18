// igVertexBlendMatrixAttr: Alchemy class registration (0x800AD488..0x800AD574). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igMatrix44fMetaField.h>
#include <meta/igUnsignedShortMetaField.h>

META_DECLARE(igVertexBlendMatrixAttr)

extern "C" {
void fn_800C4F84();
void fn_80124504(void *, void *);
extern char igVertexBlendMatrixAttr_fieldNames[8];
extern char igVertexBlendMatrixAttr_fieldOffsets[8];
extern char igVertexBlendMatrixAttr_fieldStorage[8];
extern char igVertexBlendMatrixAttr_fieldTypes[8];
extern char lbl_80566810[4];
extern char lbl_80566814[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igVertexBlendMatrixAttr_fieldInit()
{
    float local[20];
    Meta::igMetaObject *meta = igVertexBlendMatrixAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexBlendMatrixAttr_fieldTypes, 2);
    Meta::igMatrix44fMetaField *mField = static_cast<Meta::igMatrix44fMetaField *>(meta_field(meta, base));
    local[0] = *reinterpret_cast<float *>(lbl_80566810);
    local[1] = *reinterpret_cast<float *>(lbl_80566814);
    local[2] = *reinterpret_cast<float *>(lbl_80566814);
    local[3] = *reinterpret_cast<float *>(lbl_80566814);
    local[4] = *reinterpret_cast<float *>(lbl_80566810);
    local[5] = *reinterpret_cast<float *>(lbl_80566814);
    local[6] = *reinterpret_cast<float *>(lbl_80566814);
    local[7] = *reinterpret_cast<float *>(lbl_80566814);
    local[8] = *reinterpret_cast<float *>(lbl_80566814);
    local[9] = *reinterpret_cast<float *>(lbl_80566810);
    local[10] = *reinterpret_cast<float *>(lbl_80566814);
    local[11] = *reinterpret_cast<float *>(lbl_80566814);
    local[12] = *reinterpret_cast<float *>(lbl_80566814);
    local[13] = *reinterpret_cast<float *>(lbl_80566814);
    local[14] = *reinterpret_cast<float *>(lbl_80566810);
    local[15] = *reinterpret_cast<float *>(lbl_80566814);
    local[16] = *reinterpret_cast<float *>(lbl_80566814);
    local[17] = *reinterpret_cast<float *>(lbl_80566814);
    local[18] = *reinterpret_cast<float *>(lbl_80566814);
    local[19] = *reinterpret_cast<float *>(lbl_80566810);
    fn_80124504(mField, &local[4]);
    Meta::igUnsignedShortMetaField *blendMatIDField = static_cast<Meta::igUnsignedShortMetaField *>(meta_field(meta, base + 1));
    blendMatIDField->_invarianceFunction = reinterpret_cast<void *>(fn_800C4F84);
    meta_setupFields(meta, igVertexBlendMatrixAttr_fieldNames, igVertexBlendMatrixAttr_fieldStorage, igVertexBlendMatrixAttr_fieldOffsets, base);
}

}
#pragma pop
