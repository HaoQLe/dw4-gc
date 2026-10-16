// igViewManager: Alchemy class registration (0x80407C50..0x80407ECC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igViewManager)
META_DECLARE(igEventReceiver)

extern "C" {
void *fn_8010F4FC();
void fn_801285A0(void *);
void fn_80402E28();
extern char igViewManager_dependencies[288];
}

struct Instance_LigViewManager_0 : igObjectInstance {
    inline Instance_LigViewManager_0()
    {
        __vtable = igEventReceiver_vtable;
    }
};

struct igViewManagerInstance : Instance_LigViewManager_0 {
    char unknown04[4];
    igObjectRefMember _viewMode;
    igObjectRefMember _viewModel;
    igObjectRefMember _synchronizers;
    char unknown14[64];
    inline igViewManagerInstance()
    {
        __vtable = igViewManager_vtable;
        _viewMode._value = 0;
        _viewModel._value = 0;
        _synchronizers._value = 0;
        fn_801285A0(&unknown14);
    }
    inline ~igViewManagerInstance() { __vtable = igViewManager_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igViewManager)

META_GET_META(igViewManager)

void *igViewManager_vtableRead()
{
    igViewManagerInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igViewManager)

void igViewManager_register()
{
    fn_80402E28();
    meta_registerClass(0, &igViewManager_meta, igEventReceiver_register,
                       fn_8010F4FC, igViewManager_getMetaCall,
                       igViewManager_className, 0x54,
                       igViewManager_vtableRead, igViewManager_fieldInit, 0, igViewManager_dependencies);
}

META_GET_META_CALL(igViewManager)

}
#pragma pop
