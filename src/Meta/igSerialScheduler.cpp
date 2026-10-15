// igSerialScheduler: Alchemy class registration (0x80284560..0x80284748). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSerialScheduler)
META_DECLARE(igInsightScheduler)

extern "C" {
void fn_80284294();
extern char igSerialScheduler_dependencies[44];
void *igSerialScheduler_parentMeta();
extern char lbl_804CB9E8[];
}

struct igSerialSchedulerInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _managerList;
    igObjectRefMember _cachedManagerList;
    inline ~igSerialSchedulerInstance() { __vtable = igSerialScheduler_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSerialScheduler)

void *igSerialScheduler_vtableRead()
{
    igSerialSchedulerInstance object;
    object.__vtable = lbl_804CB9E8;
    object.__vtable = igSerialScheduler_vtable;
    object._managerList._value = 0;
    object._cachedManagerList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSerialScheduler)

void igSerialScheduler_register()
{
    fn_80284294();
    meta_registerClass(0, &igSerialScheduler_meta, igInsightScheduler_register,
                       igSerialScheduler_parentMeta, igSerialScheduler_getMetaCall,
                       igSerialScheduler_className, 0x10,
                       igSerialScheduler_vtableRead, igSerialScheduler_fieldInit, 0, igSerialScheduler_dependencies);
}

META_GET_META_CALL(igSerialScheduler)

}
#pragma pop
