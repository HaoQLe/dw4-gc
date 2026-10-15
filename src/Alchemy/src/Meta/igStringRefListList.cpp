// igStringRefListList: Alchemy class registration (0x80033B78..0x80033CD8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igStringRefListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igStringRefListList_dependencies[8];
extern char lbl_8047554C[];
extern char lbl_80476E0C[];
}

struct Instance_80033BB4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igStringRefListList)

void *igStringRefListList_vtableRead()
{
    Instance_80033BB4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047554C;
    object.__vtable = igStringRefListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igStringRefListList)

void igStringRefListList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igStringRefListList_meta, igObjectList_register,
                       fn_80024180, igStringRefListList_getMetaCall,
                       igStringRefListList_className, 0x14,
                       igStringRefListList_vtableRead, 0, 0, igStringRefListList_dependencies);
}

META_GET_META_CALL(igStringRefListList)

}
#pragma pop
