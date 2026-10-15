// igVisualContextAttrDefaultManager: Alchemy class registration (0x800ABE3C..0x800ABEF8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVisualContextAttrDefaultManager)
META_DECLARE(igAttrDefaultManager)

extern "C" {
void fn_800ABC8C();
void *fn_800ABEF8();
extern char igVisualContextAttrDefaultManager_dependencies[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igVisualContextAttrDefaultManager)

void igVisualContextAttrDefaultManager_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVisualContextAttrDefaultManager_meta, igAttrDefaultManager_register,
                       fn_800ABEF8, igVisualContextAttrDefaultManager_getMetaCall,
                       igVisualContextAttrDefaultManager_className, 0xC,
                       igVisualContextAttrDefaultManager_vtableRead, igVisualContextAttrDefaultManager_fieldInit, 0, igVisualContextAttrDefaultManager_dependencies);
}

META_GET_META_CALL(igVisualContextAttrDefaultManager)

}
#pragma pop
