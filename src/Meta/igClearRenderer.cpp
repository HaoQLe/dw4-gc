// igClearRenderer: Alchemy class registration (0x8010DE00..0x8010DF8C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igClearRenderer)
META_DECLARE(igRenderer)

extern "C" {
void fn_8010CBD4();
void *fn_8010DF8C();
extern char lbl_80497C9C[];
}

struct Instance_80497C9C : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _visualContext;
    inline ~Instance_80497C9C() { __vtable = lbl_80497C9C; }
};

struct igClearRendererInstance : Instance_80497C9C {
    char unknown0C[4];
    inline ~igClearRendererInstance() { __vtable = igClearRenderer_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igClearRenderer)

void *igClearRenderer_vtableRead()
{
    igClearRendererInstance object;
    object.__vtable = lbl_80497C9C;
    object._visualContext._value = 0;
    object.__vtable = igClearRenderer_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igClearRenderer)

void igClearRenderer_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igClearRenderer_meta, igRenderer_register,
                       fn_8010DF8C, igClearRenderer_getMetaCall,
                       igClearRenderer_className, 0x10,
                       igClearRenderer_vtableRead, igClearRenderer_fieldInit, 0, 0);
}

META_GET_META_CALL(igClearRenderer)

}
#pragma pop
