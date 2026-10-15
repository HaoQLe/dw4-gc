// beNDMWStatusCtrlFolder: Alchemy class registration (0x80331F5C..0x80332324). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusCtrlFolder)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWStatusCtrlFolder_fieldNames[];
extern char beNDMWStatusCtrlFolder_fieldOffsets[];
extern char beNDMWStatusCtrlFolder_fieldStorage[];
extern char beNDMWStatusCtrlFolder_fieldTypes[];
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

struct beNDMWStatusCtrlFolderInstance : Instance_804E6888 {
    char unknown50[8];
    inline ~beNDMWStatusCtrlFolderInstance() { __vtable = beNDMWStatusCtrlFolder_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beNDMWStatusCtrlFolder)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWStatusCtrlFolder)
#pragma pop

#pragma push
#pragma use_lmw_stmw on
void *beNDMWStatusCtrlFolder_vtableRead()
{
    beNDMWStatusCtrlFolderInstance object;
    object.__vtable = lbl_804E6A60;
    object._subWindow._value = 0;
    object._mother._value = 0;
    object._textCloseTypeList._value = 0;
    object._textCloseNameList._value = 0;
    object._modelCloseInfoNameList._value = 0;
    object._modelCloseRamNoList._value = 0;
    object._modelCloseSeqNameList._value = 0;
    object.__vtable = lbl_804E6888;
    object.__vtable = beNDMWStatusCtrlFolder_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWStatusCtrlFolder)

void beNDMWStatusCtrlFolder_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusCtrlFolder_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWStatusCtrlFolder_getMetaCall,
                       beNDMWStatusCtrlFolder_className, 0x58,
                       beNDMWStatusCtrlFolder_vtableRead, beNDMWStatusCtrlFolder_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWStatusCtrlFolder)

void beNDMWStatusCtrlFolder_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWStatusCtrlFolder_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWStatusCtrlFolder_fieldTypes, 0x1);
    meta_setupFields(meta, beNDMWStatusCtrlFolder_fieldNames, beNDMWStatusCtrlFolder_fieldStorage, beNDMWStatusCtrlFolder_fieldOffsets, base);
}

}
#pragma pop
