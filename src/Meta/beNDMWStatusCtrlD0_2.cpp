// beNDMWStatusCtrlD0: Alchemy class registration (0x803333F0..0x80333524). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusCtrlD0)

extern "C" {
void fn_80333524(void *, int);
extern char lbl_804E6888[96];
extern char lbl_804E6A60[96];
extern char lbl_804EC0D4[108];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWStatusCtrlD0)

META_GET_META(beNDMWStatusCtrlD0)

void *beNDMWStatusCtrlD0_vtableRead()
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
        char unknown50[20];
        int unknown64;
        char unknown68[8];
        int unknown70;
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804E6A60;
    object.__vtable = lbl_804E6888;
    object.__vtable = lbl_804EC0D4;
    object.unknown34 = 0;
    object.unknown38 = 0;
    object.unknown3C = 0;
    object.unknown40 = 0;
    object.unknown44 = 0;
    object.unknown48 = 0;
    object.unknown4C = 0;
    object.__vtable = beNDMWStatusCtrlD0_vtable;
    object.unknown64 = 0;
    object.unknown70 = 0;
    void *result = meta_vtableOf(&object);
    fn_80333524(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
