// igMergeIGB: Alchemy class registration (0x80141CFC..0x80141F88). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMergeIGB)
META_DECLARE(igOptBase)

extern "C" {
void fn_8012FC48();
void *fn_801308D0();
extern char igMergeIGB_fieldNames[4];
extern char igMergeIGB_fieldOffsets[4];
extern char igMergeIGB_fieldStorage[4];
extern char igMergeIGB_fieldTypes[4];
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

struct igMergeIGBInstance : Instance_804A4A04 {
    igStringMember _igbName;
    char unknown2C[12];
    inline ~igMergeIGBInstance() { __vtable = igMergeIGB_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMergeIGB)

void *igMergeIGB_vtableRead()
{
    igMergeIGBInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = igMergeIGB_vtable;
    object._igbName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMergeIGB)

void igMergeIGB_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igMergeIGB_meta, igOptBase_register,
                       fn_801308D0, igMergeIGB_getMetaCall,
                       igMergeIGB_className, 0x2C,
                       igMergeIGB_vtableRead, igMergeIGB_fieldInit, 0, 0);
}

META_GET_META_CALL(igMergeIGB)

void igMergeIGB_fieldInit()
{
    Meta::igMetaObject *meta = igMergeIGB_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igMergeIGB_fieldTypes, 1);
    meta_setupFields(meta, igMergeIGB_fieldNames, igMergeIGB_fieldStorage, igMergeIGB_fieldOffsets, base);
}

}
#pragma pop
