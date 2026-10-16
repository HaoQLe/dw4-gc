// igCameraMode: Alchemy class registration (0x80407720..0x80407960). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCameraMode)
META_DECLARE(igViewMode)

extern "C" {
void fn_801285A0(void *);
void *fn_802E170C();
void fn_80402E28();
extern char igCameraMode_dependencies[60];
extern char lbl_80495AD8[100];
}

struct Instance_LigCameraMode_0 : igObjectInstance {
};

struct Instance_LigCameraMode_1 : Instance_LigCameraMode_0 {
    char unknown04[8];
    char unknown0C[64];
};

struct igCameraModeInstance : Instance_LigCameraMode_1 {
    igObjectRefMember _cameraPath;
    igObjectRefMember _camera;
    inline ~igCameraModeInstance() { __vtable = igCameraMode_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igCameraMode)

META_GET_META(igCameraMode)

void *igCameraMode_vtableRead()
{
    igCameraModeInstance object;
    object.__vtable = lbl_80495AD8;
    object.__vtable = igViewMode_vtable;
    fn_801285A0(&object.unknown0C);
    object.__vtable = igCameraMode_vtable;
    object._cameraPath._value = 0;
    object._camera._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCameraMode)

void igCameraMode_register()
{
    fn_80402E28();
    meta_registerClass(0, &igCameraMode_meta, igViewMode_register,
                       fn_802E170C, igCameraMode_getMetaCall,
                       igCameraMode_className, 0x54,
                       igCameraMode_vtableRead, igCameraMode_fieldInit, 0, igCameraMode_dependencies);
}

META_GET_META_CALL(igCameraMode)

}
#pragma pop
