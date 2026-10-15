// igCustomMatrixStateList: Alchemy class registration (0x800D51C0..0x800D5358). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCustomMatrixStateList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800CE2F8();
extern char igCustomMatrixStateList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804931CC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igCustomMatrixStateList)

META_GET_META(igCustomMatrixStateList)

void *igCustomMatrixStateList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804931CC;
    object.__vtable = igCustomMatrixStateList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCustomMatrixStateList)

void igCustomMatrixStateList_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igCustomMatrixStateList_meta, igObjectList_register,
                       fn_80024180, igCustomMatrixStateList_getMetaCall,
                       igCustomMatrixStateList_className, 0x14,
                       igCustomMatrixStateList_vtableRead, 0, 0, igCustomMatrixStateList_dependencies);
}

META_GET_META_CALL(igCustomMatrixStateList)

}
#pragma pop
