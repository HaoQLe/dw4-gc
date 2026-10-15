// igFloatObject: Alchemy class registration (0x802186E8..0x80218884). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFloatObject)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80216620();
extern char igFloatObject_fieldNames[4];
extern char igFloatObject_fieldOffsets[4];
extern char igFloatObject_fieldStorage[4];
extern char igFloatObject_fieldTypes[4];
}

struct Instance_80218724_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFloatObject)

void *igFloatObject_vtableRead()
{
    Instance_80218724_0 object;
    igObject_construct(&object);
    object.__vtable = igFloatObject_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFloatObject)

void igFloatObject_register()
{
    fn_80216620();
    meta_registerClass(0, &igFloatObject_meta, igObject_register,
                       fn_800237D0, igFloatObject_getMetaCall,
                       igFloatObject_className, 0xC,
                       igFloatObject_vtableRead, igFloatObject_fieldInit, 0, 0);
}

META_GET_META_CALL(igFloatObject)

void igFloatObject_fieldInit()
{
    Meta::igMetaObject *meta = igFloatObject_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFloatObject_fieldTypes, 1);
    meta_setupFields(meta, igFloatObject_fieldNames, igFloatObject_fieldStorage, igFloatObject_fieldOffsets, base);
}

}
#pragma pop
