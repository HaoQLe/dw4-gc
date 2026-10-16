// beNDMWSaveIntfCtrlData: Alchemy class registration (0x803355E0..0x803358F8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWSaveIntfCtrlData)
META_DECLARE(beBaseInfoData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWSaveIntfCtrlData_fieldNames[60];
extern char beNDMWSaveIntfCtrlData_fieldOffsets[60];
extern char beNDMWSaveIntfCtrlData_fieldStorage[60];
extern char beNDMWSaveIntfCtrlData_fieldTypes[60];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_80453420[5];
extern char lbl_804DBC50[];
extern char lbl_80536010[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWSaveIntfCtrlDataInstance : Instance_804DBC50 {
    char unknown0C[52];
    inline ~beNDMWSaveIntfCtrlDataInstance() { __vtable = beNDMWSaveIntfCtrlData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWSaveIntfCtrlData)

META_GET_META(beNDMWSaveIntfCtrlData)

void *beNDMWSaveIntfCtrlData_vtableRead()
{
    beNDMWSaveIntfCtrlDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWSaveIntfCtrlData_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWSaveIntfCtrlData)

void beNDMWSaveIntfCtrlData_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWSaveIntfCtrlData_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWSaveIntfCtrlData_getMetaCall,
                       beNDMWSaveIntfCtrlData_className, 0x34,
                       beNDMWSaveIntfCtrlData_vtableRead, beNDMWSaveIntfCtrlData_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWSaveIntfCtrlData)

#pragma push
#pragma optimize_for_size off
void beNDMWSaveIntfCtrlData_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWSaveIntfCtrlData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWSaveIntfCtrlData_fieldTypes, 15);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_80453420);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80536010);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    meta_setupFields(meta, beNDMWSaveIntfCtrlData_fieldNames, beNDMWSaveIntfCtrlData_fieldStorage, beNDMWSaveIntfCtrlData_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
