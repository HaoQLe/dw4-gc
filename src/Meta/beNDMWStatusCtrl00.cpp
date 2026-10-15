// beNDMWStatusCtrl00: Alchemy class registration (0x80333900..0x80333CC8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusCtrl00)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWStatusCtrl00_fieldNames[];
extern char beNDMWStatusCtrl00_fieldOffsets[];
extern char beNDMWStatusCtrl00_fieldStorage[];
extern char beNDMWStatusCtrl00_fieldTypes[];
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

struct beNDMWStatusCtrl00Instance : Instance_804E6888 {
    char unknown50[8];
    inline ~beNDMWStatusCtrl00Instance() { __vtable = beNDMWStatusCtrl00_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beNDMWStatusCtrl00)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWStatusCtrl00)
#pragma pop

#pragma push
#pragma use_lmw_stmw on
void *beNDMWStatusCtrl00_vtableRead()
{
    beNDMWStatusCtrl00Instance object;
    object.__vtable = lbl_804E6A60;
    object._subWindow._value = 0;
    object._mother._value = 0;
    object._textCloseTypeList._value = 0;
    object._textCloseNameList._value = 0;
    object._modelCloseInfoNameList._value = 0;
    object._modelCloseRamNoList._value = 0;
    object._modelCloseSeqNameList._value = 0;
    object.__vtable = lbl_804E6888;
    object.__vtable = beNDMWStatusCtrl00_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWStatusCtrl00)

void beNDMWStatusCtrl00_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusCtrl00_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWStatusCtrl00_getMetaCall,
                       beNDMWStatusCtrl00_className, 0x58,
                       beNDMWStatusCtrl00_vtableRead, beNDMWStatusCtrl00_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWStatusCtrl00)

void beNDMWStatusCtrl00_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWStatusCtrl00_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWStatusCtrl00_fieldTypes, 0x1);
    meta_setupFields(meta, beNDMWStatusCtrl00_fieldNames, beNDMWStatusCtrl00_fieldStorage, beNDMWStatusCtrl00_fieldOffsets, base);
}

}
#pragma pop
