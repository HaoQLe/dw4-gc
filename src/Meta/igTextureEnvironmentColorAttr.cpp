// igTextureEnvironmentColorAttr: Alchemy class registration (0x800BC62C..0x800BC830). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igShortMetaField.h>

META_DECLARE(igTextureEnvironmentColorAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C5AD4(int);
extern char igTextureEnvironmentColorAttr_fieldNames[8];
extern char igTextureEnvironmentColorAttr_fieldOffsets[8];
extern char igTextureEnvironmentColorAttr_fieldStorage[8];
extern char igTextureEnvironmentColorAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTextureEnvironmentColorAttr)

META_GET_META(igTextureEnvironmentColorAttr)

void *igTextureEnvironmentColorAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureEnvironmentColorAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureEnvironmentColorAttr)

void igTextureEnvironmentColorAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureEnvironmentColorAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTextureEnvironmentColorAttr_getMetaCall,
                       igTextureEnvironmentColorAttr_className, 0x14,
                       igTextureEnvironmentColorAttr_vtableRead, igTextureEnvironmentColorAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igTextureEnvironmentColorAttr)

void igTextureEnvironmentColorAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureEnvironmentColorAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureEnvironmentColorAttr_fieldTypes, 2);
    Meta::igShortMetaField *unitIDField = static_cast<Meta::igShortMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C5AD4);
    meta_setupFields(meta, igTextureEnvironmentColorAttr_fieldNames, igTextureEnvironmentColorAttr_fieldStorage, igTextureEnvironmentColorAttr_fieldOffsets, base);
}

}
#pragma pop
