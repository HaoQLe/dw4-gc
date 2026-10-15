// beNDMWStageCtl: Alchemy class registration (0x8033486C..0x80334B98). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStageCtl)
META_DECLARE(beBaseInfoManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWStageCtl_fieldNames[];
extern char beNDMWStageCtl_fieldOffsets[];
extern char beNDMWStageCtl_fieldStorage[];
extern char beNDMWStageCtl_fieldTypes[];
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

struct beNDMWStageCtlInstance : Instance_804DD724 {
    char unknown1C[20];
    inline ~beNDMWStageCtlInstance() { __vtable = beNDMWStageCtl_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWStageCtl)

META_METAOBJECT(beNDMWStageCtl)

META_GET_META(beNDMWStageCtl)

void *beNDMWStageCtl_vtableRead()
{
    beNDMWStageCtlInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beNDMWStageCtl_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWStageCtl)

void beNDMWStageCtl_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStageCtl_meta, beBaseInfoManager_register,
                       fn_802B381C, beNDMWStageCtl_getMetaCall,
                       beNDMWStageCtl_className, 0x28,
                       beNDMWStageCtl_vtableRead, beNDMWStageCtl_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWStageCtl)

void beNDMWStageCtl_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWStageCtl_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWStageCtl_fieldTypes, 0x1);
    meta_setupFields(meta, beNDMWStageCtl_fieldNames, beNDMWStageCtl_fieldStorage, beNDMWStageCtl_fieldOffsets, base);
}

}
#pragma pop
