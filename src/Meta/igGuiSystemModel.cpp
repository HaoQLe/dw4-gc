// igGuiSystemModel: Alchemy class registration (0x80110CF4..0x80110F7C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGuiSystemModel)
META_DECLARE(igModel)

extern "C" {
void fn_8010CBD4();
void *fn_8010EE6C();
void fn_801285A0(void *);
extern char igGuiSystemModel_dependencies[8];
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

struct igGuiSystemModelInstance : igModelInstance {
    char unknown0C[20];
    char unknown20[64];
    char unknown60[68];
    igObjectRefMember _rootComponent;
    igObjectRefMember _focusedComponent;
    igObjectRefMember _componentUnderMouse;
    igObjectRefMember _pushedComponent;
    char unknownB4[4];
    inline igGuiSystemModelInstance()
    {
        __vtable = igModel_vtable;
        _views._value = 0;
        __vtable = igGuiSystemModel_vtable;
        fn_801285A0(&unknown20);
        fn_801285A0(&unknown60);
        _rootComponent._value = 0;
        _focusedComponent._value = 0;
        _componentUnderMouse._value = 0;
        _pushedComponent._value = 0;
    }
    inline ~igGuiSystemModelInstance() { __vtable = igGuiSystemModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGuiSystemModel)

void *igGuiSystemModel_vtableRead()
{
    igGuiSystemModelInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGuiSystemModel)

void igGuiSystemModel_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igGuiSystemModel_meta, igModel_register,
                       fn_8010EE6C, igGuiSystemModel_getMetaCall,
                       igGuiSystemModel_className, 0xB8,
                       igGuiSystemModel_vtableRead, igGuiSystemModel_fieldInit, 0, igGuiSystemModel_dependencies);
}

META_GET_META_CALL(igGuiSystemModel)

}
#pragma pop
