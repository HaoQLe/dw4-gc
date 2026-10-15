// igEventReceiver: Alchemy class registration (0x80112D4C..0x80112E78). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igEventReceiver)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8010CBD4();
}

struct Instance_80112D88_0 {
    void *__vtable;
    char unknown04[4];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igEventReceiver)

void *igEventReceiver_vtableRead()
{
    Instance_80112D88_0 object;
    igObject_construct(&object);
    object.__vtable = igEventReceiver_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igEventReceiver)

void igEventReceiver_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igEventReceiver_meta, igObject_register,
                       fn_800237D0, igEventReceiver_getMetaCall,
                       igEventReceiver_className, 0x8,
                       igEventReceiver_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igEventReceiver)

}
#pragma pop
