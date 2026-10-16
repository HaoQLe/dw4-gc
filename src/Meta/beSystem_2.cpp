// beSystem: Alchemy class registration (0x802B73CC..0x802B7548). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSystem)
META_DECLARE(igNamedObject)

extern "C" {
void fn_802B7548(void *, int);
extern char lbl_804CBA60[304];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beSystem)

META_METAOBJECT(beSystem)

META_GET_META(beSystem)

#pragma push
#pragma optimize_for_size on
void *beSystem_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        char unknown0C[36];
        int unknown30;
        int unknown34;
        int unknown38;
        int unknown3C;
        char unknown40[4];
        int unknown44;
        int unknown48;
        int unknown4C;
        int unknown50;
        char unknown54[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.__vtable = lbl_804CBA60;
    object.unknown08 = 0;
    object.__vtable = beSystem_vtable;
    object.unknown30 = 0;
    object.unknown34 = 0;
    object.unknown38 = 0;
    object.unknown3C = 0;
    object.unknown44 = 0;
    object.unknown48 = 0;
    object.unknown4C = 0;
    object.unknown50 = 0;
    void *result = meta_vtableOf(&object);
    fn_802B7548(&object, -1);   // the class's destructor
    return result;
}
#pragma pop

}
#pragma pop
