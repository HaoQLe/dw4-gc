// igShadeModelAttr: Alchemy class registration (0x800B09E0..0x800B0BB8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igEnumMetaField.h>

META_DECLARE(igShadeModelAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800CDDA8();
extern char igShadeModelAttr_fieldNames[4];
extern char igShadeModelAttr_fieldOffsets[4];
extern char igShadeModelAttr_fieldStorage[4];
extern char igShadeModelAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E180[4];
}

struct Instance_800B0A1C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igShadeModelAttr)

void *igShadeModelAttr_vtableRead()
{
    Instance_800B0A1C_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igShadeModelAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igShadeModelAttr)

void igShadeModelAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igShadeModelAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igShadeModelAttr_getMetaCall,
                       igShadeModelAttr_className, 0x10,
                       igShadeModelAttr_vtableRead, igShadeModelAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igShadeModelAttr)

void igShadeModelAttr_fieldInit()
{
    Meta::igMetaObject *meta = igShadeModelAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igShadeModelAttr_fieldTypes, 1);
    Meta::igEnumMetaField *modeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(modeField, lbl_8055E180);
    modeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CDDA8);
    meta_setupFields(meta, igShadeModelAttr_fieldNames, igShadeModelAttr_fieldStorage, igShadeModelAttr_fieldOffsets, base);
}

}
#pragma pop
