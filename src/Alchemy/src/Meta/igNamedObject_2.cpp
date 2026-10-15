// igNamedObject: Alchemy class registration (0x80029C6C..0x80029E64). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igStringMetaField.h>

META_DECLARE(igNamedObject)
META_DECLARE(igObject)

extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80071694(void *,void *);
extern char igNamedObject_fieldNames[4];
extern char igNamedObject_fieldOffsets[4];
extern char igNamedObject_fieldStorage[4];
extern char igNamedObject_fieldTypes[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    char unknown0C[4];
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNamedObject)

void *igNamedObject_vtableRead()
{
    igNamedObjectInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNamedObject)

void igNamedObject_register()
{
    fn_80021B94();
    meta_registerClass(0, &igNamedObject_meta, igObject_register,
                       fn_800237D0, igNamedObject_getMetaCall,
                       igNamedObject_className, 0xC,
                       igNamedObject_vtableRead, igNamedObject_fieldInit, 0, 0);
}

META_GET_META_CALL(igNamedObject)

void igNamedObject_fieldInit()
{
    Meta::igMetaObject *meta = igNamedObject_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igNamedObject_fieldTypes, 1);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base));
    fn_80071694(nameField, (void *)0);
    meta_setupFields(meta, igNamedObject_fieldNames, igNamedObject_fieldStorage, igNamedObject_fieldOffsets, base);
}

}
#pragma pop
