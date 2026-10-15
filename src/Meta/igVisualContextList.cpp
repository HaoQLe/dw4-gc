// igVisualContextList: Alchemy class registration (0x800CE5B8..0x800CE750). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVisualContextList)
META_DECLARE(igDataList)
META_DECLARE(igNonRefCountedObjectList)

extern "C" {
void *fn_80023FDC();
void fn_800CE2F8();
extern char igVisualContextList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804943FC[];
}

struct Instance_800CE62C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVisualContextList)

META_GET_META(igVisualContextList)

void *igVisualContextList_vtableRead()
{
    Instance_800CE62C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igNonRefCountedObjectList_vtable;
    object.__vtable = lbl_804943FC;
    object.__vtable = igVisualContextList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVisualContextList)

void igVisualContextList_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igVisualContextList_meta, igNonRefCountedObjectList_register,
                       fn_80023FDC, igVisualContextList_getMetaCall,
                       igVisualContextList_className, 0x14,
                       igVisualContextList_vtableRead, 0, 0, igVisualContextList_dependencies);
}

META_GET_META_CALL(igVisualContextList)

}
#pragma pop
