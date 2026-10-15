// igCollapseAllHierarchies: Alchemy class registration (0x80151860..0x80151B50). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igStringMetaField.h>

META_DECLARE(igCollapseAllHierarchies)
META_DECLARE(igOptVisitObject)

extern "C" {
void *fn_80071694(void *,void *);
void fn_8012FC48();
void *fn_8012FEB0();
extern char igCollapseAllHierarchies_fieldNames[4];
extern char igCollapseAllHierarchies_fieldOffsets[4];
extern char igCollapseAllHierarchies_fieldStorage[4];
extern char igCollapseAllHierarchies_fieldTypes[4];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F71C[4];
}

struct Instance_804A4A04 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _registry;
    igObjectRefMember _configuration;
    inline ~Instance_804A4A04() { __vtable = lbl_804A4A04; }
};

struct Instance_804A46AC : Instance_804A4A04 {
    igObjectRefMember _visitedMetaObject;
    inline ~Instance_804A46AC() { __vtable = lbl_804A46AC; }
};

struct igCollapseAllHierarchiesInstance : Instance_804A46AC {
    igStringMember _nodesToIgnore;
    char unknown30[8];
    inline ~igCollapseAllHierarchiesInstance() { __vtable = igCollapseAllHierarchies_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCollapseAllHierarchies)

void *igCollapseAllHierarchies_vtableRead()
{
    igCollapseAllHierarchiesInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = lbl_804A46AC;
    object._visitedMetaObject._value = 0;
    object.__vtable = igCollapseAllHierarchies_vtable;
    object._nodesToIgnore._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCollapseAllHierarchies)

void igCollapseAllHierarchies_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igCollapseAllHierarchies_meta, igOptVisitObject_register,
                       fn_8012FEB0, igCollapseAllHierarchies_getMetaCall,
                       igCollapseAllHierarchies_className, 0x30,
                       igCollapseAllHierarchies_vtableRead, igCollapseAllHierarchies_fieldInit, 0, 0);
}

META_GET_META_CALL(igCollapseAllHierarchies)

void igCollapseAllHierarchies_fieldInit()
{
    Meta::igMetaObject *meta = igCollapseAllHierarchies_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCollapseAllHierarchies_fieldTypes, 1);
    Meta::igStringMetaField *nodesToIgnoreField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base));
    fn_80071694(nodesToIgnoreField, lbl_8055F71C);
    meta_setupFields(meta, igCollapseAllHierarchies_fieldNames, igCollapseAllHierarchies_fieldStorage, igCollapseAllHierarchies_fieldOffsets, base);
}

}
#pragma pop
