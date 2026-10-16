// beNDMWLoadIntf2DataSelIntf: Alchemy class registration (0x8033D28C..0x8033D66C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWLoadIntf2DataSelIntf)
META_DECLARE(beBaseInfoData)
META_DECLARE(beNDMWLoadCtrl2CommonIntf)
META_DECLARE(beNDMWLoadIntf2ComMdlCtrl)
META_DECLARE(beNDMWLoadIntf2DegiStateCtrl)
META_DECLARE(beNDMWLoadIntf2MesWin)
META_DECLARE(beNDMWLoadIntf2TextOrder)
META_DECLARE(bePadManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWLoadIntf2DataSelIntf_dependencies[28];
extern char beNDMWLoadIntf2DataSelIntf_fieldNames[92];
extern char beNDMWLoadIntf2DataSelIntf_fieldOffsets[92];
extern char beNDMWLoadIntf2DataSelIntf_fieldStorage[92];
extern char beNDMWLoadIntf2DataSelIntf_fieldTypes[92];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_80454A94[12];
extern char lbl_804DBC50[];
extern char lbl_805363EC[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWLoadIntf2DataSelIntfInstance : Instance_804DBC50 {
    char unknown0C[84];
    inline ~beNDMWLoadIntf2DataSelIntfInstance() { __vtable = beNDMWLoadIntf2DataSelIntf_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWLoadIntf2DataSelIntf)

META_GET_META(beNDMWLoadIntf2DataSelIntf)

void *beNDMWLoadIntf2DataSelIntf_vtableRead()
{
    beNDMWLoadIntf2DataSelIntfInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWLoadIntf2DataSelIntf_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLoadIntf2DataSelIntf)

void beNDMWLoadIntf2DataSelIntf_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadIntf2DataSelIntf_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWLoadIntf2DataSelIntf_getMetaCall,
                       beNDMWLoadIntf2DataSelIntf_className, 0x5C,
                       beNDMWLoadIntf2DataSelIntf_vtableRead, beNDMWLoadIntf2DataSelIntf_fieldInit, 0, beNDMWLoadIntf2DataSelIntf_dependencies);
}

META_GET_META_CALL(beNDMWLoadIntf2DataSelIntf)

#pragma push
#pragma optimize_for_size off
void beNDMWLoadIntf2DataSelIntf_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadIntf2DataSelIntf_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadIntf2DataSelIntf_fieldTypes, 23);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_80454A94);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_805363EC);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    padManagerField->_metaObject = bePadManager_metaObject();
    padManagerField->_refCounted = false;
    Meta::igObjectRefMetaField *comMdlCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    comMdlCtrlField->_metaObject = beNDMWLoadIntf2ComMdlCtrl_metaObject();
    comMdlCtrlField->_refCounted = false;
    Meta::igObjectRefMetaField *textOrderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    textOrderField->_metaObject = beNDMWLoadIntf2TextOrder_metaObject();
    textOrderField->_refCounted = false;
    Meta::igObjectRefMetaField *commonIntfField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    commonIntfField->_metaObject = beNDMWLoadCtrl2CommonIntf_metaObject();
    commonIntfField->_refCounted = false;
    Meta::igObjectRefMetaField *mesWinField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    mesWinField->_metaObject = beNDMWLoadIntf2MesWin_metaObject();
    mesWinField->_refCounted = false;
    Meta::igObjectRefMetaField *statDispField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    statDispField->_metaObject = beNDMWLoadIntf2DegiStateCtrl_metaObject();
    statDispField->_refCounted = false;
    meta_setupFields(meta, beNDMWLoadIntf2DataSelIntf_fieldNames, beNDMWLoadIntf2DataSelIntf_fieldStorage, beNDMWLoadIntf2DataSelIntf_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
