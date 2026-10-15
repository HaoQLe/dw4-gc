// igZoomImage: Alchemy class registration (0x80149690..0x801498D0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igZoomImage)
META_DECLARE(igFilterImage)

extern "C" {
void fn_8012FC48();
void *fn_80149688();
extern char lbl_804930AC[];
extern char lbl_804A6B8C[];
}

struct Instance_804A6B8C : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _dest;
    igObjectRefMember _src;
    igObjectRefMember _filter;
    inline ~Instance_804A6B8C() { __vtable = lbl_804A6B8C; }
};

struct igZoomImageInstance : Instance_804A6B8C {
    char unknown14[4];
    inline ~igZoomImageInstance() { __vtable = igZoomImage_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igZoomImage)

META_GET_META(igZoomImage)

void *igZoomImage_vtableRead()
{
    igZoomImageInstance object;
    object.__vtable = lbl_804930AC;
    object.__vtable = lbl_804A6B8C;
    object._dest._value = 0;
    object._src._value = 0;
    object._filter._value = 0;
    object.__vtable = igZoomImage_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igZoomImage)

void igZoomImage_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igZoomImage_meta, igFilterImage_register,
                       fn_80149688, igZoomImage_getMetaCall,
                       igZoomImage_className, 0x14,
                       igZoomImage_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igZoomImage)

}
#pragma pop
