// igVertexShaderBindAttr: Alchemy class registration (0x800AC37C..0x800AC594). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igVertexShaderBindAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800AC594();
extern char igVertexShaderBindAttr_dependencies[8];
extern char igVertexShaderBindAttr_fieldNames[4];
extern char igVertexShaderBindAttr_fieldOffsets[4];
extern char igVertexShaderBindAttr_fieldStorage[4];
extern char igVertexShaderBindAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igVertexShaderBindAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _vertexShader;
    inline ~igVertexShaderBindAttrInstance() { __vtable = igVertexShaderBindAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVertexShaderBindAttr)

void *igVertexShaderBindAttr_vtableRead()
{
    igVertexShaderBindAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igVertexShaderBindAttr_vtable;
    object._vertexShader._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexShaderBindAttr)

void igVertexShaderBindAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVertexShaderBindAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igVertexShaderBindAttr_getMetaCall,
                       igVertexShaderBindAttr_className, 0x10,
                       igVertexShaderBindAttr_vtableRead, igVertexShaderBindAttr_fieldInit, 0, igVertexShaderBindAttr_dependencies);
}

META_GET_META_CALL(igVertexShaderBindAttr)

void igVertexShaderBindAttr_fieldInit()
{
    Meta::igMetaObject *meta = igVertexShaderBindAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexShaderBindAttr_fieldTypes, 1);
    Meta::igObjectRefMetaField *vertexShaderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800AC594();
    vertexShaderField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igVertexShaderBindAttr_fieldNames, igVertexShaderBindAttr_fieldStorage, igVertexShaderBindAttr_fieldOffsets, base);
}

}
#pragma pop
