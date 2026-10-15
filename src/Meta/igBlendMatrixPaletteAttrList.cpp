// igBlendMatrixPaletteAttrList: Alchemy class registration (0x800B9FFC..0x800BA15C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBlendMatrixPaletteAttrList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igBlendMatrixPaletteAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047DBB4[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBlendMatrixPaletteAttrList)

void *igBlendMatrixPaletteAttrList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047DBB4;
    object.__vtable = igBlendMatrixPaletteAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBlendMatrixPaletteAttrList)

void igBlendMatrixPaletteAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igBlendMatrixPaletteAttrList_meta, igObjectList_register,
                       fn_80024180, igBlendMatrixPaletteAttrList_getMetaCall,
                       igBlendMatrixPaletteAttrList_className, 0x14,
                       igBlendMatrixPaletteAttrList_vtableRead, 0, 0, igBlendMatrixPaletteAttrList_dependencies);
}

META_GET_META_CALL(igBlendMatrixPaletteAttrList)

}
#pragma pop
