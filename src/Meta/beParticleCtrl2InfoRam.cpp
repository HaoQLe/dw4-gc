// beParticleCtrl2InfoRam: Alchemy class registration (0x802C13B4..0x802C1564). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beParticleCtrl2InfoRam)
META_DECLARE(beBaseInfoRam)

struct beBaseInfoRamInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _dataList;
    inline ~beBaseInfoRamInstance() { __vtable = beBaseInfoRam_vtable; }
};

struct beParticleCtrl2InfoRamInstance : beBaseInfoRamInstance {
    igObjectRefMember _transform;
    igObjectRefMember _particleTimer;
    igObjectRefMember _work;
    inline ~beParticleCtrl2InfoRamInstance() { __vtable = beParticleCtrl2InfoRam_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beParticleCtrl2InfoRam)

#pragma push
#pragma optimize_for_size off
void *beParticleCtrl2InfoRam_vtableRead()
{
    beParticleCtrl2InfoRamInstance object;
    object.__vtable = beBaseInfoRam_vtable;
    object._dataList._value = 0;
    object.__vtable = beParticleCtrl2InfoRam_vtable;
    object._transform._value = 0;
    object._particleTimer._value = 0;
    object._work._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

}
#pragma pop
