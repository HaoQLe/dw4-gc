// beNDMWTitle2: Alchemy class registration (0x803267E0..0x80326BD4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWTitle2)
META_DECLARE(beBaseInfoManager)
META_DECLARE(beNDMWMcUtilCtrl)
META_DECLARE(bePadManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWTitle2_dependencies[12];
extern char beNDMWTitle2_fieldNames[];
extern char beNDMWTitle2_fieldOffsets[];
extern char beNDMWTitle2_fieldStorage[];
extern char beNDMWTitle2_fieldTypes[];
void *fn_802B381C();
void fn_803250AC();
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

struct beNDMWTitle2Instance : Instance_804DD724 {
    char unknown1C[4];
    igObjectRefMember _padManager;
    igObjectRefMember _mcUtilCtrl;
    char unknown28[16];
    inline ~beNDMWTitle2Instance() { __vtable = beNDMWTitle2_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beNDMWTitle2)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beNDMWTitle2)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beNDMWTitle2)
#pragma pop

void *beNDMWTitle2_vtableRead()
{
    beNDMWTitle2Instance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beNDMWTitle2_vtable;
    object._padManager._value = 0;
    object._mcUtilCtrl._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWTitle2)

void beNDMWTitle2_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWTitle2_meta, beBaseInfoManager_register,
                       fn_802B381C, beNDMWTitle2_getMetaCall,
                       beNDMWTitle2_className, 0x34,
                       beNDMWTitle2_vtableRead, beNDMWTitle2_fieldInit, 0, beNDMWTitle2_dependencies);
}

META_GET_META_CALL(beNDMWTitle2)

void beNDMWTitle2_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWTitle2_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWTitle2_fieldTypes, 4);
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    padManagerField->_metaObject = bePadManager_metaObject();
    Meta::igObjectRefMetaField *mcUtilCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    mcUtilCtrlField->_metaObject = beNDMWMcUtilCtrl_metaObject();
    meta_setupFields(meta, beNDMWTitle2_fieldNames, beNDMWTitle2_fieldStorage, beNDMWTitle2_fieldOffsets, base);
}

}
#pragma pop
