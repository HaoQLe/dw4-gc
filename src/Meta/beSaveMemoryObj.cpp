// beSaveMemoryObj: Alchemy class registration (0x802C0004..0x802C0288). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igMemoryRefMetaField.h>

META_DECLARE(beSaveMemoryObj)
META_DECLARE(igObject)

extern "C" {
extern char beSaveMemoryObj_fieldNames[];
extern char beSaveMemoryObj_fieldOffsets[];
extern char beSaveMemoryObj_fieldStorage[];
extern char beSaveMemoryObj_fieldTypes[];
void *fn_800237D0();
void *fn_80037E48();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beSaveMemoryObj)

META_METAOBJECT(beSaveMemoryObj)

META_GET_META(beSaveMemoryObj)

void *beSaveMemoryObj_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = beSaveMemoryObj_vtable;
    return meta_vtableOf(&object);
}

#pragma push
#pragma optimize_for_size off
META_ARK_REGISTER(beSaveMemoryObj)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beSaveMemoryObj_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSaveMemoryObj_meta, igObject_register,
                       fn_800237D0, beSaveMemoryObj_getMetaCall,
                       beSaveMemoryObj_className, 0xC,
                       beSaveMemoryObj_vtableRead, beSaveMemoryObj_fieldInit, 0, 0);
}
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META_CALL(beSaveMemoryObj)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beSaveMemoryObj_fieldInit()
{
    Meta::igMetaObject *meta = beSaveMemoryObj_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSaveMemoryObj_fieldTypes, 1);
    Meta::igMemoryRefMetaField *memField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80037E48();
    memField->_memType = reinterpret_cast<Meta::igMetaField *>(value_value3);
    meta_setupFields(meta, beSaveMemoryObj_fieldNames, beSaveMemoryObj_fieldStorage, beSaveMemoryObj_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
