// igMipMapAttr: Alchemy class registration (0x800B4418..0x800B45E0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igFloatMetaField.h>

META_DECLARE(igMipMapAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8004D4BC(void *,float);
void fn_800ABC8C();
void *fn_800AC294();
extern char igMipMapAttr_fieldNames[8];
extern char igMipMapAttr_fieldOffsets[8];
extern char igMipMapAttr_fieldStorage[8];
extern char igMipMapAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8056681C[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMipMapAttr)

void *igMipMapAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igMipMapAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMipMapAttr)

void igMipMapAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igMipMapAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igMipMapAttr_getMetaCall,
                       igMipMapAttr_className, 0x14,
                       igMipMapAttr_vtableRead, igMipMapAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igMipMapAttr)

void igMipMapAttr_fieldInit()
{
    Meta::igMetaObject *meta = igMipMapAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMipMapAttr_fieldTypes, 2);
    Meta::igFloatMetaField *kField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 1));
    fn_8004D4BC(kField, *reinterpret_cast<float *>(lbl_8056681C + 0));
    meta_setupFields(meta, igMipMapAttr_fieldNames, igMipMapAttr_fieldStorage, igMipMapAttr_fieldOffsets, base);
}

}
#pragma pop
