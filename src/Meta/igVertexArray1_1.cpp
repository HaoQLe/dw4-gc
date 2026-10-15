// igVertexArray1_1: Alchemy class registration (0x800CFBCC..0x800CFCFC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVertexArray1_1)
META_DECLARE(igVertexArray)

extern "C" {
void fn_800CE2F8();
void fn_800CFE78();
extern char igVertexArray1_1_dependencies[8];
void *igVertexArray1_1_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVertexArray1_1)

META_GET_META(igVertexArray1_1)

META_ARK_REGISTER(igVertexArray1_1)

void igVertexArray1_1_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igVertexArray1_1_meta, igVertexArray_register,
                       igVertexArray1_1_parentMeta, igVertexArray1_1_getMetaCall,
                       igVertexArray1_1_className, 0x30,
                       0, igVertexArray1_1_fieldInit, fn_800CFE78, igVertexArray1_1_dependencies);
}

META_GET_META_CALL(igVertexArray1_1)

}
#pragma pop
