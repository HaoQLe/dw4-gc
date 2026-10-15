// beNDMWShopCtrl50: Alchemy class registration (0x8032EA7C..0x8032EE44). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopCtrl50)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWShopCtrl50_fieldNames[];
extern char beNDMWShopCtrl50_fieldOffsets[];
extern char beNDMWShopCtrl50_fieldStorage[];
extern char beNDMWShopCtrl50_fieldTypes[];
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

struct beNDMWShopCtrl50Instance : Instance_804E6888 {
    char unknown50[24];
    inline ~beNDMWShopCtrl50Instance() { __vtable = beNDMWShopCtrl50_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beNDMWShopCtrl50)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWShopCtrl50)
#pragma pop

#pragma push
#pragma use_lmw_stmw on
void *beNDMWShopCtrl50_vtableRead()
{
    beNDMWShopCtrl50Instance object;
    object.__vtable = lbl_804E6A60;
    object._subWindow._value = 0;
    object._mother._value = 0;
    object._textCloseTypeList._value = 0;
    object._textCloseNameList._value = 0;
    object._modelCloseInfoNameList._value = 0;
    object._modelCloseRamNoList._value = 0;
    object._modelCloseSeqNameList._value = 0;
    object.__vtable = lbl_804E6888;
    object.__vtable = beNDMWShopCtrl50_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWShopCtrl50)

void beNDMWShopCtrl50_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopCtrl50_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWShopCtrl50_getMetaCall,
                       beNDMWShopCtrl50_className, 0x68,
                       beNDMWShopCtrl50_vtableRead, beNDMWShopCtrl50_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWShopCtrl50)

void beNDMWShopCtrl50_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShopCtrl50_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShopCtrl50_fieldTypes, 0x5);
    meta_setupFields(meta, beNDMWShopCtrl50_fieldNames, beNDMWShopCtrl50_fieldStorage, beNDMWShopCtrl50_fieldOffsets, base);
}

}
#pragma pop
