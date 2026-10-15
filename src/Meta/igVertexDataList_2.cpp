// igVertexDataList: Alchemy class registration (0x800CF714..0x800CF874). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVertexDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800CE2F8();
extern char igVertexDataList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804940EC[];
}

struct Instance_800CF750_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVertexDataList)

void *igVertexDataList_vtableRead()
{
    Instance_800CF750_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804940EC;
    object.__vtable = igVertexDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexDataList)

void igVertexDataList_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igVertexDataList_meta, igObjectList_register,
                       fn_80024180, igVertexDataList_getMetaCall,
                       igVertexDataList_className, 0x14,
                       igVertexDataList_vtableRead, 0, 0, igVertexDataList_dependencies);
}

META_GET_META_CALL(igVertexDataList)

}
#pragma pop
