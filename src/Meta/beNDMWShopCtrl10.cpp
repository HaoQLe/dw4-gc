// beNDMWShopCtrl10: Alchemy class registration (0x8032FA7C..0x8032FE44). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopCtrl10)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWShopCtrl10_fieldNames[];
extern char beNDMWShopCtrl10_fieldOffsets[];
extern char beNDMWShopCtrl10_fieldStorage[];
extern char beNDMWShopCtrl10_fieldTypes[];
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

struct beNDMWShopCtrl10Instance : Instance_804E6888 {
    char unknown50[24];
    inline ~beNDMWShopCtrl10Instance() { __vtable = beNDMWShopCtrl10_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beNDMWShopCtrl10)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWShopCtrl10)
#pragma pop

#pragma push
#pragma use_lmw_stmw on
void *beNDMWShopCtrl10_vtableRead()
{
    beNDMWShopCtrl10Instance object;
    object.__vtable = lbl_804E6A60;
    object._subWindow._value = 0;
    object._mother._value = 0;
    object._textCloseTypeList._value = 0;
    object._textCloseNameList._value = 0;
    object._modelCloseInfoNameList._value = 0;
    object._modelCloseRamNoList._value = 0;
    object._modelCloseSeqNameList._value = 0;
    object.__vtable = lbl_804E6888;
    object.__vtable = beNDMWShopCtrl10_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWShopCtrl10)

void beNDMWShopCtrl10_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopCtrl10_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWShopCtrl10_getMetaCall,
                       beNDMWShopCtrl10_className, 0x5C,
                       beNDMWShopCtrl10_vtableRead, beNDMWShopCtrl10_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWShopCtrl10)

void beNDMWShopCtrl10_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShopCtrl10_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShopCtrl10_fieldTypes, 0x2);
    meta_setupFields(meta, beNDMWShopCtrl10_fieldNames, beNDMWShopCtrl10_fieldStorage, beNDMWShopCtrl10_fieldOffsets, base);
}

}
#pragma pop
