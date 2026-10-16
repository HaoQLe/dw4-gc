// beNDMWTitle2Option: Alchemy class registration (0x80326128..0x80326468). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWTitle2Option)
META_DECLARE(beBaseInfoData)
META_DECLARE(beMessenger)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWTitle2Option_dependencies[8];
extern char beNDMWTitle2Option_fieldNames[40];
extern char beNDMWTitle2Option_fieldOffsets[40];
extern char beNDMWTitle2Option_fieldStorage[40];
extern char beNDMWTitle2Option_fieldTypes[40];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_804533D4[7];
extern char lbl_804DBC50[];
extern char lbl_80535CD4[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWTitle2OptionInstance : Instance_804DBC50 {
    char unknown0C[52];
    inline ~beNDMWTitle2OptionInstance() { __vtable = beNDMWTitle2Option_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWTitle2Option)

META_GET_META(beNDMWTitle2Option)

void *beNDMWTitle2Option_vtableRead()
{
    beNDMWTitle2OptionInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWTitle2Option_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWTitle2Option)

void beNDMWTitle2Option_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWTitle2Option_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWTitle2Option_getMetaCall,
                       beNDMWTitle2Option_className, 0x38,
                       beNDMWTitle2Option_vtableRead, beNDMWTitle2Option_fieldInit, 0, beNDMWTitle2Option_dependencies);
}

META_GET_META_CALL(beNDMWTitle2Option)

#pragma push
#pragma optimize_for_size off
void beNDMWTitle2Option_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWTitle2Option_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWTitle2Option_fieldTypes, 10);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_804533D4);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80535CD4);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    messengerField->_metaObject = beMessenger_metaObject();
    messengerField->_refCounted = false;
    meta_setupFields(meta, beNDMWTitle2Option_fieldNames, beNDMWTitle2Option_fieldStorage, beNDMWTitle2Option_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
