// beNDMWLogo: Alchemy class registration (0x8033BDA4..0x8033C1A8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWLogo)
META_DECLARE(beBaseInfoManager)
META_DECLARE(beNDMWMcUtilCtrl)
META_DECLARE(bePadManager)
META_DECLARE(beSystem)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWLogo_dependencies[16];
extern char beNDMWLogo_fieldNames[];
extern char beNDMWLogo_fieldOffsets[];
extern char beNDMWLogo_fieldStorage[];
extern char beNDMWLogo_fieldTypes[];
void fn_8003EC68(void *,int);
void fn_80053650(void *,int);
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

struct beNDMWLogoInstance : Instance_804DD724 {
    char unknown1C[12];
    igObjectRefMember _mcUtilCtrl;
    char unknown2C[60];
    inline ~beNDMWLogoInstance() { __vtable = beNDMWLogo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beNDMWLogo)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beNDMWLogo)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beNDMWLogo)
#pragma pop

void *beNDMWLogo_vtableRead()
{
    beNDMWLogoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beNDMWLogo_vtable;
    object._mcUtilCtrl._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLogo)

void beNDMWLogo_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLogo_meta, beBaseInfoManager_register,
                       fn_802B381C, beNDMWLogo_getMetaCall,
                       beNDMWLogo_className, 0x5C,
                       beNDMWLogo_vtableRead, beNDMWLogo_fieldInit, 0, beNDMWLogo_dependencies);
}

META_GET_META_CALL(beNDMWLogo)

void beNDMWLogo_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLogo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLogo_fieldTypes, 11);
    Meta::igObjectRefMetaField *systemField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    systemField->_metaObject = bePadManager_metaObject();
    systemField->_refCounted = false;
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    padManagerField->_metaObject = beSystem_metaObject();
    padManagerField->_refCounted = false;
    Meta::igObjectRefMetaField *mcUtilCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    mcUtilCtrlField->_metaObject = beNDMWMcUtilCtrl_metaObject();
    Meta::igBoolMetaField *isUseSaveField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 6));
    fn_8003EC68(isUseSaveField, 1);
    Meta::igIntMetaField *errTargetField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 9));
    fn_80053650(errTargetField, -1);
    meta_setupFields(meta, beNDMWLogo_fieldNames, beNDMWLogo_fieldStorage, beNDMWLogo_fieldOffsets, base);
}

}
#pragma pop
