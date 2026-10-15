// beCameraCtrlInfo: Alchemy class registration (0x802E17F4..0x802E1B38). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beCameraCtrlInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)
META_DECLARE(igObject)

extern "C" {
extern char beCameraCtrlInfo_dependencies[8];
extern char beCameraCtrlInfo_fieldNames[];
extern char beCameraCtrlInfo_fieldOffsets[];
extern char beCameraCtrlInfo_fieldStorage[];
extern char beCameraCtrlInfo_fieldTypes[];
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

struct beCameraCtrlInfoInstance : Instance_804DCD14 {
    igObjectRefMember _data;
    char unknown20[8];
    inline ~beCameraCtrlInfoInstance() { __vtable = beCameraCtrlInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beCameraCtrlInfo)
#pragma pop

#pragma push
#pragma optimize_for_size off
void *beCameraCtrlInfo_vtableRead()
{
    beCameraCtrlInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beCameraCtrlInfo_vtable;
    object._data._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beCameraCtrlInfo)

void beCameraCtrlInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCameraCtrlInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beCameraCtrlInfo_getMetaCall,
                       beCameraCtrlInfo_className, 0x20,
                       beCameraCtrlInfo_vtableRead, beCameraCtrlInfo_fieldInit, 0, beCameraCtrlInfo_dependencies);
}

META_GET_META_CALL(beCameraCtrlInfo)

void beCameraCtrlInfo_fieldInit()
{
    Meta::igMetaObject *meta = beCameraCtrlInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beCameraCtrlInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *dataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    dataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igObject_meta);
    meta_setupFields(meta, beCameraCtrlInfo_fieldNames, beCameraCtrlInfo_fieldStorage, beCameraCtrlInfo_fieldOffsets, base);
}

}
#pragma pop
