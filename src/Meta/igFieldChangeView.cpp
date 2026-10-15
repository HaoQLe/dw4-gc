// igFieldChangeView: Alchemy class registration (0x80112860..0x80112AC8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igFieldChangeView)
META_DECLARE(igView)

extern "C" {
void *fn_8002A638();
void fn_8010CBD4();
void *fn_8010E6DC();
void *fn_80112480();
extern char igFieldChangeView_dependencies[12];
extern char igFieldChangeView_fieldNames[8];
extern char igFieldChangeView_fieldOffsets[8];
extern char igFieldChangeView_fieldStorage[8];
extern char igFieldChangeView_fieldTypes[8];
extern char lbl_80495AD8[];
}

struct igFieldChangeViewInstance : igObjectInstance {
    char unknown04[12];
    igObjectRefMember _field;
    char unknown14[12];
    inline ~igFieldChangeViewInstance() { __vtable = igFieldChangeView_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igFieldChangeView)

META_GET_META(igFieldChangeView)

void *igFieldChangeView_vtableRead()
{
    igFieldChangeViewInstance object;
    object.__vtable = lbl_80495AD8;
    object.__vtable = igFieldChangeView_vtable;
    object._field._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFieldChangeView)

void igFieldChangeView_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igFieldChangeView_meta, igView_register,
                       fn_8010E6DC, igFieldChangeView_getMetaCall,
                       igFieldChangeView_className, 0x14,
                       igFieldChangeView_vtableRead, igFieldChangeView_fieldInit, 0, igFieldChangeView_dependencies);
}

META_GET_META_CALL(igFieldChangeView)

void igFieldChangeView_fieldInit()
{
    Meta::igMetaObject *meta = igFieldChangeView_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFieldChangeView_fieldTypes, 2);
    Meta::igObjectRefMetaField *synchronizerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80112480();
    synchronizerField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    synchronizerField->_refCounted = false;
    Meta::igObjectRefMetaField *fieldField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_8002A638();
    fieldField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    meta_setupFields(meta, igFieldChangeView_fieldNames, igFieldChangeView_fieldStorage, igFieldChangeView_fieldOffsets, base);
}

}
#pragma pop
