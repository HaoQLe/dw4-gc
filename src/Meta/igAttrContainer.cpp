// igAttrContainer: Alchemy class registration (0x8015377C..0x80153864). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAttrContainer)
META_DECLARE(igItemBase)

extern "C" {
void fn_8012FC48();
void *fn_8013496C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttrContainer)

META_ARK_REGISTER(igAttrContainer)

void igAttrContainer_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igAttrContainer_meta, igItemBase_register,
                       fn_8013496C, igAttrContainer_getMetaCall,
                       igAttrContainer_className, 0x20,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igAttrContainer)

}
#pragma pop
