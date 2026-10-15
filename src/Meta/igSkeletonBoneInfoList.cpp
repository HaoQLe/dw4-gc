// igSkeletonBoneInfoList: Alchemy class registration (0x801AFDA0..0x801AFF00). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSkeletonBoneInfoList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igSkeletonBoneInfoList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B92C0[];
}

struct Instance_801AFDDC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSkeletonBoneInfoList)

void *igSkeletonBoneInfoList_vtableRead()
{
    Instance_801AFDDC_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B92C0;
    object.__vtable = igSkeletonBoneInfoList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSkeletonBoneInfoList)

void igSkeletonBoneInfoList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igSkeletonBoneInfoList_meta, igObjectList_register,
                       fn_80024180, igSkeletonBoneInfoList_getMetaCall,
                       igSkeletonBoneInfoList_className, 0x14,
                       igSkeletonBoneInfoList_vtableRead, 0, 0, igSkeletonBoneInfoList_dependencies);
}

META_GET_META_CALL(igSkeletonBoneInfoList)

}
#pragma pop
