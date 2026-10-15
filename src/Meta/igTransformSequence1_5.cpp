// igTransformSequence1_5: Alchemy class registration (0x801AB6FC..0x801AB7C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTransformSequence1_5)
META_DECLARE(igTransformSequence)

extern "C" {
void fn_801AA6DC();
void fn_801AB984();
extern char igTransformSequence1_5_dependencies[16];
void *igTransformSequence1_5_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igTransformSequence1_5)

void igTransformSequence1_5_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igTransformSequence1_5_meta, igTransformSequence_register,
                       igTransformSequence1_5_parentMeta, igTransformSequence1_5_getMetaCall,
                       igTransformSequence1_5_className, 0x68,
                       igTransformSequence1_5_vtableRead, igTransformSequence1_5_fieldInit, fn_801AB984, igTransformSequence1_5_dependencies);
}

META_GET_META_CALL(igTransformSequence1_5)

}
#pragma pop
