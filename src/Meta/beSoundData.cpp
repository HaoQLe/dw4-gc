// beSoundData: Alchemy class registration (0x802B8B88..0x802B8E10). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igShortMetaField.h>

META_DECLARE(beSoundData)
META_DECLARE(beBaseInfoData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beSoundData_fieldNames[];
extern char beSoundData_fieldOffsets[];
extern char beSoundData_fieldStorage[];
extern char beSoundData_fieldTypes[];
void fn_80053650(void *,int);
void fn_800711A8(void *,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_804DBC50[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beSoundDataInstance : Instance_804DBC50 {
    char unknown0C[20];
    inline ~beSoundDataInstance() { __vtable = beSoundData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beSoundData)
#pragma pop

void *beSoundData_vtableRead()
{
    beSoundDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beSoundData_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beSoundData)

void beSoundData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSoundData_meta, beBaseInfoData_register,
                       fn_802B8770, beSoundData_getMetaCall,
                       beSoundData_className, 0x20,
                       beSoundData_vtableRead, beSoundData_fieldInit, 0, 0);
}

META_GET_META_CALL(beSoundData)

void beSoundData_fieldInit()
{
    Meta::igMetaObject *meta = beSoundData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSoundData_fieldTypes, 6);
    Meta::igShortMetaField *typeField = static_cast<Meta::igShortMetaField *>(meta_field(meta, base));
    fn_800711A8(typeField, -1);
    Meta::igShortMetaField *fnameIdxField = static_cast<Meta::igShortMetaField *>(meta_field(meta, base + 1));
    fn_800711A8(fnameIdxField, -1);
    Meta::igIntMetaField *memoryIdxField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 2));
    fn_80053650(memoryIdxField, -1);
    Meta::igShortMetaField *channelField = static_cast<Meta::igShortMetaField *>(meta_field(meta, base + 3));
    fn_800711A8(channelField, 1);
    meta_setupFields(meta, beSoundData_fieldNames, beSoundData_fieldStorage, beSoundData_fieldOffsets, base);
}

}
#pragma pop
