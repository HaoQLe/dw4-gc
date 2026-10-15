// beNDMWAfsSetupDataList: Alchemy class registration (0x803450FC..0x803452CC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWAfsSetupDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beNDMWAfsSetupDataList_dependencies[8];
void *fn_80024180();
void fn_803250AC();
extern char lbl_80476E0C[];
extern char lbl_804E43C4[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beNDMWAfsSetupDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWAfsSetupDataList)
#pragma pop

void *beNDMWAfsSetupDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804E43C4;
    object.__vtable = beNDMWAfsSetupDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWAfsSetupDataList)

void beNDMWAfsSetupDataList_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWAfsSetupDataList_meta, igObjectList_register,
                       fn_80024180, beNDMWAfsSetupDataList_getMetaCall,
                       beNDMWAfsSetupDataList_className, 0x14,
                       beNDMWAfsSetupDataList_vtableRead, 0, 0, beNDMWAfsSetupDataList_dependencies);
}

META_GET_META_CALL(beNDMWAfsSetupDataList)

}
#pragma pop
