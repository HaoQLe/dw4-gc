// beModelCtrlSubComBase: Alchemy class registration (0x802C5C6C..0x802C5E08). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igFloatMetaField.h>

META_DECLARE(beModelCtrlSubComBase)
META_DECLARE(igObject)

extern "C" {
extern char beModelCtrlSubComBase_fieldNames[];
extern char beModelCtrlSubComBase_fieldOffsets[];
extern char beModelCtrlSubComBase_fieldStorage[];
extern char beModelCtrlSubComBase_fieldTypes[];
void *fn_800237D0();
void fn_8004D4BC(void *,float);
void fn_802B1AC8();
extern char lbl_8041E6AC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlSubComBase)

META_ARK_REGISTER(beModelCtrlSubComBase)

void beModelCtrlSubComBase_register()
{
    fn_802B1AC8();
    meta_registerClass(1, &beModelCtrlSubComBase_meta, igObject_register,
                       fn_800237D0, beModelCtrlSubComBase_getMetaCall,
                       beModelCtrlSubComBase_className, 0x14,
                       0, beModelCtrlSubComBase_fieldInit, 0, 0);
}

META_GET_META_CALL(beModelCtrlSubComBase)

void beModelCtrlSubComBase_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlSubComBase_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlSubComBase_fieldTypes, 3);
    Meta::igFloatMetaField *runFrameField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 1));
    fn_8004D4BC(runFrameField, *reinterpret_cast<float *>(lbl_8041E6AC + 0));
    meta_setupFields(meta, beModelCtrlSubComBase_fieldNames, beModelCtrlSubComBase_fieldStorage, beModelCtrlSubComBase_fieldOffsets, base);
}

}
#pragma pop
