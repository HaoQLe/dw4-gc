// igPlanarShadowShader: Alchemy class registration (0x801B617C..0x801B623C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igPlanarShadowShader)
META_DECLARE(igAttrSet)

extern "C" {
void fn_801AA6DC();
void *fn_801B623C();
extern char igPlanarShadowShader_dependencies[32];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igPlanarShadowShader)

void igPlanarShadowShader_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igPlanarShadowShader_meta, igAttrSet_register,
                       fn_801B623C, igPlanarShadowShader_getMetaCall,
                       igPlanarShadowShader_className, 0x70,
                       igPlanarShadowShader_vtableRead, igPlanarShadowShader_fieldInit, 0, igPlanarShadowShader_dependencies);
}

META_GET_META_CALL(igPlanarShadowShader)

}
#pragma pop
