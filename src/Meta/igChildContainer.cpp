// igChildContainer: Alchemy class registration (0x80152018..0x80152100). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igChildContainer)
META_DECLARE(igItemBase)

extern "C" {
void fn_8012FC48();
void *fn_8013496C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igChildContainer)

META_ARK_REGISTER(igChildContainer)

void igChildContainer_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igChildContainer_meta, igItemBase_register,
                       fn_8013496C, igChildContainer_getMetaCall,
                       igChildContainer_className, 0x20,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igChildContainer)

}
#pragma pop
