// igAppearanceListList: Alchemy class registration (0x802B3DC4..0x802B3F94). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAppearanceListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_802B1AC8();
extern char igAppearanceListList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804DC8E8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(igAppearanceListList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(igAppearanceListList)
#pragma pop

void *igAppearanceListList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804DC8E8;
    object.__vtable = igAppearanceListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAppearanceListList)

void igAppearanceListList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &igAppearanceListList_meta, igObjectList_register,
                       fn_80024180, igAppearanceListList_getMetaCall,
                       igAppearanceListList_className, 0x14,
                       igAppearanceListList_vtableRead, 0, 0, igAppearanceListList_dependencies);
}

META_GET_META_CALL(igAppearanceListList)

}
#pragma pop
