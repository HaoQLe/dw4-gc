// igReplaceAttr: Alchemy class registration (0x80135878..0x80135970). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igReplaceAttr)
META_DECLARE(igAttrContainer)

extern "C" {
void fn_8012FC48();
void *fn_80135970();
extern char igReplaceAttr_dependencies[12];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igReplaceAttr)

META_ARK_REGISTER(igReplaceAttr)

void igReplaceAttr_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igReplaceAttr_meta, igAttrContainer_register,
                       fn_80135970, igReplaceAttr_getMetaCall,
                       igReplaceAttr_className, 0x2C,
                       0, igReplaceAttr_fieldInit, 0, igReplaceAttr_dependencies);
}

META_GET_META_CALL(igReplaceAttr)

}
#pragma pop
