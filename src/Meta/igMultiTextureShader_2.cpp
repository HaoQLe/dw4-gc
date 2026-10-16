// igMultiTextureShader: Alchemy class registration (0x801B7860..0x801B7948). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMultiTextureShader)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)
META_DECLARE(igShader)

extern "C" {
void fn_801B7948(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMultiTextureShader)

void *igMultiTextureShader_vtableRead()
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
        char unknown24[8];
        int unknown2C;
        int unknown30;
        int unknown34;
        char unknown38[12];
        int unknown44;
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.unknown08 = 0;
    object.__vtable = igNode_vtable;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.__vtable = igGroup_vtable;
    object.unknown1C = 0;
    object.__vtable = igShader_vtable;
    object.unknown20 = 0;
    object.unknown2C = 0;
    object.unknown30 = 0;
    object.unknown34 = 0;
    object.__vtable = igMultiTextureShader_vtable;
    object.unknown44 = 0;
    void *result = meta_vtableOf(&object);
    fn_801B7948(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
