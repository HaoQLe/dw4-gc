// igTransformSequence: Alchemy class registration (0x801ABA3C..0x801ABB34). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTransformSequence)
META_DECLARE(igTransformSource)

extern "C" {
void fn_801AA6DC();
void *fn_801ABB34();
extern char igTransformSequence_dependencies[16];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTransformSequence)

META_ARK_REGISTER(igTransformSequence)

void igTransformSequence_register()
{
    fn_801AA6DC();
    meta_registerClass(1, &igTransformSequence_meta, igTransformSource_register,
                       fn_801ABB34, igTransformSequence_getMetaCall,
                       igTransformSequence_className, 0x38,
                       0, igTransformSequence_fieldInit, 0, igTransformSequence_dependencies);
}

META_GET_META_CALL(igTransformSequence)

}
#pragma pop
