// igOptReplaceNode: Alchemy class registration (0x8013AEFC..0x8013AFE4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igOptReplaceNode)
META_DECLARE(igOptTraverseGraph)

extern "C" {
void fn_8012FC48();
void *fn_8013AFE4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igOptReplaceNode)

META_ARK_REGISTER(igOptReplaceNode)

void igOptReplaceNode_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igOptReplaceNode_meta, igOptTraverseGraph_register,
                       fn_8013AFE4, igOptReplaceNode_getMetaCall,
                       igOptReplaceNode_className, 0x34,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igOptReplaceNode)

}
#pragma pop
