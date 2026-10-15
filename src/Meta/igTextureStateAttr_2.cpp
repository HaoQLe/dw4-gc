// igTextureStateAttr: Alchemy class registration (0x800ADC70..0x800ADE3C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>

META_DECLARE(igTextureStateAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C49B4(int);
extern char igTextureStateAttr_fieldNames[8];
extern char igTextureStateAttr_fieldOffsets[8];
extern char igTextureStateAttr_fieldStorage[8];
extern char igTextureStateAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureStateAttr)

void *igTextureStateAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureStateAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureStateAttr)

void igTextureStateAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureStateAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTextureStateAttr_getMetaCall,
                       igTextureStateAttr_className, 0x14,
                       igTextureStateAttr_vtableRead, igTextureStateAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igTextureStateAttr)

void igTextureStateAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureStateAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureStateAttr_fieldTypes, 2);
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C49B4);
    meta_setupFields(meta, igTextureStateAttr_fieldNames, igTextureStateAttr_fieldStorage, igTextureStateAttr_fieldOffsets, base);
}

}
#pragma pop
