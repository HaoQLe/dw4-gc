// beModelCtrlLABEL: Alchemy class registration (0x802CC4F0..0x802CC68C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlLABEL)
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

struct beModelCtrlLABELInstance : igNamedObjectInstance {
    char unknown0C[4];
    inline ~beModelCtrlLABELInstance() { __vtable = beModelCtrlLABEL_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlLABEL)

void *beModelCtrlLABEL_vtableRead()
{
    beModelCtrlLABELInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlLABEL_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlLABEL)

void beModelCtrlLABEL_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlLABEL_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlLABEL_getMetaCall,
                       beModelCtrlLABEL_className, 0xC,
                       beModelCtrlLABEL_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beModelCtrlLABEL)

}
#pragma pop
