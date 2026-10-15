// beNDMWAfsSetup: Alchemy class registration (0x80345760..0x80345B94). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWAfsSetup)
META_DECLARE(igInfoManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWAfsSetup_dependencies[16];
extern char beNDMWAfsSetup_fieldNames[];
extern char beNDMWAfsSetup_fieldOffsets[];
extern char beNDMWAfsSetup_fieldStorage[];
extern char beNDMWAfsSetup_fieldTypes[];
void *fn_8002E824();
void *fn_80111CD4();
void *fn_80113DC0();
void *fn_80284550();
void fn_803250AC();
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

struct beNDMWAfsSetupInstance : Instance_804CBA60 {
    char unknown0C[4];
    igObjectRefMember _infoList;
    igObjectRefMember _customMenu;
    igObjectRefMember _subMenu;
    igObjectRefMember _subMenuHolder;
    char unknown20[16];
    inline ~beNDMWAfsSetupInstance() { __vtable = beNDMWAfsSetup_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWAfsSetup)

META_METAOBJECT(beNDMWAfsSetup)

META_GET_META(beNDMWAfsSetup)

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beNDMWAfsSetup_vtableRead()
{
    beNDMWAfsSetupInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = beNDMWAfsSetup_vtable;
    object._infoList._value = 0;
    object._customMenu._value = 0;
    object._subMenu._value = 0;
    object._subMenuHolder._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWAfsSetup)

void beNDMWAfsSetup_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWAfsSetup_meta, igInfoManager_register,
                       fn_80284550, beNDMWAfsSetup_getMetaCall,
                       beNDMWAfsSetup_className, 0x28,
                       beNDMWAfsSetup_vtableRead, beNDMWAfsSetup_fieldInit, 0, beNDMWAfsSetup_dependencies);
}

META_GET_META_CALL(beNDMWAfsSetup)

void beNDMWAfsSetup_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWAfsSetup_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWAfsSetup_fieldTypes, 4);
    Meta::igObjectRefMetaField *infoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8002E824();
    infoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    infoListField->_construct = true;
    Meta::igObjectRefMetaField *customMenuField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_80113DC0();
    customMenuField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    Meta::igObjectRefMetaField *subMenuField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value7 = fn_80113DC0();
    subMenuField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value7);
    Meta::igObjectRefMetaField *subMenuHolderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_value9 = fn_80111CD4();
    subMenuHolderField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value9);
    meta_setupFields(meta, beNDMWAfsSetup_fieldNames, beNDMWAfsSetup_fieldStorage, beNDMWAfsSetup_fieldOffsets, base);
}

}
#pragma pop
