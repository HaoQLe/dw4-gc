// beLua: Alchemy class registration (0x802D2444..0x802D2868). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beLua)
META_DECLARE(beBaseInfoList)
META_DECLARE(beLuaState)
META_DECLARE(beSystem)
META_DECLARE(igInfoManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beLua_dependencies[20];
extern char beLua_fieldNames[];
extern char beLua_fieldOffsets[];
extern char beLua_fieldStorage[];
extern char beLua_fieldTypes[];
void *fn_8026960C();
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

struct beLuaInstance : Instance_804CBA60 {
    char unknown0C[8];
    igObjectRefMember _infoList;
    igObjectRefMember _luaState;
    igObjectRefMember _luaGlue;
    char unknown20[8];
    inline ~beLuaInstance() { __vtable = beLua_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beLua)

META_METAOBJECT(beLua)

META_GET_META(beLua)

void *beLua_vtableRead()
{
    beLuaInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = beLua_vtable;
    object._infoList._value = 0;
    object._luaState._value = 0;
    object._luaGlue._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beLua)

void beLua_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beLua_meta, igInfoManager_register,
                       fn_80284550, beLua_getMetaCall,
                       beLua_className, 0x20,
                       beLua_vtableRead, beLua_fieldInit, 0, beLua_dependencies);
}

META_GET_META_CALL(beLua)

void beLua_fieldInit()
{
    Meta::igMetaObject *meta = beLua_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beLua_fieldTypes, 4);
    Meta::igObjectRefMetaField *systemField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    systemField->_metaObject = beSystem_metaObject();
    systemField->_refCounted = false;
    Meta::igObjectRefMetaField *infoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    infoListField->_metaObject = beBaseInfoList_metaObject();
    infoListField->_construct = true;
    Meta::igObjectRefMetaField *luaStateField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    luaStateField->_metaObject = beLuaState_metaObject();
    Meta::igObjectRefMetaField *luaGlueField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_value9 = fn_8026960C();
    luaGlueField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value9);
    luaGlueField->_construct = true;
    meta_setupFields(meta, beLua_fieldNames, beLua_fieldStorage, beLua_fieldOffsets, base);
}

}
#pragma pop
