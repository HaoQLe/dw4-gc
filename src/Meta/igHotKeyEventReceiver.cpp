// igHotKeyEventReceiver: Alchemy class registration (0x8010F370..0x8010F4FC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igHotKeyEventReceiver)
META_DECLARE(igEventReceiver)

extern "C" {
void fn_8010CBD4();
void *fn_8010F4FC();
extern char igHotKeyEventReceiver_dependencies[8];
}

struct igHotKeyEventReceiverInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _hotKeyList;
    char unknown0C[4];
    inline ~igHotKeyEventReceiverInstance() { __vtable = igHotKeyEventReceiver_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igHotKeyEventReceiver)

void *igHotKeyEventReceiver_vtableRead()
{
    igHotKeyEventReceiverInstance object;
    object.__vtable = igEventReceiver_vtable;
    object.__vtable = igHotKeyEventReceiver_vtable;
    object._hotKeyList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igHotKeyEventReceiver)

void igHotKeyEventReceiver_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igHotKeyEventReceiver_meta, igEventReceiver_register,
                       fn_8010F4FC, igHotKeyEventReceiver_getMetaCall,
                       igHotKeyEventReceiver_className, 0xC,
                       igHotKeyEventReceiver_vtableRead, igHotKeyEventReceiver_fieldInit, 0, igHotKeyEventReceiver_dependencies);
}

META_GET_META_CALL(igHotKeyEventReceiver)

}
#pragma pop
