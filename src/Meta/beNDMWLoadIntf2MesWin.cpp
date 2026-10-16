// beNDMWLoadIntf2MesWin: Alchemy class registration (0x80340CA4..0x80341078). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWLoadIntf2MesWin)
META_DECLARE(beBaseInfoData)
META_DECLARE(beMessenger)
META_DECLARE(beNDMWLoadIntf2TextOrder)
META_DECLARE(bePadManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWLoadIntf2MesWin_dependencies[16];
extern char beNDMWLoadIntf2MesWin_fieldNames[72];
extern char beNDMWLoadIntf2MesWin_fieldOffsets[72];
extern char beNDMWLoadIntf2MesWin_fieldStorage[72];
extern char beNDMWLoadIntf2MesWin_fieldTypes[72];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_80455030[7];
extern char lbl_804DBC50[];
extern char lbl_80536670[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWLoadIntf2MesWinInstance : Instance_804DBC50 {
    char unknown0C[52];
    inline ~beNDMWLoadIntf2MesWinInstance() { __vtable = beNDMWLoadIntf2MesWin_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beNDMWLoadIntf2MesWin)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beNDMWLoadIntf2MesWin)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWLoadIntf2MesWin)
#pragma pop

void *beNDMWLoadIntf2MesWin_vtableRead()
{
    beNDMWLoadIntf2MesWinInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWLoadIntf2MesWin_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLoadIntf2MesWin)

void beNDMWLoadIntf2MesWin_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadIntf2MesWin_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWLoadIntf2MesWin_getMetaCall,
                       beNDMWLoadIntf2MesWin_className, 0x40,
                       beNDMWLoadIntf2MesWin_vtableRead, beNDMWLoadIntf2MesWin_fieldInit, 0, beNDMWLoadIntf2MesWin_dependencies);
}

META_GET_META_CALL(beNDMWLoadIntf2MesWin)

#pragma push
#pragma optimize_for_size off
void beNDMWLoadIntf2MesWin_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadIntf2MesWin_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadIntf2MesWin_fieldTypes, 18);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_80455030);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80536670);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    messengerField->_metaObject = beMessenger_metaObject();
    messengerField->_refCounted = false;
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    padManagerField->_metaObject = bePadManager_metaObject();
    padManagerField->_refCounted = false;
    Meta::igObjectRefMetaField *textOrderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    textOrderField->_metaObject = beNDMWLoadIntf2TextOrder_metaObject();
    textOrderField->_refCounted = false;
    meta_setupFields(meta, beNDMWLoadIntf2MesWin_fieldNames, beNDMWLoadIntf2MesWin_fieldStorage, beNDMWLoadIntf2MesWin_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
