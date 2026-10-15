// igCullFaceAttr: Alchemy class registration (0x800B89A4..0x800B8B7C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igEnumMetaField.h>

META_DECLARE(igCullFaceAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800CDD60();
extern char igCullFaceAttr_fieldNames[8];
extern char igCullFaceAttr_fieldOffsets[8];
extern char igCullFaceAttr_fieldStorage[8];
extern char igCullFaceAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E59C[4];
}

struct Instance_800B89E0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCullFaceAttr)

void *igCullFaceAttr_vtableRead()
{
    Instance_800B89E0_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igCullFaceAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCullFaceAttr)

void igCullFaceAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igCullFaceAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igCullFaceAttr_getMetaCall,
                       igCullFaceAttr_className, 0x14,
                       igCullFaceAttr_vtableRead, igCullFaceAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igCullFaceAttr)

void igCullFaceAttr_fieldInit()
{
    Meta::igMetaObject *meta = igCullFaceAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCullFaceAttr_fieldTypes, 2);
    Meta::igEnumMetaField *modeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base + 1));
    fn_80046E58(modeField, lbl_8055E59C);
    modeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CDD60);
    meta_setupFields(meta, igCullFaceAttr_fieldNames, igCullFaceAttr_fieldStorage, igCullFaceAttr_fieldOffsets, base);
}

}
#pragma pop
