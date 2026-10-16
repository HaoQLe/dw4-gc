// igPlanarShadowShader: Alchemy class registration (0x801B5D38..0x801B5E34). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igPlanarShadowShader)
META_DECLARE(igAttrSet)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void fn_801B5E34(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPlanarShadowShader)

void *igPlanarShadowShader_vtableRead()
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
        char unknown30[32];
        int unknown50;
        int unknown54;
        int unknown58;
        int unknown5C;
        int unknown60;
        int unknown64;
        int unknown68;
        char unknown6C[4];
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
    object.__vtable = igPlanarShadowShader_vtable;
    object.unknown28 = 0;
    object.unknown2C = 0;
    object.unknown50 = 0;
    object.unknown54 = 0;
    object.unknown58 = 0;
    object.unknown5C = 0;
    object.unknown60 = 0;
    object.unknown64 = 0;
    object.unknown68 = 0;
    void *result = meta_vtableOf(&object);
    fn_801B5E34(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
