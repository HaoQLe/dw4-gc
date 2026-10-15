// igOptConfiguration: Alchemy class registration (0x8013B7EC..0x8013B918). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igOptConfiguration)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8012FC48();
}

struct Instance_8013B828_0 {
    void *__vtable;
    char unknown04[4];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igOptConfiguration)

void *igOptConfiguration_vtableRead()
{
    Instance_8013B828_0 object;
    igObject_construct(&object);
    object.__vtable = igOptConfiguration_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igOptConfiguration)

void igOptConfiguration_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igOptConfiguration_meta, igObject_register,
                       fn_800237D0, igOptConfiguration_getMetaCall,
                       igOptConfiguration_className, 0x8,
                       igOptConfiguration_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igOptConfiguration)

}
#pragma pop
