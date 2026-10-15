// igAnimationCombinerBoneInfoPool: Alchemy class registration (0x801CB050..0x801CB1F4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAnimationCombinerBoneInfoPool)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)
META_DECLARE(igObjectPool)

extern "C" {
void fn_801AA6DC();
void *fn_801AF130();
extern char igAnimationCombinerBoneInfoPool_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B6320[];
}

struct Instance_801CB0C4_0 {
    void *__vtable;
    char unknown04[36];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igAnimationCombinerBoneInfoPool)

META_GET_META(igAnimationCombinerBoneInfoPool)

void *igAnimationCombinerBoneInfoPool_vtableRead()
{
    Instance_801CB0C4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = igObjectPool_vtable;
    object.__vtable = lbl_804B6320;
    object.__vtable = igAnimationCombinerBoneInfoPool_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationCombinerBoneInfoPool)

void igAnimationCombinerBoneInfoPool_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationCombinerBoneInfoPool_meta, igObjectPool_register,
                       fn_801AF130, igAnimationCombinerBoneInfoPool_getMetaCall,
                       igAnimationCombinerBoneInfoPool_className, 0x20,
                       igAnimationCombinerBoneInfoPool_vtableRead, 0, 0, igAnimationCombinerBoneInfoPool_dependencies);
}

META_GET_META_CALL(igAnimationCombinerBoneInfoPool)

}
#pragma pop
