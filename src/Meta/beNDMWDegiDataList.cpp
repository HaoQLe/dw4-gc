// beNDMWDegiDataList: Alchemy class registration (0x803407E0..0x803409B0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWDegiDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beNDMWDegiDataList_dependencies[8];
void *fn_80024180();
void fn_803250AC();
extern char lbl_80476E0C[];
extern char lbl_804E4FBC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beNDMWDegiDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWDegiDataList)
#pragma pop

void *beNDMWDegiDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804E4FBC;
    object.__vtable = beNDMWDegiDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWDegiDataList)

void beNDMWDegiDataList_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWDegiDataList_meta, igObjectList_register,
                       fn_80024180, beNDMWDegiDataList_getMetaCall,
                       beNDMWDegiDataList_className, 0x14,
                       beNDMWDegiDataList_vtableRead, 0, 0, beNDMWDegiDataList_dependencies);
}

META_GET_META_CALL(beNDMWDegiDataList)

}
#pragma pop
