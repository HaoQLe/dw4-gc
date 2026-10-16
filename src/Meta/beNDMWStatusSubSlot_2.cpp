// beNDMWStatusSubSlot: Alchemy class registration (0x80332324..0x8033246C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusSubSlot)

extern "C" {
void fn_8033246C(void *, int);
extern char lbl_804E6888[96];
extern char lbl_804E6A60[96];
extern char lbl_804EBF24[168];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWStatusSubSlot)

META_GET_META(beNDMWStatusSubSlot)

void *beNDMWStatusSubSlot_vtableRead()
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
        char unknown50[16];
        int unknown60;
        int unknown64;
        int unknown68;
        int unknown6C;
        int unknown70;
        int unknown74;
        int unknown78;
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804E6A60;
    object.__vtable = lbl_804E6888;
    object.__vtable = lbl_804EBF24;
    object.unknown34 = 0;
    object.unknown38 = 0;
    object.unknown3C = 0;
    object.unknown40 = 0;
    object.unknown44 = 0;
    object.unknown48 = 0;
    object.unknown4C = 0;
    object.unknown60 = 0;
    object.unknown64 = 0;
    object.unknown68 = 0;
    object.unknown6C = 0;
    object.unknown70 = 0;
    object.unknown74 = 0;
    object.unknown78 = 0;
    object.__vtable = beNDMWStatusSubSlot_vtable;
    void *result = meta_vtableOf(&object);
    fn_8033246C(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
