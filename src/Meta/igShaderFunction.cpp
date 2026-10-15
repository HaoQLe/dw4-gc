// igShaderFunction: Alchemy class registration (0x801B0D6C..0x801B0E54). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igShaderFunction)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_801AA6DC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igShaderFunction)

META_ARK_REGISTER(igShaderFunction)

void igShaderFunction_register()
{
    fn_801AA6DC();
    meta_registerClass(1, &igShaderFunction_meta, igObject_register,
                       fn_800237D0, igShaderFunction_getMetaCall,
                       igShaderFunction_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igShaderFunction)

}
#pragma pop
