// igTextureAddressModeAttr: Alchemy class registration (0x800AFAF0..0x800AFD14). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igEnumMetaField.h>

META_DECLARE(igTextureAddressModeAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_8003EC68(void *,int);
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CE04C();
extern char igTextureAddressModeAttr_fieldNames[8];
extern char igTextureAddressModeAttr_fieldOffsets[8];
extern char igTextureAddressModeAttr_fieldStorage[8];
extern char igTextureAddressModeAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E0D8[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTextureAddressModeAttr)

META_GET_META(igTextureAddressModeAttr)

void *igTextureAddressModeAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureAddressModeAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureAddressModeAttr)

void igTextureAddressModeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureAddressModeAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTextureAddressModeAttr_getMetaCall,
                       igTextureAddressModeAttr_className, 0x14,
                       igTextureAddressModeAttr_vtableRead, igTextureAddressModeAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igTextureAddressModeAttr)

void igTextureAddressModeAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureAddressModeAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureAddressModeAttr_fieldTypes, 2);
    Meta::igBoolMetaField *enabledField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base));
    fn_8003EC68(enabledField, 1);
    Meta::igEnumMetaField *wrapSField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 1));
    fn_80046E58(wrapSField, lbl_8055E0D8);
    wrapSField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CE04C);
    meta_setupFields(meta, igTextureAddressModeAttr_fieldNames, igTextureAddressModeAttr_fieldStorage, igTextureAddressModeAttr_fieldOffsets, base);
}

}
#pragma pop
