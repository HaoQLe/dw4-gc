// beModelCtrlInfoRamData: Alchemy class registration (0x802C8EFC..0x802C9110). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beModelCtrlInfoRamData)
META_DECLARE(beBaseInfoData)
META_DECLARE(beModelCtrlInfoWork)
META_DECLARE(beModelCtrlNode2)

extern "C" {
extern char beModelCtrlInfoRamData_dependencies[12];
extern char beModelCtrlInfoRamData_fieldNames[8];
extern char beModelCtrlInfoRamData_fieldOffsets[8];
extern char beModelCtrlInfoRamData_fieldStorage[8];
extern char beModelCtrlInfoRamData_fieldTypes[8];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041D93C[6];
extern char lbl_8041D944[4];
extern char lbl_80534DFC[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beModelCtrlInfoRamData)

void beModelCtrlInfoRamData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlInfoRamData_meta, beBaseInfoData_register,
                       fn_802B8770, beModelCtrlInfoRamData_getMetaCall,
                       beModelCtrlInfoRamData_className, 0x18,
                       beModelCtrlInfoRamData_vtableRead, beModelCtrlInfoRamData_fieldInit, 0, beModelCtrlInfoRamData_dependencies);
}

META_GET_META_CALL(beModelCtrlInfoRamData)

#pragma push
#pragma optimize_for_size off
void beModelCtrlInfoRamData_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlInfoRamData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlInfoRamData_fieldTypes, 2);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_8041D93C));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_8041D944);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80534DFC);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igObjectRefMetaField *nodeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    nodeField->_metaObject = beModelCtrlNode2_metaObject();
    Meta::igObjectRefMetaField *workField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    workField->_metaObject = beModelCtrlInfoWork_metaObject();
    meta_setupFields(meta, beModelCtrlInfoRamData_fieldNames, beModelCtrlInfoRamData_fieldStorage, beModelCtrlInfoRamData_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
