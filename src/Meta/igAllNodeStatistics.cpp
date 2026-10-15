// igAllNodeStatistics: Alchemy class registration (0x80131264..0x8013146C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igAllNodeStatistics)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8012FC48();
void *fn_8013184C();
extern char igAllNodeStatistics_dependencies[8];
extern char igAllNodeStatistics_fieldNames[4];
extern char igAllNodeStatistics_fieldOffsets[4];
extern char igAllNodeStatistics_fieldStorage[4];
extern char igAllNodeStatistics_fieldTypes[4];
}

struct igAllNodeStatisticsInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _nodeStatisticsList;
    char unknown0C[4];
    inline ~igAllNodeStatisticsInstance() { __vtable = igAllNodeStatistics_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAllNodeStatistics)

void *igAllNodeStatistics_vtableRead()
{
    igAllNodeStatisticsInstance object;
    object.__vtable = igAllNodeStatistics_vtable;
    object._nodeStatisticsList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAllNodeStatistics)

void igAllNodeStatistics_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igAllNodeStatistics_meta, igObject_register,
                       fn_800237D0, igAllNodeStatistics_getMetaCall,
                       igAllNodeStatistics_className, 0xC,
                       igAllNodeStatistics_vtableRead, igAllNodeStatistics_fieldInit, 0, igAllNodeStatistics_dependencies);
}

META_GET_META_CALL(igAllNodeStatistics)

void igAllNodeStatistics_fieldInit()
{
    Meta::igMetaObject *meta = igAllNodeStatistics_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAllNodeStatistics_fieldTypes, 1);
    Meta::igObjectRefMetaField *nodeStatisticsListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8013184C();
    nodeStatisticsListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    nodeStatisticsListField->_construct = true;
    meta_setupFields(meta, igAllNodeStatistics_fieldNames, igAllNodeStatistics_fieldStorage, igAllNodeStatistics_fieldOffsets, base);
}

}
#pragma pop
