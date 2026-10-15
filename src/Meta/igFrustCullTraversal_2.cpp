// igFrustCullTraversal: Alchemy class registration (0x801C0D64..0x801C0E28). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFrustCullTraversal)
META_DECLARE(igCommonTraversal)

extern "C" {
void fn_801AA6DC();
void *fn_801C05F8();
void *fn_801C0E28();
void fn_801C0F80();
extern char igFrustCullTraversal_dependencies[12];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igFrustCullTraversal)

void igFrustCullTraversal_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igFrustCullTraversal_meta, igCommonTraversal_register,
                       fn_801C0E28, igFrustCullTraversal_getMetaCall,
                       igFrustCullTraversal_className, 0x230,
                       fn_801C05F8, igFrustCullTraversal_fieldInit, fn_801C0F80, igFrustCullTraversal_dependencies);
}

META_GET_META_CALL(igFrustCullTraversal)

}
#pragma pop
