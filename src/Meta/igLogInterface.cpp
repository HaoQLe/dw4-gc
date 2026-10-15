// igLogInterface: Alchemy class registration (0x8014279C..0x80142950). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLogInterface)
META_DECLARE(igInterface)

extern "C" {
void fn_8012FC48();
void *fn_8013B680();
extern char igLogInterface_fieldNames[4];
extern char igLogInterface_fieldOffsets[4];
extern char igLogInterface_fieldStorage[4];
extern char igLogInterface_fieldTypes[4];
extern char lbl_804A6460[];
}

struct Instance_801427D8_0 {
    void *__vtable;
    char unknown04[36];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLogInterface)

void *igLogInterface_vtableRead()
{
    Instance_801427D8_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A6460;
    object.__vtable = igInterface_vtable;
    object.__vtable = igLogInterface_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLogInterface)

void igLogInterface_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igLogInterface_meta, igInterface_register,
                       fn_8013B680, igLogInterface_getMetaCall,
                       igLogInterface_className, 0x24,
                       igLogInterface_vtableRead, igLogInterface_fieldInit, 0, 0);
}

META_GET_META_CALL(igLogInterface)

void igLogInterface_fieldInit()
{
    Meta::igMetaObject *meta = igLogInterface_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igLogInterface_fieldTypes, 1);
    meta_setupFields(meta, igLogInterface_fieldNames, igLogInterface_fieldStorage, igLogInterface_fieldOffsets, base);
}

}
#pragma pop
