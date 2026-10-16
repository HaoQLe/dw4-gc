// beNDMWLogoCtrlData: Alchemy class registration (0x8033BA2C..0x8033BD44). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWLogoCtrlData)
META_DECLARE(beBaseInfoData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWLogoCtrlData_fieldNames[16];
extern char beNDMWLogoCtrlData_fieldOffsets[16];
extern char beNDMWLogoCtrlData_fieldStorage[16];
extern char beNDMWLogoCtrlData_fieldTypes[16];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_80453420[5];
extern char lbl_804DBC50[];
extern char lbl_80536240[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWLogoCtrlDataInstance : Instance_804DBC50 {
    char unknown0C[20];
    inline ~beNDMWLogoCtrlDataInstance() { __vtable = beNDMWLogoCtrlData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWLogoCtrlData)

META_GET_META(beNDMWLogoCtrlData)

void *beNDMWLogoCtrlData_vtableRead()
{
    beNDMWLogoCtrlDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWLogoCtrlData_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLogoCtrlData)

void beNDMWLogoCtrlData_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLogoCtrlData_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWLogoCtrlData_getMetaCall,
                       beNDMWLogoCtrlData_className, 0x20,
                       beNDMWLogoCtrlData_vtableRead, beNDMWLogoCtrlData_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWLogoCtrlData)

#pragma push
#pragma optimize_for_size off
void beNDMWLogoCtrlData_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLogoCtrlData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLogoCtrlData_fieldTypes, 4);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_80453420);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80536240);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    meta_setupFields(meta, beNDMWLogoCtrlData_fieldNames, beNDMWLogoCtrlData_fieldStorage, beNDMWLogoCtrlData_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
