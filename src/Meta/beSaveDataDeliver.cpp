// beSaveDataDeliver: Alchemy class registration (0x802C0288..0x802C04CC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>

META_DECLARE(beSaveDataDeliver)
META_DECLARE(igObject)

extern "C" {
extern char beSaveDataDeliver_fieldNames[];
extern char beSaveDataDeliver_fieldOffsets[];
extern char beSaveDataDeliver_fieldStorage[];
extern char beSaveDataDeliver_fieldTypes[];
void *fn_800237D0();
void *fn_80037E48();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beSaveDataDeliver)

META_GET_META(beSaveDataDeliver)

#pragma push
#pragma optimize_for_size on
void *beSaveDataDeliver_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = beSaveDataDeliver_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSaveDataDeliver)

void beSaveDataDeliver_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSaveDataDeliver_meta, igObject_register,
                       fn_800237D0, beSaveDataDeliver_getMetaCall,
                       beSaveDataDeliver_className, 0x10,
                       beSaveDataDeliver_vtableRead, beSaveDataDeliver_fieldInit, 0, 0);
}

META_GET_META_CALL(beSaveDataDeliver)

void beSaveDataDeliver_fieldInit()
{
    Meta::igMetaObject *meta = beSaveDataDeliver_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSaveDataDeliver_fieldTypes, 2);
    Meta::igIntMetaField *sizeField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    void *value_value3 = fn_80037E48();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(sizeField) + 0x3C) = value_value3;
    meta_setupFields(meta, beSaveDataDeliver_fieldNames, beSaveDataDeliver_fieldStorage, beSaveDataDeliver_fieldOffsets, base);
}

}
#pragma pop
