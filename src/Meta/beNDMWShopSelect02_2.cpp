// beNDMWShopSelect02: Alchemy class registration (0x8032974C..0x80329878). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopSelect02)

extern "C" {
void fn_80329878(void *, int);
extern char lbl_804E6A60[96];
extern char lbl_804EC398[104];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWShopSelect02)

META_GET_META(beNDMWShopSelect02)

void *beNDMWShopSelect02_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[48];
        int unknown34;
        int unknown38;
        int unknown3C;
        int unknown40;
        int unknown44;
        int unknown48;
        int unknown4C;
        int unknown50;
        char unknown54[24];
        int unknown6C;
        int unknown70;
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804E6A60;
    object.__vtable = lbl_804EC398;
    object.unknown34 = 0;
    object.unknown38 = 0;
    object.unknown3C = 0;
    object.unknown40 = 0;
    object.unknown44 = 0;
    object.unknown48 = 0;
    object.unknown4C = 0;
    object.unknown50 = 0;
    object.unknown6C = 0;
    object.__vtable = beNDMWShopSelect02_vtable;
    object.unknown70 = 0;
    void *result = meta_vtableOf(&object);
    fn_80329878(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
