// beModelCtrlACTION: Alchemy class registration (0x802CC0E8..0x802CC284). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlACTION)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beModelCtrlACTIONInstance : igNamedObjectInstance {
    char unknown0C[4];
    inline ~beModelCtrlACTIONInstance() { __vtable = beModelCtrlACTION_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlACTION)

void *beModelCtrlACTION_vtableRead()
{
    beModelCtrlACTIONInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlACTION_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlACTION)

void beModelCtrlACTION_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlACTION_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlACTION_getMetaCall,
                       beModelCtrlACTION_className, 0xC,
                       beModelCtrlACTION_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beModelCtrlACTION)

}
#pragma pop
