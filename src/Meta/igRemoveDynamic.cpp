// igRemoveDynamic: Alchemy class registration (0x80135EF8..0x801361D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igRemoveDynamic)
META_DECLARE(igOptVisitObject)

extern "C" {
void fn_8012FC48();
void *fn_8012FEB0();
extern char igRemoveDynamic_fieldNames[8];
extern char igRemoveDynamic_fieldOffsets[8];
extern char igRemoveDynamic_fieldStorage[8];
extern char igRemoveDynamic_fieldTypes[8];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
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

struct igRemoveDynamicInstance : Instance_804A46AC {
    igStringMember _nodeString;
    char unknown30[8];
    inline ~igRemoveDynamicInstance() { __vtable = igRemoveDynamic_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRemoveDynamic)

void *igRemoveDynamic_vtableRead()
{
    igRemoveDynamicInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = lbl_804A46AC;
    object._visitedMetaObject._value = 0;
    object.__vtable = igRemoveDynamic_vtable;
    object._nodeString._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRemoveDynamic)

void igRemoveDynamic_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igRemoveDynamic_meta, igOptVisitObject_register,
                       fn_8012FEB0, igRemoveDynamic_getMetaCall,
                       igRemoveDynamic_className, 0x34,
                       igRemoveDynamic_vtableRead, igRemoveDynamic_fieldInit, 0, 0);
}

META_GET_META_CALL(igRemoveDynamic)

void igRemoveDynamic_fieldInit()
{
    Meta::igMetaObject *meta = igRemoveDynamic_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRemoveDynamic_fieldTypes, 2);
    meta_setupFields(meta, igRemoveDynamic_fieldNames, igRemoveDynamic_fieldStorage, igRemoveDynamic_fieldOffsets, base);
}

}
#pragma pop
