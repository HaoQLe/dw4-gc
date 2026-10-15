// igStringObj: Alchemy class registration (0x800250CC..0x800251EC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igMemoryRefMetaField.h>

META_DECLARE(igStringObj)
META_DECLARE(igObject)

extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80037E48();
extern char igStringObj_fieldNames[8];
extern char igStringObj_fieldOffsets[8];
extern char igStringObj_fieldStorage[8];
extern char igStringObj_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igStringObj_register()
{
    fn_80021B94();
    meta_registerClass(0, &igStringObj_meta, igObject_register,
                       fn_800237D0, igStringObj_getMetaCall,
                       igStringObj_className, 0x10,
                       igStringObj_vtableRead, igStringObj_fieldInit, 0, 0);
}

META_GET_META_CALL(igStringObj)

void igStringObj_fieldInit()
{
    Meta::igMetaObject *meta = igStringObj_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igStringObj_fieldTypes, 2);
    Meta::igMemoryRefMetaField *bufferField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80037E48();
    bufferField->_memType = reinterpret_cast<Meta::igMetaField *>(value_value3);
    bufferField->_destruct = true;
    bufferField->_releaseOnCopy = true;
    bufferField->_releaseOnReset = true;
    meta_setupFields(meta, igStringObj_fieldNames, igStringObj_fieldStorage, igStringObj_fieldOffsets, base);
}

}
#pragma pop
