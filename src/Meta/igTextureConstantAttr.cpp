// igTextureConstantAttr: Alchemy class registration (0x800BC830..0x800BC9FC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igShortMetaField.h>

META_DECLARE(igTextureConstantAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C5A04(int);
extern char igTextureConstantAttr_fieldNames[8];
extern char igTextureConstantAttr_fieldOffsets[8];
extern char igTextureConstantAttr_fieldStorage[8];
extern char igTextureConstantAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureConstantAttr)

void *igTextureConstantAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureConstantAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureConstantAttr)

void igTextureConstantAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureConstantAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTextureConstantAttr_getMetaCall,
                       igTextureConstantAttr_className, 0x14,
                       igTextureConstantAttr_vtableRead, igTextureConstantAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igTextureConstantAttr)

void igTextureConstantAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureConstantAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureConstantAttr_fieldTypes, 2);
    Meta::igShortMetaField *unitIDField = static_cast<Meta::igShortMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C5A04);
    meta_setupFields(meta, igTextureConstantAttr_fieldNames, igTextureConstantAttr_fieldStorage, igTextureConstantAttr_fieldOffsets, base);
}

}
#pragma pop
