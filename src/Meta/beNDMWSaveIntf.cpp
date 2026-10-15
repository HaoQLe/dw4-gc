// beNDMWSaveIntf: Alchemy class registration (0x80335958..0x80335D14). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWSaveIntf)
META_DECLARE(beBaseInfoManager)
META_DECLARE(bePadManager)
META_DECLARE(beSystem)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWSaveIntf_dependencies[12];
extern char beNDMWSaveIntf_fieldNames[];
extern char beNDMWSaveIntf_fieldOffsets[];
extern char beNDMWSaveIntf_fieldStorage[];
extern char beNDMWSaveIntf_fieldTypes[];
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

struct beNDMWSaveIntfInstance : Instance_804DD724 {
    char unknown1C[8];
    igObjectRefMember _padManager;
    char unknown28[16];
    inline ~beNDMWSaveIntfInstance() { __vtable = beNDMWSaveIntf_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beNDMWSaveIntf)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beNDMWSaveIntf)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beNDMWSaveIntf)
#pragma pop

void *beNDMWSaveIntf_vtableRead()
{
    beNDMWSaveIntfInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beNDMWSaveIntf_vtable;
    object._padManager._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWSaveIntf)

void beNDMWSaveIntf_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWSaveIntf_meta, beBaseInfoManager_register,
                       fn_802B381C, beNDMWSaveIntf_getMetaCall,
                       beNDMWSaveIntf_className, 0x2C,
                       beNDMWSaveIntf_vtableRead, beNDMWSaveIntf_fieldInit, 0, beNDMWSaveIntf_dependencies);
}

META_GET_META_CALL(beNDMWSaveIntf)

void beNDMWSaveIntf_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWSaveIntf_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWSaveIntf_fieldTypes, 3);
    Meta::igObjectRefMetaField *systemField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    systemField->_metaObject = bePadManager_metaObject();
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    padManagerField->_metaObject = beSystem_metaObject();
    padManagerField->_refCounted = false;
    meta_setupFields(meta, beNDMWSaveIntf_fieldNames, beNDMWSaveIntf_fieldStorage, beNDMWSaveIntf_fieldOffsets, base);
}

}
#pragma pop
