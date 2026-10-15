// igIterator: Alchemy class registration (0x80143BFC..0x80143CE4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIterator)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8012FC48();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igIterator)

META_ARK_REGISTER(igIterator)

void igIterator_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igIterator_meta, igObject_register,
                       fn_800237D0, igIterator_getMetaCall,
                       igIterator_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igIterator)

}
#pragma pop
