// beSwitchCtrlInfo: Alchemy class registration (0x802B79CC..0x802B7D14). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beSwitchCtrlInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beSwitchCtrlInfo_dependencies[8];
extern char beSwitchCtrlInfo_fieldNames[];
extern char beSwitchCtrlInfo_fieldOffsets[];
extern char beSwitchCtrlInfo_fieldStorage[];
extern char beSwitchCtrlInfo_fieldTypes[];
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

struct beSwitchCtrlInfoInstance : Instance_804DCD14 {
    igObjectRefMember _switchNode;
    char unknown20[8];
    inline ~beSwitchCtrlInfoInstance() { __vtable = beSwitchCtrlInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beSwitchCtrlInfo)

void *beSwitchCtrlInfo_vtableRead()
{
    beSwitchCtrlInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beSwitchCtrlInfo_vtable;
    object._switchNode._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beSwitchCtrlInfo)

void beSwitchCtrlInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSwitchCtrlInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beSwitchCtrlInfo_getMetaCall,
                       beSwitchCtrlInfo_className, 0x20,
                       beSwitchCtrlInfo_vtableRead, beSwitchCtrlInfo_fieldInit, 0, beSwitchCtrlInfo_dependencies);
}

META_GET_META_CALL(beSwitchCtrlInfo)

void beSwitchCtrlInfo_fieldInit()
{
    Meta::igMetaObject *meta = beSwitchCtrlInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSwitchCtrlInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *switchNodeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801ADB98();
    switchNodeField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, beSwitchCtrlInfo_fieldNames, beSwitchCtrlInfo_fieldStorage, beSwitchCtrlInfo_fieldOffsets, base);
}

}
#pragma pop
