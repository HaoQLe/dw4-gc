// igMorphedGeometryAttr: Alchemy class registration (0x800B35FC..0x800B375C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igMorphedGeometryAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B3D08();
void *fn_800B6C60();
extern char igMorphedGeometryAttr_dependencies[12];
extern char igMorphedGeometryAttr_fieldNames[8];
extern char igMorphedGeometryAttr_fieldOffsets[8];
extern char igMorphedGeometryAttr_fieldStorage[8];
extern char igMorphedGeometryAttr_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igMorphedGeometryAttr)

void igMorphedGeometryAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igMorphedGeometryAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igMorphedGeometryAttr_getMetaCall,
                       igMorphedGeometryAttr_className, 0x14,
                       igMorphedGeometryAttr_vtableRead, igMorphedGeometryAttr_fieldInit, 0, igMorphedGeometryAttr_dependencies);
}

META_GET_META_CALL(igMorphedGeometryAttr)

void igMorphedGeometryAttr_fieldInit()
{
    Meta::igMetaObject *meta = igMorphedGeometryAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMorphedGeometryAttr_fieldTypes, 2);
    Meta::igObjectRefMetaField *geometryField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800B6C60();
    geometryField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *morphListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_800B3D08();
    morphListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    morphListField->_construct = true;
    meta_setupFields(meta, igMorphedGeometryAttr_fieldNames, igMorphedGeometryAttr_fieldStorage, igMorphedGeometryAttr_fieldOffsets, base);
}

}
#pragma pop
