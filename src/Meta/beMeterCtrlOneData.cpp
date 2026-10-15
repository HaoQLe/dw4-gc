// beMeterCtrlOneData: Alchemy class registration (0x802CD84C..0x802CDBC0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igFloatMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beMeterCtrlOneData)
META_DECLARE(beDataObjInt)
META_DECLARE(beMeterCtrlNode)
META_DECLARE(igNamedObject)

extern "C" {
extern char beMeterCtrlOneData_dependencies[12];
extern char beMeterCtrlOneData_fieldNames[];
extern char beMeterCtrlOneData_fieldOffsets[];
extern char beMeterCtrlOneData_fieldStorage[];
extern char beMeterCtrlOneData_fieldTypes[];
void *fn_80023CF4();
void fn_8004D4BC(void *,float);
void fn_802B1AC8();
extern char lbl_8041E6AC[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beMeterCtrlOneDataInstance : igNamedObjectInstance {
    igObjectRefMember _node;
    char unknown10[48];
    igObjectRefMember _hp;
    igObjectRefMember _mHp;
    inline ~beMeterCtrlOneDataInstance() { __vtable = beMeterCtrlOneData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beMeterCtrlOneData)

void *beMeterCtrlOneData_vtableRead()
{
    beMeterCtrlOneDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beMeterCtrlOneData_vtable;
    object._node._value = 0;
    object._hp._value = 0;
    object._mHp._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beMeterCtrlOneData)

void beMeterCtrlOneData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMeterCtrlOneData_meta, igNamedObject_register,
                       fn_80023CF4, beMeterCtrlOneData_getMetaCall,
                       beMeterCtrlOneData_className, 0x48,
                       beMeterCtrlOneData_vtableRead, beMeterCtrlOneData_fieldInit, 0, beMeterCtrlOneData_dependencies);
}

META_GET_META_CALL(beMeterCtrlOneData)

void beMeterCtrlOneData_fieldInit()
{
    Meta::igMetaObject *meta = beMeterCtrlOneData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beMeterCtrlOneData_fieldTypes, 14);
    Meta::igObjectRefMetaField *nodeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    nodeField->_metaObject = beMeterCtrlNode_metaObject();
    Meta::igFloatMetaField *nowValueFField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 4));
    fn_8004D4BC(nowValueFField, *reinterpret_cast<float *>(lbl_8041E6AC + 0));
    Meta::igFloatMetaField *dspValueFField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 5));
    fn_8004D4BC(dspValueFField, *reinterpret_cast<float *>(lbl_8041E6AC + 0));
    Meta::igObjectRefMetaField *hpField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 12));
    hpField->_metaObject = beDataObjInt_metaObject();
    Meta::igObjectRefMetaField *mHpField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 13));
    Meta::igMetaObject *beDataObjIntMeta_ = beDataObjInt_metaObject();
    mHpField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beDataObjIntMeta_);
    meta_setupFields(meta, beMeterCtrlOneData_fieldNames, beMeterCtrlOneData_fieldStorage, beMeterCtrlOneData_fieldOffsets, base);
}

}
#pragma pop
