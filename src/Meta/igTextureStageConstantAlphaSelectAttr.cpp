// igTextureStageConstantAlphaSelectAttr: Alchemy class registration (0x800BC43C..0x800BC62C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igEnumMetaField.h>
#include <meta/igShortMetaField.h>

META_DECLARE(igTextureStageConstantAlphaSelectAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C5BA4(int);
void fn_800D6128();
extern char igTextureStageConstantAlphaSelectAttr_fieldNames[8];
extern char igTextureStageConstantAlphaSelectAttr_fieldOffsets[8];
extern char igTextureStageConstantAlphaSelectAttr_fieldStorage[8];
extern char igTextureStageConstantAlphaSelectAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E790[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureStageConstantAlphaSelectAttr)

void *igTextureStageConstantAlphaSelectAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureStageConstantAlphaSelectAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureStageConstantAlphaSelectAttr)

void igTextureStageConstantAlphaSelectAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureStageConstantAlphaSelectAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTextureStageConstantAlphaSelectAttr_getMetaCall,
                       igTextureStageConstantAlphaSelectAttr_className, 0x14,
                       igTextureStageConstantAlphaSelectAttr_vtableRead, igTextureStageConstantAlphaSelectAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igTextureStageConstantAlphaSelectAttr)

void igTextureStageConstantAlphaSelectAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureStageConstantAlphaSelectAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureStageConstantAlphaSelectAttr_fieldTypes, 2);
    Meta::igEnumMetaField *constantSelectField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(constantSelectField, lbl_8055E790);
    constantSelectField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800D6128);
    Meta::igShortMetaField *unitIDField = static_cast<Meta::igShortMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C5BA4);
    meta_setupFields(meta, igTextureStageConstantAlphaSelectAttr_fieldNames, igTextureStageConstantAlphaSelectAttr_fieldStorage, igTextureStageConstantAlphaSelectAttr_fieldOffsets, base);
}

}
#pragma pop
