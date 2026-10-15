// igTextureMatrixStateAttr: Alchemy class registration (0x800ADE3C..0x800AE040). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>

META_DECLARE(igTextureMatrixStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C4880(int);
extern char igTextureMatrixStateAttr_fieldNames[8];
extern char igTextureMatrixStateAttr_fieldOffsets[8];
extern char igTextureMatrixStateAttr_fieldStorage[8];
extern char igTextureMatrixStateAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTextureMatrixStateAttr)

META_GET_META(igTextureMatrixStateAttr)

void *igTextureMatrixStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureMatrixStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureMatrixStateAttr)

void igTextureMatrixStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureMatrixStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTextureMatrixStateAttr_getMetaCall,
                       igTextureMatrixStateAttr_className, 0x14,
                       igTextureMatrixStateAttr_vtableRead, igTextureMatrixStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igTextureMatrixStateAttr)

void igTextureMatrixStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureMatrixStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureMatrixStateAttr_fieldTypes, 2);
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C4880);
    meta_setupFields(meta, igTextureMatrixStateAttr_fieldNames, igTextureMatrixStateAttr_fieldStorage, igTextureMatrixStateAttr_fieldOffsets, base);
}

}
#pragma pop
