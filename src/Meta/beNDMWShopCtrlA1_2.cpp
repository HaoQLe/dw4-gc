// beNDMWShopCtrlA1: Alchemy class registration (0x8032E050..0x8032E178). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopCtrlA1)

extern "C" {
void fn_8032E178(void *, int);
extern char lbl_804E6888[96];
extern char lbl_804E6A60[96];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWShopCtrlA1)

META_GET_META(beNDMWShopCtrlA1)

void *beNDMWShopCtrlA1_vtableRead()
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
        char unknown50[4];
        int unknown54;
        int unknown58;
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804E6A60;
    object.__vtable = lbl_804E6888;
    object.unknown34 = 0;
    object.unknown38 = 0;
    object.unknown3C = 0;
    object.unknown40 = 0;
    object.unknown44 = 0;
    object.unknown48 = 0;
    object.unknown4C = 0;
    object.__vtable = beNDMWShopCtrlA1_vtable;
    object.unknown54 = 0;
    object.unknown58 = 0;
    void *result = meta_vtableOf(&object);
    fn_8032E178(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
