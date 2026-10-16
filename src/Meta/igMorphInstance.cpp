// igMorphInstance: Alchemy class registration (0x801B9FB8..0x801BA0C4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMorphInstance)
META_DECLARE(igAttrSet)
META_DECLARE(igGeometry)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void fn_801BA0C4(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMorphInstance)

void *igMorphInstance_vtableRead()
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
        int unknown3C;
        int unknown40;
        int unknown44;
        int unknown48;
        int unknown4C;
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
    object.__vtable = igMorphInstance_vtable;
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
    fn_801BA0C4(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
