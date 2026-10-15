// igTimeTransform1_5: Alchemy class registration (0x801ACC68..0x801ACD20). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTimeTransform1_5)
META_DECLARE(igTimeTransform)

extern "C" {
void fn_801AA6DC();
void *igTimeTransform1_5_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igTimeTransform1_5)

void igTimeTransform1_5_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igTimeTransform1_5_meta, igTimeTransform_register,
                       igTimeTransform1_5_parentMeta, igTimeTransform1_5_getMetaCall,
                       igTimeTransform1_5_className, 0x40,
                       igTimeTransform1_5_vtableRead, igTimeTransform1_5_fieldInit, 0, 0);
}

META_GET_META_CALL(igTimeTransform1_5)

}
#pragma pop
