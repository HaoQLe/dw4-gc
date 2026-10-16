// beNDMWStatusCtrlDisk: Alchemy class registration (0x80331530..0x8033165C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusCtrlDisk)

extern "C" {
void fn_8033165C(void *, int);
extern char lbl_804E6888[96];
extern char lbl_804E6A60[96];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWStatusCtrlDisk)

META_GET_META(beNDMWStatusCtrlDisk)

#pragma push
#pragma optimize_for_size on
void *beNDMWStatusCtrlDisk_vtableRead()
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
        char unknown68[4];
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
    object.__vtable = beNDMWStatusCtrlDisk_vtable;
    object.unknown58 = 0;
    object.unknown60 = 0;
    object.unknown64 = 0;
    void *result = meta_vtableOf(&object);
    fn_8033165C(&object, -1);   // the class's destructor
    return result;
}
#pragma pop

}
#pragma pop
