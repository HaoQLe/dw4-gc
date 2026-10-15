// beModelCtrlJUMP: Alchemy class registration (0x802CBF4C..0x802CC0E8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlJUMP)
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

struct beModelCtrlJUMPInstance : igNamedObjectInstance {
    char unknown0C[4];
    inline ~beModelCtrlJUMPInstance() { __vtable = beModelCtrlJUMP_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlJUMP)

void *beModelCtrlJUMP_vtableRead()
{
    beModelCtrlJUMPInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlJUMP_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlJUMP)

void beModelCtrlJUMP_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlJUMP_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlJUMP_getMetaCall,
                       beModelCtrlJUMP_className, 0xC,
                       beModelCtrlJUMP_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beModelCtrlJUMP)

}
#pragma pop
