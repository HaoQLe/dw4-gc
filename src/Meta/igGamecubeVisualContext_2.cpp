// igGamecubeVisualContext: Alchemy class registration (0x800D6740..0x800D67E0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeVisualContext)
META_DECLARE(igVisualContext)

extern "C" {
void fn_800CE2F8();
void fn_800D67E8();
extern char igGamecubeVisualContext_dependencies[20];
void *igGamecubeVisualContext_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igGamecubeVisualContext)

void igGamecubeVisualContext_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igGamecubeVisualContext_meta, igVisualContext_register,
                       igGamecubeVisualContext_parentMeta, igGamecubeVisualContext_getMetaCall,
                       igGamecubeVisualContext_className, 0x6E8,
                       igGamecubeVisualContext_vtableRead, fn_800D67E8, 0, igGamecubeVisualContext_dependencies);
}

}
#pragma pop
