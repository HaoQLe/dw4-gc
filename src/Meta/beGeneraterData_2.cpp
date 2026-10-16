// beGeneraterData: Alchemy class registration (0x802D74B4..0x802D7588). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beGeneraterData)
META_DECLARE(igNamedObject)

extern "C" {
void fn_802D7588(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beGeneraterData)

void *beGeneraterData_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        char unknown0C[16];
        int unknown1C;
        int unknown20;
        char unknown24[4];
        int unknown28;
        int unknown2C;
        char unknown30[4];
        int unknown34;
        char unknown38[4];
        int unknown3C;
        int unknown40;
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.unknown08 = 0;
    object.__vtable = beGeneraterData_vtable;
    object.unknown1C = 0;
    object.unknown20 = 0;
    object.unknown28 = 0;
    object.unknown2C = 0;
    object.unknown34 = 0;
    object.unknown3C = 0;
    object.unknown40 = 0;
    void *result = meta_vtableOf(&object);
    fn_802D7588(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
