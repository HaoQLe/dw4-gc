// beWaterPlain: Alchemy class registration (0x802B4EA4..0x802B5148). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beWaterPlain)
META_DECLARE(beBaseInfoManager)
META_DECLARE(igNamedObject)

extern "C" {
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

struct beWaterPlainInstance : Instance_804DD724 {
    char unknown1C[4];
    inline ~beWaterPlainInstance() { __vtable = beWaterPlain_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beWaterPlain)

META_METAOBJECT(beWaterPlain)

META_GET_META(beWaterPlain)

void *beWaterPlain_vtableRead()
{
    beWaterPlainInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beWaterPlain_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beWaterPlain)

void beWaterPlain_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beWaterPlain_meta, beBaseInfoManager_register,
                       fn_802B381C, beWaterPlain_getMetaCall,
                       beWaterPlain_className, 0x20,
                       beWaterPlain_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beWaterPlain)

}
#pragma pop
