// beMatCtrlSearch: Alchemy class registration (0x802D0A04..0x802D0CC0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beMatCtrlSearch)
META_DECLARE(beMatCtrlSearchList)
META_DECLARE(igObject)

extern "C" {
extern char beMatCtrlSearch_dependencies[8];
extern char beMatCtrlSearch_fieldNames[];
extern char beMatCtrlSearch_fieldOffsets[];
extern char beMatCtrlSearch_fieldStorage[];
extern char beMatCtrlSearch_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

struct beMatCtrlSearchInstance : igObjectInstance {
    char unknown04[20];
    igObjectRefMember _memberList;
    char unknown1C[4];
    inline ~beMatCtrlSearchInstance() { __vtable = beMatCtrlSearch_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beMatCtrlSearch)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beMatCtrlSearch)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beMatCtrlSearch_vtableRead()
{
    beMatCtrlSearchInstance object;
    object.__vtable = beMatCtrlSearch_vtable;
    object._memberList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beMatCtrlSearch)

void beMatCtrlSearch_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMatCtrlSearch_meta, igObject_register,
                       fn_800237D0, beMatCtrlSearch_getMetaCall,
                       beMatCtrlSearch_className, 0x1C,
                       beMatCtrlSearch_vtableRead, beMatCtrlSearch_fieldInit, 0, beMatCtrlSearch_dependencies);
}

META_GET_META_CALL(beMatCtrlSearch)

void beMatCtrlSearch_fieldInit()
{
    Meta::igMetaObject *meta = beMatCtrlSearch_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beMatCtrlSearch_fieldTypes, 5);
    Meta::igObjectRefMetaField *parentField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    parentField->_metaObject = beMatCtrlSearch_metaObject();
    parentField->_refCounted = false;
    parentField->_persistent = false;
    Meta::igObjectRefMetaField *memberListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    memberListField->_metaObject = beMatCtrlSearchList_metaObject();
    memberListField->_construct = true;
    meta_setupFields(meta, beMatCtrlSearch_fieldNames, beMatCtrlSearch_fieldStorage, beMatCtrlSearch_fieldOffsets, base);
}

}
#pragma pop
