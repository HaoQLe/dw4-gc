// beNDMWStatusCtrlEquip: Alchemy class registration (0x80333028..0x803333F0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusCtrlEquip)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWStatusCtrlEquip_fieldNames[];
extern char beNDMWStatusCtrlEquip_fieldOffsets[];
extern char beNDMWStatusCtrlEquip_fieldStorage[];
extern char beNDMWStatusCtrlEquip_fieldTypes[];
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

struct beNDMWStatusCtrlEquipInstance : Instance_804E6888 {
    char unknown50[8];
    inline ~beNDMWStatusCtrlEquipInstance() { __vtable = beNDMWStatusCtrlEquip_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beNDMWStatusCtrlEquip)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWStatusCtrlEquip)
#pragma pop

#pragma push
#pragma use_lmw_stmw on
void *beNDMWStatusCtrlEquip_vtableRead()
{
    beNDMWStatusCtrlEquipInstance object;
    object.__vtable = lbl_804E6A60;
    object._subWindow._value = 0;
    object._mother._value = 0;
    object._textCloseTypeList._value = 0;
    object._textCloseNameList._value = 0;
    object._modelCloseInfoNameList._value = 0;
    object._modelCloseRamNoList._value = 0;
    object._modelCloseSeqNameList._value = 0;
    object.__vtable = lbl_804E6888;
    object.__vtable = beNDMWStatusCtrlEquip_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWStatusCtrlEquip)

void beNDMWStatusCtrlEquip_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusCtrlEquip_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWStatusCtrlEquip_getMetaCall,
                       beNDMWStatusCtrlEquip_className, 0x58,
                       beNDMWStatusCtrlEquip_vtableRead, beNDMWStatusCtrlEquip_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWStatusCtrlEquip)

void beNDMWStatusCtrlEquip_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWStatusCtrlEquip_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWStatusCtrlEquip_fieldTypes, 0x1);
    meta_setupFields(meta, beNDMWStatusCtrlEquip_fieldNames, beNDMWStatusCtrlEquip_fieldStorage, beNDMWStatusCtrlEquip_fieldOffsets, base);
}

}
#pragma pop
