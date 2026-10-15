// igTextureCubeAttr: Alchemy class registration (0x800AED4C..0x800AEE08). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTextureCubeAttr)
META_DECLARE(igTextureAttr)

extern "C" {
void fn_800ABC8C();
extern char igTextureCubeAttr_dependencies[8];
void *igTextureCubeAttr_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igTextureCubeAttr)

void igTextureCubeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureCubeAttr_meta, igTextureAttr_register,
                       igTextureCubeAttr_parentMeta, igTextureCubeAttr_getMetaCall,
                       igTextureCubeAttr_className, 0x68,
                       igTextureCubeAttr_vtableRead, igTextureCubeAttr_fieldInit, 0, igTextureCubeAttr_dependencies);
}

META_GET_META_CALL(igTextureCubeAttr)

}
#pragma pop
