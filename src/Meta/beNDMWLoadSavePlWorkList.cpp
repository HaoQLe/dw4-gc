// beNDMWLoadSavePlWorkList: Alchemy class registration (0x8033F528..0x8033F6F8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWLoadSavePlWorkList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beNDMWLoadSavePlWorkList_dependencies[8];
void *fn_80024180();
void fn_803250AC();
extern char lbl_80476E0C[];
extern char lbl_804E55EC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beNDMWLoadSavePlWorkList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWLoadSavePlWorkList)
#pragma pop

void *beNDMWLoadSavePlWorkList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804E55EC;
    object.__vtable = beNDMWLoadSavePlWorkList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLoadSavePlWorkList)

void beNDMWLoadSavePlWorkList_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadSavePlWorkList_meta, igObjectList_register,
                       fn_80024180, beNDMWLoadSavePlWorkList_getMetaCall,
                       beNDMWLoadSavePlWorkList_className, 0x14,
                       beNDMWLoadSavePlWorkList_vtableRead, 0, 0, beNDMWLoadSavePlWorkList_dependencies);
}

META_GET_META_CALL(beNDMWLoadSavePlWorkList)

}
#pragma pop
