// igZFilterWeight: Alchemy class registration (0x801491AC..0x80149380). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igZFilterWeight)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8012FC48();
extern char igZFilterWeight_fieldNames[8];
extern char igZFilterWeight_fieldOffsets[8];
extern char igZFilterWeight_fieldStorage[8];
extern char igZFilterWeight_fieldTypes[8];
}

struct Instance_80149220_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igZFilterWeight)

META_GET_META(igZFilterWeight)

void *igZFilterWeight_vtableRead()
{
    Instance_80149220_0 object;
    igObject_construct(&object);
    object.__vtable = igZFilterWeight_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igZFilterWeight)

void igZFilterWeight_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igZFilterWeight_meta, igObject_register,
                       fn_800237D0, igZFilterWeight_getMetaCall,
                       igZFilterWeight_className, 0x18,
                       igZFilterWeight_vtableRead, igZFilterWeight_fieldInit, 0, 0);
}

META_GET_META_CALL(igZFilterWeight)

void igZFilterWeight_fieldInit()
{
    Meta::igMetaObject *meta = igZFilterWeight_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igZFilterWeight_fieldTypes, 2);
    meta_setupFields(meta, igZFilterWeight_fieldNames, igZFilterWeight_fieldStorage, igZFilterWeight_fieldOffsets, base);
}

}
#pragma pop
