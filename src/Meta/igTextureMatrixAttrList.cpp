// igTextureMatrixAttrList: Alchemy class registration (0x800AE040..0x800AE1A0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTextureMatrixAttrList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igTextureMatrixAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047E31C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureMatrixAttrList)

void *igTextureMatrixAttrList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047E31C;
    object.__vtable = igTextureMatrixAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureMatrixAttrList)

void igTextureMatrixAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureMatrixAttrList_meta, igObjectList_register,
                       fn_80024180, igTextureMatrixAttrList_getMetaCall,
                       igTextureMatrixAttrList_className, 0x14,
                       igTextureMatrixAttrList_vtableRead, 0, 0, igTextureMatrixAttrList_dependencies);
}

META_GET_META_CALL(igTextureMatrixAttrList)

}
#pragma pop
