// igNonRefCountedViewList: Alchemy class registration (0x8010CC44..0x8010CDA4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igNonRefCountedViewList)
META_DECLARE(igDataList)
META_DECLARE(igNonRefCountedObjectList)

extern "C" {
void *fn_80023FDC();
void fn_8010CBD4();
extern char igNonRefCountedViewList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804980C8[];
}

struct Instance_8010CC80_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNonRefCountedViewList)

void *igNonRefCountedViewList_vtableRead()
{
    Instance_8010CC80_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igNonRefCountedObjectList_vtable;
    object.__vtable = lbl_804980C8;
    object.__vtable = igNonRefCountedViewList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNonRefCountedViewList)

void igNonRefCountedViewList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igNonRefCountedViewList_meta, igNonRefCountedObjectList_register,
                       fn_80023FDC, igNonRefCountedViewList_getMetaCall,
                       igNonRefCountedViewList_className, 0x14,
                       igNonRefCountedViewList_vtableRead, 0, 0, igNonRefCountedViewList_dependencies);
}

META_GET_META_CALL(igNonRefCountedViewList)

}
#pragma pop
