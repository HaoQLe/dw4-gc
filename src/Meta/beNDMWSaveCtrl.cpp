// beNDMWSaveCtrl: Alchemy class registration (0x803362DC..0x80336678). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWSaveCtrl)
META_DECLARE(beBaseInfoManager)
META_DECLARE(bePadManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWSaveCtrl_dependencies[8];
extern char beNDMWSaveCtrl_fieldNames[];
extern char beNDMWSaveCtrl_fieldOffsets[];
extern char beNDMWSaveCtrl_fieldStorage[];
extern char beNDMWSaveCtrl_fieldTypes[];
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

struct beNDMWSaveCtrlInstance : Instance_804DD724 {
    char unknown1C[4];
    igObjectRefMember _padManager;
    char unknown24[4];
    inline ~beNDMWSaveCtrlInstance() { __vtable = beNDMWSaveCtrl_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beNDMWSaveCtrl)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beNDMWSaveCtrl)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beNDMWSaveCtrl)
#pragma pop

void *beNDMWSaveCtrl_vtableRead()
{
    beNDMWSaveCtrlInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beNDMWSaveCtrl_vtable;
    object._padManager._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWSaveCtrl)

void beNDMWSaveCtrl_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWSaveCtrl_meta, beBaseInfoManager_register,
                       fn_802B381C, beNDMWSaveCtrl_getMetaCall,
                       beNDMWSaveCtrl_className, 0x24,
                       beNDMWSaveCtrl_vtableRead, beNDMWSaveCtrl_fieldInit, 0, beNDMWSaveCtrl_dependencies);
}

META_GET_META_CALL(beNDMWSaveCtrl)

void beNDMWSaveCtrl_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWSaveCtrl_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWSaveCtrl_fieldTypes, 1);
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    padManagerField->_metaObject = bePadManager_metaObject();
    meta_setupFields(meta, beNDMWSaveCtrl_fieldNames, beNDMWSaveCtrl_fieldStorage, beNDMWSaveCtrl_fieldOffsets, base);
}

}
#pragma pop
