// igMemoryPoolInfo: Alchemy class registration (0x8002B6F4..0x8002B80C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMemoryPoolInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
void fn_8002B80C(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMemoryPoolInfo)

META_GET_META(igMemoryPoolInfo)

void *igMemoryPoolInfo_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        char unknown0C[8];
        int unknown14;
        int unknown18;
        char unknown1C[12];
        int unknown28;
        int unknown2C;
        int unknown30;
        int unknown34;
        int unknown38;
        int unknown3C;
        int unknown40;
        int unknown44;
        int unknown48;
        int unknown4C;
        char unknown50[4];
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.__vtable = igInfo_vtable;
    object.unknown08 = 0;
    object.__vtable = igMemoryPoolInfo_vtable;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown28 = 0;
    object.unknown2C = 0;
    object.unknown30 = 0;
    object.unknown34 = 0;
    object.unknown38 = 0;
    object.unknown3C = 0;
    object.unknown40 = 0;
    object.unknown44 = 0;
    object.unknown48 = 0;
    object.unknown4C = 0;
    void *result = meta_vtableOf(&object);
    fn_8002B80C(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
