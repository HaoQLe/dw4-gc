// beNDMWShopCtrl40: Alchemy class registration (0x8032EE44..0x8032F20C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopCtrl40)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWShopCtrl40_fieldNames[];
extern char beNDMWShopCtrl40_fieldOffsets[];
extern char beNDMWShopCtrl40_fieldStorage[];
extern char beNDMWShopCtrl40_fieldTypes[];
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

struct beNDMWShopCtrl40Instance : Instance_804E6888 {
    char unknown50[8];
    inline ~beNDMWShopCtrl40Instance() { __vtable = beNDMWShopCtrl40_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWShopCtrl40)

META_GET_META(beNDMWShopCtrl40)

#pragma push
#pragma use_lmw_stmw on
void *beNDMWShopCtrl40_vtableRead()
{
    beNDMWShopCtrl40Instance object;
    object.__vtable = lbl_804E6A60;
    object._subWindow._value = 0;
    object._mother._value = 0;
    object._textCloseTypeList._value = 0;
    object._textCloseNameList._value = 0;
    object._modelCloseInfoNameList._value = 0;
    object._modelCloseRamNoList._value = 0;
    object._modelCloseSeqNameList._value = 0;
    object.__vtable = lbl_804E6888;
    object.__vtable = beNDMWShopCtrl40_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWShopCtrl40)

void beNDMWShopCtrl40_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopCtrl40_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWShopCtrl40_getMetaCall,
                       beNDMWShopCtrl40_className, 0x58,
                       beNDMWShopCtrl40_vtableRead, beNDMWShopCtrl40_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWShopCtrl40)

void beNDMWShopCtrl40_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShopCtrl40_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShopCtrl40_fieldTypes, 0x1);
    meta_setupFields(meta, beNDMWShopCtrl40_fieldNames, beNDMWShopCtrl40_fieldStorage, beNDMWShopCtrl40_fieldOffsets, base);
}

}
#pragma pop
