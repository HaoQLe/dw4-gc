// beNDMWShopTitle03: Alchemy class registration (0x80326BD4..0x80326E60). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopTitle03)

extern "C" {
extern char lbl_804E6A60[];
extern char lbl_804EC720[];
}

struct Instance_804E6A60 : igObjectInstance {
    char unknown04[48];
    igObjectRefMember _subWindow;
    igObjectRefMember _mother;
    igObjectRefMember _textCloseTypeList;
    igObjectRefMember _textCloseNameList;
    igObjectRefMember _modelCloseInfoNameList;
    igObjectRefMember _modelCloseRamNoList;
    igObjectRefMember _modelCloseSeqNameList;
    inline ~Instance_804E6A60() { __vtable = lbl_804E6A60; }
};

struct Instance_804EC720 : Instance_804E6A60 {
    inline ~Instance_804EC720() { __vtable = lbl_804EC720; }
};

struct beNDMWShopTitle03Instance : Instance_804EC720 {
    char unknown50[8];
    inline ~beNDMWShopTitle03Instance() { __vtable = beNDMWShopTitle03_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWShopTitle03)

META_GET_META(beNDMWShopTitle03)

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beNDMWShopTitle03_vtableRead()
{
    beNDMWShopTitle03Instance object;
    object.__vtable = lbl_804E6A60;
    object._subWindow._value = 0;
    object._mother._value = 0;
    object._textCloseTypeList._value = 0;
    object._textCloseNameList._value = 0;
    object._modelCloseInfoNameList._value = 0;
    object._modelCloseRamNoList._value = 0;
    object._modelCloseSeqNameList._value = 0;
    object.__vtable = lbl_804EC720;
    object.__vtable = beNDMWShopTitle03_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

}
#pragma pop
