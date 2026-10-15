// igParticleArray: Alchemy class registration (0x800D0EB8..0x800D1124). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igParticleArray)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_800CE2F8();
void fn_800D1124();
extern char igParticleArray_dependencies[24];
}

struct igParticleArrayInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember unknown08;
    char unknown0C[28];
    igObjectRefMember unknown28;
    igObjectRefMember unknown2C;
    igObjectRefMember unknown30;
    char unknown34[16];
    igObjectRefMember unknown44;
    char unknown48[24];
    inline ~igParticleArrayInstance() { __vtable = igParticleArray_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igParticleArray)

void *igParticleArray_vtableRead()
{
    igParticleArrayInstance object;
    object.__vtable = igParticleArray_vtable;
    object.unknown08._value = 0;
    object.unknown28._value = 0;
    object.unknown2C._value = 0;
    object.unknown30._value = 0;
    object.unknown44._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igParticleArray)

void igParticleArray_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igParticleArray_meta, igObject_register,
                       fn_800237D0, igParticleArray_getMetaCall,
                       igParticleArray_className, 0x5C,
                       igParticleArray_vtableRead, fn_800D1124, 0, igParticleArray_dependencies);
}

META_GET_META_CALL(igParticleArray)

}
#pragma pop
