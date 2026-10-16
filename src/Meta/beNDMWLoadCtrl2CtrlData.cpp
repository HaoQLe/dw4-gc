// beNDMWLoadCtrl2CtrlData: Alchemy class registration (0x80341CF8..0x80342024). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWLoadCtrl2CtrlData)
META_DECLARE(beBaseInfoData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWLoadCtrl2CtrlData_fieldNames[20];
extern char beNDMWLoadCtrl2CtrlData_fieldOffsets[20];
extern char beNDMWLoadCtrl2CtrlData_fieldStorage[20];
extern char beNDMWLoadCtrl2CtrlData_fieldTypes[20];
void fn_8003EC68(void *, int);
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_80453420[5];
extern char lbl_804DBC50[];
extern char lbl_805366FC[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWLoadCtrl2CtrlDataInstance : Instance_804DBC50 {
    char unknown0C[36];
    inline ~beNDMWLoadCtrl2CtrlDataInstance() { __vtable = beNDMWLoadCtrl2CtrlData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWLoadCtrl2CtrlData)

META_GET_META(beNDMWLoadCtrl2CtrlData)

void *beNDMWLoadCtrl2CtrlData_vtableRead()
{
    beNDMWLoadCtrl2CtrlDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWLoadCtrl2CtrlData_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLoadCtrl2CtrlData)

void beNDMWLoadCtrl2CtrlData_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadCtrl2CtrlData_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWLoadCtrl2CtrlData_getMetaCall,
                       beNDMWLoadCtrl2CtrlData_className, 0x24,
                       beNDMWLoadCtrl2CtrlData_vtableRead, beNDMWLoadCtrl2CtrlData_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWLoadCtrl2CtrlData)

#pragma push
#pragma optimize_for_size off
void beNDMWLoadCtrl2CtrlData_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadCtrl2CtrlData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadCtrl2CtrlData_fieldTypes, 5);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_80453420);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_805366FC);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igBoolMetaField *isTitleField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base));
    fn_8003EC68(isTitleField, 1);
    meta_setupFields(meta, beNDMWLoadCtrl2CtrlData_fieldNames, beNDMWLoadCtrl2CtrlData_fieldStorage, beNDMWLoadCtrl2CtrlData_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
