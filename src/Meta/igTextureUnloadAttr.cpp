// igTextureUnloadAttr: Alchemy class registration (0x800ADA0C..0x800ADBFC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igTextureUnloadAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800AF4A4();
void *fn_800C4B28(int);
extern char igTextureUnloadAttr_dependencies[8];
extern char igTextureUnloadAttr_fieldNames[8];
extern char igTextureUnloadAttr_fieldOffsets[8];
extern char igTextureUnloadAttr_fieldStorage[8];
extern char igTextureUnloadAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureUnloadAttr)

void *igTextureUnloadAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureUnloadAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureUnloadAttr)

void igTextureUnloadAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureUnloadAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTextureUnloadAttr_getMetaCall,
                       igTextureUnloadAttr_className, 0x14,
                       igTextureUnloadAttr_vtableRead, igTextureUnloadAttr_fieldInit, 0, igTextureUnloadAttr_dependencies);
}

META_GET_META_CALL(igTextureUnloadAttr)

void igTextureUnloadAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureUnloadAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureUnloadAttr_fieldTypes, 2);
    Meta::igObjectRefMetaField *textureField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800AF4A4();
    textureField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    textureField->_refCounted = false;
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C4B28);
    meta_setupFields(meta, igTextureUnloadAttr_fieldNames, igTextureUnloadAttr_fieldStorage, igTextureUnloadAttr_fieldOffsets, base);
}

}
#pragma pop
