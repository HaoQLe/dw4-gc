// igBoxModel: Alchemy class registration (0x80114710..0x80114988). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igBoxModel)
META_DECLARE(igGuiComponentModel)
META_DECLARE(igModel)

extern "C" {
void fn_8010CBD4();
void *fn_8010D6A0();
void *fn_80111B38();
extern char igBoxModel_dependencies[8];
extern char igBoxModel_fieldNames[4];
extern char igBoxModel_fieldOffsets[4];
extern char igBoxModel_fieldStorage[4];
extern char igBoxModel_fieldTypes[4];
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

struct igGuiComponentModelInstance : igModelInstance {
    inline ~igGuiComponentModelInstance() { __vtable = igGuiComponentModel_vtable; }
};

struct igBoxModelInstance : igGuiComponentModelInstance {
    char unknown0C[24];
    igObjectRefMember _children;
    char unknown28[8];
    inline ~igBoxModelInstance() { __vtable = igBoxModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBoxModel)

void *igBoxModel_vtableRead()
{
    igBoxModelInstance object;
    object.__vtable = igModel_vtable;
    object._views._value = 0;
    object.__vtable = igGuiComponentModel_vtable;
    object.__vtable = igBoxModel_vtable;
    object._children._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBoxModel)

void igBoxModel_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igBoxModel_meta, igGuiComponentModel_register,
                       fn_8010D6A0, igBoxModel_getMetaCall,
                       igBoxModel_className, 0x28,
                       igBoxModel_vtableRead, igBoxModel_fieldInit, 0, igBoxModel_dependencies);
}

META_GET_META_CALL(igBoxModel)

void igBoxModel_fieldInit()
{
    Meta::igMetaObject *meta = igBoxModel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBoxModel_fieldTypes, 1);
    Meta::igObjectRefMetaField *childrenField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80111B38();
    childrenField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    childrenField->_construct = true;
    meta_setupFields(meta, igBoxModel_fieldNames, igBoxModel_fieldStorage, igBoxModel_fieldOffsets, base);
}

}
#pragma pop
