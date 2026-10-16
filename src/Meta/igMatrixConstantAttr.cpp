// igMatrixConstantAttr: Alchemy class registration (0x800B47E4..0x800B49C4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>

META_DECLARE(igMatrixConstantAttr)
META_DECLARE(igCustomStateCollectionAttr)

extern "C" {
void fn_800ABC8C();
void *fn_800AD708();
void *fn_800C1444(int);
void fn_801285A0(void *);
extern char igMatrixConstantAttr_fieldNames[8];
extern char igMatrixConstantAttr_fieldOffsets[8];
extern char igMatrixConstantAttr_fieldStorage[8];
extern char igMatrixConstantAttr_fieldTypes[8];
extern char lbl_8047CD74[164];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_LigMatrixConstantAttr_0 : igObjectInstance {
};

struct Instance_LigMatrixConstantAttr_1 : Instance_LigMatrixConstantAttr_0 {
};

struct Instance_LigMatrixConstantAttr_2 : Instance_LigMatrixConstantAttr_1 {
};

struct Instance_LigMatrixConstantAttr_3 : Instance_LigMatrixConstantAttr_2 {
    char unknown04[8];
    char unknown0C[68];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMatrixConstantAttr)

void *igMatrixConstantAttr_vtableRead()
{
    Instance_LigMatrixConstantAttr_3 object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = lbl_8047CD74;
    object.__vtable = igMatrixConstantAttr_vtable;
    fn_801285A0(&object.unknown0C);
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMatrixConstantAttr)

void igMatrixConstantAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igMatrixConstantAttr_meta, igCustomStateCollectionAttr_register,
                       fn_800AD708, igMatrixConstantAttr_getMetaCall,
                       igMatrixConstantAttr_className, 0x50,
                       igMatrixConstantAttr_vtableRead, igMatrixConstantAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igMatrixConstantAttr)

void igMatrixConstantAttr_fieldInit()
{
    Meta::igMetaObject *meta = igMatrixConstantAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMatrixConstantAttr_fieldTypes, 2);
    Meta::igIntMetaField *unitIDField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    unitIDField->_invarianceFunction = reinterpret_cast<void *>((void *)fn_800C1444);
    meta_setupFields(meta, igMatrixConstantAttr_fieldNames, igMatrixConstantAttr_fieldStorage, igMatrixConstantAttr_fieldOffsets, base);
}

}
#pragma pop
