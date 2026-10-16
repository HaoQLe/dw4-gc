// beNDMWLoadIntf2DegiStateCtrl: Alchemy class registration (0x8033D66C..0x8033DA50). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWLoadIntf2DegiStateCtrl)
META_DECLARE(beBaseInfoData)
META_DECLARE(beNDMWLoadIntf2DegiStateList)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWLoadIntf2DegiStateCtrl_dependencies[8];
extern char beNDMWLoadIntf2DegiStateCtrl_fieldNames[4];
extern char beNDMWLoadIntf2DegiStateCtrl_fieldOffsets[4];
extern char beNDMWLoadIntf2DegiStateCtrl_fieldStorage[4];
extern char beNDMWLoadIntf2DegiStateCtrl_fieldTypes[4];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_80454AD0[14];
extern char lbl_804DBC50[];
extern char lbl_80536450[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWLoadIntf2DegiStateCtrlInstance : Instance_804DBC50 {
    char unknown0C[4];
    igObjectRefMember _statDataList;
    char unknown14[12];
    inline ~beNDMWLoadIntf2DegiStateCtrlInstance() { __vtable = beNDMWLoadIntf2DegiStateCtrl_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWLoadIntf2DegiStateCtrl)

META_METAOBJECT(beNDMWLoadIntf2DegiStateCtrl)

META_GET_META(beNDMWLoadIntf2DegiStateCtrl)

void *beNDMWLoadIntf2DegiStateCtrl_vtableRead()
{
    beNDMWLoadIntf2DegiStateCtrlInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWLoadIntf2DegiStateCtrl_vtable;
    object._statDataList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLoadIntf2DegiStateCtrl)

void beNDMWLoadIntf2DegiStateCtrl_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadIntf2DegiStateCtrl_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWLoadIntf2DegiStateCtrl_getMetaCall,
                       beNDMWLoadIntf2DegiStateCtrl_className, 0x14,
                       beNDMWLoadIntf2DegiStateCtrl_vtableRead, beNDMWLoadIntf2DegiStateCtrl_fieldInit, 0, beNDMWLoadIntf2DegiStateCtrl_dependencies);
}

META_GET_META_CALL(beNDMWLoadIntf2DegiStateCtrl)

#pragma push
#pragma optimize_for_size off
void beNDMWLoadIntf2DegiStateCtrl_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadIntf2DegiStateCtrl_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadIntf2DegiStateCtrl_fieldTypes, 1);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_80454AD0);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80536450);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igObjectRefMetaField *statDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    statDataListField->_metaObject = beNDMWLoadIntf2DegiStateList_metaObject();
    statDataListField->_construct = true;
    meta_setupFields(meta, beNDMWLoadIntf2DegiStateCtrl_fieldNames, beNDMWLoadIntf2DegiStateCtrl_fieldStorage, beNDMWLoadIntf2DegiStateCtrl_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
