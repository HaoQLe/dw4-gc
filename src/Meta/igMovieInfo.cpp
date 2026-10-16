// igMovieInfo: Alchemy class registration (0x802AC790..0x802AC8B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMovieInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
void fn_802AC8B8(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMovieInfo)

META_GET_META(igMovieInfo)

void *igMovieInfo_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        char unknown0C[8];
        int unknown14;
        char unknown18[24];
        int unknown30;
        char unknown34[16];
        int unknown44;
        int unknown48;
        char unknown4C[4];
        int unknown50;
        int unknown54;
        int unknown58;
        char unknown5C[4];
        int unknown60;
        char unknown64[4];
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.__vtable = igInfo_vtable;
    object.unknown08 = 0;
    object.__vtable = igMovieInfo_vtable;
    object.unknown14 = 0;
    object.unknown30 = 0;
    object.unknown44 = 0;
    object.unknown48 = 0;
    object.unknown50 = 0;
    object.unknown54 = 0;
    object.unknown58 = 0;
    object.unknown60 = 0;
    void *result = meta_vtableOf(&object);
    fn_802AC8B8(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
