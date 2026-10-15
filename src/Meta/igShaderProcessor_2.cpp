// igShaderProcessor: Alchemy class registration (0x801B0940..0x801B0A6C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igShaderProcessor)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_801AA6DC();
}

struct Instance_801B097C_0 {
    void *__vtable;
    char unknown04[4];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igShaderProcessor)

void *igShaderProcessor_vtableRead()
{
    Instance_801B097C_0 object;
    igObject_construct(&object);
    object.__vtable = igShaderProcessor_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igShaderProcessor)

void igShaderProcessor_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igShaderProcessor_meta, igObject_register,
                       fn_800237D0, igShaderProcessor_getMetaCall,
                       igShaderProcessor_className, 0x8,
                       igShaderProcessor_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igShaderProcessor)

}
#pragma pop
