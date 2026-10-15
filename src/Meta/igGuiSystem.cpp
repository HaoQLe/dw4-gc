// igGuiSystem: Alchemy class registration (0x8010F9EC..0x8010FBDC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGuiSystem)
META_DECLARE(igEventReceiver)

struct igGuiSystemInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _renderer;
    igObjectRefMember _model;
    igObjectRefMember _viewList;
    igObjectRefMember _root;
    igObjectRefMember _mouseCursor;
    igObjectRefMember _mouseCursorTransform;
    char unknown20[16];
    inline ~igGuiSystemInstance() { __vtable = igGuiSystem_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGuiSystem)

void *igGuiSystem_vtableRead()
{
    igGuiSystemInstance object;
    object.__vtable = igEventReceiver_vtable;
    object.__vtable = igGuiSystem_vtable;
    object._renderer._value = 0;
    object._model._value = 0;
    object._viewList._value = 0;
    object._root._value = 0;
    object._mouseCursor._value = 0;
    object._mouseCursorTransform._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
