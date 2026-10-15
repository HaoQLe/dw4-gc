// igAnimationCombinerBoneInfoListList: Alchemy class registration (0x801CB230..0x801CB390). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAnimationCombinerBoneInfoListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igAnimationCombinerBoneInfoListList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B6258[];
}

struct Instance_801CB26C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAnimationCombinerBoneInfoListList)

void *igAnimationCombinerBoneInfoListList_vtableRead()
{
    Instance_801CB26C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B6258;
    object.__vtable = igAnimationCombinerBoneInfoListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationCombinerBoneInfoListList)

void igAnimationCombinerBoneInfoListList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationCombinerBoneInfoListList_meta, igObjectList_register,
                       fn_80024180, igAnimationCombinerBoneInfoListList_getMetaCall,
                       igAnimationCombinerBoneInfoListList_className, 0x14,
                       igAnimationCombinerBoneInfoListList_vtableRead, 0, 0, igAnimationCombinerBoneInfoListList_dependencies);
}

META_GET_META_CALL(igAnimationCombinerBoneInfoListList)

}
#pragma pop
