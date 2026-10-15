// igSkinList: Alchemy class registration (0x801AF4D4..0x801AF634). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSkinList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igSkinList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B952C[];
}

struct Instance_801AF510_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSkinList)

void *igSkinList_vtableRead()
{
    Instance_801AF510_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B952C;
    object.__vtable = igSkinList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSkinList)

void igSkinList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igSkinList_meta, igObjectList_register,
                       fn_80024180, igSkinList_getMetaCall,
                       igSkinList_className, 0x14,
                       igSkinList_vtableRead, 0, 0, igSkinList_dependencies);
}

META_GET_META_CALL(igSkinList)

}
#pragma pop
