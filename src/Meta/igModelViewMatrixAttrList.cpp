// igModelViewMatrixAttrList: Alchemy class registration (0x800B3FC8..0x800B4128). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igModelViewMatrixAttrList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igModelViewMatrixAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047DE0C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igModelViewMatrixAttrList)

void *igModelViewMatrixAttrList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047DE0C;
    object.__vtable = igModelViewMatrixAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igModelViewMatrixAttrList)

void igModelViewMatrixAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igModelViewMatrixAttrList_meta, igObjectList_register,
                       fn_80024180, igModelViewMatrixAttrList_getMetaCall,
                       igModelViewMatrixAttrList_className, 0x14,
                       igModelViewMatrixAttrList_vtableRead, 0, 0, igModelViewMatrixAttrList_dependencies);
}

META_GET_META_CALL(igModelViewMatrixAttrList)

}
#pragma pop
