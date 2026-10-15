// igPixelPipelineModeAttr: Alchemy class registration (0x800B2AFC..0x800B2CD4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igEnumMetaField.h>

META_DECLARE(igPixelPipelineModeAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CDF20();
extern char igPixelPipelineModeAttr_fieldNames[4];
extern char igPixelPipelineModeAttr_fieldOffsets[4];
extern char igPixelPipelineModeAttr_fieldStorage[4];
extern char igPixelPipelineModeAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E2D8[4];
}

struct Instance_800B2B38_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPixelPipelineModeAttr)

void *igPixelPipelineModeAttr_vtableRead()
{
    Instance_800B2B38_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igPixelPipelineModeAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPixelPipelineModeAttr)

void igPixelPipelineModeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igPixelPipelineModeAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igPixelPipelineModeAttr_getMetaCall,
                       igPixelPipelineModeAttr_className, 0x10,
                       igPixelPipelineModeAttr_vtableRead, igPixelPipelineModeAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igPixelPipelineModeAttr)

void igPixelPipelineModeAttr_fieldInit()
{
    Meta::igMetaObject *meta = igPixelPipelineModeAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igPixelPipelineModeAttr_fieldTypes, 1);
    Meta::igEnumMetaField *pipelineModeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(pipelineModeField, lbl_8055E2D8);
    pipelineModeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CDF20);
    meta_setupFields(meta, igPixelPipelineModeAttr_fieldNames, igPixelPipelineModeAttr_fieldStorage, igPixelPipelineModeAttr_fieldOffsets, base);
}

}
#pragma pop
