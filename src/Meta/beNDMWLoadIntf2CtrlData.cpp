// beNDMWLoadIntf2CtrlData: Alchemy class registration (0x8033E1EC..0x8033E504). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWLoadIntf2CtrlData)
META_DECLARE(beBaseInfoData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWLoadIntf2CtrlData_fieldNames[64];
extern char beNDMWLoadIntf2CtrlData_fieldOffsets[64];
extern char beNDMWLoadIntf2CtrlData_fieldStorage[64];
extern char beNDMWLoadIntf2CtrlData_fieldTypes[64];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_80453420[5];
extern char lbl_804DBC50[];
extern char lbl_805364BC[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWLoadIntf2CtrlDataInstance : Instance_804DBC50 {
    char unknown0C[52];
    inline ~beNDMWLoadIntf2CtrlDataInstance() { __vtable = beNDMWLoadIntf2CtrlData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWLoadIntf2CtrlData)

META_GET_META(beNDMWLoadIntf2CtrlData)

void *beNDMWLoadIntf2CtrlData_vtableRead()
{
    beNDMWLoadIntf2CtrlDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWLoadIntf2CtrlData_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLoadIntf2CtrlData)

void beNDMWLoadIntf2CtrlData_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadIntf2CtrlData_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWLoadIntf2CtrlData_getMetaCall,
                       beNDMWLoadIntf2CtrlData_className, 0x34,
                       beNDMWLoadIntf2CtrlData_vtableRead, beNDMWLoadIntf2CtrlData_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWLoadIntf2CtrlData)

#pragma push
#pragma optimize_for_size off
void beNDMWLoadIntf2CtrlData_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadIntf2CtrlData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadIntf2CtrlData_fieldTypes, 16);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_80453420);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_805364BC);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    meta_setupFields(meta, beNDMWLoadIntf2CtrlData_fieldNames, beNDMWLoadIntf2CtrlData_fieldStorage, beNDMWLoadIntf2CtrlData_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
