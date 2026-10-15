// igNonRefCountedNodeList: Alchemy class registration (0x801B6FE8..0x801B7148). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igNonRefCountedNodeList)
META_DECLARE(igDataList)
META_DECLARE(igNonRefCountedObjectList)

extern "C" {
void *fn_80023FDC();
void fn_801AA6DC();
extern char igNonRefCountedNodeList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B8430[];
}

struct Instance_801B7024_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNonRefCountedNodeList)

void *igNonRefCountedNodeList_vtableRead()
{
    Instance_801B7024_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igNonRefCountedObjectList_vtable;
    object.__vtable = lbl_804B8430;
    object.__vtable = igNonRefCountedNodeList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNonRefCountedNodeList)

void igNonRefCountedNodeList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igNonRefCountedNodeList_meta, igNonRefCountedObjectList_register,
                       fn_80023FDC, igNonRefCountedNodeList_getMetaCall,
                       igNonRefCountedNodeList_className, 0x14,
                       igNonRefCountedNodeList_vtableRead, 0, 0, igNonRefCountedNodeList_dependencies);
}

META_GET_META_CALL(igNonRefCountedNodeList)

}
#pragma pop
