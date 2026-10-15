// igGenericAttrStatisticsList: Alchemy class registration (0x801316EC..0x8013184C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGenericAttrStatisticsList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igGenericAttrStatisticsList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804AAB38[];
}

struct Instance_80131728_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGenericAttrStatisticsList)

void *igGenericAttrStatisticsList_vtableRead()
{
    Instance_80131728_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804AAB38;
    object.__vtable = igGenericAttrStatisticsList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGenericAttrStatisticsList)

void igGenericAttrStatisticsList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igGenericAttrStatisticsList_meta, igObjectList_register,
                       fn_80024180, igGenericAttrStatisticsList_getMetaCall,
                       igGenericAttrStatisticsList_className, 0x14,
                       igGenericAttrStatisticsList_vtableRead, 0, 0, igGenericAttrStatisticsList_dependencies);
}

META_GET_META_CALL(igGenericAttrStatisticsList)

}
#pragma pop
