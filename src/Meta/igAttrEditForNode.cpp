// igAttrEditForNode: Alchemy class registration (0x80153438..0x8015352C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAttrEditForNode)
META_DECLARE(igAttrEdit)

extern "C" {
void fn_8012FC48();
void fn_80153534();
extern char igAttrEditForNode_dependencies[8];
void *igAttrEditForNode_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttrEditForNode)

META_ARK_REGISTER(igAttrEditForNode)

void igAttrEditForNode_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igAttrEditForNode_meta, igAttrEdit_register,
                       igAttrEditForNode_parentMeta, igAttrEditForNode_getMetaCall,
                       igAttrEditForNode_className, 0x28,
                       0, fn_80153534, 0, igAttrEditForNode_dependencies);
}

META_GET_META_CALL(igAttrEditForNode)

}
#pragma pop
