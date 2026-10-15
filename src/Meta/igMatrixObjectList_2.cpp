// igMatrixObjectList: Alchemy class registration (0x80217F88..0x802180E8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMatrixObjectList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_80216620();
extern char igMatrixObjectList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804BC288[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMatrixObjectList)

void *igMatrixObjectList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804BC288;
    object.__vtable = igMatrixObjectList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMatrixObjectList)

void igMatrixObjectList_register()
{
    fn_80216620();
    meta_registerClass(0, &igMatrixObjectList_meta, igObjectList_register,
                       fn_80024180, igMatrixObjectList_getMetaCall,
                       igMatrixObjectList_className, 0x14,
                       igMatrixObjectList_vtableRead, 0, 0, igMatrixObjectList_dependencies);
}

META_GET_META_CALL(igMatrixObjectList)

}
#pragma pop
