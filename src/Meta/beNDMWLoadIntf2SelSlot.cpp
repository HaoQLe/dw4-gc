// beNDMWLoadIntf2SelSlot: Alchemy class registration (0x8033CB0C..0x8033CECC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWLoadIntf2SelSlot)
META_DECLARE(beBaseInfoData)
META_DECLARE(beMessenger)
META_DECLARE(beNDMWLoadCtrl2CommonIntf)
META_DECLARE(beNDMWLoadIntf2ComMdlCtrl)
META_DECLARE(beNDMWLoadIntf2TextOrder)
META_DECLARE(bePadManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWLoadIntf2SelSlot_dependencies[24];
extern char beNDMWLoadIntf2SelSlot_fieldNames[88];
extern char beNDMWLoadIntf2SelSlot_fieldOffsets[88];
extern char beNDMWLoadIntf2SelSlot_fieldStorage[88];
extern char beNDMWLoadIntf2SelSlot_fieldTypes[88];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_804549A0[8];
extern char lbl_804DBC50[];
extern char lbl_80536344[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWLoadIntf2SelSlotInstance : Instance_804DBC50 {
    char unknown0C[84];
    inline ~beNDMWLoadIntf2SelSlotInstance() { __vtable = beNDMWLoadIntf2SelSlot_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWLoadIntf2SelSlot)

META_GET_META(beNDMWLoadIntf2SelSlot)

void *beNDMWLoadIntf2SelSlot_vtableRead()
{
    beNDMWLoadIntf2SelSlotInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWLoadIntf2SelSlot_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLoadIntf2SelSlot)

void beNDMWLoadIntf2SelSlot_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadIntf2SelSlot_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWLoadIntf2SelSlot_getMetaCall,
                       beNDMWLoadIntf2SelSlot_className, 0x5C,
                       beNDMWLoadIntf2SelSlot_vtableRead, beNDMWLoadIntf2SelSlot_fieldInit, 0, beNDMWLoadIntf2SelSlot_dependencies);
}

META_GET_META_CALL(beNDMWLoadIntf2SelSlot)

#pragma push
#pragma optimize_for_size off
void beNDMWLoadIntf2SelSlot_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadIntf2SelSlot_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadIntf2SelSlot_fieldTypes, 22);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_804549A0);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80536344);
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
    Meta::igObjectRefMetaField *textOrderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    textOrderField->_metaObject = beNDMWLoadIntf2TextOrder_metaObject();
    textOrderField->_refCounted = false;
    Meta::igObjectRefMetaField *commonIntfField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    commonIntfField->_metaObject = beNDMWLoadCtrl2CommonIntf_metaObject();
    commonIntfField->_refCounted = false;
    meta_setupFields(meta, beNDMWLoadIntf2SelSlot_fieldNames, beNDMWLoadIntf2SelSlot_fieldStorage, beNDMWLoadIntf2SelSlot_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
