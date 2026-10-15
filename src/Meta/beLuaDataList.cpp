// beLuaDataList: Alchemy class registration (0x802D1C20..0x802D1DF0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beLuaDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beLuaDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D7AA0[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beLuaDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beLuaDataList)
#pragma pop

void *beLuaDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D7AA0;
    object.__vtable = beLuaDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beLuaDataList)

void beLuaDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beLuaDataList_meta, igObjectList_register,
                       fn_80024180, beLuaDataList_getMetaCall,
                       beLuaDataList_className, 0x14,
                       beLuaDataList_vtableRead, 0, 0, beLuaDataList_dependencies);
}

META_GET_META_CALL(beLuaDataList)

}
#pragma pop
