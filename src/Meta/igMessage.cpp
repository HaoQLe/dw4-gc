// igMessage: Alchemy class registration (0x80284AB8..0x80284C00). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMessage)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80284294();
}

struct Instance_80284B04_0 {
    void *__vtable;
    char unknown04[4];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMessage)

void *igMessage_vtableRead()
{
    Instance_80284B04_0 object;
    igObject_construct(&object);
    object.__vtable = igMessage_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMessage)

void igMessage_register()
{
    fn_80284294();
    meta_registerClass(0, &igMessage_meta, igObject_register,
                       fn_800237D0, igMessage_getMetaCall,
                       igMessage_className, 0x8,
                       igMessage_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igMessage)

}
#pragma pop
