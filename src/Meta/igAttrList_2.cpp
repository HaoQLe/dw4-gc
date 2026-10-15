// igAttrList: Alchemy class registration (0x800BB658..0x800BB7B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAttrList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047D768[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttrList)

void *igAttrList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047D768;
    object.__vtable = igAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAttrList)

void igAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igAttrList_meta, igObjectList_register,
                       fn_80024180, igAttrList_getMetaCall,
                       igAttrList_className, 0x14,
                       igAttrList_vtableRead, 0, 0, igAttrList_dependencies);
}

META_GET_META_CALL(igAttrList)

}
#pragma pop
