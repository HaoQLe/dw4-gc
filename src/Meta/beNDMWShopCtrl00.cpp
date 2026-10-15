// beNDMWShopCtrl00: Alchemy class registration (0x8032FE44..0x80330184). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopCtrl00)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
void fn_803250AC();
void *fn_8032B8A4();
extern char lbl_804E6888[];
extern char lbl_804E6A60[];
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

struct Instance_804E6888 : Instance_804E6A60 {
    inline ~Instance_804E6888() { __vtable = lbl_804E6888; }
};

struct beNDMWShopCtrl00Instance : Instance_804E6888 {
    char unknown50[8];
    inline ~beNDMWShopCtrl00Instance() { __vtable = beNDMWShopCtrl00_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWShopCtrl00)

META_GET_META(beNDMWShopCtrl00)

#pragma push
#pragma use_lmw_stmw on
void *beNDMWShopCtrl00_vtableRead()
{
    beNDMWShopCtrl00Instance object;
    object.__vtable = lbl_804E6A60;
    object._subWindow._value = 0;
    object._mother._value = 0;
    object._textCloseTypeList._value = 0;
    object._textCloseNameList._value = 0;
    object._modelCloseInfoNameList._value = 0;
    object._modelCloseRamNoList._value = 0;
    object._modelCloseSeqNameList._value = 0;
    object.__vtable = lbl_804E6888;
    object.__vtable = beNDMWShopCtrl00_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWShopCtrl00)

void beNDMWShopCtrl00_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopCtrl00_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWShopCtrl00_getMetaCall,
                       beNDMWShopCtrl00_className, 0x54,
                       beNDMWShopCtrl00_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWShopCtrl00)

}
#pragma pop
