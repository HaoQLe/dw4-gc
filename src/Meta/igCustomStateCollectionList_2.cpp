// igCustomStateCollectionList: Alchemy class registration (0x800D33A8..0x800D3508). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCustomStateCollectionList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800CE2F8();
extern char igCustomStateCollectionList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8049396C[];
}

struct Instance_800D33E4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCustomStateCollectionList)

void *igCustomStateCollectionList_vtableRead()
{
    Instance_800D33E4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8049396C;
    object.__vtable = igCustomStateCollectionList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCustomStateCollectionList)

void igCustomStateCollectionList_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igCustomStateCollectionList_meta, igObjectList_register,
                       fn_80024180, igCustomStateCollectionList_getMetaCall,
                       igCustomStateCollectionList_className, 0x14,
                       igCustomStateCollectionList_vtableRead, 0, 0, igCustomStateCollectionList_dependencies);
}

META_GET_META_CALL(igCustomStateCollectionList)

}
#pragma pop
