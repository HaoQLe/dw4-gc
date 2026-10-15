// beModelCtrlSCSound: Alchemy class registration (0x802C552C..0x802C570C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlSCSound)
META_DECLARE(beModelCtrlSubComBase)

extern "C" {
void fn_802B1AC8();
void *fn_802C570C();
extern char lbl_804D9E80[];
}

struct beModelCtrlSCSoundInstance : igObjectInstance {
    char unknown04[16];
    igStringMember _sndName;
    char unknown18[8];
    inline ~beModelCtrlSCSoundInstance() { __vtable = beModelCtrlSCSound_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beModelCtrlSCSound)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beModelCtrlSCSound)
#pragma pop

void *beModelCtrlSCSound_vtableRead()
{
    beModelCtrlSCSoundInstance object;
    object.__vtable = lbl_804D9E80;
    object.__vtable = beModelCtrlSCSound_vtable;
    object._sndName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlSCSound)

void beModelCtrlSCSound_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlSCSound_meta, beModelCtrlSubComBase_register,
                       fn_802C570C, beModelCtrlSCSound_getMetaCall,
                       beModelCtrlSCSound_className, 0x20,
                       beModelCtrlSCSound_vtableRead, beModelCtrlSCSound_fieldInit, 0, 0);
}

META_GET_META_CALL(beModelCtrlSCSound)

}
#pragma pop
