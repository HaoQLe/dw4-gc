// igModel: Alchemy class registration (0x8010F130..0x8010F334). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igModel)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8010CBD4();
void *fn_8010CC08();
extern char igModel_dependencies[8];
extern char igModel_fieldNames[4];
extern char igModel_fieldOffsets[4];
extern char igModel_fieldStorage[4];
extern char igModel_fieldTypes[4];
extern char lbl_8055EFEC[8];
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    char unknown0C[4];
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igModel)

void *igModel_vtableRead()
{
    igModelInstance object;
    object.__vtable = igModel_vtable;
    object._views._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igModel)

void igModel_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igModel_meta, igObject_register,
                       fn_800237D0, igModel_getMetaCall,
                       lbl_8055EFEC, 0xC,
                       igModel_vtableRead, igModel_fieldInit, 0, igModel_dependencies);
}

META_GET_META_CALL(igModel)

void igModel_fieldInit()
{
    Meta::igMetaObject *meta = igModel_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igModel_fieldTypes, 1);
    Meta::igObjectRefMetaField *viewsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8010CC08();
    viewsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    viewsField->_construct = true;
    meta_setupFields(meta, igModel_fieldNames, igModel_fieldStorage, igModel_fieldOffsets, base);
}

}
#pragma pop
