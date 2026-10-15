// igAlphaFunctionAttr: Alchemy class registration (0x800BBBC4..0x800BBDD4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igEnumMetaField.h>

META_DECLARE(igAlphaFunctionAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CDDF0();
extern char igAlphaFunctionAttr_fieldNames[8];
extern char igAlphaFunctionAttr_fieldOffsets[8];
extern char igAlphaFunctionAttr_fieldStorage[8];
extern char igAlphaFunctionAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E748[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igAlphaFunctionAttr)

META_GET_META(igAlphaFunctionAttr)

void *igAlphaFunctionAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igAlphaFunctionAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAlphaFunctionAttr)

void igAlphaFunctionAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igAlphaFunctionAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igAlphaFunctionAttr_getMetaCall,
                       igAlphaFunctionAttr_className, 0x14,
                       igAlphaFunctionAttr_vtableRead, igAlphaFunctionAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igAlphaFunctionAttr)

void igAlphaFunctionAttr_fieldInit()
{
    Meta::igMetaObject *meta = igAlphaFunctionAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAlphaFunctionAttr_fieldTypes, 2);
    Meta::igEnumMetaField *funcField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(funcField, lbl_8055E748);
    funcField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CDDF0);
    meta_setupFields(meta, igAlphaFunctionAttr_fieldNames, igAlphaFunctionAttr_fieldStorage, igAlphaFunctionAttr_fieldOffsets, base);
}

}
#pragma pop
