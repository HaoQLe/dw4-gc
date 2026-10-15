// igGeometryList: Alchemy class registration (0x801BFF74..0x801C00D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGeometryList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igGeometryList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B7370[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGeometryList)

void *igGeometryList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B7370;
    object.__vtable = igGeometryList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGeometryList)

void igGeometryList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igGeometryList_meta, igObjectList_register,
                       fn_80024180, igGeometryList_getMetaCall,
                       igGeometryList_className, 0x14,
                       igGeometryList_vtableRead, 0, 0, igGeometryList_dependencies);
}

META_GET_META_CALL(igGeometryList)

}
#pragma pop
