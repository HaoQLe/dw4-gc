// beBkColorInfo: Alchemy class registration (0x802E295C..0x802E2C34). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beBkColorInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beBkColorInfo_fieldNames[];
extern char beBkColorInfo_fieldOffsets[];
extern char beBkColorInfo_fieldStorage[];
extern char beBkColorInfo_fieldTypes[];
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_804DCD14[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct Instance_804DCD14 : igInfoInstance {
    char unknown0C[8];
    igObjectRefMember _dataList;
    igObjectRefMember _ramList;
    inline ~Instance_804DCD14() { __vtable = lbl_804DCD14; }
};

struct beBkColorInfoInstance : Instance_804DCD14 {
    char unknown1C[28];
    inline ~beBkColorInfoInstance() { __vtable = beBkColorInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beBkColorInfo)
#pragma pop

#pragma push
#pragma optimize_for_size off
void *beBkColorInfo_vtableRead()
{
    beBkColorInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beBkColorInfo_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beBkColorInfo)

void beBkColorInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beBkColorInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beBkColorInfo_getMetaCall,
                       beBkColorInfo_className, 0x2C,
                       beBkColorInfo_vtableRead, beBkColorInfo_fieldInit, 0, 0);
}

META_GET_META_CALL(beBkColorInfo)

void beBkColorInfo_fieldInit()
{
    Meta::igMetaObject *meta = beBkColorInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beBkColorInfo_fieldTypes, 0x1);
    meta_setupFields(meta, beBkColorInfo_fieldNames, beBkColorInfo_fieldStorage, beBkColorInfo_fieldOffsets, base);
}

}
#pragma pop
