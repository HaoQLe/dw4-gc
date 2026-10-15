// igChangePlayMode: Alchemy class registration (0x80152100..0x801523C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igEnumMetaField.h>

META_DECLARE(igChangePlayMode)
META_DECLARE(igOptVisitObject)

extern "C" {
void fn_80046E58(void *,void *);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_801AB9F0();
extern char igChangePlayMode_fieldNames[4];
extern char igChangePlayMode_fieldOffsets[4];
extern char igChangePlayMode_fieldStorage[4];
extern char igChangePlayMode_fieldTypes[4];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055FD44[4];
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

struct igChangePlayModeInstance : Instance_804A46AC {
    char unknown2C[12];
    inline ~igChangePlayModeInstance() { __vtable = igChangePlayMode_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igChangePlayMode)

void *igChangePlayMode_vtableRead()
{
    igChangePlayModeInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = lbl_804A46AC;
    object._visitedMetaObject._value = 0;
    object.__vtable = igChangePlayMode_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igChangePlayMode)

void igChangePlayMode_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igChangePlayMode_meta, igOptVisitObject_register,
                       fn_8012FEB0, igChangePlayMode_getMetaCall,
                       igChangePlayMode_className, 0x30,
                       igChangePlayMode_vtableRead, igChangePlayMode_fieldInit, 0, 0);
}

META_GET_META_CALL(igChangePlayMode)

void igChangePlayMode_fieldInit()
{
    Meta::igMetaObject *meta = igChangePlayMode_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igChangePlayMode_fieldTypes, 1);
    Meta::igEnumMetaField *playModeField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(playModeField, lbl_8055FD44);
    playModeField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_801AB9F0);
    meta_setupFields(meta, igChangePlayMode_fieldNames, igChangePlayMode_fieldStorage, igChangePlayMode_fieldOffsets, base);
}

}
#pragma pop
