// beNumberCtrlInfoWork: Alchemy class registration (0x802C2C50..0x802C2EF0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>

META_DECLARE(beNumberCtrlInfoWork)
META_DECLARE(igObject)

extern "C" {
extern char beNumberCtrlInfoWork_fieldNames[];
extern char beNumberCtrlInfoWork_fieldOffsets[];
extern char beNumberCtrlInfoWork_fieldStorage[];
extern char beNumberCtrlInfoWork_fieldTypes[];
void *fn_800237D0();
void fn_80053650(void *,int);
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNumberCtrlInfoWork)

META_METAOBJECT(beNumberCtrlInfoWork)

META_GET_META(beNumberCtrlInfoWork)

void *beNumberCtrlInfoWork_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = beNumberCtrlInfoWork_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNumberCtrlInfoWork)

void beNumberCtrlInfoWork_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beNumberCtrlInfoWork_meta, igObject_register,
                       fn_800237D0, beNumberCtrlInfoWork_getMetaCall,
                       beNumberCtrlInfoWork_className, 0x14,
                       beNumberCtrlInfoWork_vtableRead, beNumberCtrlInfoWork_fieldInit, 0, 0);
}

META_GET_META_CALL(beNumberCtrlInfoWork)

void beNumberCtrlInfoWork_fieldInit()
{
    Meta::igMetaObject *meta = beNumberCtrlInfoWork_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNumberCtrlInfoWork_fieldTypes, 3);
    Meta::igIntMetaField *dispNumField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base));
    fn_80053650(dispNumField, -1);
    Meta::igIntMetaField *realNumField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    fn_80053650(realNumField, -1);
    Meta::igIntMetaField *changeNumField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 2));
    fn_80053650(changeNumField, -1);
    meta_setupFields(meta, beNumberCtrlInfoWork_fieldNames, beNumberCtrlInfoWork_fieldStorage, beNumberCtrlInfoWork_fieldOffsets, base);
}

}
#pragma pop
