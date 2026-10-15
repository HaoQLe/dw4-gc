// igAdx: Alchemy class registration (0x802AA7BC..0x802AA914). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAdx)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_802AA788();
void fn_802AA914();
void fn_802AA93C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAdx)

void *igAdx_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
    } object;
    igObject_construct(&object);
    object.__vtable = igAdx_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAdx)

void igAdx_register()
{
    fn_802AA788();
    meta_registerClass(0, &igAdx_meta, igObject_register,
                       fn_800237D0, igAdx_getMetaCall,
                       igAdx_className, 0x8,
                       igAdx_vtableRead, fn_802AA914, fn_802AA93C, 0);
}

META_GET_META_CALL(igAdx)

}
#pragma pop
