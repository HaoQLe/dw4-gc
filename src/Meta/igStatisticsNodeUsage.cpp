// igStatisticsNodeUsage: Alchemy class registration (0x8013095C..0x80130C5C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igStatisticsNodeUsage)
META_DECLARE(igOptStatistics)

extern "C" {
void fn_8012FC48();
extern char igStatisticsNodeUsage_dependencies[8];
void *igStatisticsNodeUsage_parentMeta();
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_804A4A04 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _registry;
    igObjectRefMember _configuration;
    inline ~Instance_804A4A04() { __vtable = lbl_804A4A04; }
};

struct Instance_804A46AC : Instance_804A4A04 {
    igObjectRefMember _visitedMetaObject;
    inline ~Instance_804A46AC() { __vtable = lbl_804A46AC; }
};

struct igOptStatisticsInstance : Instance_804A46AC {
    igStringMember _separatorString;
    char unknown30[16];
    igObjectRefMember _table;
    inline ~igOptStatisticsInstance() { __vtable = igOptStatistics_vtable; }
};

struct igStatisticsNodeUsageInstance : igOptStatisticsInstance {
    igObjectRefMember _nodeType;
    char unknown48[8];
    inline ~igStatisticsNodeUsageInstance() { __vtable = igStatisticsNodeUsage_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igStatisticsNodeUsage)

void *igStatisticsNodeUsage_vtableRead()
{
    igStatisticsNodeUsageInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = lbl_804A46AC;
    object._visitedMetaObject._value = 0;
    object.__vtable = igOptStatistics_vtable;
    object._separatorString._value = 0;
    object._table._value = 0;
    object.__vtable = igStatisticsNodeUsage_vtable;
    object._nodeType._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igStatisticsNodeUsage)

void igStatisticsNodeUsage_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igStatisticsNodeUsage_meta, igOptStatistics_register,
                       igStatisticsNodeUsage_parentMeta, igStatisticsNodeUsage_getMetaCall,
                       igStatisticsNodeUsage_className, 0x48,
                       igStatisticsNodeUsage_vtableRead, igStatisticsNodeUsage_fieldInit, 0, igStatisticsNodeUsage_dependencies);
}

META_GET_META_CALL(igStatisticsNodeUsage)

}
#pragma pop
