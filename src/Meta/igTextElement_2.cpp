// igTextElement: Alchemy class registration (0x8010D32C..0x8010D3EC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTextElement)
META_DECLARE(igGeometryElement)

extern "C" {
void fn_8010CBD4();
extern char igTextElement_dependencies[12];
void *igTextElement_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igTextElement)

void igTextElement_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igTextElement_meta, igGeometryElement_register,
                       igTextElement_parentMeta, igTextElement_getMetaCall,
                       igTextElement_className, 0x38,
                       igTextElement_vtableRead, igTextElement_fieldInit, 0, igTextElement_dependencies);
}

META_GET_META_CALL(igTextElement)

}
#pragma pop
