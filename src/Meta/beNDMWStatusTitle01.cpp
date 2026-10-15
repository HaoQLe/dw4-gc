// beNDMWStatusTitle01: Alchemy class registration (0x8032802C..0x8032836C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusTitle01)
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

struct beNDMWStatusTitle01Instance : Instance_804EC720 {
    char unknown50[8];
    inline ~beNDMWStatusTitle01Instance() { __vtable = beNDMWStatusTitle01_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWStatusTitle01)

META_GET_META(beNDMWStatusTitle01)

#pragma push
#pragma use_lmw_stmw on
void *beNDMWStatusTitle01_vtableRead()
{
    beNDMWStatusTitle01Instance object;
    object.__vtable = lbl_804E6A60;
    object._subWindow._value = 0;
    object._mother._value = 0;
    object._textCloseTypeList._value = 0;
    object._textCloseNameList._value = 0;
    object._modelCloseInfoNameList._value = 0;
    object._modelCloseRamNoList._value = 0;
    object._modelCloseSeqNameList._value = 0;
    object.__vtable = lbl_804EC720;
    object.__vtable = beNDMWStatusTitle01_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWStatusTitle01)

void beNDMWStatusTitle01_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusTitle01_meta, beNDMWWindowTitle_register,
                       fn_80326F88, beNDMWStatusTitle01_getMetaCall,
                       beNDMWStatusTitle01_className, 0x50,
                       beNDMWStatusTitle01_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWStatusTitle01)

}
#pragma pop
