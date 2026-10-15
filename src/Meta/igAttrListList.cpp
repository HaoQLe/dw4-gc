// igAttrListList: Alchemy class registration (0x800BB2E8..0x800BB448). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAttrListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igAttrListList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047D95C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttrListList)

void *igAttrListList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047D95C;
    object.__vtable = igAttrListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAttrListList)

void igAttrListList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igAttrListList_meta, igObjectList_register,
                       fn_80024180, igAttrListList_getMetaCall,
                       igAttrListList_className, 0x14,
                       igAttrListList_vtableRead, 0, 0, igAttrListList_dependencies);
}

META_GET_META_CALL(igAttrListList)

}
#pragma pop
