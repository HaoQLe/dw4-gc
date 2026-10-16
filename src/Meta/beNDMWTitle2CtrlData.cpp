// beNDMWTitle2CtrlData: Alchemy class registration (0x80326468..0x80326780). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWTitle2CtrlData)
META_DECLARE(beBaseInfoData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWTitle2CtrlData_fieldNames[32];
extern char beNDMWTitle2CtrlData_fieldOffsets[32];
extern char beNDMWTitle2CtrlData_fieldStorage[32];
extern char beNDMWTitle2CtrlData_fieldTypes[32];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_80453420[5];
extern char lbl_804DBC50[];
extern char lbl_80535D04[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWTitle2CtrlDataInstance : Instance_804DBC50 {
    char unknown0C[36];
    inline ~beNDMWTitle2CtrlDataInstance() { __vtable = beNDMWTitle2CtrlData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWTitle2CtrlData)

META_GET_META(beNDMWTitle2CtrlData)

void *beNDMWTitle2CtrlData_vtableRead()
{
    beNDMWTitle2CtrlDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWTitle2CtrlData_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWTitle2CtrlData)

void beNDMWTitle2CtrlData_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWTitle2CtrlData_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWTitle2CtrlData_getMetaCall,
                       beNDMWTitle2CtrlData_className, 0x30,
                       beNDMWTitle2CtrlData_vtableRead, beNDMWTitle2CtrlData_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWTitle2CtrlData)

#pragma push
#pragma optimize_for_size off
void beNDMWTitle2CtrlData_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWTitle2CtrlData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWTitle2CtrlData_fieldTypes, 8);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_80453420);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80535D04);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    meta_setupFields(meta, beNDMWTitle2CtrlData_fieldNames, beNDMWTitle2CtrlData_fieldStorage, beNDMWTitle2CtrlData_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
