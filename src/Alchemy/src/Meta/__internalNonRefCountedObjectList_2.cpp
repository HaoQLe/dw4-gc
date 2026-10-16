// __internalNonRefCountedObjectList: Alchemy class registration (0x8002E054..0x8002E1AC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igMemoryRefMetaField.h>

META_DECLARE(__internalNonRefCountedObjectList)
META_DECLARE(igObject)

extern "C" {
extern char __internalNonRefCountedObjectList_fieldNames[8];
extern char __internalNonRefCountedObjectList_fieldOffsets[8];
extern char __internalNonRefCountedObjectList_fieldStorage[8];
extern char __internalNonRefCountedObjectList_fieldTypes[8];
void *fn_800237D0();
void *fn_80028BFC();
void *fn_8002E020();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(__internalNonRefCountedObjectList)

void __internalNonRefCountedObjectList_register()
{
    meta_registerClass(0, &__internalNonRefCountedObjectList_meta, igObject_register,
                       fn_800237D0, __internalNonRefCountedObjectList_getMetaCall,
                       __internalNonRefCountedObjectList_className, 0x10,
                       fn_8002E020, __internalNonRefCountedObjectList_fieldInit, 0, 0);
}

META_GET_META_CALL(__internalNonRefCountedObjectList)

void __internalNonRefCountedObjectList_fieldInit()
{
    Meta::igMetaObject *meta = __internalNonRefCountedObjectList_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, __internalNonRefCountedObjectList_fieldTypes, 2);
    Meta::igMemoryRefMetaField *dataField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80028BFC();
    dataField->_memType = reinterpret_cast<Meta::igMetaField *>(value_value3);
    *reinterpret_cast<void **>(reinterpret_cast<char *>(dataField) + 0x38) = (void *)64;
    dataField->_construct = true;
    dataField->_destruct = true;
    dataField->_releaseOnCopy = true;
    dataField->_releaseOnReset = true;
    dataField->_refCounted = false;
    meta_setupFields(meta, __internalNonRefCountedObjectList_fieldNames, __internalNonRefCountedObjectList_fieldStorage, __internalNonRefCountedObjectList_fieldOffsets, base);
}

}
#pragma pop
