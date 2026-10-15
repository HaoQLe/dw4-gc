// igParticleFormat: Alchemy class registration (0x800D13A0..0x800D14D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igParticleFormat)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_800CE2F8();
void fn_800D14D4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igParticleFormat)

void *igParticleFormat_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[52];
    } object;
    igObject_construct(&object);
    object.__vtable = igParticleFormat_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igParticleFormat)

void igParticleFormat_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igParticleFormat_meta, igObject_register,
                       fn_800237D0, igParticleFormat_getMetaCall,
                       igParticleFormat_className, 0x30,
                       igParticleFormat_vtableRead, fn_800D14D4, 0, 0);
}

META_GET_META_CALL(igParticleFormat)

}
#pragma pop
