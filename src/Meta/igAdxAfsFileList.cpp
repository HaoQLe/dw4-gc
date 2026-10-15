// igAdxAfsFileList: Alchemy class registration (0x802AA97C..0x802AAB4C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAdxAfsFileList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_802AA788();
extern char igAdxAfsFileList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804CE5EC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igAdxAfsFileList)

META_GET_META(igAdxAfsFileList)

void *igAdxAfsFileList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CE5EC;
    object.__vtable = igAdxAfsFileList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAdxAfsFileList)

void igAdxAfsFileList_register()
{
    fn_802AA788();
    meta_registerClass(0, &igAdxAfsFileList_meta, igObjectList_register,
                       fn_80024180, igAdxAfsFileList_getMetaCall,
                       igAdxAfsFileList_className, 0x14,
                       igAdxAfsFileList_vtableRead, 0, 0, igAdxAfsFileList_dependencies);
}

META_GET_META_CALL(igAdxAfsFileList)

}
#pragma pop
