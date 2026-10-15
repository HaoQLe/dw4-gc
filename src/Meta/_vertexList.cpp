// _vertexList: Alchemy class registration (0x801B8388..0x801B84E8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(_vertexList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char _vertexList_dependencies[8];
void *fn_80024180();
void fn_801AA6DC();
extern char lbl_80476E0C[];
extern char lbl_804B7F98[];
}

struct Instance_801B83C4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(_vertexList)

void *_vertexList_vtableRead()
{
    Instance_801B83C4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B7F98;
    object.__vtable = _vertexList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(_vertexList)

void _vertexList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &_vertexList_meta, igObjectList_register,
                       fn_80024180, _vertexList_getMetaCall,
                       _vertexList_className, 0x14,
                       _vertexList_vtableRead, 0, 0, _vertexList_dependencies);
}

META_GET_META_CALL(_vertexList)

}
#pragma pop
