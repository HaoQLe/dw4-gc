// igHeapable: Alchemy class registration (0x801BF1CC..0x801BF368). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igHeapable)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_801AA6DC();
extern char igHeapable_fieldNames[8];
extern char igHeapable_fieldOffsets[8];
extern char igHeapable_fieldStorage[8];
extern char igHeapable_fieldTypes[8];
}

struct Instance_801BF208_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igHeapable)

void *igHeapable_vtableRead()
{
    Instance_801BF208_0 object;
    igObject_construct(&object);
    object.__vtable = igHeapable_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igHeapable)

void igHeapable_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igHeapable_meta, igObject_register,
                       fn_800237D0, igHeapable_getMetaCall,
                       igHeapable_className, 0x10,
                       igHeapable_vtableRead, igHeapable_fieldInit, 0, 0);
}

META_GET_META_CALL(igHeapable)

void igHeapable_fieldInit()
{
    Meta::igMetaObject *meta = igHeapable_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igHeapable_fieldTypes, 2);
    meta_setupFields(meta, igHeapable_fieldNames, igHeapable_fieldStorage, igHeapable_fieldOffsets, base);
}

}
#pragma pop
