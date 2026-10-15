// beNDMWDegiData: Alchemy class registration (0x803409B0..0x80340CA4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igUnsignedShortArrayMetaField.h>

META_DECLARE(beNDMWDegiData)
META_DECLARE(igInsightCore)
META_DECLARE(igObject)

extern "C" {
extern char beNDMWDegiData_dependencies[8];
extern char beNDMWDegiData_fieldNames[];
extern char beNDMWDegiData_fieldOffsets[];
extern char beNDMWDegiData_fieldStorage[];
extern char beNDMWDegiData_fieldTypes[];
void *fn_800237D0();
void *fn_80037E48();
void fn_803250AC();
}

struct beNDMWDegiDataInstance : igObjectInstance {
    char unknown04[44];
    igStringMember _dmkind;
    igStringMember _dmName;
    char unknown38[24];
    inline ~beNDMWDegiDataInstance() { __vtable = beNDMWDegiData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beNDMWDegiData)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beNDMWDegiData)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beNDMWDegiData_vtableRead()
{
    beNDMWDegiDataInstance object;
    object.__vtable = beNDMWDegiData_vtable;
    object._dmkind._value = 0;
    object._dmName._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWDegiData)

void beNDMWDegiData_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWDegiData_meta, igObject_register,
                       fn_800237D0, beNDMWDegiData_getMetaCall,
                       beNDMWDegiData_className, 0x4C,
                       beNDMWDegiData_vtableRead, beNDMWDegiData_fieldInit, 0, beNDMWDegiData_dependencies);
}

META_GET_META_CALL(beNDMWDegiData)

void beNDMWDegiData_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWDegiData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWDegiData_fieldTypes, 13);
    Meta::igUnsignedShortArrayMetaField *dmNameUniField = static_cast<Meta::igUnsignedShortArrayMetaField *>(meta_field(meta, base));
    Meta::igMetaObject *igInsightCoreMeta = igInsightCore_metaObject();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(dmNameUniField) + 0x38) = igInsightCoreMeta;
    *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(dmNameUniField) + 0x3C) = 0;
    Meta::igIntMetaField *idField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 5));
    *reinterpret_cast<void **>(reinterpret_cast<char *>(idField) + 0x34) = (void *)10;
    Meta::igIntMetaField *maxMpField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 12));
    void *value_value6 = fn_80037E48();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(maxMpField) + 0x3C) = value_value6;
    meta_setupFields(meta, beNDMWDegiData_fieldNames, beNDMWDegiData_fieldStorage, beNDMWDegiData_fieldOffsets, base);
}

}
#pragma pop
