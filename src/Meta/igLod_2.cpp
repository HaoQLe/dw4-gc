// igLod: Alchemy class registration (0x801BB100..0x801BB1D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLod)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void fn_801BB1D4(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLod)

void *igLod_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        int unknown0C;
        int unknown10;
        char unknown14[8];
        int unknown1C;
        int unknown20;
        int unknown24;
        char unknown28[24];
        int unknown40;
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.__vtable = igNode_vtable;
    object.__vtable = igGroup_vtable;
    object.unknown08 = 0;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown1C = 0;
    object.__vtable = igLod_vtable;
    object.unknown20 = 0;
    object.unknown24 = 0;
    object.unknown40 = 0;
    void *result = meta_vtableOf(&object);
    fn_801BB1D4(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
