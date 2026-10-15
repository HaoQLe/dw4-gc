// _faceList: Alchemy class registration (0x801B7FD8..0x801B8138). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(_faceList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char _faceList_dependencies[8];
void *fn_80024180();
void fn_801AA6DC();
extern char lbl_80476E0C[];
extern char lbl_804B80BC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(_faceList)

void *_faceList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B80BC;
    object.__vtable = _faceList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(_faceList)

void _faceList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &_faceList_meta, igObjectList_register,
                       fn_80024180, _faceList_getMetaCall,
                       _faceList_className, 0x14,
                       _faceList_vtableRead, 0, 0, _faceList_dependencies);
}

META_GET_META_CALL(_faceList)

}
#pragma pop
