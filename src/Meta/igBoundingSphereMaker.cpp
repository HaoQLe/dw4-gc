// igBoundingSphereMaker: Alchemy class registration (0x8028E108..0x8028E340). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igBoundingSphereMaker)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void *fn_8011F520();
void fn_8028C93C();
extern char igBoundingSphereMaker_dependencies[8];
extern char igBoundingSphereMaker_fieldNames[4];
extern char igBoundingSphereMaker_fieldOffsets[4];
extern char igBoundingSphereMaker_fieldStorage[4];
extern char igBoundingSphereMaker_fieldTypes[4];
}

struct igBoundingSphereMakerInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _sphere;
    char unknown0C[4];
    inline ~igBoundingSphereMakerInstance() { __vtable = igBoundingSphereMaker_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igBoundingSphereMaker)

META_GET_META(igBoundingSphereMaker)

void *igBoundingSphereMaker_vtableRead()
{
    igBoundingSphereMakerInstance object;
    object.__vtable = igBoundingSphereMaker_vtable;
    object._sphere._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBoundingSphereMaker)

void igBoundingSphereMaker_register()
{
    fn_8028C93C();
    meta_registerClass(0, &igBoundingSphereMaker_meta, igObject_register,
                       fn_800237D0, igBoundingSphereMaker_getMetaCall,
                       igBoundingSphereMaker_className, 0xC,
                       igBoundingSphereMaker_vtableRead, igBoundingSphereMaker_fieldInit, 0, igBoundingSphereMaker_dependencies);
}

META_GET_META_CALL(igBoundingSphereMaker)

void igBoundingSphereMaker_fieldInit()
{
    Meta::igMetaObject *meta = igBoundingSphereMaker_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBoundingSphereMaker_fieldTypes, 1);
    Meta::igObjectRefMetaField *sphereField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8011F520();
    sphereField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igBoundingSphereMaker_fieldNames, igBoundingSphereMaker_fieldStorage, igBoundingSphereMaker_fieldOffsets, base);
}

}
#pragma pop
