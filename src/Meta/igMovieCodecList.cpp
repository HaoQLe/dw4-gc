// igMovieCodecList: Alchemy class registration (0x802AB8E8..0x802ABAF8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMovieCodecList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_802AA788();
extern char igMovieCodecList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804CE2A4[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMovieCodecList)

META_METAOBJECT(igMovieCodecList)

META_GET_META(igMovieCodecList)

void *igMovieCodecList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CE2A4;
    object.__vtable = igMovieCodecList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMovieCodecList)

void igMovieCodecList_register()
{
    fn_802AA788();
    meta_registerClass(0, &igMovieCodecList_meta, igObjectList_register,
                       fn_80024180, igMovieCodecList_getMetaCall,
                       igMovieCodecList_className, 0x14,
                       igMovieCodecList_vtableRead, 0, 0, igMovieCodecList_dependencies);
}

META_GET_META_CALL(igMovieCodecList)

}
#pragma pop
