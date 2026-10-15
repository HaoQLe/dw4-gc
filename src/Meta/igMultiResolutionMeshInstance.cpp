// igMultiResolutionMeshInstance: Alchemy class registration (0x801B8CB0..0x801B8D70). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMultiResolutionMeshInstance)
META_DECLARE(igGeometry)

extern "C" {
void fn_801AA6DC();
void *fn_801B8D70();
extern char igMultiResolutionMeshInstance_dependencies[20];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igMultiResolutionMeshInstance)

void igMultiResolutionMeshInstance_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igMultiResolutionMeshInstance_meta, igGeometry_register,
                       fn_801B8D70, igMultiResolutionMeshInstance_getMetaCall,
                       igMultiResolutionMeshInstance_className, 0x60,
                       igMultiResolutionMeshInstance_vtableRead, igMultiResolutionMeshInstance_fieldInit, 0, igMultiResolutionMeshInstance_dependencies);
}

META_GET_META_CALL(igMultiResolutionMeshInstance)

}
#pragma pop
