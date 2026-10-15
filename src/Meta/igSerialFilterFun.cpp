// igSerialFilterFun: Alchemy class registration (0x8014A6D4..0x8014A7C4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSerialFilterFun)
META_DECLARE(igFilterFun)

extern "C" {
void fn_8012FC48();
void *igSerialFilterFun_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSerialFilterFun)

META_ARK_REGISTER(igSerialFilterFun)

void igSerialFilterFun_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igSerialFilterFun_meta, igFilterFun_register,
                       igSerialFilterFun_parentMeta, igSerialFilterFun_getMetaCall,
                       igSerialFilterFun_className, 0x10,
                       0, igSerialFilterFun_fieldInit, 0, 0);
}

META_GET_META_CALL(igSerialFilterFun)

}
#pragma pop
