// beModelCtrlInfo: Alchemy class registration (0x802C89C8..0x802C8CFC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beModelCtrlInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beModelCtrlInfo_fieldNames[];
extern char beModelCtrlInfo_fieldOffsets[];
extern char beModelCtrlInfo_fieldStorage[];
extern char beModelCtrlInfo_fieldTypes[];
void fn_80071694(void *,int);
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

struct beModelCtrlInfoInstance : Instance_804DCD14 {
    igStringMember _kindString;
    char unknown20[8];
    inline ~beModelCtrlInfoInstance() { __vtable = beModelCtrlInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlInfo)

#pragma push
#pragma optimize_for_size off
void *beModelCtrlInfo_vtableRead()
{
    beModelCtrlInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beModelCtrlInfo_vtable;
    object._kindString._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beModelCtrlInfo)

void beModelCtrlInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beModelCtrlInfo_getMetaCall,
                       beModelCtrlInfo_className, 0x20,
                       beModelCtrlInfo_vtableRead, beModelCtrlInfo_fieldInit, 0, 0);
}

META_GET_META_CALL(beModelCtrlInfo)

void beModelCtrlInfo_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlInfo_fieldTypes, 1);
    Meta::igStringMetaField *kindStringField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base));
    fn_80071694(kindStringField, 0);
    meta_setupFields(meta, beModelCtrlInfo_fieldNames, beModelCtrlInfo_fieldStorage, beModelCtrlInfo_fieldOffsets, base);
}

}
#pragma pop
