// igImageHistogram_RGB: Alchemy class registration (0x801376D8..0x801379A0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igImageHistogram_RGB)
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

struct igImageHistogram_RGBInstance : Instance_804A404C {
    inline ~igImageHistogram_RGBInstance() { __vtable = igImageHistogram_RGB_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igImageHistogram_RGB)

META_GET_META(igImageHistogram_RGB)

void *igImageHistogram_RGB_vtableRead()
{
    igImageHistogram_RGBInstance object;
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474900;
    object.__vtable = igUnsignedIntList_vtable;
    object.__vtable = lbl_804A404C;
    object._workPalette2._value = 0;
    object._workUpdateBox2._value = 0;
    object._workMinDist2._value = 0;
    object._workColorList2._value = 0;
    object._workBestColorList2._value = 0;
    object.__vtable = igImageHistogram_RGB_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igImageHistogram_RGB)

void igImageHistogram_RGB_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igImageHistogram_RGB_meta, igImageHistogramBase_register,
                       fn_801376D0, igImageHistogram_RGB_getMetaCall,
                       igImageHistogram_RGB_className, 0x50,
                       igImageHistogram_RGB_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igImageHistogram_RGB)

}
#pragma pop
