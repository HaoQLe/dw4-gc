// igImageHistogram_RGBA: Alchemy class registration (0x80137408..0x801376D0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igImageHistogram_RGBA)
META_DECLARE(igDataList)
META_DECLARE(igImageHistogramBase)
META_DECLARE(igUnsignedIntList)

extern "C" {
void fn_8012FC48();
void *fn_801376D0();
extern char lbl_80474900[];
extern char lbl_804A404C[];
}

struct Instance_804A404C : igObjectInstance {
    char unknown04[56];
    igObjectRefMember _workPalette2;
    igObjectRefMember _workUpdateBox2;
    igObjectRefMember _workMinDist2;
    igObjectRefMember _workColorList2;
    igObjectRefMember _workBestColorList2;
    inline ~Instance_804A404C() { __vtable = lbl_804A404C; }
};

struct igImageHistogram_RGBAInstance : Instance_804A404C {
    inline ~igImageHistogram_RGBAInstance() { __vtable = igImageHistogram_RGBA_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igImageHistogram_RGBA)

META_GET_META(igImageHistogram_RGBA)

void *igImageHistogram_RGBA_vtableRead()
{
    igImageHistogram_RGBAInstance object;
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474900;
    object.__vtable = igUnsignedIntList_vtable;
    object.__vtable = lbl_804A404C;
    object._workPalette2._value = 0;
    object._workUpdateBox2._value = 0;
    object._workMinDist2._value = 0;
    object._workColorList2._value = 0;
    object._workBestColorList2._value = 0;
    object.__vtable = igImageHistogram_RGBA_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igImageHistogram_RGBA)

void igImageHistogram_RGBA_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igImageHistogram_RGBA_meta, igImageHistogramBase_register,
                       fn_801376D0, igImageHistogram_RGBA_getMetaCall,
                       igImageHistogram_RGBA_className, 0x50,
                       igImageHistogram_RGBA_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igImageHistogram_RGBA)

}
#pragma pop
