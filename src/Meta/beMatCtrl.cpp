// beMatCtrl: Alchemy class registration (0x802D1184..0x802D15AC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beMatCtrl)
META_DECLARE(beBaseInfoManager)
META_DECLARE(beLua)
META_DECLARE(igNamedObject)

extern "C" {
extern char beMatCtrl_dependencies[12];
extern char beMatCtrl_fieldNames[];
extern char beMatCtrl_fieldOffsets[];
extern char beMatCtrl_fieldStorage[];
extern char beMatCtrl_fieldTypes[];
void *fn_800365B4();
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804CBA60 : igNamedObjectInstance {
    inline ~Instance_804CBA60() { __vtable = lbl_804CBA60; }
};

struct Instance_804DD724 : Instance_804CBA60 {
    char unknown0C[12];
    igObjectRefMember _infoList;
    inline ~Instance_804DD724() { __vtable = lbl_804DD724; }
};

struct beMatCtrlInstance : Instance_804DD724 {
    char unknown1C[28];
    igObjectRefMember _wkMatOnList;
    igObjectRefMember _wkMatOldOnList;
    char unknown40[8];
    inline ~beMatCtrlInstance() { __vtable = beMatCtrl_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beMatCtrl)

META_METAOBJECT(beMatCtrl)

META_GET_META(beMatCtrl)

void *beMatCtrl_vtableRead()
{
    beMatCtrlInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beMatCtrl_vtable;
    object._wkMatOnList._value = 0;
    object._wkMatOldOnList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beMatCtrl)

void beMatCtrl_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMatCtrl_meta, beBaseInfoManager_register,
                       fn_802B381C, beMatCtrl_getMetaCall,
                       beMatCtrl_className, 0x44,
                       beMatCtrl_vtableRead, beMatCtrl_fieldInit, 0, beMatCtrl_dependencies);
}

META_GET_META_CALL(beMatCtrl)

void beMatCtrl_fieldInit()
{
    Meta::igMetaObject *meta = beMatCtrl_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beMatCtrl_fieldTypes, 9);
    Meta::igIntMetaField *wkChgFlagNOField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 4));
    *reinterpret_cast<void **>(reinterpret_cast<char *>(wkChgFlagNOField) + 0x34) = (void *)4;
    Meta::igBoolMetaField *wkChgFlagField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 5));
    void *value_value4 = fn_800365B4();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(wkChgFlagField) + 0x38) = value_value4;
    Meta::igObjectRefMetaField *wkMatOnListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    void *value_value6 = fn_800365B4();
    wkMatOnListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value6);
    Meta::igBoolMetaField *isLuaCallDispField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 8));
    Meta::igMetaObject *beLuaMeta = beLua_metaObject();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(isLuaCallDispField) + 0x38) = beLuaMeta;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(isLuaCallDispField) + 0x3C) = 0;
    meta_setupFields(meta, beMatCtrl_fieldNames, beMatCtrl_fieldStorage, beMatCtrl_fieldOffsets, base);
}

}
#pragma pop
