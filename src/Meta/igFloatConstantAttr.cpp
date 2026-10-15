// igFloatConstantAttr: Alchemy class registration (0x800B73F4..0x800B75CC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>

META_DECLARE(igFloatConstantAttr)
META_DECLARE(igCustomStateCollectionAttr)

extern "C" {
void fn_800ABC8C();
void *fn_800AD708();
void *fn_800BE528(int);
extern char igFloatConstantAttr_fieldNames[8];
extern char igFloatConstantAttr_fieldOffsets[8];
extern char igFloatConstantAttr_fieldStorage[8];
extern char igFloatConstantAttr_fieldTypes[8];
extern char lbl_8047CD74[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFloatConstantAttr)

void *igFloatConstantAttr_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = lbl_8047CD74;
    object.__vtable = igFloatConstantAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFloatConstantAttr)

void igFloatConstantAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igFloatConstantAttr_meta, igCustomStateCollectionAttr_register,
                       fn_800AD708, igFloatConstantAttr_getMetaCall,
                       igFloatConstantAttr_className, 0x14,
                       igFloatConstantAttr_vtableRead, igFloatConstantAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igFloatConstantAttr)

void igFloatConstantAttr_fieldInit()
{
    Meta::igMetaObject *meta = igFloatConstantAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFloatConstantAttr_fieldTypes, 2);
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800BE528);
    meta_setupFields(meta, igFloatConstantAttr_fieldNames, igFloatConstantAttr_fieldStorage, igFloatConstantAttr_fieldOffsets, base);
}

}
#pragma pop
