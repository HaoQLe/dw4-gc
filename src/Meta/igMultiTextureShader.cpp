// igMultiTextureShader: Alchemy class registration (0x801B79DC..0x801B7A98). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMultiTextureShader)
META_DECLARE(igShader)

extern "C" {
void fn_801AA6DC();
extern char igMultiTextureShader_dependencies[8];
void *igMultiTextureShader_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igMultiTextureShader)

void igMultiTextureShader_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igMultiTextureShader_meta, igShader_register,
                       igMultiTextureShader_parentMeta, igMultiTextureShader_getMetaCall,
                       igMultiTextureShader_className, 0x48,
                       igMultiTextureShader_vtableRead, igMultiTextureShader_fieldInit, 0, igMultiTextureShader_dependencies);
}

META_GET_META_CALL(igMultiTextureShader)

}
#pragma pop
