// igUpdatedFieldEvent: Alchemy class registration (0x8014AEA4..0x8014B0D8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUpdatedFieldEvent)
META_DECLARE(igMessageBase)
META_DECLARE(igObjectChangedEvent)

extern "C" {
void fn_8012FC48();
extern char igUpdatedFieldEvent_dependencies[8];
void *igUpdatedFieldEvent_parentMeta();
extern char lbl_804A6460[];
extern char lbl_804A8AD0[];
extern char lbl_804AAF48[];
}

struct Instance_804A8AD0 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _object;
    inline ~Instance_804A8AD0() { __vtable = lbl_804A8AD0; }
};

struct igUpdatedFieldEventInstance : Instance_804A8AD0 {
    igObjectRefMember _field;
    char unknown28[8];
    inline ~igUpdatedFieldEventInstance() { __vtable = igUpdatedFieldEvent_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igUpdatedFieldEvent)

META_GET_META(igUpdatedFieldEvent)

void *igUpdatedFieldEvent_vtableRead()
{
    igUpdatedFieldEventInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = igMessageBase_vtable;
    object.__vtable = lbl_804A8AD0;
    object._object._value = 0;
    object.__vtable = igUpdatedFieldEvent_vtable;
    object._field._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igUpdatedFieldEvent)

void igUpdatedFieldEvent_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igUpdatedFieldEvent_meta, igObjectChangedEvent_register,
                       igUpdatedFieldEvent_parentMeta, igUpdatedFieldEvent_getMetaCall,
                       igUpdatedFieldEvent_className, 0x28,
                       igUpdatedFieldEvent_vtableRead, igUpdatedFieldEvent_fieldInit, 0, igUpdatedFieldEvent_dependencies);
}

META_GET_META_CALL(igUpdatedFieldEvent)

}
#pragma pop
