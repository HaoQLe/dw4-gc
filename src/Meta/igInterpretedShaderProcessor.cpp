// igInterpretedShaderProcessor: Alchemy class registration (0x801BDE9C..0x801BE00C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInterpretedShaderProcessor)
META_DECLARE(igShaderProcessor)

extern "C" {
void fn_801AA6DC();
void *fn_801AD7BC();
}

struct Instance_801BDF10_0 {
    void *__vtable;
    char unknown04[4];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igInterpretedShaderProcessor)

META_GET_META(igInterpretedShaderProcessor)

void *igInterpretedShaderProcessor_vtableRead()
{
    Instance_801BDF10_0 object;
    igObject_construct(&object);
    object.__vtable = igShaderProcessor_vtable;
    object.__vtable = igInterpretedShaderProcessor_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInterpretedShaderProcessor)

void igInterpretedShaderProcessor_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igInterpretedShaderProcessor_meta, igShaderProcessor_register,
                       fn_801AD7BC, igInterpretedShaderProcessor_getMetaCall,
                       igInterpretedShaderProcessor_className, 0x8,
                       igInterpretedShaderProcessor_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igInterpretedShaderProcessor)

}
#pragma pop
