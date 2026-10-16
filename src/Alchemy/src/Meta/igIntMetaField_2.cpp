// igIntMetaField: Alchemy class registration (0x8002E390..0x8002E440). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIntMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void *fn_8002E308();
extern char igIntMetaField_dependencies[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igIntMetaField)

void igIntMetaField_register()
{
    meta_registerClass(0, &igIntMetaField_meta, igMetaField_register,
                       fn_80021D70, igIntMetaField_getMetaCall,
                       igIntMetaField_className, 0x34,
                       fn_8002E308, 0, 0, igIntMetaField_dependencies);
}

META_GET_META_CALL(igIntMetaField)

}
#pragma pop
