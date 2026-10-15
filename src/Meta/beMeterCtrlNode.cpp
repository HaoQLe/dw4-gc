// beMeterCtrlNode: Alchemy class registration (0x802CCF98..0x802CD360). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beMeterCtrlNode)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
extern char beMeterCtrlNode_dependencies[8];
extern char beMeterCtrlNode_fieldNames[];
extern char beMeterCtrlNode_fieldOffsets[];
extern char beMeterCtrlNode_fieldStorage[];
extern char beMeterCtrlNode_fieldTypes[];
void *fn_80035F2C();
void *fn_8011148C();
void fn_802B1AC8();
void fn_802CD360();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igNodeInstance : igNamedObjectInstance {
    igObjectRefMember _bound;
    igObjectRefMember _parentList;
    inline ~igNodeInstance() { __vtable = igNode_vtable; }
};

struct igGroupInstance : igNodeInstance {
    char unknown14[8];
    igObjectRefMember _childList;
    inline ~igGroupInstance() { __vtable = igGroup_vtable; }
};

struct beMeterCtrlNodeInstance : igGroupInstance {
    char unknown20[4];
    igObjectRefMember _timeList;
    char unknown28[24];
    inline ~beMeterCtrlNodeInstance() { __vtable = beMeterCtrlNode_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beMeterCtrlNode)

META_GET_META(beMeterCtrlNode)

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beMeterCtrlNode_vtableRead()
{
    beMeterCtrlNodeInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igNode_vtable;
    object._bound._value = 0;
    object._parentList._value = 0;
    object.__vtable = igGroup_vtable;
    object._childList._value = 0;
    object.__vtable = beMeterCtrlNode_vtable;
    object._timeList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beMeterCtrlNode)

void beMeterCtrlNode_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMeterCtrlNode_meta, igGroup_register,
                       fn_8011148C, beMeterCtrlNode_getMetaCall,
                       beMeterCtrlNode_className, 0x34,
                       beMeterCtrlNode_vtableRead, beMeterCtrlNode_fieldInit, fn_802CD360, beMeterCtrlNode_dependencies);
}

META_GET_META_CALL(beMeterCtrlNode)

void beMeterCtrlNode_fieldInit()
{
    Meta::igMetaObject *meta = beMeterCtrlNode_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beMeterCtrlNode_fieldTypes, 3);
    Meta::igObjectRefMetaField *timeListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value3 = fn_80035F2C();
    timeListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    timeListField->_construct = true;
    meta_setupFields(meta, beMeterCtrlNode_fieldNames, beMeterCtrlNode_fieldStorage, beMeterCtrlNode_fieldOffsets, base);
}

}
#pragma pop
