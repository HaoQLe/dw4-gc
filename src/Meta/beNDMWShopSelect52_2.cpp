// beNDMWShopSelect52: Alchemy class registration (0x80328E5C..0x80328F84). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopSelect52)

extern "C" {
void fn_80328F84(void *, int);
extern char lbl_804E6A60[96];
extern char lbl_804EC398[104];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWShopSelect52)

META_GET_META(beNDMWShopSelect52)

void *beNDMWShopSelect52_vtableRead()
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
    object.__vtable = beNDMWShopSelect52_vtable;
    void *result = meta_vtableOf(&object);
    fn_80328F84(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
