// beLayerCtl: Alchemy class registration (0x802D399C..0x802D3D38). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beLayerCtl)
META_DECLARE(beBaseInfoManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beLayerCtl_dependencies[8];
extern char beLayerCtl_fieldNames[];
extern char beLayerCtl_fieldOffsets[];
extern char beLayerCtl_fieldStorage[];
extern char beLayerCtl_fieldTypes[];
void *fn_801ADB98();
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

struct beLayerCtlInstance : Instance_804DD724 {
    char unknown1C[8];
    igObjectRefMember _layerSwt;
    inline ~beLayerCtlInstance() { __vtable = beLayerCtl_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beLayerCtl)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beLayerCtl)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beLayerCtl)
#pragma pop

void *beLayerCtl_vtableRead()
{
    beLayerCtlInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beLayerCtl_vtable;
    object._layerSwt._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beLayerCtl)

void beLayerCtl_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beLayerCtl_meta, beBaseInfoManager_register,
                       fn_802B381C, beLayerCtl_getMetaCall,
                       beLayerCtl_className, 0x28,
                       beLayerCtl_vtableRead, beLayerCtl_fieldInit, 0, beLayerCtl_dependencies);
}

META_GET_META_CALL(beLayerCtl)

void beLayerCtl_fieldInit()
{
    Meta::igMetaObject *meta = beLayerCtl_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beLayerCtl_fieldTypes, 2);
    Meta::igObjectRefMetaField *layerSwtField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value3 = fn_801ADB98();
    layerSwtField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, beLayerCtl_fieldNames, beLayerCtl_fieldStorage, beLayerCtl_fieldOffsets, base);
}

}
#pragma pop
