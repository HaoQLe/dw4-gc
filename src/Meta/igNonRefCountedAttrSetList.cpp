// igNonRefCountedAttrSetList: Alchemy class registration (0x801C8858..0x801C89B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igNonRefCountedAttrSetList)
META_DECLARE(igDataList)
META_DECLARE(igNonRefCountedObjectList)

extern "C" {
void *fn_80023FDC();
void fn_801AA6DC();
extern char igNonRefCountedAttrSetList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B69AC[];
}

struct Instance_801C8894_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNonRefCountedAttrSetList)

void *igNonRefCountedAttrSetList_vtableRead()
{
    Instance_801C8894_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igNonRefCountedObjectList_vtable;
    object.__vtable = lbl_804B69AC;
    object.__vtable = igNonRefCountedAttrSetList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNonRefCountedAttrSetList)

void igNonRefCountedAttrSetList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igNonRefCountedAttrSetList_meta, igNonRefCountedObjectList_register,
                       fn_80023FDC, igNonRefCountedAttrSetList_getMetaCall,
                       igNonRefCountedAttrSetList_className, 0x14,
                       igNonRefCountedAttrSetList_vtableRead, 0, 0, igNonRefCountedAttrSetList_dependencies);
}

META_GET_META_CALL(igNonRefCountedAttrSetList)

}
#pragma pop
