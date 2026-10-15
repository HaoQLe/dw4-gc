// beNDMWShopCtrlSell: Alchemy class registration (0x8032D0D4..0x8032D414). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopCtrlSell)
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

struct beNDMWShopCtrlSellInstance : Instance_804E6888 {
    char unknown50[8];
    inline ~beNDMWShopCtrlSellInstance() { __vtable = beNDMWShopCtrlSell_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beNDMWShopCtrlSell)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWShopCtrlSell)
#pragma pop

#pragma push
#pragma use_lmw_stmw on
void *beNDMWShopCtrlSell_vtableRead()
{
    beNDMWShopCtrlSellInstance object;
    object.__vtable = lbl_804E6A60;
    object._subWindow._value = 0;
    object._mother._value = 0;
    object._textCloseTypeList._value = 0;
    object._textCloseNameList._value = 0;
    object._modelCloseInfoNameList._value = 0;
    object._modelCloseRamNoList._value = 0;
    object._modelCloseSeqNameList._value = 0;
    object.__vtable = lbl_804E6888;
    object.__vtable = beNDMWShopCtrlSell_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWShopCtrlSell)

void beNDMWShopCtrlSell_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopCtrlSell_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWShopCtrlSell_getMetaCall,
                       beNDMWShopCtrlSell_className, 0x54,
                       beNDMWShopCtrlSell_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWShopCtrlSell)

}
#pragma pop
