// igVisualContextAttrDefaultManager: Alchemy class registration (0x800ABCC0..0x800ABDC8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVisualContextAttrDefaultManager)

extern "C" {
extern char lbl_8047D514[];
}

struct igVisualContextAttrDefaultManagerInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _visualContext;
    char unknown0C[4];
    inline ~igVisualContextAttrDefaultManagerInstance() { __vtable = igVisualContextAttrDefaultManager_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVisualContextAttrDefaultManager)

META_GET_META(igVisualContextAttrDefaultManager)

void *igVisualContextAttrDefaultManager_vtableRead()
{
    igVisualContextAttrDefaultManagerInstance object;
    object.__vtable = lbl_8047D514;
    object.__vtable = igVisualContextAttrDefaultManager_vtable;
    object._visualContext._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
