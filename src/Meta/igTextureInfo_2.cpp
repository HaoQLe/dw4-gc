// igTextureInfo: Alchemy class registration (0x800AE618..0x800AE75C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igTextureInfo)
META_DECLARE(igInfo)

extern "C" {
void *fn_800284EC();
void fn_800ABC8C();
void *fn_800BAAC4();
extern char igTextureInfo_dependencies[8];
extern char igTextureInfo_fieldNames[4];
extern char igTextureInfo_fieldOffsets[4];
extern char igTextureInfo_fieldStorage[4];
extern char igTextureInfo_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igTextureInfo)

void igTextureInfo_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureInfo_meta, igInfo_register,
                       fn_800284EC, igTextureInfo_getMetaCall,
                       igTextureInfo_className, 0x18,
                       igTextureInfo_vtableRead, igTextureInfo_fieldInit, 0, igTextureInfo_dependencies);
}

META_GET_META_CALL(igTextureInfo)

void igTextureInfo_fieldInit()
{
    Meta::igMetaObject *meta = igTextureInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *textureListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800BAAC4();
    textureListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    textureListField->_construct = true;
    meta_setupFields(meta, igTextureInfo_fieldNames, igTextureInfo_fieldStorage, igTextureInfo_fieldOffsets, base);
}

}
#pragma pop
