// beBaseInfoRamTimer: Alchemy class registration (0x802E341C..0x802E36C4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igFloatMetaField.h>

META_DECLARE(beBaseInfoRamTimer)
META_DECLARE(beBaseInfoData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beBaseInfoRamTimer_fieldNames[];
extern char beBaseInfoRamTimer_fieldOffsets[];
extern char beBaseInfoRamTimer_fieldStorage[];
extern char beBaseInfoRamTimer_fieldTypes[];
void fn_8004D4BC(void *,float);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041D5B0[];
extern char lbl_8041E6AC[];
extern char lbl_804DBC50[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beBaseInfoRamTimerInstance : Instance_804DBC50 {
    char unknown0C[52];
    inline ~beBaseInfoRamTimerInstance() { __vtable = beBaseInfoRamTimer_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beBaseInfoRamTimer)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beBaseInfoRamTimer)
#pragma pop

void *beBaseInfoRamTimer_vtableRead()
{
    beBaseInfoRamTimerInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beBaseInfoRamTimer_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beBaseInfoRamTimer)

void beBaseInfoRamTimer_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beBaseInfoRamTimer_meta, beBaseInfoData_register,
                       fn_802B8770, beBaseInfoRamTimer_getMetaCall,
                       beBaseInfoRamTimer_className, 0x40,
                       beBaseInfoRamTimer_vtableRead, beBaseInfoRamTimer_fieldInit, 0, 0);
}

META_GET_META_CALL(beBaseInfoRamTimer)

void beBaseInfoRamTimer_fieldInit()
{
    Meta::igMetaObject *meta = beBaseInfoRamTimer_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beBaseInfoRamTimer_fieldTypes, 6);
    Meta::igFloatMetaField *timeScaleField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base));
    fn_8004D4BC(timeScaleField, *reinterpret_cast<float *>(lbl_8041D5B0 + 0));
    Meta::igFloatMetaField *keikaFrameField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 5));
    fn_8004D4BC(keikaFrameField, *reinterpret_cast<float *>(lbl_8041E6AC + 0));
    meta_setupFields(meta, beBaseInfoRamTimer_fieldNames, beBaseInfoRamTimer_fieldStorage, beBaseInfoRamTimer_fieldOffsets, base);
}

}
#pragma pop
