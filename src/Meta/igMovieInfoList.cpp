// igMovieInfoList: Alchemy class registration (0x802AC2B0..0x802AC4C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMovieInfoList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_802AA788();
extern char igMovieInfoList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804CE17C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMovieInfoList)

META_METAOBJECT(igMovieInfoList)

META_GET_META(igMovieInfoList)

void *igMovieInfoList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CE17C;
    object.__vtable = igMovieInfoList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMovieInfoList)

void igMovieInfoList_register()
{
    fn_802AA788();
    meta_registerClass(0, &igMovieInfoList_meta, igObjectList_register,
                       fn_80024180, igMovieInfoList_getMetaCall,
                       igMovieInfoList_className, 0x14,
                       igMovieInfoList_vtableRead, 0, 0, igMovieInfoList_dependencies);
}

META_GET_META_CALL(igMovieInfoList)

}
#pragma pop
