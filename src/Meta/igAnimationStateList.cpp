// igAnimationStateList: Alchemy class registration (0x801C96A0..0x801C9800). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAnimationStateList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igAnimationStateList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B66F8[];
}

struct Instance_801C96DC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAnimationStateList)

void *igAnimationStateList_vtableRead()
{
    Instance_801C96DC_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B66F8;
    object.__vtable = igAnimationStateList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationStateList)

void igAnimationStateList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationStateList_meta, igObjectList_register,
                       fn_80024180, igAnimationStateList_getMetaCall,
                       igAnimationStateList_className, 0x14,
                       igAnimationStateList_vtableRead, 0, 0, igAnimationStateList_dependencies);
}

META_GET_META_CALL(igAnimationStateList)

}
#pragma pop
