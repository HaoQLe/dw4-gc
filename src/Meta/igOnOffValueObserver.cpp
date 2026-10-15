// igOnOffValueObserver: Alchemy class registration (0x8010E598..0x8010E6DC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igOnOffValueObserver)
META_DECLARE(igView)

extern "C" {
void fn_8010CBD4();
void *fn_8010E6DC();
extern char igOnOffValueObserver_dependencies[8];
extern char lbl_80495AD8[];
}

struct Instance_8010E5D4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igOnOffValueObserver)

void *igOnOffValueObserver_vtableRead()
{
    Instance_8010E5D4_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_80495AD8;
    object.__vtable = igOnOffValueObserver_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igOnOffValueObserver)

void igOnOffValueObserver_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igOnOffValueObserver_meta, igView_register,
                       fn_8010E6DC, igOnOffValueObserver_getMetaCall,
                       igOnOffValueObserver_className, 0x10,
                       igOnOffValueObserver_vtableRead, igOnOffValueObserver_fieldInit, 0, igOnOffValueObserver_dependencies);
}

META_GET_META_CALL(igOnOffValueObserver)

}
#pragma pop
