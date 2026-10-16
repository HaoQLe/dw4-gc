// beNDMWMdlMapCursor: Alchemy class registration (0x80339F58..0x8033A210). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMdlMapCursor)
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

struct beNDMWMdlMapCursorInstance : Instance_804DEE44 {
    char unknown1C[16];
    inline beNDMWMdlMapCursorInstance()
    {
        __vtable = beNDMWMdlMapCursor_vtable;
    }
    inline ~beNDMWMdlMapCursorInstance() { __vtable = beNDMWMdlMapCursor_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWMdlMapCursor)

META_METAOBJECT(beNDMWMdlMapCursor)

META_GET_META(beNDMWMdlMapCursor)

void *beNDMWMdlMapCursor_vtableRead()
{
    beNDMWMdlMapCursorInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWMdlMapCursor)

void beNDMWMdlMapCursor_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMdlMapCursor_meta, beModelCtrl_register,
                       fn_803386E8, beNDMWMdlMapCursor_getMetaCall,
                       beNDMWMdlMapCursor_className, 0x2C,
                       beNDMWMdlMapCursor_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWMdlMapCursor)

}
#pragma pop
