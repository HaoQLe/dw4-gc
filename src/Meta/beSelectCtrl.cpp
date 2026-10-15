// beSelectCtrl: Alchemy class registration (0x802BA944..0x802BACB4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beSelectCtrl)
META_DECLARE(beBaseInfoManager)
META_DECLARE(bePadManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beSelectCtrl_dependencies[8];
extern char beSelectCtrl_fieldNames[];
extern char beSelectCtrl_fieldOffsets[];
extern char beSelectCtrl_fieldStorage[];
extern char beSelectCtrl_fieldTypes[];
void fn_8003EC68(void *,int);
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

struct beSelectCtrlInstance : Instance_804DD724 {
    char unknown1C[20];
    inline ~beSelectCtrlInstance() { __vtable = beSelectCtrl_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beSelectCtrl)

META_METAOBJECT(beSelectCtrl)

META_GET_META(beSelectCtrl)

#pragma push
#pragma optimize_for_size on
void *beSelectCtrl_vtableRead()
{
    beSelectCtrlInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beSelectCtrl_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSelectCtrl)

void beSelectCtrl_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSelectCtrl_meta, beBaseInfoManager_register,
                       fn_802B381C, beSelectCtrl_getMetaCall,
                       beSelectCtrl_className, 0x28,
                       beSelectCtrl_vtableRead, beSelectCtrl_fieldInit, 0, beSelectCtrl_dependencies);
}

META_GET_META_CALL(beSelectCtrl)

void beSelectCtrl_fieldInit()
{
    Meta::igMetaObject *meta = beSelectCtrl_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSelectCtrl_fieldTypes, 2);
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    padManagerField->_metaObject = bePadManager_metaObject();
    padManagerField->_refCounted = false;
    Meta::igBoolMetaField *isEnableCtrlField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 1));
    fn_8003EC68(isEnableCtrlField, 1);
    meta_setupFields(meta, beSelectCtrl_fieldNames, beSelectCtrl_fieldStorage, beSelectCtrl_fieldOffsets, base);
}

}
#pragma pop
