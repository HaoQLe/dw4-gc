// igRenderListAttr: Alchemy class registration (0x800B1418..0x800B166C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igRenderListAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80053650(void *,int);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800CE788();
extern char igRenderListAttr_dependencies[8];
extern char igRenderListAttr_fieldNames[8];
extern char igRenderListAttr_fieldOffsets[8];
extern char igRenderListAttr_fieldStorage[8];
extern char igRenderListAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igRenderListAttrInstance : igObjectInstance {
    char unknown04[12];
    igObjectRefMember _vc;
    char unknown14[12];
    inline ~igRenderListAttrInstance() { __vtable = igRenderListAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRenderListAttr)

void *igRenderListAttr_vtableRead()
{
    igRenderListAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igRenderListAttr_vtable;
    object._vc._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRenderListAttr)

void igRenderListAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igRenderListAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igRenderListAttr_getMetaCall,
                       igRenderListAttr_className, 0x14,
                       igRenderListAttr_vtableRead, igRenderListAttr_fieldInit, 0, igRenderListAttr_dependencies);
}

META_GET_META_CALL(igRenderListAttr)

void igRenderListAttr_fieldInit()
{
    Meta::igMetaObject *meta = igRenderListAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRenderListAttr_fieldTypes, 2);
    Meta::igIntMetaField *handleField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base));
    fn_80053650(handleField, -1);
    handleField->_persistent = false;
    Meta::igObjectRefMetaField *vcField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value4 = fn_800CE788();
    vcField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value4);
    vcField->_persistent = false;
    vcField->_deepCopyMethod = 1;
    vcField->_shallowCopyMethod = 1;
    vcField->_isAlikeShallowMethod = 3;
    meta_setupFields(meta, igRenderListAttr_fieldNames, igRenderListAttr_fieldStorage, igRenderListAttr_fieldOffsets, base);
}

}
#pragma pop
