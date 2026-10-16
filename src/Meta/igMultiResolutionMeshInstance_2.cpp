// igMultiResolutionMeshInstance: Alchemy class registration (0x801B8914..0x801B8A0C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMultiResolutionMeshInstance)
META_DECLARE(igAttrSet)
META_DECLARE(igGeometry)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void fn_801B8A0C(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMultiResolutionMeshInstance)

void *igMultiResolutionMeshInstance_vtableRead()
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
        char unknown24[4];
        int unknown28;
        int unknown2C;
        int unknown30;
        int unknown34;
        int unknown38;
        char unknown3C[36];
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.unknown08 = 0;
    object.__vtable = igNode_vtable;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.__vtable = igGroup_vtable;
    object.unknown1C = 0;
    object.__vtable = igAttrSet_vtable;
    object.unknown20 = 0;
    object.__vtable = igGeometry_vtable;
    object.unknown28 = 0;
    object.__vtable = igMultiResolutionMeshInstance_vtable;
    object.unknown2C = 0;
    object.unknown30 = 0;
    object.unknown34 = 0;
    object.unknown38 = 0;
    void *result = meta_vtableOf(&object);
    fn_801B8A0C(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
