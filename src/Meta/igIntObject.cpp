// igIntObject: Alchemy class registration (0x80218300..0x8021849C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIntObject)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80216620();
extern char igIntObject_fieldNames[4];
extern char igIntObject_fieldOffsets[4];
extern char igIntObject_fieldStorage[4];
extern char igIntObject_fieldTypes[4];
}

struct Instance_8021833C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igIntObject)

void *igIntObject_vtableRead()
{
    Instance_8021833C_0 object;
    igObject_construct(&object);
    object.__vtable = igIntObject_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igIntObject)

void igIntObject_register()
{
    fn_80216620();
    meta_registerClass(0, &igIntObject_meta, igObject_register,
                       fn_800237D0, igIntObject_getMetaCall,
                       igIntObject_className, 0xC,
                       igIntObject_vtableRead, igIntObject_fieldInit, 0, 0);
}

META_GET_META_CALL(igIntObject)

void igIntObject_fieldInit()
{
    Meta::igMetaObject *meta = igIntObject_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igIntObject_fieldTypes, 1);
    meta_setupFields(meta, igIntObject_fieldNames, igIntObject_fieldStorage, igIntObject_fieldOffsets, base);
}

}
#pragma pop
