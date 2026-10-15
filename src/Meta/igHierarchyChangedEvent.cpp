// igHierarchyChangedEvent: Alchemy class registration (0x801470C0..0x80147210). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igHierarchyChangedEvent)
META_DECLARE(igMessageBase)

extern "C" {
void fn_8012FC48();
void *fn_80140C3C();
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_801470FC_0 {
    void *__vtable;
    char unknown04[36];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igHierarchyChangedEvent)

void *igHierarchyChangedEvent_vtableRead()
{
    Instance_801470FC_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = igMessageBase_vtable;
    object.__vtable = igHierarchyChangedEvent_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igHierarchyChangedEvent)

void igHierarchyChangedEvent_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igHierarchyChangedEvent_meta, igMessageBase_register,
                       fn_80140C3C, igHierarchyChangedEvent_getMetaCall,
                       igHierarchyChangedEvent_className, 0x20,
                       igHierarchyChangedEvent_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igHierarchyChangedEvent)

}
#pragma pop
