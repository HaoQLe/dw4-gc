// beModelCtrlMoveObject: Alchemy class registration (0x802C85DC..0x802C884C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igFloatMetaField.h>

META_DECLARE(beModelCtrlMoveObject)
META_DECLARE(igObject)

extern "C" {
extern char beModelCtrlMoveObject_fieldNames[];
extern char beModelCtrlMoveObject_fieldOffsets[];
extern char beModelCtrlMoveObject_fieldStorage[];
extern char beModelCtrlMoveObject_fieldTypes[];
void *fn_800237D0();
void fn_8004D4BC(void *,float);
void fn_802B1AC8();
extern char lbl_8041E6AC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beModelCtrlMoveObject)

META_GET_META(beModelCtrlMoveObject)

void *beModelCtrlMoveObject_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[52];
    } object;
    igObject_construct(&object);
    object.__vtable = beModelCtrlMoveObject_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlMoveObject)

void beModelCtrlMoveObject_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlMoveObject_meta, igObject_register,
                       fn_800237D0, beModelCtrlMoveObject_getMetaCall,
                       beModelCtrlMoveObject_className, 0x2C,
                       beModelCtrlMoveObject_vtableRead, beModelCtrlMoveObject_fieldInit, 0, 0);
}

META_GET_META_CALL(beModelCtrlMoveObject)

void beModelCtrlMoveObject_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlMoveObject_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlMoveObject_fieldTypes, 9);
    Meta::igFloatMetaField *endTimeField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 1));
    fn_8004D4BC(endTimeField, *reinterpret_cast<float *>(lbl_8041E6AC + 0));
    Meta::igFloatMetaField *valueField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 3));
    fn_8004D4BC(valueField, *reinterpret_cast<float *>(lbl_8041E6AC + 0));
    Meta::igFloatMetaField *accField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 4));
    fn_8004D4BC(accField, *reinterpret_cast<float *>(lbl_8041E6AC + 0));
    Meta::igFloatMetaField *speedField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 5));
    fn_8004D4BC(speedField, *reinterpret_cast<float *>(lbl_8041E6AC + 0));
    meta_setupFields(meta, beModelCtrlMoveObject_fieldNames, beModelCtrlMoveObject_fieldStorage, beModelCtrlMoveObject_fieldOffsets, base);
}

}
#pragma pop
