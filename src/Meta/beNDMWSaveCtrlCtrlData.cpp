// beNDMWSaveCtrlCtrlData: Alchemy class registration (0x80335F64..0x8033627C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWSaveCtrlCtrlData)
META_DECLARE(beBaseInfoData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWSaveCtrlCtrlData_fieldNames[28];
extern char beNDMWSaveCtrlCtrlData_fieldOffsets[28];
extern char beNDMWSaveCtrlCtrlData_fieldStorage[28];
extern char beNDMWSaveCtrlCtrlData_fieldTypes[28];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_80453420[5];
extern char lbl_804DBC50[];
extern char lbl_8053606C[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWSaveCtrlCtrlDataInstance : Instance_804DBC50 {
    char unknown0C[36];
    inline ~beNDMWSaveCtrlCtrlDataInstance() { __vtable = beNDMWSaveCtrlCtrlData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWSaveCtrlCtrlData)

META_GET_META(beNDMWSaveCtrlCtrlData)

void *beNDMWSaveCtrlCtrlData_vtableRead()
{
    beNDMWSaveCtrlCtrlDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWSaveCtrlCtrlData_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWSaveCtrlCtrlData)

void beNDMWSaveCtrlCtrlData_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWSaveCtrlCtrlData_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWSaveCtrlCtrlData_getMetaCall,
                       beNDMWSaveCtrlCtrlData_className, 0x2C,
                       beNDMWSaveCtrlCtrlData_vtableRead, beNDMWSaveCtrlCtrlData_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWSaveCtrlCtrlData)

#pragma push
#pragma optimize_for_size off
void beNDMWSaveCtrlCtrlData_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWSaveCtrlCtrlData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWSaveCtrlCtrlData_fieldTypes, 7);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_80453420);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_8053606C);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    meta_setupFields(meta, beNDMWSaveCtrlCtrlData_fieldNames, beNDMWSaveCtrlCtrlData_fieldStorage, beNDMWSaveCtrlCtrlData_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
