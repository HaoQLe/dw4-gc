// beShadow01Info: Alchemy class registration (0x802B983C..0x802B9C0C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beShadow01Info)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beShadow01Info_dependencies[12];
extern char beShadow01Info_fieldNames[];
extern char beShadow01Info_fieldOffsets[];
extern char beShadow01Info_fieldStorage[];
extern char beShadow01Info_fieldTypes[];
void *fn_801B4DF0();
void *fn_801B74F0();
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

struct beShadow01InfoInstance : Instance_804DCD14 {
    igObjectRefMember _receiverNode;
    igObjectRefMember _casterNode;
    igObjectRefMember _projShadowShader;
    char unknown28[8];
    inline ~beShadow01InfoInstance() { __vtable = beShadow01Info_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beShadow01Info)
#pragma pop

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beShadow01Info_vtableRead()
{
    beShadow01InfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beShadow01Info_vtable;
    object._receiverNode._value = 0;
    object._casterNode._value = 0;
    object._projShadowShader._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beShadow01Info)

void beShadow01Info_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beShadow01Info_meta, beBaseInfo_register,
                       fn_802B2E3C, beShadow01Info_getMetaCall,
                       beShadow01Info_className, 0x28,
                       beShadow01Info_vtableRead, beShadow01Info_fieldInit, 0, beShadow01Info_dependencies);
}

META_GET_META_CALL(beShadow01Info)

void beShadow01Info_fieldInit()
{
    Meta::igMetaObject *meta = beShadow01Info_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beShadow01Info_fieldTypes, 3);
    Meta::igObjectRefMetaField *receiverNodeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801B74F0();
    receiverNodeField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *casterNodeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_801B74F0();
    casterNodeField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    Meta::igObjectRefMetaField *projShadowShaderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value7 = fn_801B4DF0();
    projShadowShaderField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value7);
    meta_setupFields(meta, beShadow01Info_fieldNames, beShadow01Info_fieldStorage, beShadow01Info_fieldOffsets, base);
}

}
#pragma pop
