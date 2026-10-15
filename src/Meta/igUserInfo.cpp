// igUserInfo: Alchemy class registration (0x801AA8EC..0x801AAA78). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igUserInfo)
META_DECLARE(igGroup)

extern "C" {
void *fn_8011148C();
void fn_801AA6DC();
void *fn_801B45F8();
extern char igUserInfo_dependencies[8];
extern char igUserInfo_fieldNames[4];
extern char igUserInfo_fieldOffsets[4];
extern char igUserInfo_fieldStorage[4];
extern char igUserInfo_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igUserInfo)

META_ARK_REGISTER(igUserInfo)

void igUserInfo_register()
{
    fn_801AA6DC();
    meta_registerClass(1, &igUserInfo_meta, igGroup_register,
                       fn_8011148C, igUserInfo_getMetaCall,
                       igUserInfo_className, 0x24,
                       0, igUserInfo_fieldInit, 0, igUserInfo_dependencies);
}

META_GET_META_CALL(igUserInfo)

void igUserInfo_fieldInit()
{
    Meta::igMetaObject *meta = igUserInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igUserInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *propertyListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801B45F8();
    propertyListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    propertyListField->_construct = true;
    propertyListField->_deepCopyMethod = 0;
    propertyListField->_shallowCopyMethod = 2;
    meta_setupFields(meta, igUserInfo_fieldNames, igUserInfo_fieldStorage, igUserInfo_fieldOffsets, base);
}

}
#pragma pop
