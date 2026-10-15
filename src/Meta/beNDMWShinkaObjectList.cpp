// beNDMWShinkaObjectList: Alchemy class registration (0x80343D90..0x80343F60). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShinkaObjectList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beNDMWShinkaObjectList_dependencies[8];
void *fn_80024180();
void fn_803250AC();
extern char lbl_80476E0C[];
extern char lbl_804E4740[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beNDMWShinkaObjectList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWShinkaObjectList)
#pragma pop

void *beNDMWShinkaObjectList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804E4740;
    object.__vtable = beNDMWShinkaObjectList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWShinkaObjectList)

void beNDMWShinkaObjectList_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShinkaObjectList_meta, igObjectList_register,
                       fn_80024180, beNDMWShinkaObjectList_getMetaCall,
                       beNDMWShinkaObjectList_className, 0x14,
                       beNDMWShinkaObjectList_vtableRead, 0, 0, beNDMWShinkaObjectList_dependencies);
}

META_GET_META_CALL(beNDMWShinkaObjectList)

}
#pragma pop
