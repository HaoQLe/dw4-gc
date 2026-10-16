// igCompiledGraph: Alchemy class registration (0x801C3088..0x801C3180). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCompiledGraph)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void fn_801C3180(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCompiledGraph)

void *igCompiledGraph_vtableRead()
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
        int unknown28;
        int unknown2C;
        int unknown30;
        char unknown34[4];
        int unknown38;
        int unknown3C;
        int unknown40;
        int unknown44;
        int unknown48;
        char unknown4C[8];
        int unknown54;
        int unknown58;
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.__vtable = igNode_vtable;
    object.__vtable = igGroup_vtable;
    object.unknown08 = 0;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown1C = 0;
    object.__vtable = igCompiledGraph_vtable;
    object.unknown20 = 0;
    object.unknown24 = 0;
    object.unknown28 = 0;
    object.unknown2C = 0;
    object.unknown30 = 0;
    object.unknown38 = 0;
    object.unknown3C = 0;
    object.unknown40 = 0;
    object.unknown44 = 0;
    object.unknown48 = 0;
    object.unknown54 = 0;
    object.unknown58 = 0;
    void *result = meta_vtableOf(&object);
    fn_801C3180(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
