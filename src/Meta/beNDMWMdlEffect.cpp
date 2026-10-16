// beNDMWMdlEffect: Alchemy class registration (0x8033B26C..0x8033B524). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMdlEffect)
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

struct beNDMWMdlEffectInstance : Instance_804DEE44 {
    char unknown1C[16];
    inline beNDMWMdlEffectInstance()
    {
        __vtable = beNDMWMdlEffect_vtable;
    }
    inline ~beNDMWMdlEffectInstance() { __vtable = beNDMWMdlEffect_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWMdlEffect)

META_METAOBJECT(beNDMWMdlEffect)

META_GET_META(beNDMWMdlEffect)

void *beNDMWMdlEffect_vtableRead()
{
    beNDMWMdlEffectInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWMdlEffect)

void beNDMWMdlEffect_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMdlEffect_meta, beModelCtrl_register,
                       fn_803386E8, beNDMWMdlEffect_getMetaCall,
                       beNDMWMdlEffect_className, 0x2C,
                       beNDMWMdlEffect_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWMdlEffect)

}
#pragma pop
