// igAnimationBindingList: Alchemy class registration (0x801CBF18..0x801CC078). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAnimationBindingList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igAnimationBindingList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B5F28[];
}

struct Instance_801CBF54_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAnimationBindingList)

void *igAnimationBindingList_vtableRead()
{
    Instance_801CBF54_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B5F28;
    object.__vtable = igAnimationBindingList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationBindingList)

void igAnimationBindingList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationBindingList_meta, igObjectList_register,
                       fn_80024180, igAnimationBindingList_getMetaCall,
                       igAnimationBindingList_className, 0x14,
                       igAnimationBindingList_vtableRead, 0, 0, igAnimationBindingList_dependencies);
}

META_GET_META_CALL(igAnimationBindingList)

}
#pragma pop
