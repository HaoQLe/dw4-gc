// igAnimationTransitionPointList: Alchemy class registration (0x801CCDA4..0x801CCF04). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAnimationTransitionPointList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igAnimationTransitionPointList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B5C18[];
}

struct Instance_801CCDE0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAnimationTransitionPointList)

void *igAnimationTransitionPointList_vtableRead()
{
    Instance_801CCDE0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B5C18;
    object.__vtable = igAnimationTransitionPointList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationTransitionPointList)

void igAnimationTransitionPointList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationTransitionPointList_meta, igObjectList_register,
                       fn_80024180, igAnimationTransitionPointList_getMetaCall,
                       igAnimationTransitionPointList_className, 0x14,
                       igAnimationTransitionPointList_vtableRead, 0, 0, igAnimationTransitionPointList_dependencies);
}

META_GET_META_CALL(igAnimationTransitionPointList)

}
#pragma pop
