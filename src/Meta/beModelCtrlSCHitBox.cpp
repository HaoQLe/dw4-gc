// beModelCtrlSCHitBox: Alchemy class registration (0x802C579C..0x802C59B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlSCHitBox)
META_DECLARE(beModelCtrlSubComBase)

extern "C" {
extern char beModelCtrlSCHitBox_fieldNames[];
extern char beModelCtrlSCHitBox_fieldOffsets[];
extern char beModelCtrlSCHitBox_fieldStorage[];
extern char beModelCtrlSCHitBox_fieldTypes[];
void fn_802B1AC8();
void *fn_802C570C();
extern char lbl_804D9E80[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beModelCtrlSCHitBox)

META_GET_META(beModelCtrlSCHitBox)

void *beModelCtrlSCHitBox_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[68];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804D9E80;
    object.__vtable = beModelCtrlSCHitBox_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlSCHitBox)

void beModelCtrlSCHitBox_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlSCHitBox_meta, beModelCtrlSubComBase_register,
                       fn_802C570C, beModelCtrlSCHitBox_getMetaCall,
                       beModelCtrlSCHitBox_className, 0x3C,
                       beModelCtrlSCHitBox_vtableRead, beModelCtrlSCHitBox_fieldInit, 0, 0);
}

META_GET_META_CALL(beModelCtrlSCHitBox)

void beModelCtrlSCHitBox_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlSCHitBox_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlSCHitBox_fieldTypes, 0x6);
    meta_setupFields(meta, beModelCtrlSCHitBox_fieldNames, beModelCtrlSCHitBox_fieldStorage, beModelCtrlSCHitBox_fieldOffsets, base);
}

}
#pragma pop
