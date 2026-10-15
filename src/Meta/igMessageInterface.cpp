// igMessageInterface: Alchemy class registration (0x8014169C..0x801418BC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igMessageInterface)
META_DECLARE(igInterface)

extern "C" {
void fn_8012FC48();
void *fn_8013B680();
void *fn_80141A1C();
extern char igMessageInterface_dependencies[8];
extern char igMessageInterface_fieldNames[4];
extern char igMessageInterface_fieldOffsets[4];
extern char igMessageInterface_fieldStorage[4];
extern char igMessageInterface_fieldTypes[4];
extern char lbl_804A6460[];
}

struct igMessageInterfaceInstance : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _messages;
    char unknown24[12];
    inline ~igMessageInterfaceInstance() { __vtable = igMessageInterface_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMessageInterface)

void *igMessageInterface_vtableRead()
{
    igMessageInterfaceInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = igInterface_vtable;
    object.__vtable = igMessageInterface_vtable;
    object._messages._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMessageInterface)

void igMessageInterface_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igMessageInterface_meta, igInterface_register,
                       fn_8013B680, igMessageInterface_getMetaCall,
                       igMessageInterface_className, 0x24,
                       igMessageInterface_vtableRead, igMessageInterface_fieldInit, 0, igMessageInterface_dependencies);
}

META_GET_META_CALL(igMessageInterface)

void igMessageInterface_fieldInit()
{
    Meta::igMetaObject *meta = igMessageInterface_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMessageInterface_fieldTypes, 1);
    Meta::igObjectRefMetaField *messagesField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80141A1C();
    messagesField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    messagesField->_construct = true;
    meta_setupFields(meta, igMessageInterface_fieldNames, igMessageInterface_fieldStorage, igMessageInterface_fieldOffsets, base);
}

}
#pragma pop
