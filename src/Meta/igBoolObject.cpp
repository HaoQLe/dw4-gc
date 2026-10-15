// igBoolObject: Alchemy class registration (0x80219650..0x802197EC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBoolObject)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80216620();
extern char igBoolObject_fieldNames[4];
extern char igBoolObject_fieldOffsets[4];
extern char igBoolObject_fieldStorage[4];
extern char igBoolObject_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBoolObject)

void *igBoolObject_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igBoolObject_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBoolObject)

void igBoolObject_register()
{
    fn_80216620();
    meta_registerClass(0, &igBoolObject_meta, igObject_register,
                       fn_800237D0, igBoolObject_getMetaCall,
                       igBoolObject_className, 0xC,
                       igBoolObject_vtableRead, igBoolObject_fieldInit, 0, 0);
}

META_GET_META_CALL(igBoolObject)

void igBoolObject_fieldInit()
{
    Meta::igMetaObject *meta = igBoolObject_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBoolObject_fieldTypes, 1);
    meta_setupFields(meta, igBoolObject_fieldNames, igBoolObject_fieldStorage, igBoolObject_fieldOffsets, base);
}

}
#pragma pop
