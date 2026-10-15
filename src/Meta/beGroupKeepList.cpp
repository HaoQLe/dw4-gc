// beGroupKeepList: Alchemy class registration (0x802D6510..0x802D66E0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beGroupKeepList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beGroupKeepList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D6DDC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beGroupKeepList)

META_GET_META(beGroupKeepList)

void *beGroupKeepList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D6DDC;
    object.__vtable = beGroupKeepList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beGroupKeepList)

void beGroupKeepList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beGroupKeepList_meta, igObjectList_register,
                       fn_80024180, beGroupKeepList_getMetaCall,
                       beGroupKeepList_className, 0x14,
                       beGroupKeepList_vtableRead, 0, 0, beGroupKeepList_dependencies);
}

META_GET_META_CALL(beGroupKeepList)

}
#pragma pop
