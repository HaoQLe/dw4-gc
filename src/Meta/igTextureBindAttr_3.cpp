// igTextureBindAttr: Alchemy class registration (0x800AF2F4..0x800AF44C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igTextureBindAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void fn_800AF44C();
void *fn_800AF4A4();
void *fn_800C3A2C(int);
extern char igTextureBindAttr_dependencies[8];
extern char igTextureBindAttr_fieldNames[8];
extern char igTextureBindAttr_fieldOffsets[8];
extern char igTextureBindAttr_fieldStorage[8];
extern char igTextureBindAttr_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igTextureBindAttr)

void igTextureBindAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureBindAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTextureBindAttr_getMetaCall,
                       igTextureBindAttr_className, 0x14,
                       igTextureBindAttr_vtableRead, igTextureBindAttr_fieldInit, fn_800AF44C, igTextureBindAttr_dependencies);
}

META_GET_META_CALL(igTextureBindAttr)

void igTextureBindAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureBindAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureBindAttr_fieldTypes, 2);
    Meta::igObjectRefMetaField *textureField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800AF4A4();
    textureField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C3A2C);
    meta_setupFields(meta, igTextureBindAttr_fieldNames, igTextureBindAttr_fieldStorage, igTextureBindAttr_fieldOffsets, base);
}

}
#pragma pop
