// beCameraMode: Alchemy class registration (0x802E1478..0x802E170C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beCameraMode)
META_DECLARE(igViewMode)

extern "C" {
extern char beCameraMode_dependencies[16];
void fn_801285A0(void *);
void fn_802B1AC8();
void *fn_802E170C();
extern char lbl_80495AD8[100];
}

struct Instance_LbeCameraMode_0 : igObjectInstance {
    inline Instance_LbeCameraMode_0()
    {
        __vtable = lbl_80495AD8;
    }
};

struct Instance_LbeCameraMode_1 : Instance_LbeCameraMode_0 {
    char unknown04[8];
    char unknown0C[64];
    inline Instance_LbeCameraMode_1()
    {
        __vtable = igViewMode_vtable;
        fn_801285A0(&unknown0C);
    }
};

struct beCameraModeInstance : Instance_LbeCameraMode_1 {
    igObjectRefMember _cameraPath;
    igObjectRefMember _camera;
    char unknown54[36];
    inline beCameraModeInstance()
    {
        __vtable = beCameraMode_vtable;
        _cameraPath._value = 0;
        _camera._value = 0;
    }
    inline ~beCameraModeInstance() { __vtable = beCameraMode_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beCameraMode)

META_METAOBJECT(beCameraMode)

META_GET_META(beCameraMode)

void *beCameraMode_vtableRead()
{
    beCameraModeInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beCameraMode)

void beCameraMode_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCameraMode_meta, igViewMode_register,
                       fn_802E170C, beCameraMode_getMetaCall,
                       beCameraMode_className, 0x78,
                       beCameraMode_vtableRead, beCameraMode_fieldInit, 0, beCameraMode_dependencies);
}

META_GET_META_CALL(beCameraMode)

}
#pragma pop
