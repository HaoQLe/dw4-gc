// beLuaDataObjectist: Alchemy class registration (0x802D2084..0x802D2200). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beLuaDataObjectist)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beLuaDataObjectist_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D7900[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beLuaDataObjectist)
#pragma pop

void *beLuaDataObjectist_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D7900;
    object.__vtable = beLuaDataObjectist_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beLuaDataObjectist)

void beLuaDataObjectist_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beLuaDataObjectist_meta, igObjectList_register,
                       fn_80024180, beLuaDataObjectist_getMetaCall,
                       beLuaDataObjectist_className, 0x14,
                       beLuaDataObjectist_vtableRead, 0, 0, beLuaDataObjectist_dependencies);
}

META_GET_META_CALL(beLuaDataObjectist)

}
#pragma pop
