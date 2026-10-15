// igTextureStageConstantColorSelectAttr: Alchemy class registration (0x800BC24C..0x800BC43C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igEnumMetaField.h>
#include <meta/igShortMetaField.h>

META_DECLARE(igTextureStageConstantColorSelectAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C5CA8(int);
void fn_800D60D8();
extern char igTextureStageConstantColorSelectAttr_fieldNames[8];
extern char igTextureStageConstantColorSelectAttr_fieldOffsets[8];
extern char igTextureStageConstantColorSelectAttr_fieldStorage[8];
extern char igTextureStageConstantColorSelectAttr_fieldTypes[8];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E76C[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureStageConstantColorSelectAttr)

void *igTextureStageConstantColorSelectAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureStageConstantColorSelectAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureStageConstantColorSelectAttr)

void igTextureStageConstantColorSelectAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igTextureStageConstantColorSelectAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igTextureStageConstantColorSelectAttr_getMetaCall,
                       igTextureStageConstantColorSelectAttr_className, 0x14,
                       igTextureStageConstantColorSelectAttr_vtableRead, igTextureStageConstantColorSelectAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igTextureStageConstantColorSelectAttr)

void igTextureStageConstantColorSelectAttr_fieldInit()
{
    Meta::igMetaObject *meta = igTextureStageConstantColorSelectAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTextureStageConstantColorSelectAttr_fieldTypes, 2);
    Meta::igEnumMetaField *constantSelectField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(constantSelectField, lbl_8055E76C);
    constantSelectField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800D60D8);
    Meta::igShortMetaField *unitIDField = static_cast<Meta::igShortMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C5CA8);
    meta_setupFields(meta, igTextureStageConstantColorSelectAttr_fieldNames, igTextureStageConstantColorSelectAttr_fieldStorage, igTextureStageConstantColorSelectAttr_fieldOffsets, base);
}

}
#pragma pop
