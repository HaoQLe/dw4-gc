// beModelCtrlAIMAP: Alchemy class registration (0x802CAFC4..0x802CB160). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlAIMAP)
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

struct beModelCtrlAIMAPInstance : igNamedObjectInstance {
    char unknown0C[4];
    inline ~beModelCtrlAIMAPInstance() { __vtable = beModelCtrlAIMAP_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlAIMAP)

void *beModelCtrlAIMAP_vtableRead()
{
    beModelCtrlAIMAPInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlAIMAP_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlAIMAP)

void beModelCtrlAIMAP_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlAIMAP_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlAIMAP_getMetaCall,
                       beModelCtrlAIMAP_className, 0xC,
                       beModelCtrlAIMAP_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beModelCtrlAIMAP)

}
#pragma pop
