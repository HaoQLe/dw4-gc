// igItemBase: Alchemy class registration (0x80145BA8..0x80145C90). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igItemBase)
META_DECLARE(igBase)

extern "C" {
void fn_8012FC48();
void *fn_8013BA10();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igItemBase)

META_ARK_REGISTER(igItemBase)

void igItemBase_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igItemBase_meta, igBase_register,
                       fn_8013BA10, igItemBase_getMetaCall,
                       igItemBase_className, 0x20,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igItemBase)

}
#pragma pop
