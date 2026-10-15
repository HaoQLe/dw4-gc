// igActorInfoList: Alchemy class registration (0x801CD754..0x801CD8B4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igActorInfoList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igActorInfoList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B5974[];
}

struct Instance_801CD790_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igActorInfoList)

void *igActorInfoList_vtableRead()
{
    Instance_801CD790_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B5974;
    object.__vtable = igActorInfoList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igActorInfoList)

void igActorInfoList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igActorInfoList_meta, igObjectList_register,
                       fn_80024180, igActorInfoList_getMetaCall,
                       igActorInfoList_className, 0x14,
                       igActorInfoList_vtableRead, 0, 0, igActorInfoList_dependencies);
}

META_GET_META_CALL(igActorInfoList)

}
#pragma pop
