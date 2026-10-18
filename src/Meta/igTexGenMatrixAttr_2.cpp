// igTexGenMatrixAttr: Alchemy class registration (0x800AFEA4..0x800AFF90). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igMatrix44fMetaField.h>

META_DECLARE(igTexGenMatrixAttr)

extern "C" {
void fn_800C305C();
void fn_80124504(void *, void *);
extern char igTexGenMatrixAttr_fieldNames[8];
extern char igTexGenMatrixAttr_fieldOffsets[8];
extern char igTexGenMatrixAttr_fieldStorage[8];
extern char igTexGenMatrixAttr_fieldTypes[8];
extern char lbl_80566810[4];
extern char lbl_80566814[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igTexGenMatrixAttr_fieldInit()
{
    float local[20];
    Meta::igMetaObject *meta = igTexGenMatrixAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTexGenMatrixAttr_fieldTypes, 2);
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
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>(fn_800C305C);
    meta_setupFields(meta, igTexGenMatrixAttr_fieldNames, igTexGenMatrixAttr_fieldStorage, igTexGenMatrixAttr_fieldOffsets, base);
}

}
#pragma pop
