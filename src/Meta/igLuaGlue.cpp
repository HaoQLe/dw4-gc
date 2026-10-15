// igLuaGlue: Alchemy class registration (0x80269648..0x80269774). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLuaGlue)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80269380();
}

struct Instance_80269684_0 {
    void *__vtable;
    char unknown04[4];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLuaGlue)

void *igLuaGlue_vtableRead()
{
    Instance_80269684_0 object;
    igObject_construct(&object);
    object.__vtable = igLuaGlue_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLuaGlue)

void igLuaGlue_register()
{
    fn_80269380();
    meta_registerClass(0, &igLuaGlue_meta, igObject_register,
                       fn_800237D0, igLuaGlue_getMetaCall,
                       igLuaGlue_className, 0x8,
                       igLuaGlue_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igLuaGlue)

}
#pragma pop
