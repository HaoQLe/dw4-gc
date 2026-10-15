// igErrorHandler: Alchemy class registration (0x8003119C..0x80031310). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igErrorHandler)
META_DECLARE(igObject)

extern "C" {
void fn_80021B94();
void *fn_800237D0();
void fn_80031310();
void fn_80031338();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igErrorHandler)

META_GET_META(igErrorHandler)

void *igErrorHandler_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
    } object;
    igObject_construct(&object);
    object.__vtable = igErrorHandler_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igErrorHandler)

void igErrorHandler_register()
{
    fn_80021B94();
    meta_registerClass(0, &igErrorHandler_meta, igObject_register,
                       fn_800237D0, igErrorHandler_getMetaCall,
                       igErrorHandler_className, 0x8,
                       igErrorHandler_vtableRead, fn_80031310, fn_80031338, 0);
}

META_GET_META_CALL(igErrorHandler)

}
#pragma pop
