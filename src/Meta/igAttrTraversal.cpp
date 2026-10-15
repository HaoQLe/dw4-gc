// igAttrTraversal: Alchemy class registration (0x80152830..0x80152AC8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igAttrTraversal)
META_DECLARE(igAttrContainer)
META_DECLARE(igObject)

extern "C" {
void *fn_800BB61C();
void fn_8012FC48();
void *fn_80135970();
extern char igAttrTraversal_dependencies[12];
extern char igAttrTraversal_fieldNames[8];
extern char igAttrTraversal_fieldOffsets[8];
extern char igAttrTraversal_fieldStorage[8];
extern char igAttrTraversal_fieldTypes[8];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AA614[];
extern char lbl_804AAF48[];
}

struct igAttrTraversalInstance : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _container;
    igObjectRefMember _childList;
    char unknown28[8];
    inline ~igAttrTraversalInstance() { __vtable = igAttrTraversal_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttrTraversal)

void *igAttrTraversal_vtableRead()
{
    igAttrTraversalInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804AA614;
    object.__vtable = igAttrTraversal_vtable;
    object._container._value = 0;
    object._childList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAttrTraversal)

void igAttrTraversal_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igAttrTraversal_meta, igAttrContainer_register,
                       fn_80135970, igAttrTraversal_getMetaCall,
                       igAttrTraversal_className, 0x28,
                       igAttrTraversal_vtableRead, igAttrTraversal_fieldInit, 0, igAttrTraversal_dependencies);
}

META_GET_META_CALL(igAttrTraversal)

void igAttrTraversal_fieldInit()
{
    Meta::igMetaObject *meta = igAttrTraversal_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAttrTraversal_fieldTypes, 2);
    Meta::igObjectRefMetaField *containerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    containerField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igObject_meta);
    Meta::igObjectRefMetaField *childListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value4 = fn_800BB61C();
    childListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value4);
    childListField->_construct = true;
    childListField->_persistent = false;
    meta_setupFields(meta, igAttrTraversal_fieldNames, igAttrTraversal_fieldStorage, igAttrTraversal_fieldOffsets, base);
}

}
#pragma pop
