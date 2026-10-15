// beSeInfoData: Alchemy class registration (0x802BAF04..0x802BB1B4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beSeInfoData)
META_DECLARE(beBaseInfoData)
META_DECLARE(beSeDataList)
META_DECLARE(igNamedObject)

extern "C" {
extern char beSeInfoData_dependencies[8];
extern char beSeInfoData_fieldNames[];
extern char beSeInfoData_fieldOffsets[];
extern char beSeInfoData_fieldStorage[];
extern char beSeInfoData_fieldTypes[];
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

struct beSeInfoDataInstance : Instance_804DBC50 {
    char unknown0C[4];
    igObjectRefMember _actionList;
    char unknown14[12];
    inline ~beSeInfoDataInstance() { __vtable = beSeInfoData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beSeInfoData)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beSeInfoData_vtableRead()
{
    beSeInfoDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beSeInfoData_vtable;
    object._actionList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSeInfoData)

void beSeInfoData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSeInfoData_meta, beBaseInfoData_register,
                       fn_802B8770, beSeInfoData_getMetaCall,
                       beSeInfoData_className, 0x14,
                       beSeInfoData_vtableRead, beSeInfoData_fieldInit, 0, beSeInfoData_dependencies);
}

META_GET_META_CALL(beSeInfoData)

void beSeInfoData_fieldInit()
{
    Meta::igMetaObject *meta = beSeInfoData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSeInfoData_fieldTypes, 1);
    Meta::igObjectRefMetaField *actionListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    actionListField->_metaObject = beSeDataList_metaObject();
    meta_setupFields(meta, beSeInfoData_fieldNames, beSeInfoData_fieldStorage, beSeInfoData_fieldOffsets, base);
}

}
#pragma pop
