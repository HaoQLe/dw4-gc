// beDBManagerInfo: Alchemy class registration (0x802DE040..0x802DE390). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beDBManagerInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(beDataBase)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beDBManagerInfo_dependencies[8];
extern char beDBManagerInfo_fieldNames[];
extern char beDBManagerInfo_fieldOffsets[];
extern char beDBManagerInfo_fieldStorage[];
extern char beDBManagerInfo_fieldTypes[];
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

struct beDBManagerInfoInstance : Instance_804DCD14 {
    igObjectRefMember _dataBase;
    char unknown20[8];
    inline ~beDBManagerInfoInstance() { __vtable = beDBManagerInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beDBManagerInfo)

void *beDBManagerInfo_vtableRead()
{
    beDBManagerInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beDBManagerInfo_vtable;
    object._dataBase._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beDBManagerInfo)

void beDBManagerInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDBManagerInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beDBManagerInfo_getMetaCall,
                       beDBManagerInfo_className, 0x20,
                       beDBManagerInfo_vtableRead, beDBManagerInfo_fieldInit, 0, beDBManagerInfo_dependencies);
}

META_GET_META_CALL(beDBManagerInfo)

void beDBManagerInfo_fieldInit()
{
    Meta::igMetaObject *meta = beDBManagerInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beDBManagerInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *dataBaseField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    dataBaseField->_metaObject = beDataBase_metaObject();
    dataBaseField->_construct = true;
    meta_setupFields(meta, beDBManagerInfo_fieldNames, beDBManagerInfo_fieldStorage, beDBManagerInfo_fieldOffsets, base);
}

}
#pragma pop
