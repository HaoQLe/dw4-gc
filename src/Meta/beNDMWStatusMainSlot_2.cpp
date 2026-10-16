// beNDMWStatusMainSlot: Alchemy class registration (0x80332920..0x80332A68). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusMainSlot)

extern "C" {
void fn_80332A68(void *, int);
extern char lbl_804E6888[96];
extern char lbl_804E6A60[96];
extern char lbl_804EBF24[168];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWStatusMainSlot)

META_GET_META(beNDMWStatusMainSlot)

void *beNDMWStatusMainSlot_vtableRead()
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
    object.__vtable = beNDMWStatusMainSlot_vtable;
    void *result = meta_vtableOf(&object);
    fn_80332A68(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
