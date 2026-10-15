// igCustomStateCollection: Alchemy class registration (0x800D3508..0x800D376C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igStringMetaField.h>

META_DECLARE(igCustomStateCollection)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void *fn_80071694(void *,void *);
void fn_800CE2F8();
extern char igCustomStateCollection_dependencies[8];
extern char igCustomStateCollection_fieldNames[8];
extern char igCustomStateCollection_fieldOffsets[8];
extern char igCustomStateCollection_fieldStorage[8];
extern char igCustomStateCollection_fieldTypes[8];
extern char lbl_80476E0C[];
extern char lbl_804938A4[];
extern char lbl_8055EB78[4];
}

struct igCustomStateCollectionInstance : igObjectInstance {
    char unknown04[16];
    igStringMember _name;
    char unknown18[8];
    inline ~igCustomStateCollectionInstance() { __vtable = igCustomStateCollection_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igCustomStateCollection)

META_GET_META(igCustomStateCollection)

void *igCustomStateCollection_vtableRead()
{
    igCustomStateCollectionInstance object;
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804938A4;
    object.__vtable = igCustomStateCollection_vtable;
    object._name._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCustomStateCollection)

void igCustomStateCollection_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igCustomStateCollection_meta, igObjectList_register,
                       fn_80024180, igCustomStateCollection_getMetaCall,
                       igCustomStateCollection_className, 0x1C,
                       igCustomStateCollection_vtableRead, igCustomStateCollection_fieldInit, 0, igCustomStateCollection_dependencies);
}

META_GET_META_CALL(igCustomStateCollection)

void igCustomStateCollection_fieldInit()
{
    Meta::igMetaObject *meta = igCustomStateCollection_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCustomStateCollection_fieldTypes, 2);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base));
    fn_80071694(nameField, lbl_8055EB78);
    meta_setupFields(meta, igCustomStateCollection_fieldNames, igCustomStateCollection_fieldStorage, igCustomStateCollection_fieldOffsets, base);
}

}
#pragma pop
