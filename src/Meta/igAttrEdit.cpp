// igAttrEdit: Alchemy class registration (0x801535EC..0x8015377C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igAttrEdit)
META_DECLARE(igAttrContainer)

extern "C" {
void *fn_800BB7B8();
void fn_8012FC48();
void *fn_80135970();
void *fn_801B74F0();
extern char igAttrEdit_dependencies[12];
extern char igAttrEdit_fieldNames[8];
extern char igAttrEdit_fieldOffsets[8];
extern char igAttrEdit_fieldStorage[8];
extern char igAttrEdit_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttrEdit)

META_ARK_REGISTER(igAttrEdit)

void igAttrEdit_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igAttrEdit_meta, igAttrContainer_register,
                       fn_80135970, igAttrEdit_getMetaCall,
                       igAttrEdit_className, 0x28,
                       0, igAttrEdit_fieldInit, 0, igAttrEdit_dependencies);
}

META_GET_META_CALL(igAttrEdit)

void igAttrEdit_fieldInit()
{
    Meta::igMetaObject *meta = igAttrEdit_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAttrEdit_fieldTypes, 2);
    Meta::igObjectRefMetaField *containerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801B74F0();
    containerField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *attrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_800BB7B8();
    attrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    meta_setupFields(meta, igAttrEdit_fieldNames, igAttrEdit_fieldStorage, igAttrEdit_fieldOffsets, base);
}

}
#pragma pop
