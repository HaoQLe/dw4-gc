// beCameraDemoData: Alchemy class registration (0x802E1B38..0x802E1D74). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beCameraDemoData)
META_DECLARE(igObject)

extern "C" {
extern char beCameraDemoData_dependencies[8];
extern char beCameraDemoData_fieldNames[];
extern char beCameraDemoData_fieldOffsets[];
extern char beCameraDemoData_fieldStorage[];
extern char beCameraDemoData_fieldTypes[];
void *fn_800237D0();
void *fn_801BFC74();
void fn_802B1AC8();
}

struct beCameraDemoDataInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _cameraPath;
    char unknown0C[20];
    inline ~beCameraDemoDataInstance() { __vtable = beCameraDemoData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beCameraDemoData)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beCameraDemoData_vtableRead()
{
    beCameraDemoDataInstance object;
    object.__vtable = beCameraDemoData_vtable;
    object._cameraPath._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beCameraDemoData)

void beCameraDemoData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCameraDemoData_meta, igObject_register,
                       fn_800237D0, beCameraDemoData_getMetaCall,
                       beCameraDemoData_className, 0x20,
                       beCameraDemoData_vtableRead, beCameraDemoData_fieldInit, 0, beCameraDemoData_dependencies);
}

META_GET_META_CALL(beCameraDemoData)

void beCameraDemoData_fieldInit()
{
    Meta::igMetaObject *meta = beCameraDemoData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beCameraDemoData_fieldTypes, 3);
    Meta::igObjectRefMetaField *cameraPathField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801BFC74();
    cameraPathField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, beCameraDemoData_fieldNames, beCameraDemoData_fieldStorage, beCameraDemoData_fieldOffsets, base);
}

}
#pragma pop
