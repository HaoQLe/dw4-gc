// igMorphSequenceDataList: Alchemy class registration (0x801B963C..0x801B979C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMorphSequenceDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igMorphSequenceDataList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B7D78[];
}

struct Instance_801B9678_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMorphSequenceDataList)

void *igMorphSequenceDataList_vtableRead()
{
    Instance_801B9678_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B7D78;
    object.__vtable = igMorphSequenceDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMorphSequenceDataList)

void igMorphSequenceDataList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igMorphSequenceDataList_meta, igObjectList_register,
                       fn_80024180, igMorphSequenceDataList_getMetaCall,
                       igMorphSequenceDataList_className, 0x14,
                       igMorphSequenceDataList_vtableRead, 0, 0, igMorphSequenceDataList_dependencies);
}

META_GET_META_CALL(igMorphSequenceDataList)

}
#pragma pop
