// igModelViewMatrixBoneSelectList: Alchemy class registration (0x801BABD0..0x801BAD30). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igModelViewMatrixBoneSelectList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igModelViewMatrixBoneSelectList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B7BB4[];
}

struct Instance_801BAC0C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igModelViewMatrixBoneSelectList)

void *igModelViewMatrixBoneSelectList_vtableRead()
{
    Instance_801BAC0C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B7BB4;
    object.__vtable = igModelViewMatrixBoneSelectList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igModelViewMatrixBoneSelectList)

void igModelViewMatrixBoneSelectList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igModelViewMatrixBoneSelectList_meta, igObjectList_register,
                       fn_80024180, igModelViewMatrixBoneSelectList_getMetaCall,
                       igModelViewMatrixBoneSelectList_className, 0x14,
                       igModelViewMatrixBoneSelectList_vtableRead, 0, 0, igModelViewMatrixBoneSelectList_dependencies);
}

META_GET_META_CALL(igModelViewMatrixBoneSelectList)

}
#pragma pop
