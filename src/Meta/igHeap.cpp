// igHeap: Alchemy class registration (0x801BEE2C..0x801BF030). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igHeap)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_801AA6DC();
void *fn_801BF030();
extern char igHeap_dependencies[8];
extern char igHeap_fieldNames[4];
extern char igHeap_fieldOffsets[4];
extern char igHeap_fieldStorage[4];
extern char igHeap_fieldTypes[4];
extern char lbl_805605A8[7];
}

struct igHeapInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _heap;
    char unknown0C[4];
    inline ~igHeapInstance() { __vtable = igHeap_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igHeap)

void *igHeap_vtableRead()
{
    igHeapInstance object;
    object.__vtable = igHeap_vtable;
    object._heap._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igHeap)

void igHeap_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igHeap_meta, igObject_register,
                       fn_800237D0, igHeap_getMetaCall,
                       lbl_805605A8, 0xC,
                       igHeap_vtableRead, igHeap_fieldInit, 0, igHeap_dependencies);
}

META_GET_META_CALL(igHeap)

void igHeap_fieldInit()
{
    Meta::igMetaObject *meta = igHeap_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igHeap_fieldTypes, 1);
    Meta::igObjectRefMetaField *heapField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801BF030();
    heapField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    heapField->_construct = true;
    meta_setupFields(meta, igHeap_fieldNames, igHeap_fieldStorage, igHeap_fieldOffsets, base);
}

}
#pragma pop
