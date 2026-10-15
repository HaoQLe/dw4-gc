// igMessageDefaultReceiver: Alchemy class registration (0x802857B8..0x802859A0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMessageDefaultReceiver)
META_DECLARE(igMessageReceiver)

extern "C" {
void fn_80284294();
extern char igMessageDefaultReceiver_dependencies[40];
void *igMessageDefaultReceiver_parentMeta();
extern char lbl_804CB6C8[];
}

struct igMessageDefaultReceiverInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _msgHandler;
    char unknown0C[20];
    inline ~igMessageDefaultReceiverInstance() { __vtable = igMessageDefaultReceiver_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMessageDefaultReceiver)

META_GET_META(igMessageDefaultReceiver)

void *igMessageDefaultReceiver_vtableRead()
{
    igMessageDefaultReceiverInstance object;
    object.__vtable = lbl_804CB6C8;
    object.__vtable = igMessageDefaultReceiver_vtable;
    object._msgHandler._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMessageDefaultReceiver)

void igMessageDefaultReceiver_register()
{
    fn_80284294();
    meta_registerClass(0, &igMessageDefaultReceiver_meta, igMessageReceiver_register,
                       igMessageDefaultReceiver_parentMeta, igMessageDefaultReceiver_getMetaCall,
                       igMessageDefaultReceiver_className, 0x18,
                       igMessageDefaultReceiver_vtableRead, igMessageDefaultReceiver_fieldInit, 0, igMessageDefaultReceiver_dependencies);
}

META_GET_META_CALL(igMessageDefaultReceiver)

}
#pragma pop
