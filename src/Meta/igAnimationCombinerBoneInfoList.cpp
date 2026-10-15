// igAnimationCombinerBoneInfoList: Alchemy class registration (0x801CB390..0x801CB528). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAnimationCombinerBoneInfoList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igAnimationCombinerBoneInfoList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B6190[];
}

struct Instance_801CB404_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igAnimationCombinerBoneInfoList)

META_GET_META(igAnimationCombinerBoneInfoList)

void *igAnimationCombinerBoneInfoList_vtableRead()
{
    Instance_801CB404_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B6190;
    object.__vtable = igAnimationCombinerBoneInfoList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationCombinerBoneInfoList)

void igAnimationCombinerBoneInfoList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationCombinerBoneInfoList_meta, igObjectList_register,
                       fn_80024180, igAnimationCombinerBoneInfoList_getMetaCall,
                       igAnimationCombinerBoneInfoList_className, 0x14,
                       igAnimationCombinerBoneInfoList_vtableRead, 0, 0, igAnimationCombinerBoneInfoList_dependencies);
}

META_GET_META_CALL(igAnimationCombinerBoneInfoList)

}
#pragma pop
