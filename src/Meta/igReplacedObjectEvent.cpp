// igReplacedObjectEvent: Alchemy class registration (0x80134454..0x8013467C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igReplacedObjectEvent)
META_DECLARE(igHierarchyChangedEvent)
META_DECLARE(igMessageBase)

extern "C" {
void fn_8012FC48();
void *fn_8013467C();
extern char igReplacedObjectEvent_dependencies[8];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct igReplacedObjectEventInstance : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _oldObject;
    igObjectRefMember _newObject;
    char unknown28[8];
    inline ~igReplacedObjectEventInstance() { __vtable = igReplacedObjectEvent_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igReplacedObjectEvent)

META_GET_META(igReplacedObjectEvent)

void *igReplacedObjectEvent_vtableRead()
{
    igReplacedObjectEventInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = igMessageBase_vtable;
    object.__vtable = igHierarchyChangedEvent_vtable;
    object.__vtable = igReplacedObjectEvent_vtable;
    object._oldObject._value = 0;
    object._newObject._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igReplacedObjectEvent)

void igReplacedObjectEvent_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igReplacedObjectEvent_meta, igHierarchyChangedEvent_register,
                       fn_8013467C, igReplacedObjectEvent_getMetaCall,
                       igReplacedObjectEvent_className, 0x28,
                       igReplacedObjectEvent_vtableRead, igReplacedObjectEvent_fieldInit, 0, igReplacedObjectEvent_dependencies);
}

META_GET_META_CALL(igReplacedObjectEvent)

}
#pragma pop
