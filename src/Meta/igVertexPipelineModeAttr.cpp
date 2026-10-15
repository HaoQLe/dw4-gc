// igVertexPipelineModeAttr: Alchemy class registration (0x800ACB30..0x800ACD08). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igEnumMetaField.h>

META_DECLARE(igVertexPipelineModeAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_80046E58(void *,void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800CDF6C();
extern char igVertexPipelineModeAttr_fieldNames[4];
extern char igVertexPipelineModeAttr_fieldOffsets[4];
extern char igVertexPipelineModeAttr_fieldStorage[4];
extern char igVertexPipelineModeAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055DED8[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVertexPipelineModeAttr)

void *igVertexPipelineModeAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igVertexPipelineModeAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVertexPipelineModeAttr)

void igVertexPipelineModeAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVertexPipelineModeAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igVertexPipelineModeAttr_getMetaCall,
                       igVertexPipelineModeAttr_className, 0x10,
                       igVertexPipelineModeAttr_vtableRead, igVertexPipelineModeAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igVertexPipelineModeAttr)

void igVertexPipelineModeAttr_fieldInit()
{
    Meta::igMetaObject *meta = igVertexPipelineModeAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igVertexPipelineModeAttr_fieldTypes, 1);
    Meta::igEnumMetaField *modeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(modeField, lbl_8055DED8);
    modeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_800CDF6C);
    meta_setupFields(meta, igVertexPipelineModeAttr_fieldNames, igVertexPipelineModeAttr_fieldStorage, igVertexPipelineModeAttr_fieldOffsets, base);
}

}
#pragma pop
