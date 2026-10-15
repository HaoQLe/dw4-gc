// igInterpretedShader: Alchemy class registration (0x801BE514..0x801BE5D0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInterpretedShader)
META_DECLARE(igSimpleShader)

extern "C" {
void fn_801AA6DC();
void fn_801BE5D8();
extern char igInterpretedShader_dependencies[8];
void *igInterpretedShader_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igInterpretedShader)

void igInterpretedShader_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igInterpretedShader_meta, igSimpleShader_register,
                       igInterpretedShader_parentMeta, igInterpretedShader_getMetaCall,
                       igInterpretedShader_className, 0x34,
                       igInterpretedShader_vtableRead, fn_801BE5D8, 0, igInterpretedShader_dependencies);
}

META_GET_META_CALL(igInterpretedShader)

}
#pragma pop
