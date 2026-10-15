// igMatrixOptStateAttr: Alchemy class registration (0x800B461C..0x800B47E4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMatrixOptStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8003EC68(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
extern char igMatrixOptStateAttr_fieldNames[4];
extern char igMatrixOptStateAttr_fieldOffsets[4];
extern char igMatrixOptStateAttr_fieldStorage[4];
extern char igMatrixOptStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMatrixOptStateAttr)

void *igMatrixOptStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igMatrixOptStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMatrixOptStateAttr)

void igMatrixOptStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igMatrixOptStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igMatrixOptStateAttr_getMetaCall,
                       igMatrixOptStateAttr_className, 0x10,
                       igMatrixOptStateAttr_vtableRead, igMatrixOptStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igMatrixOptStateAttr)

void igMatrixOptStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igMatrixOptStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMatrixOptStateAttr_fieldTypes, 1);
    fn_8003EC68(meta_field(meta, base), 1);
    meta_setupFields(meta, igMatrixOptStateAttr_fieldNames, igMatrixOptStateAttr_fieldStorage, igMatrixOptStateAttr_fieldOffsets, base);
}

}
#pragma pop
