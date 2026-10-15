// igAnimationSequence: Alchemy class registration (0x801C9CF0..0x801C9DD8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAnimationSequence)
META_DECLARE(igTransformSource)

extern "C" {
void fn_801AA6DC();
void *fn_801ABB34();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAnimationSequence)

META_ARK_REGISTER(igAnimationSequence)

void igAnimationSequence_register()
{
    fn_801AA6DC();
    meta_registerClass(1, &igAnimationSequence_meta, igTransformSource_register,
                       fn_801ABB34, igAnimationSequence_getMetaCall,
                       igAnimationSequence_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igAnimationSequence)

}
#pragma pop
