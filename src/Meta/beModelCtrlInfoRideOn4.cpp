// beModelCtrlInfoRideOn4: Alchemy class registration (0x802C72CC..0x802C73E8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>

META_DECLARE(beModelCtrlInfoRideOn4)

extern "C" {
extern char beModelCtrlInfoRideOn4_fieldNames[20];
extern char beModelCtrlInfoRideOn4_fieldOffsets[20];
extern char beModelCtrlInfoRideOn4_fieldStorage[20];
extern char beModelCtrlInfoRideOn4_fieldTypes[20];
void fn_80053650(void *, int);
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
extern char lbl_8041EDB8[12];
extern char lbl_80534D34[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void beModelCtrlInfoRideOn4_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlInfoRideOn4_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlInfoRideOn4_fieldTypes, 5);
    Meta::igIntMetaField *modelRamNoField = static_cast<Meta::igIntMetaField *>(fn_800658F8(meta, lbl_8041EDB8));   // "_modelRamNo"
    int modelRamNoIndex = fn_80053998(meta->_metaFields, modelRamNoField);
    modelRamNoField = static_cast<Meta::igIntMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(modelRamNoField)->virtual54(1));   // a copy of it
    fn_80053650(modelRamNoField, 104);
    modelRamNoField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80534D34);
    fn_8006588C(meta, modelRamNoIndex, modelRamNoField);
    meta_release(modelRamNoField);
    meta_setupFields(meta, beModelCtrlInfoRideOn4_fieldNames, beModelCtrlInfoRideOn4_fieldStorage, beModelCtrlInfoRideOn4_fieldOffsets, base);
}

}
#pragma pop
