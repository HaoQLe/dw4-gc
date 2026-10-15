// beParticleCtrl2Info: Alchemy class registration (0x802C1AB0..0x802C1E30). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beParticleCtrl2Info)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beParticleCtrl2Info_dependencies[8];
extern char beParticleCtrl2Info_fieldNames[];
extern char beParticleCtrl2Info_fieldOffsets[];
extern char beParticleCtrl2Info_fieldStorage[];
extern char beParticleCtrl2Info_fieldTypes[];
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

struct beParticleCtrl2InfoInstance : Instance_804DCD14 {
    igObjectRefMember _mainSwitch;
    igObjectRefMember _subSwitch;
    char unknown24[12];
    inline ~beParticleCtrl2InfoInstance() { __vtable = beParticleCtrl2Info_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beParticleCtrl2Info)

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beParticleCtrl2Info_vtableRead()
{
    beParticleCtrl2InfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beParticleCtrl2Info_vtable;
    object._mainSwitch._value = 0;
    object._subSwitch._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beParticleCtrl2Info)

void beParticleCtrl2Info_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beParticleCtrl2Info_meta, beBaseInfo_register,
                       fn_802B2E3C, beParticleCtrl2Info_getMetaCall,
                       beParticleCtrl2Info_className, 0x30,
                       beParticleCtrl2Info_vtableRead, beParticleCtrl2Info_fieldInit, 0, beParticleCtrl2Info_dependencies);
}

META_GET_META_CALL(beParticleCtrl2Info)

void beParticleCtrl2Info_fieldInit()
{
    Meta::igMetaObject *meta = beParticleCtrl2Info_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beParticleCtrl2Info_fieldTypes, 4);
    Meta::igObjectRefMetaField *mainSwitchField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801ADB98();
    mainSwitchField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *subSwitchField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_801ADB98();
    subSwitchField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    meta_setupFields(meta, beParticleCtrl2Info_fieldNames, beParticleCtrl2Info_fieldStorage, beParticleCtrl2Info_fieldOffsets, base);
}

}
#pragma pop
