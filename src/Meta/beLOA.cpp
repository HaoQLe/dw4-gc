// beLOA: Alchemy class registration (0x802D3D38..0x802D3E28). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beLOA)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void fn_802D3E28(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beLOA)
#pragma pop

void *beLOA_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        int unknown0C;
        int unknown10;
        char unknown14[8];
        int unknown1C;
        char unknown20[44];
        int unknown4C;
        int unknown50;
        int unknown54;
        int unknown58;
        char unknown5C[4];
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.__vtable = igNode_vtable;
    object.__vtable = igGroup_vtable;
    object.unknown08 = 0;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown1C = 0;
    object.__vtable = beLOA_vtable;
    object.unknown4C = 0;
    object.unknown50 = 0;
    object.unknown54 = 0;
    object.unknown58 = 0;
    void *result = meta_vtableOf(&object);
    fn_802D3E28(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
