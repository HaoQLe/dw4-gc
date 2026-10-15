// igGamecubeEnvironmentMapShader: Alchemy class registration (0x801CEBB4..0x801CEC54). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeEnvironmentMapShader)
META_DECLARE(igEnvironmentMapShader2)

extern "C" {
void fn_801AA6DC();
extern char igGamecubeEnvironmentMapShader_dependencies[20];
void *igGamecubeEnvironmentMapShader_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igGamecubeEnvironmentMapShader)

void igGamecubeEnvironmentMapShader_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igGamecubeEnvironmentMapShader_meta, igEnvironmentMapShader2_register,
                       igGamecubeEnvironmentMapShader_parentMeta, igGamecubeEnvironmentMapShader_getMetaCall,
                       igGamecubeEnvironmentMapShader_className, 0x88,
                       igGamecubeEnvironmentMapShader_vtableRead, igGamecubeEnvironmentMapShader_fieldInit, 0, igGamecubeEnvironmentMapShader_dependencies);
}

}
#pragma pop
