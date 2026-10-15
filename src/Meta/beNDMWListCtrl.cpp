// beNDMWListCtrl: Alchemy class registration (0x80333CC8..0x80333E4C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWListCtrl)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWListCtrl_fieldNames[];
extern char beNDMWListCtrl_fieldOffsets[];
extern char beNDMWListCtrl_fieldStorage[];
extern char beNDMWListCtrl_fieldTypes[];
void fn_803250AC();
void *fn_8032B8A4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNDMWListCtrl)

META_ARK_REGISTER(beNDMWListCtrl)

void beNDMWListCtrl_register()
{
    fn_803250AC();
    meta_registerClass(1, &beNDMWListCtrl_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWListCtrl_getMetaCall,
                       beNDMWListCtrl_className, 0x60,
                       0, beNDMWListCtrl_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWListCtrl)

void beNDMWListCtrl_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWListCtrl_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWListCtrl_fieldTypes, 0x3);
    meta_setupFields(meta, beNDMWListCtrl_fieldNames, beNDMWListCtrl_fieldStorage, beNDMWListCtrl_fieldOffsets, base);
}

}
#pragma pop
