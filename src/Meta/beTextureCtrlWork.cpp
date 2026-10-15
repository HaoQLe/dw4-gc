// beTextureCtrlWork: Alchemy class registration (0x802B6C84..0x802B6FC0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beTextureCtrlWork)
META_DECLARE(igObject)

extern "C" {
extern char beTextureCtrlWork_dependencies[8];
extern char beTextureCtrlWork_fieldNames[];
extern char beTextureCtrlWork_fieldOffsets[];
extern char beTextureCtrlWork_fieldStorage[];
extern char beTextureCtrlWork_fieldTypes[];
void *fn_800237D0();
void *fn_80029A5C();
void fn_802B1AC8();
}

struct beTextureCtrlWorkInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _textureList;
    igObjectRefMember _attributeList;
    inline ~beTextureCtrlWorkInstance() { __vtable = beTextureCtrlWork_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beTextureCtrlWork)

META_METAOBJECT(beTextureCtrlWork)

META_GET_META(beTextureCtrlWork)

#pragma push
#pragma optimize_for_size on
void *beTextureCtrlWork_vtableRead()
{
    beTextureCtrlWorkInstance object;
    object.__vtable = beTextureCtrlWork_vtable;
    object._textureList._value = 0;
    object._attributeList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beTextureCtrlWork)

void beTextureCtrlWork_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beTextureCtrlWork_meta, igObject_register,
                       fn_800237D0, beTextureCtrlWork_getMetaCall,
                       beTextureCtrlWork_className, 0x10,
                       beTextureCtrlWork_vtableRead, beTextureCtrlWork_fieldInit, 0, beTextureCtrlWork_dependencies);
}

META_GET_META_CALL(beTextureCtrlWork)

void beTextureCtrlWork_fieldInit()
{
    Meta::igMetaObject *meta = beTextureCtrlWork_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beTextureCtrlWork_fieldTypes, 2);
    Meta::igObjectRefMetaField *textureListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80029A5C();
    textureListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    textureListField->_construct = true;
    Meta::igObjectRefMetaField *attributeListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_80029A5C();
    attributeListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    attributeListField->_construct = true;
    meta_setupFields(meta, beTextureCtrlWork_fieldNames, beTextureCtrlWork_fieldStorage, beTextureCtrlWork_fieldOffsets, base);
}

}
#pragma pop
