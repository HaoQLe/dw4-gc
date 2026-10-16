// beNDMWLoadIntf2MakeChr: Alchemy class registration (0x8033DEC0..0x8033E1EC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWLoadIntf2MakeChr)
META_DECLARE(beBaseInfoData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWLoadIntf2MakeChr_fieldNames[16];
extern char beNDMWLoadIntf2MakeChr_fieldOffsets[16];
extern char beNDMWLoadIntf2MakeChr_fieldStorage[16];
extern char beNDMWLoadIntf2MakeChr_fieldTypes[16];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_80454BA0[8];
extern char lbl_804DBC50[];
extern char lbl_805364A4[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWLoadIntf2MakeChrInstance : Instance_804DBC50 {
    char unknown0C[52];
    inline ~beNDMWLoadIntf2MakeChrInstance() { __vtable = beNDMWLoadIntf2MakeChr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beNDMWLoadIntf2MakeChr)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWLoadIntf2MakeChr)
#pragma pop

void *beNDMWLoadIntf2MakeChr_vtableRead()
{
    beNDMWLoadIntf2MakeChrInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWLoadIntf2MakeChr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLoadIntf2MakeChr)

void beNDMWLoadIntf2MakeChr_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadIntf2MakeChr_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWLoadIntf2MakeChr_getMetaCall,
                       beNDMWLoadIntf2MakeChr_className, 0x3C,
                       beNDMWLoadIntf2MakeChr_vtableRead, beNDMWLoadIntf2MakeChr_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWLoadIntf2MakeChr)

#pragma push
#pragma optimize_for_size off
void beNDMWLoadIntf2MakeChr_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadIntf2MakeChr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadIntf2MakeChr_fieldTypes, 4);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_80454BA0);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_805364A4);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igIntMetaField *chaSelDegiField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    *reinterpret_cast<int *>(reinterpret_cast<char *>(chaSelDegiField) + 0x34) = 32;
    meta_setupFields(meta, beNDMWLoadIntf2MakeChr_fieldNames, beNDMWLoadIntf2MakeChr_fieldStorage, beNDMWLoadIntf2MakeChr_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
