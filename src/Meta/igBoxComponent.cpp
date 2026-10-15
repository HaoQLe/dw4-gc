// igBoxComponent: Alchemy class registration (0x80113DFC..0x80114030). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBoxComponent)
META_DECLARE(igGuiComponent)

extern "C" {
void fn_8010CBD4();
void *igBoxComponent_parentMeta();
}

struct igGuiComponentInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _controller;
    igObjectRefMember _model;
    igObjectRefMember _aspect;
    char unknown18[4];
    igObjectRefMember _node;
    inline ~igGuiComponentInstance() { __vtable = igGuiComponent_vtable; }
};

struct igBoxComponentInstance : igGuiComponentInstance {
    char unknown20[8];
    inline ~igBoxComponentInstance() { __vtable = igBoxComponent_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBoxComponent)

void *igBoxComponent_vtableRead()
{
    igBoxComponentInstance object;
    object.__vtable = igGuiComponent_vtable;
    object._controller._value = 0;
    object._model._value = 0;
    object._aspect._value = 0;
    object._node._value = 0;
    object.__vtable = igBoxComponent_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBoxComponent)

void igBoxComponent_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igBoxComponent_meta, igGuiComponent_register,
                       igBoxComponent_parentMeta, igBoxComponent_getMetaCall,
                       igBoxComponent_className, 0x24,
                       igBoxComponent_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igBoxComponent)

}
#pragma pop
