// beWeaponAttachData: Alchemy class registration (0x802B3ADC..0x802B3DC4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beWeaponAttachData)
META_DECLARE(igAppearanceListList)
META_DECLARE(igModelViewMatrixBoneSelectList_80534578)
META_DECLARE(igObject)

extern "C" {
extern char beWeaponAttachData_dependencies[12];
extern char beWeaponAttachData_fieldNames[];
extern char beWeaponAttachData_fieldOffsets[];
extern char beWeaponAttachData_fieldStorage[];
extern char beWeaponAttachData_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

struct beWeaponAttachDataInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _boneSelectList;
    igObjectRefMember _appearanceListList;
    inline ~beWeaponAttachDataInstance() { __vtable = beWeaponAttachData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beWeaponAttachData)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beWeaponAttachData)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beWeaponAttachData_vtableRead()
{
    beWeaponAttachDataInstance object;
    object.__vtable = beWeaponAttachData_vtable;
    object._boneSelectList._value = 0;
    object._appearanceListList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beWeaponAttachData)

void beWeaponAttachData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beWeaponAttachData_meta, igObject_register,
                       fn_800237D0, beWeaponAttachData_getMetaCall,
                       beWeaponAttachData_className, 0x10,
                       beWeaponAttachData_vtableRead, beWeaponAttachData_fieldInit, 0, beWeaponAttachData_dependencies);
}

META_GET_META_CALL(beWeaponAttachData)

void beWeaponAttachData_fieldInit()
{
    Meta::igMetaObject *meta = beWeaponAttachData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beWeaponAttachData_fieldTypes, 2);
    Meta::igObjectRefMetaField *boneSelectListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    boneSelectListField->_metaObject = igModelViewMatrixBoneSelectList_80534578_metaObject();
    boneSelectListField->_construct = true;
    Meta::igObjectRefMetaField *appearanceListListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    appearanceListListField->_metaObject = igAppearanceListList_metaObject();
    appearanceListListField->_construct = true;
    meta_setupFields(meta, beWeaponAttachData_fieldNames, beWeaponAttachData_fieldStorage, beWeaponAttachData_fieldOffsets, base);
}

}
#pragma pop
