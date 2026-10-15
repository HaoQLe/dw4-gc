// beNDMWWindowCtrl: Alchemy class registration (0x80333E4C..0x80334024). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWWindowCtrl)
META_DECLARE(beNDMWWindow)

extern "C" {
extern char beNDMWWindowCtrl_fieldNames[];
extern char beNDMWWindowCtrl_fieldOffsets[];
extern char beNDMWWindowCtrl_fieldStorage[];
extern char beNDMWWindowCtrl_fieldTypes[];
void fn_803250AC();
void *fn_803287A8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beNDMWWindowCtrl)

META_GET_META(beNDMWWindowCtrl)

META_ARK_REGISTER(beNDMWWindowCtrl)

void beNDMWWindowCtrl_register()
{
    fn_803250AC();
    meta_registerClass(1, &beNDMWWindowCtrl_meta, beNDMWWindow_register,
                       fn_803287A8, beNDMWWindowCtrl_getMetaCall,
                       beNDMWWindowCtrl_className, 0x54,
                       0, beNDMWWindowCtrl_fieldInit, 0, 0);
}

META_GET_META_CALL(beNDMWWindowCtrl)

void beNDMWWindowCtrl_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWWindowCtrl_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWWindowCtrl_fieldTypes, 0x1);
    meta_setupFields(meta, beNDMWWindowCtrl_fieldNames, beNDMWWindowCtrl_fieldStorage, beNDMWWindowCtrl_fieldOffsets, base);
}

}
#pragma pop
