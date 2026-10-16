// beNDMWShopCtrlDigilabo: Alchemy class registration (0x8032D7DC..0x8032D908). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopCtrlDigilabo)

extern "C" {
void fn_8032D908(void *, int);
extern char lbl_804E6888[96];
extern char lbl_804E6A60[96];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWShopCtrlDigilabo)

META_GET_META(beNDMWShopCtrlDigilabo)

void *beNDMWShopCtrlDigilabo_vtableRead()
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
        int unknown5C;
        char unknown60[12];
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
    object.__vtable = beNDMWShopCtrlDigilabo_vtable;
    object.unknown54 = 0;
    object.unknown58 = 0;
    object.unknown5C = 0;
    void *result = meta_vtableOf(&object);
    fn_8032D908(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
