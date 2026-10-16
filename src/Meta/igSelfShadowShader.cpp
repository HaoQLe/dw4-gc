// igSelfShadowShader: Alchemy class registration (0x801B2F5C..0x801B3080). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSelfShadowShader)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void fn_801B3080(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSelfShadowShader)

void *igSelfShadowShader_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        int unknown0C;
        int unknown10;
        char unknown14[8];
        int unknown1C;
        char unknown20[52];
        int unknown54;
        int unknown58;
        int unknown5C;
        int unknown60;
        int unknown64;
        int unknown68;
        char unknown6C[36];
        int unknown90;
        int unknown94;
        int unknown98;
        int unknown9C;
        int unknownA0;
        int unknownA4;
        int unknownA8;
        int unknownAC;
        int unknownB0;
        int unknownB4;
        int unknownB8;
        int unknownBC;
        int unknownC0;
        int unknownC4;
        int unknownC8;
        int unknownCC;
        char unknownD0[20];
        int unknownE4;
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.__vtable = igNode_vtable;
    object.__vtable = igGroup_vtable;
    object.unknown08 = 0;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown1C = 0;
    object.__vtable = igSelfShadowShader_vtable;
    object.unknown54 = 0;
    object.unknown58 = 0;
    object.unknown5C = 0;
    object.unknown60 = 0;
    object.unknown64 = 0;
    object.unknown68 = 0;
    object.unknown90 = 0;
    object.unknown94 = 0;
    object.unknown98 = 0;
    object.unknown9C = 0;
    object.unknownA0 = 0;
    object.unknownA4 = 0;
    object.unknownA8 = 0;
    object.unknownAC = 0;
    object.unknownB0 = 0;
    object.unknownB4 = 0;
    object.unknownB8 = 0;
    object.unknownBC = 0;
    object.unknownC0 = 0;
    object.unknownC4 = 0;
    object.unknownC8 = 0;
    object.unknownCC = 0;
    object.unknownE4 = 0;
    void *result = meta_vtableOf(&object);
    fn_801B3080(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
