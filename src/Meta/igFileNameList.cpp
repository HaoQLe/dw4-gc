// igFileNameList: Alchemy class registration (0x802AADDC..0x802AAF58). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFileNameList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_802AA788();
extern char igFileNameList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804CE3CC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFileNameList)

void *igFileNameList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CE3CC;
    object.__vtable = igFileNameList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFileNameList)

void igFileNameList_register()
{
    fn_802AA788();
    meta_registerClass(0, &igFileNameList_meta, igObjectList_register,
                       fn_80024180, igFileNameList_getMetaCall,
                       igFileNameList_className, 0x14,
                       igFileNameList_vtableRead, 0, 0, igFileNameList_dependencies);
}

META_GET_META_CALL(igFileNameList)

}
#pragma pop
