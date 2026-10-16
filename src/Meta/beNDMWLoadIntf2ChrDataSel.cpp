// beNDMWLoadIntf2ChrDataSel: Alchemy class registration (0x8033C7AC..0x8033CB0C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWLoadIntf2ChrDataSel)
META_DECLARE(beBaseInfoData)
META_DECLARE(beMessenger)
META_DECLARE(beNDMWLoadCtrl2CommonIntf)
META_DECLARE(beNDMWLoadIntf2ComMdlCtrl)
META_DECLARE(bePadManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWLoadIntf2ChrDataSel_dependencies[20];
extern char beNDMWLoadIntf2ChrDataSel_fieldNames[64];
extern char beNDMWLoadIntf2ChrDataSel_fieldOffsets[64];
extern char beNDMWLoadIntf2ChrDataSel_fieldStorage[64];
extern char beNDMWLoadIntf2ChrDataSel_fieldTypes[64];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_80454954[11];
extern char lbl_804DBC50[];
extern char lbl_805362FC[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWLoadIntf2ChrDataSelInstance : Instance_804DBC50 {
    char unknown0C[68];
    inline ~beNDMWLoadIntf2ChrDataSelInstance() { __vtable = beNDMWLoadIntf2ChrDataSel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNDMWLoadIntf2ChrDataSel)

void *beNDMWLoadIntf2ChrDataSel_vtableRead()
{
    beNDMWLoadIntf2ChrDataSelInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWLoadIntf2ChrDataSel_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLoadIntf2ChrDataSel)

void beNDMWLoadIntf2ChrDataSel_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadIntf2ChrDataSel_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWLoadIntf2ChrDataSel_getMetaCall,
                       beNDMWLoadIntf2ChrDataSel_className, 0x4C,
                       beNDMWLoadIntf2ChrDataSel_vtableRead, beNDMWLoadIntf2ChrDataSel_fieldInit, 0, beNDMWLoadIntf2ChrDataSel_dependencies);
}

META_GET_META_CALL(beNDMWLoadIntf2ChrDataSel)

#pragma push
#pragma optimize_for_size off
void beNDMWLoadIntf2ChrDataSel_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadIntf2ChrDataSel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadIntf2ChrDataSel_fieldTypes, 16);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_80454954);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_805362FC);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    messengerField->_metaObject = beMessenger_metaObject();
    messengerField->_refCounted = false;
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    padManagerField->_metaObject = bePadManager_metaObject();
    padManagerField->_refCounted = false;
    Meta::igObjectRefMetaField *comMdlCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    comMdlCtrlField->_metaObject = beNDMWLoadIntf2ComMdlCtrl_metaObject();
    comMdlCtrlField->_refCounted = false;
    Meta::igObjectRefMetaField *commonIntfField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    commonIntfField->_metaObject = beNDMWLoadCtrl2CommonIntf_metaObject();
    commonIntfField->_refCounted = false;
    meta_setupFields(meta, beNDMWLoadIntf2ChrDataSel_fieldNames, beNDMWLoadIntf2ChrDataSel_fieldStorage, beNDMWLoadIntf2ChrDataSel_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
