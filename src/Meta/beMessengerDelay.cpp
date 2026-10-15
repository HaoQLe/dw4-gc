// beMessengerDelay: Alchemy class registration (0x802CF068..0x802CF3B0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beMessengerDelay)
META_DECLARE(beMessengerArgData)
META_DECLARE(igObject)

extern "C" {
extern char beMessengerDelay_dependencies[8];
extern char beMessengerDelay_fieldNames[];
extern char beMessengerDelay_fieldOffsets[];
extern char beMessengerDelay_fieldStorage[];
extern char beMessengerDelay_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

struct beMessengerDelayInstance : igObjectInstance {
    char unknown04[20];
    igStringMember _groupName;
    igStringMember _infoName;
    char unknown20[4];
    igStringMember _message;
    igObjectRefMember _argData;
    char unknown2C[12];
    inline ~beMessengerDelayInstance() { __vtable = beMessengerDelay_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beMessengerDelay)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beMessengerDelay)
#pragma pop

void *beMessengerDelay_vtableRead()
{
    beMessengerDelayInstance object;
    object.__vtable = beMessengerDelay_vtable;
    object._groupName._value = 0;
    object._infoName._value = 0;
    object._message._value = 0;
    object._argData._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beMessengerDelay)

void beMessengerDelay_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMessengerDelay_meta, igObject_register,
                       fn_800237D0, beMessengerDelay_getMetaCall,
                       beMessengerDelay_className, 0x30,
                       beMessengerDelay_vtableRead, beMessengerDelay_fieldInit, 0, beMessengerDelay_dependencies);
}

META_GET_META_CALL(beMessengerDelay)

void beMessengerDelay_fieldInit()
{
    Meta::igMetaObject *meta = beMessengerDelay_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beMessengerDelay_fieldTypes, 7);
    Meta::igObjectRefMetaField *argDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    argDataField->_metaObject = beMessengerArgData_metaObject();
    argDataField->_construct = true;
    meta_setupFields(meta, beMessengerDelay_fieldNames, beMessengerDelay_fieldStorage, beMessengerDelay_fieldOffsets, base);
}

}
#pragma pop
