// beNDMWStatusSelect01: Alchemy class registration (0x8032A43C..0x8032A564). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusSelect01)

extern "C" {
void fn_8032A564(void *, int);
extern char lbl_804E6A60[96];
extern char lbl_804EC398[104];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWStatusSelect01)

META_GET_META(beNDMWStatusSelect01)

void *beNDMWStatusSelect01_vtableRead()
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
    object.__vtable = beNDMWStatusSelect01_vtable;
    void *result = meta_vtableOf(&object);
    fn_8032A564(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
