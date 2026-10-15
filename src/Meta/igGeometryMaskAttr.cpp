// igGeometryMaskAttr: Alchemy class registration (0x800B6340..0x800B6540). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igUnsignedIntMetaField.h>

META_DECLARE(igGeometryMaskAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80075AC4(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
extern char igGeometryMaskAttr_fieldNames[4];
extern char igGeometryMaskAttr_fieldOffsets[4];
extern char igGeometryMaskAttr_fieldStorage[4];
extern char igGeometryMaskAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_800B63B4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igGeometryMaskAttr)

META_GET_META(igGeometryMaskAttr)

void *igGeometryMaskAttr_vtableRead()
{
    Instance_800B63B4_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igGeometryMaskAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGeometryMaskAttr)

void igGeometryMaskAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igGeometryMaskAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igGeometryMaskAttr_getMetaCall,
                       igGeometryMaskAttr_className, 0x10,
                       igGeometryMaskAttr_vtableRead, igGeometryMaskAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igGeometryMaskAttr)

void igGeometryMaskAttr_fieldInit()
{
    Meta::igMetaObject *meta = igGeometryMaskAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGeometryMaskAttr_fieldTypes, 1);
    Meta::igUnsignedIntMetaField *maskField = static_cast<Meta::igUnsignedIntMetaField *>(meta_field(meta, base));
    fn_80075AC4(maskField, -1);
    meta_setupFields(meta, igGeometryMaskAttr_fieldNames, igGeometryMaskAttr_fieldStorage, igGeometryMaskAttr_fieldOffsets, base);
}

}
#pragma pop
