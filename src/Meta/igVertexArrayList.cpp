// igVertexArrayList: Alchemy class registration (0x800CFE98..0x800D0030). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVertexArrayList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800CE2F8();
extern char igVertexArrayList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_80493FC8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVertexArrayList)

META_GET_META(igVertexArrayList)

void *igVertexArrayList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80493FC8;
    object.__vtable = igVertexArrayList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexArrayList)

void igVertexArrayList_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igVertexArrayList_meta, igObjectList_register,
                       fn_80024180, igVertexArrayList_getMetaCall,
                       igVertexArrayList_className, 0x14,
                       igVertexArrayList_vtableRead, 0, 0, igVertexArrayList_dependencies);
}

META_GET_META_CALL(igVertexArrayList)

}
#pragma pop
