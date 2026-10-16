// ParticleInfo: Alchemy class registration (0x802E8324..0x802E8410). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(ParticleInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)
META_DECLARE(igSceneInfo)

extern "C" {
void fn_802E8410(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(ParticleInfo)

void *ParticleInfo_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        char unknown0C[8];
        int unknown14;
        int unknown18;
        int unknown1C;
        char unknown20[28];
        int unknown3C;
        char unknown40[904];
        int unknown3C8;
        char unknown3CC[44];
        int unknown3F8;
        char unknown3FC[4];
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.__vtable = igInfo_vtable;
    object.__vtable = igSceneInfo_vtable;
    object.unknown08 = 0;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown3C = 0;
    object.__vtable = ParticleInfo_vtable;
    object.unknown3C8 = 0;
    object.unknown3F8 = 0;
    void *result = meta_vtableOf(&object);
    fn_802E8410(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
