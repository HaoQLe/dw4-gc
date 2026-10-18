// igProjectionMatrixAttr: Alchemy class registration (0x800B1FB0..0x800B2084). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igMatrix44fMetaField.h>

META_DECLARE(igProjectionMatrixAttr)

extern "C" {
void fn_80124504(void *, void *);
extern char igProjectionMatrixAttr_fieldNames[4];
extern char igProjectionMatrixAttr_fieldOffsets[4];
extern char igProjectionMatrixAttr_fieldStorage[4];
extern char igProjectionMatrixAttr_fieldTypes[4];
extern char lbl_80566810[4];
extern char lbl_80566814[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igProjectionMatrixAttr_fieldInit()
{
    float local[20];
    Meta::igMetaObject *meta = igProjectionMatrixAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igProjectionMatrixAttr_fieldTypes, 1);
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
    meta_setupFields(meta, igProjectionMatrixAttr_fieldNames, igProjectionMatrixAttr_fieldStorage, igProjectionMatrixAttr_fieldOffsets, base);
}

}
#pragma pop
