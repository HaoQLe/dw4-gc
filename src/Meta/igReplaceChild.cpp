// igReplaceChild: Alchemy class registration (0x8013515C..0x80135250). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igReplaceChild)
META_DECLARE(igChildContainer)

extern "C" {
void fn_8012FC48();
void *fn_80135250();
extern char igReplaceChild_dependencies[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igReplaceChild)

META_ARK_REGISTER(igReplaceChild)

void igReplaceChild_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igReplaceChild_meta, igChildContainer_register,
                       fn_80135250, igReplaceChild_getMetaCall,
                       igReplaceChild_className, 0x2C,
                       0, igReplaceChild_fieldInit, 0, igReplaceChild_dependencies);
}

META_GET_META_CALL(igReplaceChild)

}
#pragma pop
