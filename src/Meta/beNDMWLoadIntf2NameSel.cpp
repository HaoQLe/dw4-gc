// beNDMWLoadIntf2NameSel: Alchemy class registration (0x8033C3F8..0x8033C7AC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWLoadIntf2NameSel)
META_DECLARE(beBaseInfoData)
META_DECLARE(beMessenger)
META_DECLARE(beNDMWLoadIntf2ComMdlCtrl)
META_DECLARE(beNDMWLoadIntf2TextOrder)
META_DECLARE(bePadManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWLoadIntf2NameSel_dependencies[20];
extern char beNDMWLoadIntf2NameSel_fieldNames[100];
extern char beNDMWLoadIntf2NameSel_fieldOffsets[100];
extern char beNDMWLoadIntf2NameSel_fieldStorage[100];
extern char beNDMWLoadIntf2NameSel_fieldTypes[100];
void fn_80053650(void *, int);
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_80454904[8];
extern char lbl_804DBC50[];
extern char lbl_80536290[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWLoadIntf2NameSelInstance : Instance_804DBC50 {
    char unknown0C[276];
    inline ~beNDMWLoadIntf2NameSelInstance() { __vtable = beNDMWLoadIntf2NameSel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWLoadIntf2NameSel)

META_GET_META(beNDMWLoadIntf2NameSel)

void *beNDMWLoadIntf2NameSel_vtableRead()
{
    beNDMWLoadIntf2NameSelInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWLoadIntf2NameSel_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLoadIntf2NameSel)

void beNDMWLoadIntf2NameSel_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadIntf2NameSel_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWLoadIntf2NameSel_getMetaCall,
                       beNDMWLoadIntf2NameSel_className, 0x120,
                       beNDMWLoadIntf2NameSel_vtableRead, beNDMWLoadIntf2NameSel_fieldInit, 0, beNDMWLoadIntf2NameSel_dependencies);
}

META_GET_META_CALL(beNDMWLoadIntf2NameSel)

#pragma push
#pragma optimize_for_size off
void beNDMWLoadIntf2NameSel_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadIntf2NameSel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadIntf2NameSel_fieldTypes, 25);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_80454904);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80536290);
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
    Meta::igIntMetaField *nameCurPosField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 14));
    fn_80053650(nameCurPosField, -1);
    meta_setupFields(meta, beNDMWLoadIntf2NameSel_fieldNames, beNDMWLoadIntf2NameSel_fieldStorage, beNDMWLoadIntf2NameSel_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
