// igAnimationTransitionDefinitionList: Alchemy class registration (0x801CC97C..0x801CCADC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAnimationTransitionDefinitionList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igAnimationTransitionDefinitionList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B5D3C[];
}

struct Instance_801CC9B8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAnimationTransitionDefinitionList)

void *igAnimationTransitionDefinitionList_vtableRead()
{
    Instance_801CC9B8_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B5D3C;
    object.__vtable = igAnimationTransitionDefinitionList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationTransitionDefinitionList)

void igAnimationTransitionDefinitionList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationTransitionDefinitionList_meta, igObjectList_register,
                       fn_80024180, igAnimationTransitionDefinitionList_getMetaCall,
                       igAnimationTransitionDefinitionList_className, 0x14,
                       igAnimationTransitionDefinitionList_vtableRead, 0, 0, igAnimationTransitionDefinitionList_dependencies);
}

META_GET_META_CALL(igAnimationTransitionDefinitionList)

}
#pragma pop
