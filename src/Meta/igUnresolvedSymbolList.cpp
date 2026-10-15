// igUnresolvedSymbolList: Alchemy class registration (0x80216E70..0x80217008). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnresolvedSymbolList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_80216620();
extern char igUnresolvedSymbolList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804BC8E4[];
}

struct Instance_80216EE4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igUnresolvedSymbolList)

META_GET_META(igUnresolvedSymbolList)

void *igUnresolvedSymbolList_vtableRead()
{
    Instance_80216EE4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804BC8E4;
    object.__vtable = igUnresolvedSymbolList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igUnresolvedSymbolList)

void igUnresolvedSymbolList_register()
{
    fn_80216620();
    meta_registerClass(0, &igUnresolvedSymbolList_meta, igObjectList_register,
                       fn_80024180, igUnresolvedSymbolList_getMetaCall,
                       igUnresolvedSymbolList_className, 0x14,
                       igUnresolvedSymbolList_vtableRead, 0, 0, igUnresolvedSymbolList_dependencies);
}

META_GET_META_CALL(igUnresolvedSymbolList)

}
#pragma pop
