// igFilterFun: Alchemy class registration (0x8014A870..0x8014A958). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFilterFun)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8012FC48();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFilterFun)

META_ARK_REGISTER(igFilterFun)

void igFilterFun_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igFilterFun_meta, igObject_register,
                       fn_800237D0, igFilterFun_getMetaCall,
                       igFilterFun_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igFilterFun)

}
#pragma pop
