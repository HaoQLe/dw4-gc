// igWindowSizeObserver: Alchemy class registration (0x80110B48..0x80110CB8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igWindowSizeObserver)
META_DECLARE(igView)

extern "C" {
void fn_8010CBD4();
void *fn_8010E6DC();
extern char lbl_80495AD8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igWindowSizeObserver)

META_GET_META(igWindowSizeObserver)

void *igWindowSizeObserver_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_80495AD8;
    object.__vtable = igWindowSizeObserver_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igWindowSizeObserver)

void igWindowSizeObserver_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igWindowSizeObserver_meta, igView_register,
                       fn_8010E6DC, igWindowSizeObserver_getMetaCall,
                       igWindowSizeObserver_className, 0xC,
                       igWindowSizeObserver_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igWindowSizeObserver)

}
#pragma pop
