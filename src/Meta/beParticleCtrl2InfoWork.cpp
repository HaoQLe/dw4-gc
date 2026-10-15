// beParticleCtrl2InfoWork: Alchemy class registration (0x802C176C..0x802C18D8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beParticleCtrl2InfoWork)

struct beParticleCtrl2InfoWorkInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _positionLockNode;
    char unknown0C[20];
    inline ~beParticleCtrl2InfoWorkInstance() { __vtable = beParticleCtrl2InfoWork_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beParticleCtrl2InfoWork)

META_METAOBJECT(beParticleCtrl2InfoWork)

META_GET_META(beParticleCtrl2InfoWork)

#pragma push
#pragma optimize_for_size on
void *beParticleCtrl2InfoWork_vtableRead()
{
    beParticleCtrl2InfoWorkInstance object;
    object.__vtable = beParticleCtrl2InfoWork_vtable;
    object._positionLockNode._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

}
#pragma pop
