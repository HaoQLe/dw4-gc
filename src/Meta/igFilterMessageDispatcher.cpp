// igFilterMessageDispatcher: Alchemy class registration (0x80285384..0x8028556C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFilterMessageDispatcher)
META_DECLARE(igMessageDispatcher)

extern "C" {
void fn_80284294();
extern char igFilterMessageDispatcher_dependencies[40];
void *igFilterMessageDispatcher_parentMeta();
extern char lbl_804CB728[];
}

struct igFilterMessageDispatcherInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _defaultFilters;
    igObjectRefMember _filters;
    inline ~igFilterMessageDispatcherInstance() { __vtable = igFilterMessageDispatcher_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFilterMessageDispatcher)

void *igFilterMessageDispatcher_vtableRead()
{
    igFilterMessageDispatcherInstance object;
    object.__vtable = lbl_804CB728;
    object.__vtable = igFilterMessageDispatcher_vtable;
    object._defaultFilters._value = 0;
    object._filters._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFilterMessageDispatcher)

void igFilterMessageDispatcher_register()
{
    fn_80284294();
    meta_registerClass(0, &igFilterMessageDispatcher_meta, igMessageDispatcher_register,
                       igFilterMessageDispatcher_parentMeta, igFilterMessageDispatcher_getMetaCall,
                       igFilterMessageDispatcher_className, 0x10,
                       igFilterMessageDispatcher_vtableRead, igFilterMessageDispatcher_fieldInit, 0, igFilterMessageDispatcher_dependencies);
}

META_GET_META_CALL(igFilterMessageDispatcher)

}
#pragma pop
