// igPolygonModeAttr: Alchemy class registration (0x800B20C0..0x800B2298). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igEnumMetaField.h>

META_DECLARE(igPolygonModeAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CDCC8();
extern char igPolygonModeAttr_fieldNames[4];
extern char igPolygonModeAttr_fieldOffsets[4];
extern char igPolygonModeAttr_fieldStorage[4];
extern char igPolygonModeAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E284[4];
}

struct Instance_800B20FC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPolygonModeAttr)

void *igPolygonModeAttr_vtableRead()
{
    Instance_800B20FC_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igPolygonModeAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPolygonModeAttr)

void igPolygonModeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igPolygonModeAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igPolygonModeAttr_getMetaCall,
                       igPolygonModeAttr_className, 0x10,
                       igPolygonModeAttr_vtableRead, igPolygonModeAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igPolygonModeAttr)

void igPolygonModeAttr_fieldInit()
{
    Meta::igMetaObject *meta = igPolygonModeAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igPolygonModeAttr_fieldTypes, 1);
    Meta::igEnumMetaField *modeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(modeField, lbl_8055E284);
    modeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CDCC8);
    meta_setupFields(meta, igPolygonModeAttr_fieldNames, igPolygonModeAttr_fieldStorage, igPolygonModeAttr_fieldOffsets, base);
}

}
#pragma pop
