// igGuiComponentNode: Alchemy class registration (0x801113D0..0x8011148C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGuiComponentNode)
META_DECLARE(igGroup)

extern "C" {
void fn_8010CBD4();
void *fn_8011148C();
extern char igGuiComponentNode_dependencies[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igGuiComponentNode)

void igGuiComponentNode_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igGuiComponentNode_meta, igGroup_register,
                       fn_8011148C, igGuiComponentNode_getMetaCall,
                       igGuiComponentNode_className, 0x24,
                       igGuiComponentNode_vtableRead, igGuiComponentNode_fieldInit, 0, igGuiComponentNode_dependencies);
}

META_GET_META_CALL(igGuiComponentNode)

}
#pragma pop
