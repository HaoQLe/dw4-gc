// igVertexShaderAttr: Alchemy class registration (0x800AC5D0..0x800AC6A0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVertexShaderAttr)

extern "C" {
void fn_800AC6A0(void *,short);
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800AC60C {
    void *__vtable;
    char unknown04[8];
    int unknown0C;
    int unknown10;
    int unknown14;
    int unknown18;
    int unknown1C;
    char unknown20[8];
    int unknown28;
    int unknown2C;
    int unknown30;
    int unknown34;
    char unknown38[8];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVertexShaderAttr)

void *igVertexShaderAttr_vtableRead()
{
    Instance_800AC60C object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igVertexShaderAttr_vtable;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown28 = 0;
    object.unknown2C = 0;
    object.unknown30 = 0;
    object.unknown34 = 0;
    void *result = meta_vtableOf(&object);
    fn_800AC6A0(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
