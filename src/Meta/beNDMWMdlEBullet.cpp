// beNDMWMdlEBullet: Alchemy class registration (0x8033B524..0x8033B7DC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMdlEBullet)
META_DECLARE(beModelCtrl)
META_DECLARE(igNamedObject)

extern "C" {
void fn_803250AC();
void *fn_803386E8();
extern char lbl_804CBA60[304];
extern char lbl_804DD724[148];
extern char lbl_804DEE44[204];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMemberLookup _name;
    inline igNamedObjectInstance()
    {
        __vtable = igNamedObject_vtable;
        _name._value = 0;
    }
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804CBA60 : igNamedObjectInstance {
    inline Instance_804CBA60()
    {
        __vtable = lbl_804CBA60;
    }
    inline ~Instance_804CBA60() { __vtable = lbl_804CBA60; }
};

struct Instance_804DD724 : Instance_804CBA60 {
    char unknown0C[12];
    igObjectRefMember _infoList;
    inline Instance_804DD724()
    {
        __vtable = lbl_804DD724;
        _infoList._value = 0;
    }
    inline ~Instance_804DD724() { __vtable = lbl_804DD724; }
};

struct Instance_804DEE44 : Instance_804DD724 {
    inline Instance_804DEE44()
    {
        __vtable = lbl_804DEE44;
    }
    inline ~Instance_804DEE44() { __vtable = lbl_804DEE44; }
};

struct beNDMWMdlEBulletInstance : Instance_804DEE44 {
    char unknown1C[16];
    inline beNDMWMdlEBulletInstance()
    {
        __vtable = beNDMWMdlEBullet_vtable;
    }
    inline ~beNDMWMdlEBulletInstance() { __vtable = beNDMWMdlEBullet_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWMdlEBullet)

META_METAOBJECT(beNDMWMdlEBullet)

META_GET_META(beNDMWMdlEBullet)

void *beNDMWMdlEBullet_vtableRead()
{
    beNDMWMdlEBulletInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWMdlEBullet)

void beNDMWMdlEBullet_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMdlEBullet_meta, beModelCtrl_register,
                       fn_803386E8, beNDMWMdlEBullet_getMetaCall,
                       beNDMWMdlEBullet_className, 0x2C,
                       beNDMWMdlEBullet_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWMdlEBullet)

}
#pragma pop
