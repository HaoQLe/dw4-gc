// igRebindActors: Alchemy class registration (0x80136E90..0x801370DC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igRebindActors)
META_DECLARE(igOptBase)

extern "C" {
void fn_8012FC48();
void *fn_801308D0();
extern char igRebindActors_fieldNames[4];
extern char igRebindActors_fieldOffsets[4];
extern char igRebindActors_fieldStorage[4];
extern char igRebindActors_fieldTypes[4];
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

struct igRebindActorsInstance : Instance_804A4A04 {
    char unknown28[8];
    inline ~igRebindActorsInstance() { __vtable = igRebindActors_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRebindActors)

void *igRebindActors_vtableRead()
{
    igRebindActorsInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = igRebindActors_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRebindActors)

void igRebindActors_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igRebindActors_meta, igOptBase_register,
                       fn_801308D0, igRebindActors_getMetaCall,
                       igRebindActors_className, 0x2C,
                       igRebindActors_vtableRead, igRebindActors_fieldInit, 0, 0);
}

META_GET_META_CALL(igRebindActors)

void igRebindActors_fieldInit()
{
    Meta::igMetaObject *meta = igRebindActors_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRebindActors_fieldTypes, 1);
    meta_setupFields(meta, igRebindActors_fieldNames, igRebindActors_fieldStorage, igRebindActors_fieldOffsets, base);
}

}
#pragma pop
