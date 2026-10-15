// igBitMask: Alchemy class registration (0x801C7380..0x801C7540). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBitMask)
META_DECLARE(igDataList)
META_DECLARE(igUnsignedIntList)

extern "C" {
void *fn_80035C70();
void fn_801AA6DC();
extern char igBitMask_fieldNames[4];
extern char igBitMask_fieldOffsets[4];
extern char igBitMask_fieldStorage[4];
extern char igBitMask_fieldTypes[4];
extern char lbl_80474900[];
}

struct Instance_801C73BC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBitMask)

void *igBitMask_vtableRead()
{
    Instance_801C73BC_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474900;
    object.__vtable = igUnsignedIntList_vtable;
    object.__vtable = igBitMask_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBitMask)

void igBitMask_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igBitMask_meta, igUnsignedIntList_register,
                       fn_80035C70, igBitMask_getMetaCall,
                       igBitMask_className, 0x18,
                       igBitMask_vtableRead, igBitMask_fieldInit, 0, 0);
}

META_GET_META_CALL(igBitMask)

void igBitMask_fieldInit()
{
    Meta::igMetaObject *meta = igBitMask_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBitMask_fieldTypes, 1);
    meta_setupFields(meta, igBitMask_fieldNames, igBitMask_fieldStorage, igBitMask_fieldOffsets, base);
}

}
#pragma pop
