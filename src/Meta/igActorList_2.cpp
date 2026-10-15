// igActorList: Alchemy class registration (0x801CDD34..0x801CDE94). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igActorList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igActorList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B5848[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igActorList)

void *igActorList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B5848;
    object.__vtable = igActorList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igActorList)

void igActorList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igActorList_meta, igObjectList_register,
                       fn_80024180, igActorList_getMetaCall,
                       igActorList_className, 0x14,
                       igActorList_vtableRead, 0, 0, igActorList_dependencies);
}

META_GET_META_CALL(igActorList)

}
#pragma pop
