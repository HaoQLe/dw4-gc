// beNDMWShopCtrlEditBit: Alchemy class registration (0x8032D414..0x8032D7DC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWShopCtrlEditBit)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWShopCtrlEditBit_fieldNames[];
extern char beNDMWShopCtrlEditBit_fieldOffsets[];
extern char beNDMWShopCtrlEditBit_fieldStorage[];
extern char beNDMWShopCtrlEditBit_fieldTypes[];
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

struct beNDMWShopCtrlEditBitInstance : Instance_804E6888 {
    char unknown50[24];
    inline ~beNDMWShopCtrlEditBitInstance() { __vtable = beNDMWShopCtrlEditBit_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWShopCtrlEditBit)

META_GET_META(beNDMWShopCtrlEditBit)

#pragma push
#pragma use_lmw_stmw on
void *beNDMWShopCtrlEditBit_vtableRead()
{
    beNDMWShopCtrlEditBitInstance object;
    object.__vtable = lbl_804E6A60;
    object._subWindow._value = 0;
    object._mother._value = 0;
    object._textCloseTypeList._value = 0;
    object._textCloseNameList._value = 0;
    object._modelCloseInfoNameList._value = 0;
    object._modelCloseRamNoList._value = 0;
    object._modelCloseSeqNameList._value = 0;
    object.__vtable = lbl_804E6888;
    object.__vtable = beNDMWShopCtrlEditBit_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWShopCtrlEditBit)

void beNDMWShopCtrlEditBit_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShopCtrlEditBit_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWShopCtrlEditBit_getMetaCall,
                       beNDMWShopCtrlEditBit_className, 0x5C,
                       beNDMWShopCtrlEditBit_vtableRead, beNDMWShopCtrlEditBit_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWShopCtrlEditBit)

void beNDMWShopCtrlEditBit_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShopCtrlEditBit_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShopCtrlEditBit_fieldTypes, 0x2);
    meta_setupFields(meta, beNDMWShopCtrlEditBit_fieldNames, beNDMWShopCtrlEditBit_fieldStorage, beNDMWShopCtrlEditBit_fieldOffsets, base);
}

}
#pragma pop
