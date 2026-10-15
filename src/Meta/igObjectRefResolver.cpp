// igObjectRefResolver: Alchemy class registration (0x802172F0..0x802175A8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igObjectRefResolver)
META_DECLARE(igNamedObject)
META_DECLARE(igObject)

extern "C" {
void *fn_80023CF4();
void *fn_800284F4();
void fn_80216620();
extern char igObjectRefResolver_dependencies[12];
extern char igObjectRefResolver_fieldNames[8];
extern char igObjectRefResolver_fieldOffsets[8];
extern char igObjectRefResolver_fieldStorage[8];
extern char igObjectRefResolver_fieldTypes[8];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igObjectRefResolverInstance : igNamedObjectInstance {
    igObjectRefMember _loadedSymbols;
    igObjectRefMember _resolvedObject;
    char unknown14[4];
    inline ~igObjectRefResolverInstance() { __vtable = igObjectRefResolver_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectRefResolver)

void *igObjectRefResolver_vtableRead()
{
    igObjectRefResolverInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igObjectRefResolver_vtable;
    object._loadedSymbols._value = 0;
    object._resolvedObject._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectRefResolver)

void igObjectRefResolver_register()
{
    fn_80216620();
    meta_registerClass(0, &igObjectRefResolver_meta, igNamedObject_register,
                       fn_80023CF4, igObjectRefResolver_getMetaCall,
                       igObjectRefResolver_className, 0x14,
                       igObjectRefResolver_vtableRead, igObjectRefResolver_fieldInit, 0, igObjectRefResolver_dependencies);
}

META_GET_META_CALL(igObjectRefResolver)

void igObjectRefResolver_fieldInit()
{
    Meta::igMetaObject *meta = igObjectRefResolver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igObjectRefResolver_fieldTypes, 2);
    Meta::igObjectRefMetaField *loadedSymbolsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800284F4();
    loadedSymbolsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    loadedSymbolsField->_persistent = false;
    Meta::igObjectRefMetaField *resolvedObjectField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    resolvedObjectField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igObject_meta);
    resolvedObjectField->_persistent = false;
    meta_setupFields(meta, igObjectRefResolver_fieldNames, igObjectRefResolver_fieldStorage, igObjectRefResolver_fieldOffsets, base);
}

}
#pragma pop
