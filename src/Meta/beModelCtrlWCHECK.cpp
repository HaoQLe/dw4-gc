// beModelCtrlWCHECK: Alchemy class registration (0x802CB160..0x802CB2FC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlWCHECK)
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

struct beModelCtrlWCHECKInstance : igNamedObjectInstance {
    char unknown0C[4];
    inline ~beModelCtrlWCHECKInstance() { __vtable = beModelCtrlWCHECK_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlWCHECK)

void *beModelCtrlWCHECK_vtableRead()
{
    beModelCtrlWCHECKInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlWCHECK_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlWCHECK)

void beModelCtrlWCHECK_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlWCHECK_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlWCHECK_getMetaCall,
                       beModelCtrlWCHECK_className, 0xC,
                       beModelCtrlWCHECK_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beModelCtrlWCHECK)

}
#pragma pop
