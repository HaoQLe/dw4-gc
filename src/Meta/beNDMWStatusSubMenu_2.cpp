// beNDMWStatusSubMenu: Alchemy class registration (0x80330184..0x803302B0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusSubMenu)

extern "C" {
void fn_803302B0(void *, int);
extern char lbl_804E6888[96];
extern char lbl_804E6A60[96];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWStatusSubMenu)

META_GET_META(beNDMWStatusSubMenu)

void *beNDMWStatusSubMenu_vtableRead()
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
        char unknown50[8];
        int unknown58;
        char unknown5C[4];
        int unknown60;
        int unknown64;
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
    object.__vtable = beNDMWStatusSubMenu_vtable;
    object.unknown58 = 0;
    object.unknown60 = 0;
    object.unknown64 = 0;
    void *result = meta_vtableOf(&object);
    fn_803302B0(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
