// beModelCtrlInfoDataHit: Alchemy class registration (0x802C97FC..0x802C9B44). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beModelCtrlInfoDataHit)
META_DECLARE(beBaseInfoData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beModelCtrlInfoDataHit_dependencies[8];
extern char beModelCtrlInfoDataHit_fieldNames[16];
extern char beModelCtrlInfoDataHit_fieldOffsets[16];
extern char beModelCtrlInfoDataHit_fieldStorage[16];
extern char beModelCtrlInfoDataHit_fieldTypes[16];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_801225BC();
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041D93C[6];
extern char lbl_8041F08C[4];
extern char lbl_804DBC50[];
extern char lbl_80534E24[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beModelCtrlInfoDataHitInstance : Instance_804DBC50 {
    char unknown0C[8];
    igObjectRefMember _hitBulletAABoxList;
    char unknown18[8];
    inline ~beModelCtrlInfoDataHitInstance() { __vtable = beModelCtrlInfoDataHit_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlInfoDataHit)

void *beModelCtrlInfoDataHit_vtableRead()
{
    beModelCtrlInfoDataHitInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beModelCtrlInfoDataHit_vtable;
    object._hitBulletAABoxList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlInfoDataHit)

void beModelCtrlInfoDataHit_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlInfoDataHit_meta, beBaseInfoData_register,
                       fn_802B8770, beModelCtrlInfoDataHit_getMetaCall,
                       beModelCtrlInfoDataHit_className, 0x1C,
                       beModelCtrlInfoDataHit_vtableRead, beModelCtrlInfoDataHit_fieldInit, 0, beModelCtrlInfoDataHit_dependencies);
}

META_GET_META_CALL(beModelCtrlInfoDataHit)

#pragma push
#pragma optimize_for_size off
void beModelCtrlInfoDataHit_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlInfoDataHit_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlInfoDataHit_fieldTypes, 4);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_8041D93C));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_8041F08C);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80534E24);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igObjectRefMetaField *hitBulletAABoxListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v4 = fn_801225BC();
    hitBulletAABoxListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    meta_setupFields(meta, beModelCtrlInfoDataHit_fieldNames, beModelCtrlInfoDataHit_fieldStorage, beModelCtrlInfoDataHit_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
