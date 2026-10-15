// igGenericNodeStatisticsList: Alchemy class registration (0x80131888..0x801319E8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGenericNodeStatisticsList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igGenericNodeStatisticsList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804AAA70[];
}

struct Instance_801318C4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGenericNodeStatisticsList)

void *igGenericNodeStatisticsList_vtableRead()
{
    Instance_801318C4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804AAA70;
    object.__vtable = igGenericNodeStatisticsList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGenericNodeStatisticsList)

void igGenericNodeStatisticsList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igGenericNodeStatisticsList_meta, igObjectList_register,
                       fn_80024180, igGenericNodeStatisticsList_getMetaCall,
                       igGenericNodeStatisticsList_className, 0x14,
                       igGenericNodeStatisticsList_vtableRead, 0, 0, igGenericNodeStatisticsList_dependencies);
}

META_GET_META_CALL(igGenericNodeStatisticsList)

}
#pragma pop
