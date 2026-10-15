// beChangePosTransform: Alchemy class registration (0x802E114C..0x802E1478). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beChangePosTransform)
META_DECLARE(beBaseInfoManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beChangePosTransform_fieldNames[];
extern char beChangePosTransform_fieldOffsets[];
extern char beChangePosTransform_fieldStorage[];
extern char beChangePosTransform_fieldTypes[];
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

struct beChangePosTransformInstance : Instance_804DD724 {
    char unknown1C[20];
    inline ~beChangePosTransformInstance() { __vtable = beChangePosTransform_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beChangePosTransform)

META_METAOBJECT(beChangePosTransform)

META_GET_META(beChangePosTransform)

void *beChangePosTransform_vtableRead()
{
    beChangePosTransformInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beChangePosTransform_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beChangePosTransform)

void beChangePosTransform_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beChangePosTransform_meta, beBaseInfoManager_register,
                       fn_802B381C, beChangePosTransform_getMetaCall,
                       beChangePosTransform_className, 0x2C,
                       beChangePosTransform_vtableRead, beChangePosTransform_fieldInit, 0, 0);
}

META_GET_META_CALL(beChangePosTransform)

void beChangePosTransform_fieldInit()
{
    Meta::igMetaObject *meta = beChangePosTransform_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beChangePosTransform_fieldTypes, 0x1);
    meta_setupFields(meta, beChangePosTransform_fieldNames, beChangePosTransform_fieldStorage, beChangePosTransform_fieldOffsets, base);
}

}
#pragma pop
