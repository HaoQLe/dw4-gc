// igAttrStackManager: Alchemy class registration (0x801C7DAC..0x801C7E6C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAttrStackManager)

extern "C" {
void fn_801C7E6C(void *,short);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttrStackManager)

void *igAttrStackManager_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[12];
        int unknown10;
        int unknown14;
        int unknown18;
        int unknown1C;
        int unknown20;
        int unknown24;
        int unknown28;
        int unknown2C;
        char unknown30[4];
        int unknown34;
        int unknown38;
        char unknown3C[4];
        int unknown40;
        char unknown44[12];
    } object;
    igObject_construct(&object);
    object.__vtable = igAttrStackManager_vtable;
    object.unknown10 = 0;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown20 = 0;
    object.unknown24 = 0;
    object.unknown28 = 0;
    object.unknown2C = 0;
    object.unknown34 = 0;
    object.unknown38 = 0;
    object.unknown40 = 0;
    void *result = meta_vtableOf(&object);
    fn_801C7E6C(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
