// igInterpretedShader: Alchemy class registration (0x801BE3C4..0x801BE4B4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInterpretedShader)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)
META_DECLARE(igSimpleShader)

extern "C" {
void fn_801BE4B4(void *, int);
extern char lbl_804B3B90[176];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igInterpretedShader)

void *igInterpretedShader_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        int unknown0C;
        int unknown10;
        char unknown14[8];
        int unknown1C;
        char unknown20[4];
        int unknown24;
        int unknown28;
        int unknown2C;
        int unknown30;
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.unknown08 = 0;
    object.__vtable = igNode_vtable;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.__vtable = igGroup_vtable;
    object.unknown1C = 0;
    object.__vtable = lbl_804B3B90;
    object.unknown24 = 0;
    object.unknown28 = 0;
    object.unknown2C = 0;
    object.unknown30 = 0;
    object.__vtable = igSimpleShader_vtable;
    object.__vtable = igInterpretedShader_vtable;
    void *result = meta_vtableOf(&object);
    fn_801BE4B4(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
