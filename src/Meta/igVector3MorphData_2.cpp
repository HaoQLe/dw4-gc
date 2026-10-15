// igVector3MorphData: Alchemy class registration (0x800B3950..0x800B3A10). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVector3MorphData)
META_DECLARE(igMorphData)

extern "C" {
void fn_800ABC8C();
extern char igVector3MorphData_dependencies[20];
void *igVector3MorphData_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igVector3MorphData)

void igVector3MorphData_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVector3MorphData_meta, igMorphData_register,
                       igVector3MorphData_parentMeta, igVector3MorphData_getMetaCall,
                       igVector3MorphData_className, 0x2C,
                       igVector3MorphData_vtableRead, igVector3MorphData_fieldInit, 0, igVector3MorphData_dependencies);
}

META_GET_META_CALL(igVector3MorphData)

}
#pragma pop
