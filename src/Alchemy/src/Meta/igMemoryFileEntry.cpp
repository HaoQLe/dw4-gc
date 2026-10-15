// igMemoryFileEntry: Alchemy class registration (0x8002C5A8..0x8002C7D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMemoryFileEntry)
META_DECLARE(igNamedObject)

extern "C" {
void fn_80021B94();
void *fn_80023CF4();
extern char igMemoryFileEntry_fieldNames[8];
extern char igMemoryFileEntry_fieldOffsets[8];
extern char igMemoryFileEntry_fieldStorage[8];
extern char igMemoryFileEntry_fieldTypes[8];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igMemoryFileEntryInstance : igNamedObjectInstance {
    char unknown0C[20];
    inline ~igMemoryFileEntryInstance() { __vtable = igMemoryFileEntry_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMemoryFileEntry)

META_GET_META(igMemoryFileEntry)

void *igMemoryFileEntry_vtableRead()
{
    igMemoryFileEntryInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igMemoryFileEntry_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMemoryFileEntry)

void igMemoryFileEntry_register()
{
    fn_80021B94();
    meta_registerClass(0, &igMemoryFileEntry_meta, igNamedObject_register,
                       fn_80023CF4, igMemoryFileEntry_getMetaCall,
                       igMemoryFileEntry_className, 0x14,
                       igMemoryFileEntry_vtableRead, igMemoryFileEntry_fieldInit, 0, 0);
}

META_GET_META_CALL(igMemoryFileEntry)

void igMemoryFileEntry_fieldInit()
{
    Meta::igMetaObject *meta = igMemoryFileEntry_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMemoryFileEntry_fieldTypes, 2);
    meta_setupFields(meta, igMemoryFileEntry_fieldNames, igMemoryFileEntry_fieldStorage, igMemoryFileEntry_fieldOffsets, base);
}

}
#pragma pop
