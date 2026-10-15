// igGaussianSmoothImage: Alchemy class registration (0x80149380..0x80149598). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGaussianSmoothImage)
META_DECLARE(igSmoothImage)

extern "C" {
void fn_8012FC48();
void *igGaussianSmoothImage_parentMeta();
extern char lbl_804930AC[];
extern char lbl_804A6B28[];
extern char lbl_804A6B8C[];
}

struct Instance_804A6B8C : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _dest;
    igObjectRefMember _src;
    igObjectRefMember _filter;
    inline ~Instance_804A6B8C() { __vtable = lbl_804A6B8C; }
};

struct Instance_804A6B28 : Instance_804A6B8C {
    inline ~Instance_804A6B28() { __vtable = lbl_804A6B28; }
};

struct igGaussianSmoothImageInstance : Instance_804A6B28 {
    char unknown14[4];
    inline ~igGaussianSmoothImageInstance() { __vtable = igGaussianSmoothImage_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGaussianSmoothImage)

void *igGaussianSmoothImage_vtableRead()
{
    igGaussianSmoothImageInstance object;
    object.__vtable = lbl_804930AC;
    object.__vtable = lbl_804A6B8C;
    object._dest._value = 0;
    object._src._value = 0;
    object._filter._value = 0;
    object.__vtable = lbl_804A6B28;
    object.__vtable = igGaussianSmoothImage_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGaussianSmoothImage)

void igGaussianSmoothImage_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igGaussianSmoothImage_meta, igSmoothImage_register,
                       igGaussianSmoothImage_parentMeta, igGaussianSmoothImage_getMetaCall,
                       igGaussianSmoothImage_className, 0x14,
                       igGaussianSmoothImage_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igGaussianSmoothImage)

}
#pragma pop
