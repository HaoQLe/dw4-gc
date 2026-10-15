// beModelCtrlCTRL: Alchemy class registration (0x802CBDB0..0x802CBF4C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlCTRL)
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

struct beModelCtrlCTRLInstance : igNamedObjectInstance {
    char unknown0C[4];
    inline ~beModelCtrlCTRLInstance() { __vtable = beModelCtrlCTRL_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlCTRL)

void *beModelCtrlCTRL_vtableRead()
{
    beModelCtrlCTRLInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlCTRL_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlCTRL)

void beModelCtrlCTRL_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlCTRL_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlCTRL_getMetaCall,
                       beModelCtrlCTRL_className, 0xC,
                       beModelCtrlCTRL_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beModelCtrlCTRL)

}
#pragma pop
