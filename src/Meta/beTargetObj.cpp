// beTargetObj: Alchemy class registration (0x802B6FC0..0x802B73CC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beTargetObj)
META_DECLARE(igInfoManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beTargetObj_dependencies[12];
extern char beTargetObj_fieldNames[];
extern char beTargetObj_fieldOffsets[];
extern char beTargetObj_fieldStorage[];
extern char beTargetObj_fieldTypes[];
void *fn_800365B4();
void *fn_80122100();
void *fn_80284550();
void fn_802B1AC8();
extern char lbl_804CBA60[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804CBA60 : igNamedObjectInstance {
    inline ~Instance_804CBA60() { __vtable = lbl_804CBA60; }
};

struct beTargetObjInstance : Instance_804CBA60 {
    char unknown0C[4];
    igObjectRefMember _playerPosList;
    igObjectRefMember _playerRamNoList;
    igObjectRefMember _enemyPosList;
    char unknown1C[12];
    inline ~beTargetObjInstance() { __vtable = beTargetObj_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beTargetObj)

META_METAOBJECT(beTargetObj)

META_GET_META(beTargetObj)

void *beTargetObj_vtableRead()
{
    beTargetObjInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = beTargetObj_vtable;
    object._playerPosList._value = 0;
    object._playerRamNoList._value = 0;
    object._enemyPosList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beTargetObj)

void beTargetObj_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beTargetObj_meta, igInfoManager_register,
                       fn_80284550, beTargetObj_getMetaCall,
                       beTargetObj_className, 0x1C,
                       beTargetObj_vtableRead, beTargetObj_fieldInit, 0, beTargetObj_dependencies);
}

META_GET_META_CALL(beTargetObj)

void beTargetObj_fieldInit()
{
    Meta::igMetaObject *meta = beTargetObj_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beTargetObj_fieldTypes, 3);
    Meta::igObjectRefMetaField *playerPosListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80122100();
    playerPosListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    playerPosListField->_construct = true;
    Meta::igObjectRefMetaField *playerRamNoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_800365B4();
    playerRamNoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    playerRamNoListField->_construct = true;
    Meta::igObjectRefMetaField *enemyPosListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value7 = fn_80122100();
    enemyPosListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value7);
    enemyPosListField->_construct = true;
    meta_setupFields(meta, beTargetObj_fieldNames, beTargetObj_fieldStorage, beTargetObj_fieldOffsets, base);
}

}
#pragma pop
