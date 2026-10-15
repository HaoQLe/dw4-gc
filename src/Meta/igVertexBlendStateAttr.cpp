// igVertexBlendStateAttr: Alchemy class registration (0x800ACD08..0x800ACEBC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVertexBlendStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igVertexBlendStateAttr_fieldNames[4];
extern char igVertexBlendStateAttr_fieldOffsets[4];
extern char igVertexBlendStateAttr_fieldStorage[4];
extern char igVertexBlendStateAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVertexBlendStateAttr)

void *igVertexBlendStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igVertexBlendStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexBlendStateAttr)

void igVertexBlendStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVertexBlendStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igVertexBlendStateAttr_getMetaCall,
                       igVertexBlendStateAttr_className, 0x10,
                       igVertexBlendStateAttr_vtableRead, igVertexBlendStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igVertexBlendStateAttr)

void igVertexBlendStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igVertexBlendStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexBlendStateAttr_fieldTypes, 1);
    meta_setupFields(meta, igVertexBlendStateAttr_fieldNames, igVertexBlendStateAttr_fieldStorage, igVertexBlendStateAttr_fieldOffsets, base);
}

}
#pragma pop
