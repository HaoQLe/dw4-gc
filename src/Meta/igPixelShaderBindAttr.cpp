// igPixelShaderBindAttr: Alchemy class registration (0x800B2460..0x800B2678). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igPixelShaderBindAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B2678();
extern char igPixelShaderBindAttr_dependencies[8];
extern char igPixelShaderBindAttr_fieldNames[4];
extern char igPixelShaderBindAttr_fieldOffsets[4];
extern char igPixelShaderBindAttr_fieldStorage[4];
extern char igPixelShaderBindAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igPixelShaderBindAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _pixelShader;
    inline ~igPixelShaderBindAttrInstance() { __vtable = igPixelShaderBindAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPixelShaderBindAttr)

void *igPixelShaderBindAttr_vtableRead()
{
    igPixelShaderBindAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igPixelShaderBindAttr_vtable;
    object._pixelShader._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPixelShaderBindAttr)

void igPixelShaderBindAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igPixelShaderBindAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igPixelShaderBindAttr_getMetaCall,
                       igPixelShaderBindAttr_className, 0x10,
                       igPixelShaderBindAttr_vtableRead, igPixelShaderBindAttr_fieldInit, 0, igPixelShaderBindAttr_dependencies);
}

META_GET_META_CALL(igPixelShaderBindAttr)

void igPixelShaderBindAttr_fieldInit()
{
    Meta::igMetaObject *meta = igPixelShaderBindAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igPixelShaderBindAttr_fieldTypes, 1);
    Meta::igObjectRefMetaField *pixelShaderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800B2678();
    pixelShaderField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igPixelShaderBindAttr_fieldNames, igPixelShaderBindAttr_fieldStorage, igPixelShaderBindAttr_fieldOffsets, base);
}

}
#pragma pop
