// igViewportAttr: Alchemy class registration (0x800AC0FC..0x800AC294). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igViewportAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
extern char igViewportAttr_dependencies[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igViewportAttrInstance : igObjectInstance {
    char unknown04[24];
    igObjectRefMember _scissorExt;
    char unknown20[16];
    inline ~igViewportAttrInstance() { __vtable = igViewportAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igViewportAttr)

void *igViewportAttr_vtableRead()
{
    igViewportAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igViewportAttr_vtable;
    object._scissorExt._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igViewportAttr)

void igViewportAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igViewportAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igViewportAttr_getMetaCall,
                       igViewportAttr_className, 0x28,
                       igViewportAttr_vtableRead, igViewportAttr_fieldInit, 0, igViewportAttr_dependencies);
}

META_GET_META_CALL(igViewportAttr)

}
#pragma pop
