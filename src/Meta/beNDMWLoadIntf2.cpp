// beNDMWLoadIntf2: Alchemy class registration (0x8033E564..0x8033E920). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWLoadIntf2)
META_DECLARE(beBaseInfoManager)
META_DECLARE(bePadManager)
META_DECLARE(beSystem)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWLoadIntf2_dependencies[12];
extern char beNDMWLoadIntf2_fieldNames[];
extern char beNDMWLoadIntf2_fieldOffsets[];
extern char beNDMWLoadIntf2_fieldStorage[];
extern char beNDMWLoadIntf2_fieldTypes[];
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

struct beNDMWLoadIntf2Instance : Instance_804DD724 {
    char unknown1C[8];
    igObjectRefMember _padManager;
    char unknown28[16];
    inline ~beNDMWLoadIntf2Instance() { __vtable = beNDMWLoadIntf2_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beNDMWLoadIntf2)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beNDMWLoadIntf2)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beNDMWLoadIntf2)
#pragma pop

void *beNDMWLoadIntf2_vtableRead()
{
    beNDMWLoadIntf2Instance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beNDMWLoadIntf2_vtable;
    object._padManager._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLoadIntf2)

void beNDMWLoadIntf2_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadIntf2_meta, beBaseInfoManager_register,
                       fn_802B381C, beNDMWLoadIntf2_getMetaCall,
                       beNDMWLoadIntf2_className, 0x30,
                       beNDMWLoadIntf2_vtableRead, beNDMWLoadIntf2_fieldInit, 0, beNDMWLoadIntf2_dependencies);
}

META_GET_META_CALL(beNDMWLoadIntf2)

void beNDMWLoadIntf2_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadIntf2_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadIntf2_fieldTypes, 4);
    Meta::igObjectRefMetaField *systemField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    systemField->_metaObject = bePadManager_metaObject();
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    padManagerField->_metaObject = beSystem_metaObject();
    padManagerField->_refCounted = false;
    meta_setupFields(meta, beNDMWLoadIntf2_fieldNames, beNDMWLoadIntf2_fieldStorage, beNDMWLoadIntf2_fieldOffsets, base);
}

}
#pragma pop
