// igFlattenNode: Alchemy class registration (0x80148A38..0x80148B20). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFlattenNode)
META_DECLARE(igCollapseNode)

extern "C" {
void fn_8012FC48();
void *fn_80148B20();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFlattenNode)

META_ARK_REGISTER(igFlattenNode)

void igFlattenNode_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igFlattenNode_meta, igCollapseNode_register,
                       fn_80148B20, igFlattenNode_getMetaCall,
                       igFlattenNode_className, 0x2C,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igFlattenNode)

}
#pragma pop
