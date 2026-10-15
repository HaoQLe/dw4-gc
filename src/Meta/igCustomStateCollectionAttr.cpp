// igCustomStateCollectionAttr: Alchemy class registration (0x800B8848..0x800B8930). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCustomStateCollectionAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCustomStateCollectionAttr)

META_ARK_REGISTER(igCustomStateCollectionAttr)

void igCustomStateCollectionAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(1, &igCustomStateCollectionAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igCustomStateCollectionAttr_getMetaCall,
                       igCustomStateCollectionAttr_className, 0xC,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igCustomStateCollectionAttr)

}
#pragma pop
