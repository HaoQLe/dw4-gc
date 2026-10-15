// igColorChanger: Alchemy class registration (0x80113C94..0x80113DC0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igColorChanger)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8010CBD4();
}

struct Instance_80113CD0_0 {
    void *__vtable;
    char unknown04[4];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igColorChanger)

void *igColorChanger_vtableRead()
{
    Instance_80113CD0_0 object;
    igObject_construct(&object);
    object.__vtable = igColorChanger_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igColorChanger)

void igColorChanger_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igColorChanger_meta, igObject_register,
                       fn_800237D0, igColorChanger_getMetaCall,
                       igColorChanger_className, 0x8,
                       igColorChanger_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igColorChanger)

}
#pragma pop
