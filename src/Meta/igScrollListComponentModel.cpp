// igScrollListComponentModel: Alchemy class registration (0x8010D728..0x8010D9DC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igScrollListComponentModel)
META_DECLARE(igBoxModel)
META_DECLARE(igGuiComponentModel)
META_DECLARE(igModel)

extern "C" {
void fn_8010CBD4();
extern char igScrollListComponentModel_dependencies[12];
void *igScrollListComponentModel_parentMeta();
}

struct igModelInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _views;
    inline ~igModelInstance() { __vtable = igModel_vtable; }
};

struct igGuiComponentModelInstance : igModelInstance {
    inline ~igGuiComponentModelInstance() { __vtable = igGuiComponentModel_vtable; }
};

struct igBoxModelInstance : igGuiComponentModelInstance {
    char unknown0C[24];
    igObjectRefMember _children;
    inline ~igBoxModelInstance() { __vtable = igBoxModel_vtable; }
};

struct igScrollListComponentModelInstance : igBoxModelInstance {
    igObjectRefMember _upArrow;
    igObjectRefMember _downArrow;
    igObjectRefMember _items;
    char unknown34[12];
    inline ~igScrollListComponentModelInstance() { __vtable = igScrollListComponentModel_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igScrollListComponentModel)

void *igScrollListComponentModel_vtableRead()
{
    igScrollListComponentModelInstance object;
    object.__vtable = igModel_vtable;
    object._views._value = 0;
    object.__vtable = igGuiComponentModel_vtable;
    object.__vtable = igBoxModel_vtable;
    object._children._value = 0;
    object.__vtable = igScrollListComponentModel_vtable;
    object._upArrow._value = 0;
    object._downArrow._value = 0;
    object._items._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igScrollListComponentModel)

void igScrollListComponentModel_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igScrollListComponentModel_meta, igBoxModel_register,
                       igScrollListComponentModel_parentMeta, igScrollListComponentModel_getMetaCall,
                       igScrollListComponentModel_className, 0x3C,
                       igScrollListComponentModel_vtableRead, igScrollListComponentModel_fieldInit, 0, igScrollListComponentModel_dependencies);
}

META_GET_META_CALL(igScrollListComponentModel)

}
#pragma pop
