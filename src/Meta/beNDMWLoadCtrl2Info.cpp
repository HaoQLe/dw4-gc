// beNDMWLoadCtrl2Info: Alchemy class registration (0x8033E920..0x8033EC68). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWLoadCtrl2Info)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWLoadCtrl2Info_dependencies[8];
extern char beNDMWLoadCtrl2Info_fieldNames[];
extern char beNDMWLoadCtrl2Info_fieldOffsets[];
extern char beNDMWLoadCtrl2Info_fieldStorage[];
extern char beNDMWLoadCtrl2Info_fieldTypes[];
void *fn_80028F84();
void *fn_802B2E3C();
void fn_803250AC();
extern char lbl_804DCD14[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct Instance_804DCD14 : igInfoInstance {
    char unknown0C[8];
    igObjectRefMember _dataList;
    igObjectRefMember _ramList;
    inline ~Instance_804DCD14() { __vtable = lbl_804DCD14; }
};

struct beNDMWLoadCtrl2InfoInstance : Instance_804DCD14 {
    igObjectRefMember _nameSelList;
    char unknown20[8];
    inline ~beNDMWLoadCtrl2InfoInstance() { __vtable = beNDMWLoadCtrl2Info_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNDMWLoadCtrl2Info)

void *beNDMWLoadCtrl2Info_vtableRead()
{
    beNDMWLoadCtrl2InfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beNDMWLoadCtrl2Info_vtable;
    object._nameSelList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLoadCtrl2Info)

void beNDMWLoadCtrl2Info_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadCtrl2Info_meta, beBaseInfo_register,
                       fn_802B2E3C, beNDMWLoadCtrl2Info_getMetaCall,
                       beNDMWLoadCtrl2Info_className, 0x20,
                       beNDMWLoadCtrl2Info_vtableRead, beNDMWLoadCtrl2Info_fieldInit, 0, beNDMWLoadCtrl2Info_dependencies);
}

META_GET_META_CALL(beNDMWLoadCtrl2Info)

void beNDMWLoadCtrl2Info_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadCtrl2Info_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadCtrl2Info_fieldTypes, 1);
    Meta::igObjectRefMetaField *nameSelListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80028F84();
    nameSelListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, beNDMWLoadCtrl2Info_fieldNames, beNDMWLoadCtrl2Info_fieldStorage, beNDMWLoadCtrl2Info_fieldOffsets, base);
}

}
#pragma pop
