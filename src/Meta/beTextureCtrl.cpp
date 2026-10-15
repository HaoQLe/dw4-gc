// beTextureCtrl: Alchemy class registration (0x802B68E8..0x802B6C84). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beTextureCtrl)
META_DECLARE(beBaseInfoManager)
META_DECLARE(beTextureCtrlWork)
META_DECLARE(igNamedObject)

extern "C" {
extern char beTextureCtrl_dependencies[8];
extern char beTextureCtrl_fieldNames[];
extern char beTextureCtrl_fieldOffsets[];
extern char beTextureCtrl_fieldStorage[];
extern char beTextureCtrl_fieldTypes[];
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

struct beTextureCtrlInstance : Instance_804DD724 {
    char unknown1C[8];
    igObjectRefMember _work;
    inline ~beTextureCtrlInstance() { __vtable = beTextureCtrl_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beTextureCtrl)

META_METAOBJECT(beTextureCtrl)

META_GET_META(beTextureCtrl)

void *beTextureCtrl_vtableRead()
{
    beTextureCtrlInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beTextureCtrl_vtable;
    object._work._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beTextureCtrl)

void beTextureCtrl_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beTextureCtrl_meta, beBaseInfoManager_register,
                       fn_802B381C, beTextureCtrl_getMetaCall,
                       beTextureCtrl_className, 0x28,
                       beTextureCtrl_vtableRead, beTextureCtrl_fieldInit, 0, beTextureCtrl_dependencies);
}

META_GET_META_CALL(beTextureCtrl)

void beTextureCtrl_fieldInit()
{
    Meta::igMetaObject *meta = beTextureCtrl_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beTextureCtrl_fieldTypes, 2);
    Meta::igObjectRefMetaField *workField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    workField->_metaObject = beTextureCtrlWork_metaObject();
    meta_setupFields(meta, beTextureCtrl_fieldNames, beTextureCtrl_fieldStorage, beTextureCtrl_fieldOffsets, base);
}

}
#pragma pop
