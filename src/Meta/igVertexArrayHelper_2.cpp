// igVertexArrayHelper: Alchemy class registration (0x801AA784..0x801AA8B0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVertexArrayHelper)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_801AA6DC();
}

struct Instance_801AA7C0_0 {
    void *__vtable;
    char unknown04[4];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVertexArrayHelper)

void *igVertexArrayHelper_vtableRead()
{
    Instance_801AA7C0_0 object;
    igObject_construct(&object);
    object.__vtable = igVertexArrayHelper_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexArrayHelper)

void igVertexArrayHelper_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igVertexArrayHelper_meta, igObject_register,
                       fn_800237D0, igVertexArrayHelper_getMetaCall,
                       igVertexArrayHelper_className, 0x8,
                       igVertexArrayHelper_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igVertexArrayHelper)

}
#pragma pop
