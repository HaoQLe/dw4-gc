// beBkColor: Alchemy class registration (0x802E2C34..0x802E2F60). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beBkColor)
META_DECLARE(beBaseInfoManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beBkColor_fieldNames[];
extern char beBkColor_fieldOffsets[];
extern char beBkColor_fieldStorage[];
extern char beBkColor_fieldTypes[];
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

struct beBkColorInstance : Instance_804DD724 {
    char unknown1C[20];
    inline ~beBkColorInstance() { __vtable = beBkColor_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beBkColor)

META_METAOBJECT(beBkColor)

META_GET_META(beBkColor)

void *beBkColor_vtableRead()
{
    beBkColorInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beBkColor_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beBkColor)

void beBkColor_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beBkColor_meta, beBaseInfoManager_register,
                       fn_802B381C, beBkColor_getMetaCall,
                       beBkColor_className, 0x24,
                       beBkColor_vtableRead, beBkColor_fieldInit, 0, 0);
}

META_GET_META_CALL(beBkColor)

void beBkColor_fieldInit()
{
    Meta::igMetaObject *meta = beBkColor_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beBkColor_fieldTypes, 0x1);
    meta_setupFields(meta, beBkColor_fieldNames, beBkColor_fieldStorage, beBkColor_fieldOffsets, base);
}

}
#pragma pop
