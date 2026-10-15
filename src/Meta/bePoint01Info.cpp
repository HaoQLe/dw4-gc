// bePoint01Info: Alchemy class registration (0x802C0CA0..0x802C1028). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(bePoint01Info)
META_DECLARE(beBaseInfo)
META_DECLARE(beGroupKeepList)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char bePoint01Info_dependencies[12];
extern char bePoint01Info_fieldNames[];
extern char bePoint01Info_fieldOffsets[];
extern char bePoint01Info_fieldStorage[];
extern char bePoint01Info_fieldTypes[];
void *fn_801ADB98();
void fn_802B1AC8();
void *fn_802B2E3C();
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

struct bePoint01InfoInstance : Instance_804DCD14 {
    igObjectRefMember _switch;
    igObjectRefMember unknown20;
    char unknown24[12];
    inline ~bePoint01InfoInstance() { __vtable = bePoint01Info_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(bePoint01Info)
#pragma pop

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *bePoint01Info_vtableRead()
{
    bePoint01InfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = bePoint01Info_vtable;
    object._switch._value = 0;
    object.unknown20._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(bePoint01Info)

void bePoint01Info_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &bePoint01Info_meta, beBaseInfo_register,
                       fn_802B2E3C, bePoint01Info_getMetaCall,
                       bePoint01Info_className, 0x24,
                       bePoint01Info_vtableRead, bePoint01Info_fieldInit, 0, bePoint01Info_dependencies);
}

META_GET_META_CALL(bePoint01Info)

void bePoint01Info_fieldInit()
{
    Meta::igMetaObject *meta = bePoint01Info_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, bePoint01Info_fieldTypes, 2);
    Meta::igObjectRefMetaField *switchField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801ADB98();
    switchField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *dataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    dataListField->_metaObject = beGroupKeepList_metaObject();
    dataListField->_construct = true;
    meta_setupFields(meta, bePoint01Info_fieldNames, bePoint01Info_fieldStorage, bePoint01Info_fieldOffsets, base);
}

}
#pragma pop
