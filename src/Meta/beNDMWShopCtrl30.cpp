// beNDMWShopCtrl30: Alchemy class registration (0x8032F20C..0x8032F5D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopCtrl30)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWShopCtrl30_fieldNames[];
extern char beNDMWShopCtrl30_fieldOffsets[];
extern char beNDMWShopCtrl30_fieldStorage[];
extern char beNDMWShopCtrl30_fieldTypes[];
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

struct beNDMWShopCtrl30Instance : Instance_804E6888 {
    char unknown50[8];
    inline ~beNDMWShopCtrl30Instance() { __vtable = beNDMWShopCtrl30_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWShopCtrl30)

META_GET_META(beNDMWShopCtrl30)

#pragma push
#pragma use_lmw_stmw on
void *beNDMWShopCtrl30_vtableRead()
{
    beNDMWShopCtrl30Instance object;
    object.__vtable = lbl_804E6A60;
    object._subWindow._value = 0;
    object._mother._value = 0;
    object._textCloseTypeList._value = 0;
    object._textCloseNameList._value = 0;
    object._modelCloseInfoNameList._value = 0;
    object._modelCloseRamNoList._value = 0;
    object._modelCloseSeqNameList._value = 0;
    object.__vtable = lbl_804E6888;
    object.__vtable = beNDMWShopCtrl30_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWShopCtrl30)

void beNDMWShopCtrl30_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopCtrl30_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWShopCtrl30_getMetaCall,
                       beNDMWShopCtrl30_className, 0x58,
                       beNDMWShopCtrl30_vtableRead, beNDMWShopCtrl30_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWShopCtrl30)

void beNDMWShopCtrl30_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShopCtrl30_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShopCtrl30_fieldTypes, 0x1);
    meta_setupFields(meta, beNDMWShopCtrl30_fieldNames, beNDMWShopCtrl30_fieldStorage, beNDMWShopCtrl30_fieldOffsets, base);
}

}
#pragma pop
