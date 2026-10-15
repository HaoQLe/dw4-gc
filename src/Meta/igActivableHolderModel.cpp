// igActivableHolderModel: Alchemy class registration (0x8011573C..0x801159FC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igActivableHolderModel)
META_DECLARE(igGuiComponentModel)
META_DECLARE(igModel)
META_DECLARE(igSimpleChildHolderModel)

extern "C" {
void fn_8010CBD4();
void *fn_8010DD30();
void *fn_80111CD4();
extern char igActivableHolderModel_dependencies[8];
extern char igActivableHolderModel_fieldNames[8];
extern char igActivableHolderModel_fieldOffsets[8];
extern char igActivableHolderModel_fieldStorage[8];
extern char igActivableHolderModel_fieldTypes[8];
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

struct igGuiComponentModelInstance : igModelInstance {
    inline ~igGuiComponentModelInstance() { __vtable = igGuiComponentModel_vtable; }
};

struct igSimpleChildHolderModelInstance : igGuiComponentModelInstance {
    char unknown0C[24];
    igObjectRefMember _child;
    inline ~igSimpleChildHolderModelInstance() { __vtable = igSimpleChildHolderModel_vtable; }
};

struct igActivableHolderModelInstance : igSimpleChildHolderModelInstance {
    char unknown28[12];
    igObjectRefMember _activer;
    char unknown38[16];
    inline ~igActivableHolderModelInstance() { __vtable = igActivableHolderModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igActivableHolderModel)

void *igActivableHolderModel_vtableRead()
{
    igActivableHolderModelInstance object;
    object.__vtable = igModel_vtable;
    object._views._value = 0;
    object.__vtable = igGuiComponentModel_vtable;
    object.__vtable = igSimpleChildHolderModel_vtable;
    object._child._value = 0;
    object.__vtable = igActivableHolderModel_vtable;
    object._activer._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igActivableHolderModel)

void igActivableHolderModel_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igActivableHolderModel_meta, igSimpleChildHolderModel_register,
                       fn_8010DD30, igActivableHolderModel_getMetaCall,
                       igActivableHolderModel_className, 0x3C,
                       igActivableHolderModel_vtableRead, igActivableHolderModel_fieldInit, 0, igActivableHolderModel_dependencies);
}

META_GET_META_CALL(igActivableHolderModel)

void igActivableHolderModel_fieldInit()
{
    Meta::igMetaObject *meta = igActivableHolderModel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igActivableHolderModel_fieldTypes, 2);
    Meta::igObjectRefMetaField *activerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80111CD4();
    activerField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igActivableHolderModel_fieldNames, igActivableHolderModel_fieldStorage, igActivableHolderModel_fieldOffsets, base);
}

}
#pragma pop
