// beNDMWMdlPBullet: Alchemy class registration (0x803399E8..0x80339CA0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMdlPBullet)
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

struct beNDMWMdlPBulletInstance : Instance_804DEE44 {
    char unknown1C[16];
    inline beNDMWMdlPBulletInstance()
    {
        __vtable = beNDMWMdlPBullet_vtable;
    }
    inline ~beNDMWMdlPBulletInstance() { __vtable = beNDMWMdlPBullet_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beNDMWMdlPBullet)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beNDMWMdlPBullet)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWMdlPBullet)
#pragma pop

void *beNDMWMdlPBullet_vtableRead()
{
    beNDMWMdlPBulletInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWMdlPBullet)

void beNDMWMdlPBullet_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMdlPBullet_meta, beModelCtrl_register,
                       fn_803386E8, beNDMWMdlPBullet_getMetaCall,
                       beNDMWMdlPBullet_className, 0x2C,
                       beNDMWMdlPBullet_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWMdlPBullet)

}
#pragma pop
