// beNDMWWindowList: Alchemy class registration (0x80325974..0x80325B44). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWWindowList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beNDMWWindowList_dependencies[8];
void *fn_80024180();
void fn_803250AC();
extern char lbl_80476E0C[];
extern char lbl_804E6D14[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beNDMWWindowList)

META_GET_META(beNDMWWindowList)

#pragma push
#pragma optimize_for_size on
void *beNDMWWindowList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804E6D14;
    object.__vtable = beNDMWWindowList_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWWindowList)

void beNDMWWindowList_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWWindowList_meta, igObjectList_register,
                       fn_80024180, beNDMWWindowList_getMetaCall,
                       beNDMWWindowList_className, 0x14,
                       beNDMWWindowList_vtableRead, 0, 0, beNDMWWindowList_dependencies);
}

META_GET_META_CALL(beNDMWWindowList)

}
#pragma pop
