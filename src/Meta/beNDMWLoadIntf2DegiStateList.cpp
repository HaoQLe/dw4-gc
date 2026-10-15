// beNDMWLoadIntf2DegiStateList: Alchemy class registration (0x8033DA50..0x8033DC20). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWLoadIntf2DegiStateList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beNDMWLoadIntf2DegiStateList_dependencies[8];
void *fn_80024180();
void fn_803250AC();
extern char lbl_80476E0C[];
extern char lbl_804E5A04[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beNDMWLoadIntf2DegiStateList)

META_GET_META(beNDMWLoadIntf2DegiStateList)

void *beNDMWLoadIntf2DegiStateList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804E5A04;
    object.__vtable = beNDMWLoadIntf2DegiStateList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLoadIntf2DegiStateList)

void beNDMWLoadIntf2DegiStateList_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadIntf2DegiStateList_meta, igObjectList_register,
                       fn_80024180, beNDMWLoadIntf2DegiStateList_getMetaCall,
                       beNDMWLoadIntf2DegiStateList_className, 0x14,
                       beNDMWLoadIntf2DegiStateList_vtableRead, 0, 0, beNDMWLoadIntf2DegiStateList_dependencies);
}

META_GET_META_CALL(beNDMWLoadIntf2DegiStateList)

}
#pragma pop
