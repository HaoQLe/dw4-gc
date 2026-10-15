// _edgeList: Alchemy class registration (0x801B7BBC..0x801B7D1C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(_edgeList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char _edgeList_dependencies[8];
void *fn_80024180();
void fn_801AA6DC();
extern char lbl_80476E0C[];
extern char lbl_804B823C[];
}

struct Instance_801B7BF8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(_edgeList)

void *_edgeList_vtableRead()
{
    Instance_801B7BF8_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B823C;
    object.__vtable = _edgeList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(_edgeList)

void _edgeList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &_edgeList_meta, igObjectList_register,
                       fn_80024180, _edgeList_getMetaCall,
                       _edgeList_className, 0x14,
                       _edgeList_vtableRead, 0, 0, _edgeList_dependencies);
}

META_GET_META_CALL(_edgeList)

}
#pragma pop
