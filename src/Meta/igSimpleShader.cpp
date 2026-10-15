// igSimpleShader: Alchemy class registration (0x801B0714..0x801B07D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSimpleShader)
META_DECLARE(igShader2)

extern "C" {
void fn_801AA6DC();
extern char igSimpleShader_dependencies[20];
void *igSimpleShader_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igSimpleShader)

void igSimpleShader_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igSimpleShader_meta, igShader2_register,
                       igSimpleShader_parentMeta, igSimpleShader_getMetaCall,
                       igSimpleShader_className, 0x34,
                       igSimpleShader_vtableRead, igSimpleShader_fieldInit, 0, igSimpleShader_dependencies);
}

META_GET_META_CALL(igSimpleShader)

}
#pragma pop
