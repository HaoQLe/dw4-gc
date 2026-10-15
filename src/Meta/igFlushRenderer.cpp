// igFlushRenderer: Alchemy class registration (0x8028704C..0x8028723C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFlushRenderer)
META_DECLARE(igRenderer)

extern "C" {
void *fn_8010DF8C();
void fn_80284294();
extern char lbl_80497C9C[];
}

struct Instance_80497C9C : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _visualContext;
    inline ~Instance_80497C9C() { __vtable = lbl_80497C9C; }
};

struct igFlushRendererInstance : Instance_80497C9C {
    char unknown0C[4];
    inline ~igFlushRendererInstance() { __vtable = igFlushRenderer_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igFlushRenderer)

META_GET_META(igFlushRenderer)

void *igFlushRenderer_vtableRead()
{
    igFlushRendererInstance object;
    object.__vtable = lbl_80497C9C;
    object._visualContext._value = 0;
    object.__vtable = igFlushRenderer_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFlushRenderer)

void igFlushRenderer_register()
{
    fn_80284294();
    meta_registerClass(0, &igFlushRenderer_meta, igRenderer_register,
                       fn_8010DF8C, igFlushRenderer_getMetaCall,
                       igFlushRenderer_className, 0xC,
                       igFlushRenderer_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igFlushRenderer)

}
#pragma pop
