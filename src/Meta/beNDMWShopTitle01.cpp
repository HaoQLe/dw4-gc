// beNDMWShopTitle01: Alchemy class registration (0x80326F98..0x803272D8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopTitle01)
META_DECLARE(beNDMWWindowTitle)

extern "C" {
void fn_803250AC();
void *fn_80326F88();
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

struct beNDMWShopTitle01Instance : Instance_804EC720 {
    char unknown50[8];
    inline ~beNDMWShopTitle01Instance() { __vtable = beNDMWShopTitle01_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWShopTitle01)

META_GET_META(beNDMWShopTitle01)

#pragma push
#pragma use_lmw_stmw on
void *beNDMWShopTitle01_vtableRead()
{
    beNDMWShopTitle01Instance object;
    object.__vtable = lbl_804E6A60;
    object._subWindow._value = 0;
    object._mother._value = 0;
    object._textCloseTypeList._value = 0;
    object._textCloseNameList._value = 0;
    object._modelCloseInfoNameList._value = 0;
    object._modelCloseRamNoList._value = 0;
    object._modelCloseSeqNameList._value = 0;
    object.__vtable = lbl_804EC720;
    object.__vtable = beNDMWShopTitle01_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWShopTitle01)

void beNDMWShopTitle01_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopTitle01_meta, beNDMWWindowTitle_register,
                       fn_80326F88, beNDMWShopTitle01_getMetaCall,
                       beNDMWShopTitle01_className, 0x50,
                       beNDMWShopTitle01_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWShopTitle01)

}
#pragma pop
