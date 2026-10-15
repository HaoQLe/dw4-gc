// igIniShaderFactory: Alchemy class registration (0x801BEBEC..0x801BECAC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIniShaderFactory)
META_DECLARE(igShaderFactory)

extern "C" {
void fn_801AA6DC();
extern char igIniShaderFactory_dependencies[20];
void *igIniShaderFactory_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igIniShaderFactory)

void igIniShaderFactory_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igIniShaderFactory_meta, igShaderFactory_register,
                       igIniShaderFactory_parentMeta, igIniShaderFactory_getMetaCall,
                       igIniShaderFactory_className, 0x3C,
                       igIniShaderFactory_vtableRead, igIniShaderFactory_fieldInit, 0, igIniShaderFactory_dependencies);
}

META_GET_META_CALL(igIniShaderFactory)

}
#pragma pop
