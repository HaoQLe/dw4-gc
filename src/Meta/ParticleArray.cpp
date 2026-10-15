// ParticleArray: Alchemy class registration (0x802E7838..0x802E7B3C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(ParticleArray)
META_DECLARE(igParticleArray)

extern "C" {
extern char ParticleArray_dependencies[8];
void *ParticleArray_parentMeta();
void fn_802B1AC8();
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
    inline ~igParticleArrayInstance() { __vtable = igParticleArray_vtable; }
};

struct ParticleArrayInstance : igParticleArrayInstance {
    char unknown48[40];
    igObjectRefMember _vertexArray1;
    igObjectRefMember _vertexArray2;
    char unknown78[16];
    inline ~ParticleArrayInstance() { __vtable = ParticleArray_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(ParticleArray)
#pragma pop

#pragma push
#pragma use_lmw_stmw on
void *ParticleArray_vtableRead()
{
    ParticleArrayInstance object;
    object.__vtable = igParticleArray_vtable;
    object.unknown08._value = 0;
    object.unknown28._value = 0;
    object.unknown2C._value = 0;
    object.unknown30._value = 0;
    object.unknown44._value = 0;
    object.__vtable = ParticleArray_vtable;
    object._vertexArray1._value = 0;
    object._vertexArray2._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(ParticleArray)

void ParticleArray_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &ParticleArray_meta, igParticleArray_register,
                       ParticleArray_parentMeta, ParticleArray_getMetaCall,
                       ParticleArray_className, 0x7C,
                       ParticleArray_vtableRead, ParticleArray_fieldInit, 0, ParticleArray_dependencies);
}

META_GET_META_CALL(ParticleArray)

}
#pragma pop
