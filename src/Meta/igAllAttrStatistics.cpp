// igAllAttrStatistics: Alchemy class registration (0x801314A8..0x801316B0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igAllAttrStatistics)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8012FC48();
void *fn_801316B0();
extern char igAllAttrStatistics_dependencies[8];
extern char igAllAttrStatistics_fieldNames[4];
extern char igAllAttrStatistics_fieldOffsets[4];
extern char igAllAttrStatistics_fieldStorage[4];
extern char igAllAttrStatistics_fieldTypes[4];
}

struct igAllAttrStatisticsInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _attrStatisticsList;
    char unknown0C[4];
    inline ~igAllAttrStatisticsInstance() { __vtable = igAllAttrStatistics_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAllAttrStatistics)

void *igAllAttrStatistics_vtableRead()
{
    igAllAttrStatisticsInstance object;
    object.__vtable = igAllAttrStatistics_vtable;
    object._attrStatisticsList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAllAttrStatistics)

void igAllAttrStatistics_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igAllAttrStatistics_meta, igObject_register,
                       fn_800237D0, igAllAttrStatistics_getMetaCall,
                       igAllAttrStatistics_className, 0xC,
                       igAllAttrStatistics_vtableRead, igAllAttrStatistics_fieldInit, 0, igAllAttrStatistics_dependencies);
}

META_GET_META_CALL(igAllAttrStatistics)

void igAllAttrStatistics_fieldInit()
{
    Meta::igMetaObject *meta = igAllAttrStatistics_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAllAttrStatistics_fieldTypes, 1);
    Meta::igObjectRefMetaField *attrStatisticsListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801316B0();
    attrStatisticsListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    attrStatisticsListField->_construct = true;
    meta_setupFields(meta, igAllAttrStatistics_fieldNames, igAllAttrStatistics_fieldStorage, igAllAttrStatistics_fieldOffsets, base);
}

}
#pragma pop
