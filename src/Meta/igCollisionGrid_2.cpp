// igCollisionGrid: Alchemy class registration (0x8028D7D0..0x8028D884). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCollisionGrid)

extern "C" {
void fn_8028D884(void *,short);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCollisionGrid)

void *igCollisionGrid_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        int unknown0C;
        char unknown10[20];
        int unknown24;
        int unknown28;
        int unknown2C;
        int unknown30;
        int unknown34;
        int unknown38;
        char unknown3C[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igCollisionGrid_vtable;
    object.unknown08 = 0;
    object.unknown0C = 0;
    object.unknown24 = 0;
    object.unknown28 = 0;
    object.unknown2C = 0;
    object.unknown30 = 0;
    object.unknown34 = 0;
    object.unknown38 = 0;
    void *result = meta_vtableOf(&object);
    fn_8028D884(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
