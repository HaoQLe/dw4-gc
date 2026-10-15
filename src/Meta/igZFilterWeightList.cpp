// igZFilterWeightList: Alchemy class registration (0x80148FA4..0x801491AC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igZFilterWeightList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igZFilterWeightList_dependencies[8];
extern char igZFilterWeightList_fieldNames[4];
extern char igZFilterWeightList_fieldOffsets[4];
extern char igZFilterWeightList_fieldStorage[4];
extern char igZFilterWeightList_fieldTypes[4];
extern char lbl_80476E0C[];
extern char lbl_804A9220[];
}

struct Instance_80149018_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igZFilterWeightList)

META_GET_META(igZFilterWeightList)

void *igZFilterWeightList_vtableRead()
{
    Instance_80149018_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804A9220;
    object.__vtable = igZFilterWeightList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igZFilterWeightList)

void igZFilterWeightList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igZFilterWeightList_meta, igObjectList_register,
                       fn_80024180, igZFilterWeightList_getMetaCall,
                       igZFilterWeightList_className, 0x18,
                       igZFilterWeightList_vtableRead, igZFilterWeightList_fieldInit, 0, igZFilterWeightList_dependencies);
}

META_GET_META_CALL(igZFilterWeightList)

void igZFilterWeightList_fieldInit()
{
    Meta::igMetaObject *meta = igZFilterWeightList_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igZFilterWeightList_fieldTypes, 1);
    meta_setupFields(meta, igZFilterWeightList_fieldNames, igZFilterWeightList_fieldStorage, igZFilterWeightList_fieldOffsets, base);
}

}
#pragma pop
