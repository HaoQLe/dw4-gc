// beXboxImage24k: Alchemy class registration (0x802BC77C..0x802BC9C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>

META_DECLARE(beXboxImage24k)
META_DECLARE(igObject)

extern "C" {
extern char beXboxImage24k_fieldNames[];
extern char beXboxImage24k_fieldOffsets[];
extern char beXboxImage24k_fieldStorage[];
extern char beXboxImage24k_fieldTypes[];
void *fn_800237D0();
void *fn_80037E48();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beXboxImage24k)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beXboxImage24k)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beXboxImage24k_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = beXboxImage24k_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beXboxImage24k)

void beXboxImage24k_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beXboxImage24k_meta, igObject_register,
                       fn_800237D0, beXboxImage24k_getMetaCall,
                       beXboxImage24k_className, 0x10,
                       beXboxImage24k_vtableRead, beXboxImage24k_fieldInit, 0, 0);
}

META_GET_META_CALL(beXboxImage24k)

void beXboxImage24k_fieldInit()
{
    Meta::igMetaObject *meta = beXboxImage24k_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beXboxImage24k_fieldTypes, 2);
    Meta::igIntMetaField *dataSizeField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    void *value_value3 = fn_80037E48();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(dataSizeField) + 0x3C) = value_value3;
    meta_setupFields(meta, beXboxImage24k_fieldNames, beXboxImage24k_fieldStorage, beXboxImage24k_fieldOffsets, base);
}

}
#pragma pop
