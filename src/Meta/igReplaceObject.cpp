// igReplaceObject: Alchemy class registration (0x80134714..0x8013496C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igReplaceObject)
META_DECLARE(igItemBase)

extern "C" {
void fn_8012FC48();
void *fn_8013496C();
extern char igReplaceObject_dependencies[12];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct igReplaceObjectInstance : igObjectInstance {
    char unknown04[28];
    igStringMember _traversalName;
    igObjectRefMember _oldObject;
    igObjectRefMember _newObject;
    igObjectRefMember _returned;
    char unknown30[8];
    inline ~igReplaceObjectInstance() { __vtable = igReplaceObject_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igReplaceObject)

void *igReplaceObject_vtableRead()
{
    igReplaceObjectInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = igReplaceObject_vtable;
    object._traversalName._value = 0;
    object._oldObject._value = 0;
    object._newObject._value = 0;
    object._returned._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igReplaceObject)

void igReplaceObject_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igReplaceObject_meta, igItemBase_register,
                       fn_8013496C, igReplaceObject_getMetaCall,
                       igReplaceObject_className, 0x30,
                       igReplaceObject_vtableRead, igReplaceObject_fieldInit, 0, igReplaceObject_dependencies);
}

META_GET_META_CALL(igReplaceObject)

}
#pragma pop
