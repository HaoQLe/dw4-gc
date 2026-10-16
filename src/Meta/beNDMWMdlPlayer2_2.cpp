// beNDMWMdlPlayer2: Alchemy class registration (0x80338420..0x803386E8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMdlPlayer2)
META_DECLARE(beModelCtrl)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWMdlPlayer2_dependencies[8];
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

struct beNDMWMdlPlayer2Instance : Instance_804DEE44 {
    char unknown1C[20];
    inline beNDMWMdlPlayer2Instance()
    {
        __vtable = beNDMWMdlPlayer2_vtable;
    }
    inline ~beNDMWMdlPlayer2Instance() { __vtable = beNDMWMdlPlayer2_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beNDMWMdlPlayer2)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beNDMWMdlPlayer2)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWMdlPlayer2)
#pragma pop

void *beNDMWMdlPlayer2_vtableRead()
{
    beNDMWMdlPlayer2Instance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWMdlPlayer2)

void beNDMWMdlPlayer2_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMdlPlayer2_meta, beModelCtrl_register,
                       fn_803386E8, beNDMWMdlPlayer2_getMetaCall,
                       beNDMWMdlPlayer2_className, 0x30,
                       beNDMWMdlPlayer2_vtableRead, beNDMWMdlPlayer2_fieldInit, 0, beNDMWMdlPlayer2_dependencies);
}

META_GET_META_CALL(beNDMWMdlPlayer2)

}
#pragma pop
