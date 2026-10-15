// beKeyboardReceiver: Alchemy class registration (0x802D4258..0x802D44FC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beKeyboardReceiver)
META_DECLARE(igEventReceiver)

extern "C" {
extern char beKeyboardReceiver_dependencies[8];
extern char beKeyboardReceiver_fieldNames[];
extern char beKeyboardReceiver_fieldOffsets[];
extern char beKeyboardReceiver_fieldStorage[];
extern char beKeyboardReceiver_fieldTypes[];
void *fn_80036C40();
void *fn_8010F4FC();
void fn_802B1AC8();
}

struct beKeyboardReceiverInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _keyboard;
    char unknown0C[4];
    inline ~beKeyboardReceiverInstance() { __vtable = beKeyboardReceiver_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beKeyboardReceiver)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beKeyboardReceiver)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beKeyboardReceiver_vtableRead()
{
    beKeyboardReceiverInstance object;
    object.__vtable = igEventReceiver_vtable;
    object.__vtable = beKeyboardReceiver_vtable;
    object._keyboard._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beKeyboardReceiver)

void beKeyboardReceiver_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beKeyboardReceiver_meta, igEventReceiver_register,
                       fn_8010F4FC, beKeyboardReceiver_getMetaCall,
                       beKeyboardReceiver_className, 0xC,
                       beKeyboardReceiver_vtableRead, beKeyboardReceiver_fieldInit, 0, beKeyboardReceiver_dependencies);
}

META_GET_META_CALL(beKeyboardReceiver)

void beKeyboardReceiver_fieldInit()
{
    Meta::igMetaObject *meta = beKeyboardReceiver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beKeyboardReceiver_fieldTypes, 1);
    Meta::igObjectRefMetaField *keyboardField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80036C40();
    keyboardField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    keyboardField->_construct = true;
    meta_setupFields(meta, beKeyboardReceiver_fieldNames, beKeyboardReceiver_fieldStorage, beKeyboardReceiver_fieldOffsets, base);
}

}
#pragma pop
