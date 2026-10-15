// beModelCtrlMSGBOX: Alchemy class registration (0x802CBC14..0x802CBDB0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlMSGBOX)
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

struct beModelCtrlMSGBOXInstance : igNamedObjectInstance {
    char unknown0C[4];
    inline ~beModelCtrlMSGBOXInstance() { __vtable = beModelCtrlMSGBOX_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlMSGBOX)

void *beModelCtrlMSGBOX_vtableRead()
{
    beModelCtrlMSGBOXInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlMSGBOX_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlMSGBOX)

void beModelCtrlMSGBOX_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlMSGBOX_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlMSGBOX_getMetaCall,
                       beModelCtrlMSGBOX_className, 0xC,
                       beModelCtrlMSGBOX_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beModelCtrlMSGBOX)

}
#pragma pop
