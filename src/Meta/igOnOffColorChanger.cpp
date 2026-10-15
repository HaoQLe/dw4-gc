// igOnOffColorChanger: Alchemy class registration (0x80113984..0x80113A34). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igOnOffColorChanger)
META_DECLARE(igBasicColorChanger)

extern "C" {
void fn_8010CBD4();
void *igOnOffColorChanger_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igOnOffColorChanger)

void igOnOffColorChanger_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igOnOffColorChanger_meta, igBasicColorChanger_register,
                       igOnOffColorChanger_parentMeta, igOnOffColorChanger_getMetaCall,
                       igOnOffColorChanger_className, 0x58,
                       igOnOffColorChanger_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igOnOffColorChanger)

}
#pragma pop
