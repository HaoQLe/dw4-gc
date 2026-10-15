// igSkeletonList: Alchemy class registration (0x801AF954..0x801AFAB4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSkeletonList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igSkeletonList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B9408[];
}

struct Instance_801AF990_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSkeletonList)

void *igSkeletonList_vtableRead()
{
    Instance_801AF990_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B9408;
    object.__vtable = igSkeletonList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSkeletonList)

void igSkeletonList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igSkeletonList_meta, igObjectList_register,
                       fn_80024180, igSkeletonList_getMetaCall,
                       igSkeletonList_className, 0x14,
                       igSkeletonList_vtableRead, 0, 0, igSkeletonList_dependencies);
}

META_GET_META_CALL(igSkeletonList)

}
#pragma pop
