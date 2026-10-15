// beNDMWLoadCtrl2: Alchemy class registration (0x80342084..0x80342420). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWLoadCtrl2)
META_DECLARE(beBaseInfoManager)
META_DECLARE(bePadManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWLoadCtrl2_dependencies[8];
extern char beNDMWLoadCtrl2_fieldNames[];
extern char beNDMWLoadCtrl2_fieldOffsets[];
extern char beNDMWLoadCtrl2_fieldStorage[];
extern char beNDMWLoadCtrl2_fieldTypes[];
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

struct beNDMWLoadCtrl2Instance : Instance_804DD724 {
    char unknown1C[4];
    igObjectRefMember _padManager;
    char unknown24[20];
    inline ~beNDMWLoadCtrl2Instance() { __vtable = beNDMWLoadCtrl2_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beNDMWLoadCtrl2)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beNDMWLoadCtrl2)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beNDMWLoadCtrl2)
#pragma pop

void *beNDMWLoadCtrl2_vtableRead()
{
    beNDMWLoadCtrl2Instance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beNDMWLoadCtrl2_vtable;
    object._padManager._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLoadCtrl2)

void beNDMWLoadCtrl2_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadCtrl2_meta, beBaseInfoManager_register,
                       fn_802B381C, beNDMWLoadCtrl2_getMetaCall,
                       beNDMWLoadCtrl2_className, 0x2C,
                       beNDMWLoadCtrl2_vtableRead, beNDMWLoadCtrl2_fieldInit, 0, beNDMWLoadCtrl2_dependencies);
}

META_GET_META_CALL(beNDMWLoadCtrl2)

void beNDMWLoadCtrl2_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadCtrl2_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadCtrl2_fieldTypes, 3);
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    padManagerField->_metaObject = bePadManager_metaObject();
    meta_setupFields(meta, beNDMWLoadCtrl2_fieldNames, beNDMWLoadCtrl2_fieldStorage, beNDMWLoadCtrl2_fieldOffsets, base);
}

}
#pragma pop
