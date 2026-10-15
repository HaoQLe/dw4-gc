// igPluginRepository: Alchemy class registration (0x80028260..0x800284EC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igEnumMetaField.h>

META_DECLARE(igPluginRepository)
META_DECLARE(igNamedObject)

extern "C" {
void fn_80021B94();
void *fn_80023CF4();
void *fn_80028214();
extern char igPluginRepository_fieldNames[8];
extern char igPluginRepository_fieldOffsets[8];
extern char igPluginRepository_fieldStorage[8];
extern char igPluginRepository_fieldTypes[8];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igPluginRepositoryInstance : igNamedObjectInstance {
    igStringMember _location;
    char unknown10[16];
    inline ~igPluginRepositoryInstance() { __vtable = igPluginRepository_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igPluginRepository)

META_GET_META(igPluginRepository)

void *igPluginRepository_vtableRead()
{
    igPluginRepositoryInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igPluginRepository_vtable;
    object._location._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPluginRepository)

void igPluginRepository_register()
{
    fn_80021B94();
    meta_registerClass(0, &igPluginRepository_meta, igNamedObject_register,
                       fn_80023CF4, igPluginRepository_getMetaCall,
                       igPluginRepository_className, 0x14,
                       igPluginRepository_vtableRead, igPluginRepository_fieldInit, 0, 0);
}

META_GET_META_CALL(igPluginRepository)

void igPluginRepository_fieldInit()
{
    Meta::igMetaObject *meta = igPluginRepository_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igPluginRepository_fieldTypes, 2);
    Meta::igEnumMetaField *locationTypeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 1));
    locationTypeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_80028214);
    meta_setupFields(meta, igPluginRepository_fieldNames, igPluginRepository_fieldStorage, igPluginRepository_fieldOffsets, base);
}

}
#pragma pop
