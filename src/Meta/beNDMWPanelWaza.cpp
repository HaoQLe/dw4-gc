// beNDMWPanelWaza: Alchemy class registration (0x803380C4..0x80338420). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWPanelWaza)
META_DECLARE(beBaseInfoManager)
META_DECLARE(bePadManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWPanelWaza_dependencies[8];
extern char beNDMWPanelWaza_fieldNames[];
extern char beNDMWPanelWaza_fieldOffsets[];
extern char beNDMWPanelWaza_fieldStorage[];
extern char beNDMWPanelWaza_fieldTypes[];
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

struct beNDMWPanelWazaInstance : Instance_804DD724 {
    char unknown1C[20];
    inline ~beNDMWPanelWazaInstance() { __vtable = beNDMWPanelWaza_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWPanelWaza)

META_METAOBJECT(beNDMWPanelWaza)

META_GET_META(beNDMWPanelWaza)

#pragma push
#pragma optimize_for_size on
void *beNDMWPanelWaza_vtableRead()
{
    beNDMWPanelWazaInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beNDMWPanelWaza_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWPanelWaza)

void beNDMWPanelWaza_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWPanelWaza_meta, beBaseInfoManager_register,
                       fn_802B381C, beNDMWPanelWaza_getMetaCall,
                       beNDMWPanelWaza_className, 0x24,
                       beNDMWPanelWaza_vtableRead, beNDMWPanelWaza_fieldInit, 0, beNDMWPanelWaza_dependencies);
}

META_GET_META_CALL(beNDMWPanelWaza)

void beNDMWPanelWaza_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWPanelWaza_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWPanelWaza_fieldTypes, 1);
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    padManagerField->_metaObject = bePadManager_metaObject();
    padManagerField->_refCounted = false;
    meta_setupFields(meta, beNDMWPanelWaza_fieldNames, beNDMWPanelWaza_fieldStorage, beNDMWPanelWaza_fieldOffsets, base);
}

}
#pragma pop
