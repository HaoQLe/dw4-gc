// igRefVertexBlendMatrixAttr: Alchemy class registration (0x800B1BB8..0x800B1DE8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igUnsignedShortMetaField.h>

META_DECLARE(igRefVertexBlendMatrixAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C23E4(int);
void *fn_80218120();
extern char igRefVertexBlendMatrixAttr_dependencies[8];
extern char igRefVertexBlendMatrixAttr_fieldNames[8];
extern char igRefVertexBlendMatrixAttr_fieldOffsets[8];
extern char igRefVertexBlendMatrixAttr_fieldStorage[8];
extern char igRefVertexBlendMatrixAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igRefVertexBlendMatrixAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _m;
    char unknown10[16];
    inline ~igRefVertexBlendMatrixAttrInstance() { __vtable = igRefVertexBlendMatrixAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRefVertexBlendMatrixAttr)

void *igRefVertexBlendMatrixAttr_vtableRead()
{
    igRefVertexBlendMatrixAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igRefVertexBlendMatrixAttr_vtable;
    object._m._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRefVertexBlendMatrixAttr)

void igRefVertexBlendMatrixAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igRefVertexBlendMatrixAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igRefVertexBlendMatrixAttr_getMetaCall,
                       igRefVertexBlendMatrixAttr_className, 0x14,
                       igRefVertexBlendMatrixAttr_vtableRead, igRefVertexBlendMatrixAttr_fieldInit, 0, igRefVertexBlendMatrixAttr_dependencies);
}

META_GET_META_CALL(igRefVertexBlendMatrixAttr)

void igRefVertexBlendMatrixAttr_fieldInit()
{
    Meta::igMetaObject *meta = igRefVertexBlendMatrixAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRefVertexBlendMatrixAttr_fieldTypes, 2);
    Meta::igObjectRefMetaField *mField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80218120();
    mField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igUnsignedShortMetaField *blendMatIDField = static_cast<Meta::igUnsignedShortMetaField *>(meta_field(meta, base + 1));
    blendMatIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C23E4);
    meta_setupFields(meta, igRefVertexBlendMatrixAttr_fieldNames, igRefVertexBlendMatrixAttr_fieldStorage, igRefVertexBlendMatrixAttr_fieldOffsets, base);
}

}
#pragma pop
