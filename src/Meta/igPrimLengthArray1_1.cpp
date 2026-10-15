// igPrimLengthArray1_1: Alchemy class registration (0x800D0484..0x800D05C4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igPrimLengthArray1_1)
META_DECLARE(igPrimLengthArray)

extern "C" {
void fn_800CE2F8();
void fn_800D05CC();
void *igPrimLengthArray1_1_parentMeta();
extern char lbl_80491C58[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPrimLengthArray1_1)

void *igPrimLengthArray1_1_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_80491C58;
    object.__vtable = igPrimLengthArray1_1_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPrimLengthArray1_1)

void igPrimLengthArray1_1_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igPrimLengthArray1_1_meta, igPrimLengthArray_register,
                       igPrimLengthArray1_1_parentMeta, igPrimLengthArray1_1_getMetaCall,
                       igPrimLengthArray1_1_className, 0x14,
                       igPrimLengthArray1_1_vtableRead, fn_800D05CC, 0, 0);
}

META_GET_META_CALL(igPrimLengthArray1_1)

}
#pragma pop
