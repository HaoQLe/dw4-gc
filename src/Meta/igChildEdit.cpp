// igChildEdit: Alchemy class registration (0x80151E94..0x80152018). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igChildEdit)
META_DECLARE(igChildContainer)
META_DECLARE(igObject)

extern "C" {
void fn_8012FC48();
void *fn_80135250();
extern char igChildEdit_dependencies[8];
extern char igChildEdit_fieldNames[8];
extern char igChildEdit_fieldOffsets[8];
extern char igChildEdit_fieldStorage[8];
extern char igChildEdit_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igChildEdit)

META_ARK_REGISTER(igChildEdit)

void igChildEdit_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igChildEdit_meta, igChildContainer_register,
                       fn_80135250, igChildEdit_getMetaCall,
                       igChildEdit_className, 0x28,
                       0, igChildEdit_fieldInit, 0, igChildEdit_dependencies);
}

META_GET_META_CALL(igChildEdit)

void igChildEdit_fieldInit()
{
    Meta::igMetaObject *meta = igChildEdit_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igChildEdit_fieldTypes, 2);
    Meta::igObjectRefMetaField *containerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    containerField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igObject_meta);
    Meta::igObjectRefMetaField *childField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    childField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igObject_meta);
    meta_setupFields(meta, igChildEdit_fieldNames, igChildEdit_fieldStorage, igChildEdit_fieldOffsets, base);
}

}
#pragma pop
