// beSelectCtrlInfoRamData: Alchemy class registration (0x802BA3C0..0x802BA5BC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beSelectCtrlInfoRamData)
META_DECLARE(beBaseInfoData)
META_DECLARE(beSelectCtrlInfoWork)

extern "C" {
extern char beSelectCtrlInfoRamData_dependencies[8];
extern char beSelectCtrlInfoRamData_fieldNames[16];
extern char beSelectCtrlInfoRamData_fieldOffsets[16];
extern char beSelectCtrlInfoRamData_fieldStorage[16];
extern char beSelectCtrlInfoRamData_fieldTypes[16];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041D93C[6];
extern char lbl_8041D944[4];
extern char lbl_805347BC[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beSelectCtrlInfoRamData)

void beSelectCtrlInfoRamData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSelectCtrlInfoRamData_meta, beBaseInfoData_register,
                       fn_802B8770, beSelectCtrlInfoRamData_getMetaCall,
                       beSelectCtrlInfoRamData_className, 0x20,
                       beSelectCtrlInfoRamData_vtableRead, beSelectCtrlInfoRamData_fieldInit, 0, beSelectCtrlInfoRamData_dependencies);
}

META_GET_META_CALL(beSelectCtrlInfoRamData)

#pragma push
#pragma optimize_for_size off
void beSelectCtrlInfoRamData_fieldInit()
{
    Meta::igMetaObject *meta = beSelectCtrlInfoRamData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSelectCtrlInfoRamData_fieldTypes, 4);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_8041D93C));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_8041D944);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_805347BC);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igObjectRefMetaField *workField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    workField->_metaObject = beSelectCtrlInfoWork_metaObject();
    meta_setupFields(meta, beSelectCtrlInfoRamData_fieldNames, beSelectCtrlInfoRamData_fieldStorage, beSelectCtrlInfoRamData_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
