// igGeometryListList: Alchemy class registration (0x80147B04..0x80147C64). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGeometryListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igGeometryListList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804A9448[];
}

struct Instance_80147B40_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGeometryListList)

void *igGeometryListList_vtableRead()
{
    Instance_80147B40_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804A9448;
    object.__vtable = igGeometryListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGeometryListList)

void igGeometryListList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igGeometryListList_meta, igObjectList_register,
                       fn_80024180, igGeometryListList_getMetaCall,
                       igGeometryListList_className, 0x14,
                       igGeometryListList_vtableRead, 0, 0, igGeometryListList_dependencies);
}

META_GET_META_CALL(igGeometryListList)

}
#pragma pop
